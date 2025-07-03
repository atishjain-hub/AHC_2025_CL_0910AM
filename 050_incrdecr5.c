# include <stdio.h>
int main()
{
    int a=10,b=0;

    b=a++ + a++;

    printf("\na=%d",a);
    printf("\nb=%d",b);


    return 0;
}
