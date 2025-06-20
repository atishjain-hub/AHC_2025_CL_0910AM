# include <stdio.h>
int main()
{
    //variable declaration and initialization
    int a,b,temp;
    a=b=temp=0;

    //input
    printf("Enter value for A....:");
    scanf("%d",&a);

    printf("Enter value for B...:");
    scanf("%d",&b);

    //logic
    temp = a;
    a = b;
    b = temp;

    //output
    printf("\nA is:%d",a);
    printf("\nB is:%d",b);

 return 0;
}
