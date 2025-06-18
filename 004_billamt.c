# include <stdio.h>
int main() //starting point of program execution
{
   int dm,kt,billamt;
   dm=kt=billamt=0;

   printf("\n--------------------------------\n");
   printf("Welcome to D-Mart");
   printf("\n--------------------------------\n");
   printf("Enter Price of the Dairy Milk....:");
   scanf("%d",&dm);

   printf("Enter Price of Kit Kat...........:");
   scanf("%d",&kt);

   billamt = dm + kt;

   printf("Total Bill Amount is:%d",billamt);

 return 0;
}
