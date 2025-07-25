# include <stdio.h>
int i; //global declaration
int main()
{
    void display(int[]); //func decl
    int arr[10];

    for(i=0;i<10;i++)
    {
        printf("Enter a no:");
        scanf("%d",&arr[i]);
    }

    display(arr);


 return 0;
}


void display(int x[])
{
    for(i=0;i<10;i++)
        printf("\n%d - %d",i,x[i]);

}
