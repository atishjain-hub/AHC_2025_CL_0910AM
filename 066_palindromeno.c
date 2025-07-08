# include <stdio.h>
int main()
{
    int no,r,rev;
    no=r=rev=0;

    printf("Enter a no:");
    scanf("%d",&no); //456

    while(no!=0)
    {
        r=no%10;
        rev=rev*10+r;
        no=no/10;
       }

       if(no==rev)
          printf("Is Palindrome...");
      else
        printf("Not Palindrome");


 return 0;
}
