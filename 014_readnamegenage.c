# include <stdio.h>
int main()
{
    char name[50],gen;
    int age=0;

    printf("Enter ur Name:");
    scanf("%s",&name);

    printf("Enter ur Gender(M/F):");
    fflush(stdin);
    scanf("%c",&gen);

    printf("Enter ur Age:");
    scanf("%d",&age);

    printf("\nName:%s",name);
    printf("\nGender:%c",gen);
    printf("\nAge:%d",age);


 return 0;
}
