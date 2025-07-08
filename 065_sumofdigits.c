# include <stdio.h>
int main()
{
   int no,r,sum;
   no=r=sum=0;

   printf("Enter a no:");
   scanf("%d",&no); //256

while(no>0)
{
    r=no%10;
    sum=sum+r;
    no=no/10;
 }

 printf("Sum of Digits :%d",sum);

 return 0;
}
