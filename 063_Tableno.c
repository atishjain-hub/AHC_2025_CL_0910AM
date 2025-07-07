# include <stdio.h>
int main()
{
    int tno,c,res;
    tno=res=0;

    printf("Enter a table no:");
    scanf("%d",&tno); //6

    for(c=1;c<=12;c++)
    {
        res=tno*c;
        printf("\n%5d * %5d = %5d",tno,c,res);

    }

 return 0;
}
