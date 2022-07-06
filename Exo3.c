#include<stdio.h>
int main ()
{
    int n,i,j;
    printf("Enter the size of your matrices:  ");
    scanf("%d",&n);
    int a[n][n],b[n][n];
    printf("\n");
    printf("Enter the first matrix a\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("a[%d][%d]: ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n");
    printf("Enter the second matrix a\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("b[%d][%d]: ",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    printf("\n");
    printf("The first matrix a is \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("a[%d][%d] = %d ",i,j,a[i][j]);
            printf("\n");
        }
    }
    printf("\n");
    printf("The second matrix b is \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("a[%d][%d] = %d ",i,j,b[i][j]);
            printf("\n");
        }
    }

    int c[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("\n");
    printf("The sum of two matrix is \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("c[%d][%d] = %d ",i,j,c[i][j]);
            printf("\n");
        }
    }

return 0;
}
