// Written by akshat khatri
#include<stdio.h>
#include<string.h>

int main()
{
    char str[200];
    char result[400];
    int i=0;
    int j=0;


    printf("enter the string\n");
    fgets(str,sizeof(str),stdin);

    int k=strlen(str)-1;

    while(str[k]==' ' || str[k]=='\n')
    {
        k--; // Removing trailing white spaces and newline in the end
    }

    str[k+1]='\0'; 
    
    while(str[i]!='\0')
    {
        if(str[i]==' ')
        {
            while (str[i] == ' ' && str[i] != '\0') {
                i++; // removing Extra white spaces in between
            }

            result[j]='.';
            result[j+1]=str[i]-32;

            i=i+1;
            j=j+2;
        }
        else
        {
            result[j]=str[i];
            i++;
            j++;
        }

    }

    result[j]='\0'; // null-terminating the string

    puts(result);

    return 0;
}