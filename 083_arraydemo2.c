# include <stdio.h>
int main()
{
    int i,arr[]={12,23,45,67,7812,3,45,6,78,89};

    printf("\nsize of arr is %d bytes",sizeof(arr));

    int no=sizeof(arr)/sizeof(int);

    for(i=0;i<no;i++)
    {
     printf("\n%d - %d",i,arr[i]);
    }

 return 0;
}
