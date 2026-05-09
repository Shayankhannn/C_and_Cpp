#include <stdio.h>

// need a separate func for swapping

void swap(int *i,int *j){

    int temp;
    temp = *i;
    *i = *j;
    *j = temp;

}
void print_array(int how_many,int data[],char *str)
{
    int i ;
    printf("%s",str);
    for ( i = 0; i < how_many; i++)
    {
        printf("%d\t", data[i]);
    }
    
}


int bubble(int how_many,int data[]){
    int i , j ;

    for ( i = 0; i < how_many - 1; i++)
    {
        for ( j = 0; j < how_many - 1 ; j++)
        {
            if (data[j]>data[j+1])
            {
                swap(&data[j],&data[j+1]);
            }
            
        }
        
    }
    
}


int main(){
    #define SIZE 11
    int data[SIZE] = {21,3,44,5,21,53,31,55,12,34,64};

    

}