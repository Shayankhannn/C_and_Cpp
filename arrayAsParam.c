#include <stdio.h>

double sum_average(int grades[],int howMany){
    int i;
    double sum = 0.0;
    for ( i = 0; i < howMany; i++)
    {
      sum+=grades[i];
    }
    return sum/howMany;  
    

}

void print_grades(int howMany,int grades[]){
    int i;
    printf("I have %d grades\n",howMany);
    for ( i = 0; i < howMany; i++)
    printf("%d\t",grades[i]);
    
}


int main(void){

    // #define size 5
    
    int i ,  size ;
    double sum = 0.0;

    printf("enter the total number of grades you will put \t");
    scanf("%d", &size);

    for ( i = 0; i < size; i++)
    {
        int grades[size];
        printf("enter your grade no %d \t",i);
        scanf("%d",grades[i]);
    }
    printf("\n\n");

    printf("sum of your grade is %.2lf", sum/size);
    


    

}