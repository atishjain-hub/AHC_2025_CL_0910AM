# include <stdio.h>
int main()
{
    struct student
    {
        int id;
        char name[20];
        float avg;
    };
    struct student s;
    FILE *fp;
    char ch='y';

    fp=fopen("student.dat","ab");

while(ch=='y')
{
    printf("\nEnter student id:");
    scanf("%d",&s.id);

    printf("Enter Student Name:");
    scanf("%s",&s.name);

    printf("Enter Student Average:");
    scanf("%f",&s.avg);

    fwrite(&s,sizeof(s),1,fp); //write data to file

    printf("\nDo you wish to continue..(y/n):");
    fflush(stdin);
    ch=getche();
}
 return 0;
}


