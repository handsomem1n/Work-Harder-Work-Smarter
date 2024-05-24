#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n, a, b;
        cin >> n >> a >> b;
        int matrix[n][n];
        int count = 1, cnt = 0;
        int row_start = 0, row_end = n-1, col_start = 0, col_end = n-1;

        // 행렬 값 초기화
        for (int i=0; i<n; i++) {
            for (int j=0; j<n; j++) {
                matrix[i][j] = count;
                count++;
            }
        }

        // 달팽이 모양으로 출력
        while (cnt<= b) {
            // 왼쪽에서 오른쪽으로 이동
            for (int i=col_start; i<=col_end; i++,cnt++) {      
                if (cnt >= a && cnt <= b) {
                        cout << matrix[row_start][i] << " ";
                  
                }
            }
            row_start++;

            // 위에서 아래로 이동
            for (int i=row_start; i<=row_end; i++,cnt++) {
             
                    if (cnt >= a && cnt <= b) {
                        cout << matrix[i][col_end] << " ";
                    }
            }
            col_end--;

            // 오른쪽에서 왼쪽으로 이동
            for (int i=col_end; i>=col_start; i--, cnt++) {
                if (cnt >= a && cnt <= b) {
                        cout << matrix[row_end][i] << " ";
                    }
            }
            row_end--;

            // 아래에서 위로 이동
            for (int i=row_end; i>=row_start; i--, cnt++) {
                if (cnt >= a && cnt <= b) {
                        cout << matrix[i][col_start] << " ";
                    }
                }
            col_start++;
        }
    }
        return 0;
}
