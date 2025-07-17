# include <stdio.h>
int main()
{
    int i,arr[10]={};


    arr[2]=100;
    arr[5]=555;
    arr[9]=999;

    printf("\nsize of arr is %d bytes",sizeof(arr));


    for(i=0;i<10;i++)
    {
     printf("\n%d",arr[i]);
    }

 return 0;
}
