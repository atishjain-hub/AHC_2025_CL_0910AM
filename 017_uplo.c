# include <stdio.h>
int main()
{
   char ch;

   printf("Enter a character in lowercase:");
   scanf("%c",&ch);

   ch=ch-32;

   printf("Uppercase Character is:%c",ch);

 return 0;
}
