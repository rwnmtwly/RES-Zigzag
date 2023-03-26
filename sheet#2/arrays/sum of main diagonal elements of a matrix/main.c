#include <stdio.h>
#include <stdlib.h>

int main()
{
    int  m , n , a = 0, sum = 0;
    printf("Please, enter the number of rows and columns: ");
    scanf("%d %d",&m,&n);
    int matrix[m][n];
    printf("Please, enter the elements: \n");

    if (m == n) {


        for (int i = 0; i < m; ++i) {

            for (int j = 0; j < n; ++j) {

                scanf("%d", &matrix[i][j]);
            }
        }

        printf("The matrix is \n");


        for (int i = 0; i < m; ++i) {


            for (int j = 0; j < n; ++j) {
                printf(" %d", matrix[i][j]);
            }
            printf("\n");
        }
        for (int i = 0; i < m; ++i) {


            sum = sum + matrix[i][i];


            a = a + matrix[i][m - i - 1];
        }

        printf("\nMain diagonal elements sum is = %d\n",sum);
        printf("Off-diagonal elements sum is = %d\n", a);
    }
    else

        printf("not a square matrix\n");
    return 0;
}
