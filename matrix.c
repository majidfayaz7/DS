#include <stdio.h>
int main()
{
    int choice;
    do
    {
        printf("what operation do you want to perform ?\n 1)matrix addition\n 2)matrix multiplication\n 3)transpose\n 4)quit\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1: // addition
        {
            int row, col;
            printf("enter the rows and columns\n");
            scanf("%d %d", &row, &col);
            int a[row][col], b[row][col], sum[row][col];
            printf("enter the elements of first matrix\n");
            for (int i = 0; i < row; i++)
            {
                for (int j = 0; j < col; j++)
                {
                    scanf("%d", &a[i][j]);
                }
            }
            printf("enter the elements of second matrix\n");
            for (int i = 0; i < row; i++)
            {
                for (int j = 0; j < col; j++)
                {
                    scanf("%d", &b[i][j]);
                }
            }
            for (int i = 0; i < row; i++)
            {
                for (int j = 0; j < col; j++)
                {
                    sum[i][j] = a[i][j] + b[i][j];
                }
            }
            printf("Sum of matrices:\n");

            for (int i = 0; i < row; i++)
            {
                for (int j = 0; j < col; j++)
                {
                    printf("%d ", sum[i][j]);
                }

                printf("\n");
            }
            break;
        }
        case 2:
        {
            int r1, c1, r2, c2;
            printf("enter the rows and column of first matrix\n");
            scanf("%d %d", &r1, &c1);
            printf("enter the rows and column of second matrix\n");
            scanf("%d %d", &r2, &c2);
            if (c1 != r2)
            {
                printf("\n\nmultiplication not possible !!!\n\n");
                break;
            }
            int a[r1][c1], b[r2][c2], result[r1][c2];
            printf("enter the elements of the first array\n");
            for (int i = 0; i < r1; i++)
            {
                for (int j = 0; j < c1; j++)
                {
                    scanf("%d", &a[i][j]);
                }
            }

            printf("enter the elements of the second array\n");
            for (int i = 0; i < r2; i++)
            {
                for (int j = 0; j < c2; j++)
                {
                    scanf("%d", &b[i][j]);
                }
            }

            for (int i = 0; i < r1; i++)
            {
                for (int j = 0; j < c2; j++)
                {
                    result[i][j] = 0;
                }
            }

            for (int i = 0; i < r1; i++)
            {
                for (int j = 0; j < c2; j++)
                {
                    for (int k = 0; k < c1; k++)
                    {
                        result[i][j] += a[i][k] * b[k][j];
                    }
                }
            }
            printf("Result:\n");

            for (int i = 0; i < r1; i++)
            {
                for (int j = 0; j < c2; j++)
                {
                    printf("%d ", result[i][j]);
                }

                printf("\n");
            }

            break;
        }
        case 3: // transpose
        {
            int row, col;
            printf("enter the number of rows and columns \n");
            scanf("%d %d", &row, &col);
            int a[row][col];
            printf("enter the elements of your matrix\n");
            for (int i = 0; i < row; i++)
            {
                for (int j = 0; j < col; j++)
                {
                    scanf("%d", &a[i][j]);
                }
            }
            printf("your array is:\n");
            for (int i = 0; i < row; i++)
            {
                for (int j = 0; j < col; j++)
                {
                    printf(" %d ", a[i][j]);
                }
                printf("\n");
            }
            printf("The transpose of your matrix is:\n");

            for (int i = 0; i < col; i++)
            {
                for (int j = 0; j < row; j++)
                {
                    printf(" %d ", a[j][i]);
                }

                printf("\n");
            }

            break;
        }
        case 4:
            break;
        }
    } while (choice != 4);
}