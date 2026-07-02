/* Transpose of a Matrix */
#include<stdio.h>
#include<conio.h>

int main()
{
    int a[9][9], i, j, m, n;

    //clrscr();

    printf("Enter order of matrix: ");
    scanf("%d%d", &m, &n);

    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("Enter a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nOriginal Matrix:\n");

    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("\t%d", a[i][j]);
        }
        printf("\n");
    }

    printf("\nTranspose Matrix:\n");

    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            printf("\t%d", a[j][i]);
        }
        printf("\n");
    }

    getch();
    return 0;
}
