#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--) {
        vector<vector<char>> matrix(10, vector<char>(10));

        for(int i = 0; i < 10; i++) {
            for(int j = 0; j < 10; j++) {
                cin >> matrix[i][j];
            }
        } 


        int top = 0, left = 0, right = 9, bottom = 9; 
        int cnt = 0, pt_size = 1;
        while(top <= bottom && left <= right) {
            for(int i = left; i <= right; i++) {
                if(matrix[top][i] == 'X') cnt += pt_size;
            }
            top++;

            for(int i = top; i <= bottom; i++) {
                if(matrix[i][right] == 'X') cnt += pt_size;
            }
            right--;

            if(top <= bottom) {
                for(int i = right; i >= left; i--) {
                    if(matrix[bottom][i] == 'X') cnt += pt_size;
                }
                bottom--;
            }

            if(left <= right) {
                for(int i = bottom; i >= top; i--) {
                    if(matrix[i][left] == 'X') cnt += pt_size;
                }
                left++;
            }
            pt_size++;
        }
        cout << cnt << endl;
    }

    return 0;
}