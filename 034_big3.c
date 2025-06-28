# include <stdio.h>
int main()
{
    int a,b,c;
    a=b=c=0;

    printf("Enter 3 nos:");
    scanf("%d%d%d",&a,&b,&c);

    if(a>b)
        if(a>c)
            printf("Biggest no is:%d",a);
        else
            printf("Biggest no is:%d",c);
    else
           if(b>c)
               printf("Biggest no is:%d",b);
           else
              printf("Biggest no is:%d",c);










     return 0;
}
