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
            printf("Factor of %d is %d\n",no,d);
            fc++;
        }

        d++;
       }

       printf("No of Factors for %d are %d",no,fc);
 return 0;
}
