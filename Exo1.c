#include<stdio.h>
int main()
{
    int tem[7][5],i,j;
    float avg,min,max,sum=0;
    for(i=0;i<7;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("Enter the temperature tem[%d][%d]: \n",i,j);
            scanf("%d",&tem[i][j]);
        }
    }
    max=min=tem[0][0];
    for(i=0;i<7;i++)
    {
        for(j=0;j<5;j++)
        {
            if(min>tem[i][j])
            {
                min=tem[i][j];
            }
            if(max<tem[i][j])
            {
                max=tem[i][j];
            }

        }
    }
    for(i=0;i<7;i++)
    {
        for(j=0;j<5;j++)
        {
            sum+=tem[i][j];
        }
    }
    avg=sum/35;
    printf("max temperature is %f\n",max);
    printf("min temperature is %f\n",min);
    printf("The avg temperature is %f ",avg);

return 0;
}
