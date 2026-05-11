#include <stdio.h>

#define MAX 20

void readData(FILE *ptr,int d[],int *size)
{
    *size = 0;
    while (fscanf(ptr,"%d",&d[*size])==1)
        (*size)++;
    
}

void printData(int d[],int size)
{
    int i;
    for ( i = 0; i < size; i++)
    {
        printf("%d\t",d[i]);
        if ((i+1)%10 == 0) printf("\n\n");
        
        
    }
    
}



double average(int d[],int size)
{
    int i;
    double avg = 0.0;

    for ( i = 0; i < size; i++)
        avg+=d[i];
return (avg/size);
    
}

int main(){
    int i,sz = MAX;
    FILE *ifp;
    int data[MAX] = {100 ,0};

    ifp = fopen("myhw","r");
    readDat(ifp,data,&sz);
    printf("my %d homework score are :",sz);
    printData(data,sz);
    printf("average score was %10f",average(data,sz));
    printf("\n\n");
    fclose(ifp);

}