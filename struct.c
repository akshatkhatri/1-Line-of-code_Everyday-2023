#include<stdio.h>

struct employee
{
    char name[10];
    int id;
    float salary;
};

void structure_print(struct employee *); //function prototype declaration

int main()
{
    struct employee e[2];
    int i;
    printf("Enter the details of the employees: \n");

    for(i=0;i<2;i++)
    {
        scanf("%s",e[i].name);
        scanf("%d",&e[i].id);
        scanf("%f",&e[i].salary);
    }  
        structure_print(e); //calling to user defined function
    
}
//user defined function to print structure

void structure_print(struct employee *e1)
{
    int i;
    printf("\n\n");

    for(int i=0;i<2;i++)
    {
    printf("%s  ",e1[i].name);
    printf("%d  ",e1[i].id);
    printf("%f  \n",e1[i].salary);
    }
}