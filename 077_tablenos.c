# include <stdio.h>
int main()
{
    int tno,c,res;

    for(tno=2;tno<=10;tno++)
    {
        printf("\nTable for %d ",tno);
        printf("\n--------------------");

        for(c=1;c<=12;c++)
        {
            res=tno*c;
            printf("\n%d * %d = %d",tno,c,res);
        }
     printf("\n--------------------");
    }
 return 0;
}
