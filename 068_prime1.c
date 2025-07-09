# include <stdio.h>
int main()
{
    int no,fc,d;
    no=fc=0;
    d=1;

    printf("Enter a no:");
    scanf("%d",&no);

    while(d<=no)
    {

        if(no%d==0)
        {
            fc++;
        }
        d++;
    }

    if(no==2)
        printf("%d is even prime....",no);
    else
          if(fc<=2 )
             printf("%d is prime...",no);
         else
             printf("%d is not prime...",no);

 return 0;
}
