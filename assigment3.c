// #include <stdio.h>

// int sumArray(int arr[], int size) {
//     int sum = 0;
//     for (int i = 0; i < size; i++) {
//         sum += arr[i];
//     }
//     return sum;
// }

// int main() {
//     int arr[] = {1, 2, 3, 4, 5};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     printf("Sum of array elements: %d\n", sumArray(arr, size));
//     return 0;
// }


//Question 2
// #include <stdio.h>

// void transposeMatrix(int rows, int cols, int matrix[rows][cols]) {
//     int transpose[cols][rows];
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < cols; j++) {
//             transpose[j][i] = matrix[i][j];
//         }
//     }
//     printf("Transpose of the matrix:\n");
//     for (int i = 0; i < cols; i++) {
//         for (int j = 0; j < rows; j++) {
//             printf("%d ", transpose[i][j]);
//         }
//         printf("\n");
//     }
// }

// int main() {
//     int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
//     int rows = 3, cols = 3;
//     transposeMatrix(rows, cols, matrix);
//     return 0;
// }

// Question 3

// #include <stdio.h>

// void multiplyMatrices(int r1, int c1, int matrix1[r1][c1],
//                       int r2, int c2, int matrix2[r2][c2]) {
//     if (c1 != r2) {
//         printf("Matrix multiplication not possible.\n");
//         return;
//     }

//     int result[r1][c2];
//     for (int i = 0; i < r1; i++) {
//         for (int j = 0; j < c2; j++) {
//             result[i][j] = 0;
//             for (int k = 0; k < c1; k++) {
//                 result[i][j] += matrix1[i][k] * matrix2[k][j];
//             }
//         }
//     }

//     printf("Product of the matrices:\n");
//     for (int i = 0; i < r1; i++) {
//         for (int j = 0; j < c2; j++) {
//             printf("%d ", result[i][j]);
//         }
//         printf("\n");
//     }
// }

// int main() {
//     int matrix1[2][3] = {{1, 2, 3}, {4, 5, 6}};
//     int matrix2[3][2] = {{7, 8}, {9, 10}, {11, 12}};
//     multiplyMatrices(2, 3, matrix1, 3, 2, matrix2);
//     return 0;
// }




//Question 4

// #include <stdio.h>

// void subtract3DMatrices(int x, int y, int z, int mat1[x][y][z], int mat2[x][y][z]) {
//     int result[x][y][z];
//     for (int i = 0; i < x; i++) {
//         for (int j = 0; j < y; j++) {
//             for (int k = 0; k < z; k++) {
//                 result[i][j][k] = mat1[i][j][k] - mat2[i][j][k];
//             }
//         }
//     }

//     printf("Resultant matrix after subtraction:\n");
//     for (int i = 0; i < x; i++) {
//         for (int j = 0; j < y; j++) {
//             for (int k = 0; k < z; k++) {
//                 printf("%d ", result[i][j][k]);
//             }
//             printf("\n");
//         }
//         printf("\n");
//     }
// }

// int main() {
//     int mat1[2][2][2] = {{{1, 2}, {3, 4}}, {{5, 6}, {7, 8}}};
//     int mat2[2][2][2] = {{{8, 7}, {6, 5}}, {{4, 3}, {2, 1}}};
//     subtract3DMatrices(2, 2, 2, mat1, mat2);
//     return 0;
// }

