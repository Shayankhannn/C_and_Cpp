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
    return 1000000000 + rand() % 9000000000;
}




 
int main(){

}
