//Program to calculate discount and final amount

# include <stdio.h>
int main()
{
    int sales,dis,final_amt;
    sales=dis=final_amt=0;

    printf("Enter sales Amount....:");
    scanf("%d",&sales);

    if(sales>=25000)
         dis=sales*10/100;
    else
         dis=sales*5/100;

    final_amt = sales-dis;

    printf("Discount:%d",dis);
    printf("\nFinal Amount:%d",final_amt);

     return 0;
}
