# include <stdio.h>
int main()
{
    int big2(int,int); //func dec

    int res=big2(100,200);
    printf("Biggest of 2 nos is:%d",res);

    printf("\nBiggest of 2 nos is:%d",big2(12,39));

 return 0;
}

int big2(int x,int y)
{
    if(x>y)
        return x;
    else
        return y;

}

