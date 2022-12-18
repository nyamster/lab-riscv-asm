#include <stdio.h>
#include <limits.h>

#define N 5
#define M 3

int process(int n, int m, int matrix [M][N])
{
    int min = INT_MAX, sum = 0, res;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            sum += matrix[i][j];
        }
        if (sum < min)
        {
            min = sum;
            res = i;
        }
    }
    return res;
}

int main(int argc, char** argv)
{
    int matrix[M][N];
    
    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N; ++j) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int result = process(N, M, matrix);

    printf("%d\n", result);

    return 0;
}
