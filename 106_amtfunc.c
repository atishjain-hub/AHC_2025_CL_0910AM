# include <stdio.h>
int main()
{
    float calculate(int,float); //func declaration
    int qty;
    float rate,amt;
    qty=rate=amt=0;

    printf("Enter Quantity and Rate:");
    scanf("%d%f",&qty,&rate);

    amt=calculate(qty,rate);

    printf("Bill Amount is:%f",amt);


 return 0;
}

float calculate(int q,float r)
{
    return(q*r);
}
