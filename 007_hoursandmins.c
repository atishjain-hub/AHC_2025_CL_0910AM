# include <stdio.h>
int main()
{
   int tm,h,m;
   tm=h=m=0;

   printf("Enter Flying time in Mins....:");
   scanf("%d",&tm);

   h=tm/60;
   m=tm%60;

   printf("Total Flying time is %d hrs and %d mins....",h,m);

 return 0;
}
