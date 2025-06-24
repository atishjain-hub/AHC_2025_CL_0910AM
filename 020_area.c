# include <stdio.h>
int main()
{
    double r,a;
    r=a=0;

    const double PI=3.14;

    printf("Enter Radius....:");
    scanf("%lf",&r);

    a=PI*r*r;

    printf("Area of Circle is:%.15lf",a);

 return 0;
}
