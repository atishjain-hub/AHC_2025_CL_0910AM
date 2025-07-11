# include <stdio.h>
int main()
{
    int r,c;

    for(r=1;r<=10;r++)
    {
        for(c=1;c<=r;c++)
        {
          printf(" %d ",c);
        }
        printf("\n");
    }

 return 0;
}
