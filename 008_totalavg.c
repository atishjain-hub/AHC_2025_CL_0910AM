# include <stdio.h>
int main()
{
    int c,java,python;
    float total,avg;
    c=java=python=total=avg=0;

    printf("Enter Marks for C:");
    scanf("%d",&c);

    printf("Enter Marks for Java:");
    scanf("%d",&java);

    printf("Enter Marks for Python:");
    scanf("%d",&python);

    total = c+java+python;
    avg=total/3;

    printf("\nTotal is:%.0f",total);
    printf("\nAverage is:%.2f %%",avg);

 return 0;
}
