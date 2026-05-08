#include <stdio.h>
void swap(int*a,int*b){
    int temp =*a;
    *a=*b;
    *b=temp;

}

void print_array(int data[],int how_many,char *str){
    int i;
    printf("%s",str);
    for ( i = 0; i < how_many; i++)
    {
        printf("%d\t",data[i]);
    }


    
}
void bubble(int data[],int how_many){
    int i,j;
    int go_on;

    for ( i = 0; i < how_many; i++)
    {
        print_array(how_many,data,"\n inside bubble \n");
        printf("i = %d iput any int to continue",i);
        scanf("%d",&go_on);
        for ( j = how_many-1; j > i; j--)
        {
            if (data[j-1]>data[j])
            {
                swap(&data[j-1],&data[j]);
            }
            
        }
        
    }
    

}

int main(void){
    #define SIZE 5
    int grades[SIZE] = {2,3,4,5,6};
    print_array(SIZE,grades,"My Grades\n");
    printf("n\n");
    bubble(grades,SIZE);
    print_array(SIZE,grades,"my sorted array \n");

    return 0;

}