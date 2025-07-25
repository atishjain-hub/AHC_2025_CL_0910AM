//--------------global declaration
int i;

//---------------function declaration
int wcount(char []);
void proper(char []);
int mystrlen(char[]);

//---------------function definitions

int wcount(char x[])
{
    int w=1;
    for(i=0;x[i]!='\0';i++)
    {
        if(x[i]==' ')
            w++;
    }
    return w;
}

int mystrlen(char x[])
{
    int len=0;
    for(i=0;x[i]!='\0';i++)
    {
        if(x[i]!=' ')
            len++;
    }
    return len;
}
