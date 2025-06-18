# include <stdio.h>
int main()
{
    int qty;
    float rate,amt;
    qty=rate=amt=0;

    printf("Enter Quantity:");
    scanf("%d",&qty);

    printf("Enter Rate:");
    scanf("%f",&rate);

    amt = rate * qty;
    printf("Amount to be paid is:%f",amt);

 return 0;
}
