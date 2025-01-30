#include <stdio.h>
void calculate_and_replace(float matrix_m[][10], int m) {
    float temp_matrix[3][3];
    for (int i = 0; i < m - 2; i++) { 
        for (int j = 0; j < m - 2; j++) { 
            float sum = 0;
            for (int r = i; r < i + 3; r++) {  
                for (int c = j; c < j + 3; c++) {
                    temp_matrix[r - i][c - j] = matrix_m[r][c];
                    sum += matrix_m[r][c];
                }
            }
            float avg = sum / 9.0;  
            matrix_m[i + 1][j + 1] = avg;
        }
    }
}

int main() {
    int m;
    printf("the size of the matrix (m): ");
    scanf("%d", &m);
    if (m < 3) {
        printf("size of marix should be at least 3x3.\n");
        return 0;
    }
    float matrix_m[10][10];
    printf("Enter the elements in matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%f", &matrix_m[i][j]);
        }
    }
    printf("Original Matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            printf("%.1f ", matrix_m[i][j]);
        }
        printf("\n");
    }
    calculate_and_replace(matrix_m, m);
    printf("Modified Matrix with averages \n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            printf("%.1f ", matrix_m[i][j]);
        }
        printf("\n");
    }

    return 0;
}