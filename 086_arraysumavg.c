# include <stdio.h>
int main()
{
    int n,i,sum;
    float avg;
    sum=avg=0;
    printf("Enter array size:");
    scanf("%d",&n);

    int no[n];

    for(i=0;i<n;i++)
    {
        printf("Enter an element at index %d: ",i);
        scanf("%d",&no[i]);
    }

    for(i=0;i<n;i++)
    {
        sum=sum+no[i];
    }
    avg=(float)sum/n;

    printf("\nSum of %d numbers is %d",n,sum);
    printf("\nAverage of %d numbers is %f",n,avg);


 return 0;
}
