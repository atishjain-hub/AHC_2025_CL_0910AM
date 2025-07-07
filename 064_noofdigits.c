# include <stdio.h>
int main()
{
   int no,d;
   no=d=0;

   printf("Enter a no:");
   scanf("%d",&no);

while(no!=0)
{
   no=no/10;
   d++;
}

printf("No of Digits are:%d",d);


 return 0;
}
