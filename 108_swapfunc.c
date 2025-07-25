# include <stdio.h>
int main()
{
    void swap(int,int);

    int a=10,b=20;

    printf("\nvalue of a before swap() function:%d",a);
    printf("\nvalue of b before swap() function:%d",b);

    swap(a,b); //func call or actual parameters

    printf("\nvalue of a after swap() function:%d",a);
    printf("\nvalue of b after swap() function:%d",b);

 return 0;
}

 void swap(int a,int b) //here a and b are called formal parameters
 {
     int temp=0;
     temp=a;
     a=b;
     b=temp;
 }

