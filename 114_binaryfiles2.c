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

    fp=fopen("student.dat","rb");

    while(fread(&s,sizeof(s),1,fp)==1)
    {
        printf("\n%d - %s - %f",s.id,s.name,s.avg);
    }

 return 0;
}


