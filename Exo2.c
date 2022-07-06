#include<stdio.h>
int main()
{
    int M,n,j,i,counter=0;
    printf("Enter the number of students n: ");
    scanf("%d",&n);
    printf("\nEnter the number of modules M: ",M);
    scanf("%d",&M);

    float avg[n],data[n][M],sum;
    for(i=0;i<n;i++)
    {
        sum=0;
        printf("\tThe student %d :\n",i);
        for(j=0;j<M;j++)
        {
            printf("Module %d: ",j+1);
            again:
            scanf("%f",&data[i][j]);
            if(data[i][j]<0||data[i][j]>20)
            {
                printf("Invalid value!\nreenter: ");
                goto again;
            }
            sum+=data[i][j];
        }
        avg[i]=sum/M;
        if(avg[i]>=10)
        {
            counter++;
        }
    }
    float max=avg[0],min=avg[0];
    int H,L;
    for(i=0;i<n;i++)
    {
        if(min>avg[i])
        {
            min=avg[i];
            L=i;
        }
        if(max<avg[i])
        {
            max=avg[i];
            H=i;
        }
    }
    printf("The results are :\n");
    printf("\t");

    for(i=0;i<n;i++)
    {
        printf("\nstudent%d: ",i);
        for(j=0;j<M;j++)
        {
            printf("%0.2f ",data[i][j]);
            if(j==M-1)
            {
                printf("%0.2f",avg[i]);
            }
        }
    }
    printf("\n\n");
    printf("\tThe higher average score is %0.2f of the student %d\n\n",max,H);
    printf("\tThe lower average score is %0.2f of the student %d\n\n",min,L);
    printf("\tThe number of successful students is %d\n\n",counter);
return 0;
}
