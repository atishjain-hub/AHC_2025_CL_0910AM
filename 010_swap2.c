# include <stdio.h>
int main()
{
    //variable declaration and initialization
    int a,b;
    a=b=0;

    //input
    printf("Enter value for A....:");
    scanf("%d",&a);

    printf("Enter value for B...:");
    scanf("%d",&b);

    //logic
    a=a+b;
    b=a-b;
    a=a-b;

    //output
    printf("\nA is:%d",a);
    printf("\nB is:%d",b);

 return 0;
}
