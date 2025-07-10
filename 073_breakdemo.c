# include <stdio.h>
int main()
{
    int no;

    for(no=1;no<=10;no++)
    {
        if(no%5==0)
        {
            break;
        }
        printf("\n%d",no);
    }
    printf("\nout of the loop");


 return 0;
}
