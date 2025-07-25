# include <stdio.h>
int main()
{
    void display(void); //func declaration or func prototype

    printf("\nMain Program Entry...");
    display(); //func call
    printf("\nBack to main Program");
    display();


 return 0;
}

//func definition or func body
void display(void)
{
    printf("\n--------------------------------------");
    printf("\n\tWelcome to C Programming");
    printf("\n--------------------------------------");
}
