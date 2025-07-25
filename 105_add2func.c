# include <stdio.h>
int main()
{
    int sum(int,int); //func delcaration

    int a,b,c;
    a=b=c=0;
    printf("Enter 2 nos:");
    scanf("%d%d",&a,&b);

    c=sum(a,b); //func call
    printf("\nResult is:%d",c);

 return 0;
}

int sum(int x,int y)
{
    //local variable
    int z=0;

    z=x+y;
    return z;

}

