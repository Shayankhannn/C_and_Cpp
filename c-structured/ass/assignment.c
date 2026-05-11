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

// This program uses structs and enums to generate and display employee information. Each employee has a department, salary, and social security number. Salaries are generated based on department with random offsets.


// got perfect score


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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

// converting enum int value to its text 

char *department_name(enum departments d)
{
    switch (d)
    {
    case HR :
        return "Hr";
    
    case SALES :
        return "Sales";
    
    case RESEARCH :
        return "Research";
    
    case SOFTWARE :
        return "Software";
    
    default:
    return "Executive";
    }
}


// for printing employees
void print_employees(employee staff[],int how_many  )
{

    printf("the employee are listed below with their values\n");

    for (int i = 0; i < how_many; i++)
    {
        printf("department %s,\t salary %d,\t ssn %u\t\n", department_name(staff[i].dept),staff[i].salary,staff[i].ssn);
    }
    

}

void generate_employees(employee staff[], int size)
{
for (int i = 0; i < size; i++)
    {
        staff[i].dept = rand() % 5 ;
        staff[i].ssn = social_security_generator();
        staff[i].salary = salary_generator( staff[i].dept);

    }
}
 #define SIZE 10
int main(){
    employee staff[SIZE];
    srand(time(NULL));
    generate_employees(staff,SIZE);

    print_employees(staff,SIZE);
    
}
