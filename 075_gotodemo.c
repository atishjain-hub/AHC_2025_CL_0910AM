# include <stdio.h>
int main()
{
    int no=1;

    hello:
    printf("\t%d",no++);


    if(no<=100)
        goto hello;



 return 0;
}
