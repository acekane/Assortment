#include <stdio.h>
#include<conio.h>
void main() {
    int rows, cols, i, j, row_num, col_num, sum;
    printf("Enter the array's row size: ");
    scanf("%d", &rows);
    printf("Enter the array's column size: ");
    scanf("%d", &cols);
    int arr[rows][cols];

    printf("Enter array's elements:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Enter row number: ");
    scanf("%d", &row_num);
    printf("Elements of row %d: ", row_num);
    sum = 0;
    for (j = 0; j < cols; j++) {
        printf("%d, ", arr[row_num][j]);
        sum += arr[row_num][j];
    }
    printf("\nThe sum of row %d: %d\n", row_num, sum);
    printf("Enter column number: ");
    scanf("%d", &col_num);
    printf("Elements of column %d: ", col_num);
    sum = 0;
    for (i = 0; i < rows; i++) {
        printf("%d, ", arr[i][col_num]);
        sum += arr[i][col_num];
    }
    printf("\nThe sum of column %d: %d\n", col_num, sum);

    getch();
}


