/*
assignment :
 (Natural or Social Science Focus)
Write a struct that has a member that is the name of a business department:
 HR, Sales, Research, Software, and Executive (use enums for the 4 departments).
   A second member that is an annual salary as an int. 
   A third member that is a social security number(unsigned).
     Generate 10 employees with different social security numbers. 
     Invent a salary generator for each department (use some base salary for the department and add in a randomly generated offset).  
     Print out the 10 employees and their values to the screen-one line at a time.
*/

#include <stdio.h>
#include <stdlib.h>

// enum for departments 
 enum departments {
    HR,
    SALES,
    RESEARCH,
    SOFTWARE,
    EXECUTIVE
};

// struct for single employee
typedef struct employee
{
    int salary;
    enum departments dept;
    unsigned ssn;
}employee ;

unsigned social_security_generator(void){
    return 100000000 + rand() % 900000000; // 9000000000 controls how wide the SSN variation is,
}

int salary_generator(enum departments d)
{
    int base ;

    switch (d)
    {
    case HR:
        base = 50000;
        break;
    case SALES:
        base = 60000;
        break;
    case RESEARCH:
        base = 70000;
        break;
    case SOFTWARE:
        base = 90000;
        break;
        
        default:
        base = 120000;

        break;
    }

    return base + rand() % 10000; // 10000 controls how wide the salary variation is

}

void print_employee(employee staff[],int how_many  )
{

    printf("the employee are listed below with their values\n");

    for (int i = 0; i < how_many; i++)
    {
        printf("");
    }
    

}

 
int main(){
    employee staff[10];
    for (int i = 0; i < 10; i++)
    {
        staff[i].dept = rand() % 5 ;
        staff[i].ssn = social_security_generator();
        staff[i].salary = salary_generator(enum departments);
    }
    
}
