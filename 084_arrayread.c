# include <stdio.h>
int main()
{
    int x[10],index;

    for(index=0;index<10;index++)
    {
        printf("Enter a no at index %d:",index);
        scanf("%d",&x[index]);
    }

    for(index=0;index<10;index++)
    {
        printf("\n%d - %d",index,x[index]);
    }




 return 0;
}
