# include <stdio.h>
int main()
{
    int no,d,count;
    no=count=0;
    d=2;

    printf("Enter a no:");
    scanf("%d",&no);

    while(d<no)
    {
       count++;
        if(no%d==0)
        {
            break; //sends the control out of the loop
        }
        d++;
    }

         if( d==no)
         {
             printf("%d is prime...",no);
             printf("\nNo of iterations are:%d",count);
         }
         else
         {
             printf("%d is not prime...",no);
             printf("\nNo of iterations are:%d",count);
         }

 return 0;
}
