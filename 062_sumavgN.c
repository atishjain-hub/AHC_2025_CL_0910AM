# include <stdio.h>
int main()
{
    int size,c,no,sum;
    float avg;
    size=no=sum=avg=0;
    c=1;

    printf("Enter How Many Numbers you want to read:");
    scanf("%d",&size);

    while(c<=size)
    {
        printf("Enter %d no:",c);
        scanf("%d",&no);
        sum=sum+no;
        c++;
     }

     avg = (float)sum / size;

     printf("\nSum of %d numbers is %d",size,sum);
     printf("\nAverage of %d numbers is %f",size,avg);


 return 0;
}
