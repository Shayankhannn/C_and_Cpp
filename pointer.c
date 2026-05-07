#include <stdio.h>
int main(void){
    #define  SIZE  5 
    int grades[SIZE] = { 21,32,43,56,45 };
    double sum = 0.0;
    int i ;
    double *ptr_to_sum = &sum ;
    printf("\n my graDES are \n");
    for ( i = 0; i < SIZE; i++)
    printf("%d\t", grades[i]);    
    printf("\n\n");
    for ( i = 0; i < SIZE; i++)
    sum+=grades[i];
    printf("sum is %.2lf" , sum);
    printf("\n\n");
    printf("my average is %.2lf",sum/SIZE);
    printf("\n\n");

    printf("sum is at %p ,or %lu , and is %lf\n",
    ptr_to_sum,ptr_to_sum,*ptr_to_sum);



    
}