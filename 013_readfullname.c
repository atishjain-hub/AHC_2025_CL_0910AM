# include <stdio.h>
int main()
{
    char name[50];

    printf("Enter ur name:");
    scanf("%[^\n]",&name);

    printf("Heyyy %s Good Day!",name);

 return 0;
}
