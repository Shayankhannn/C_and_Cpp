#include <stdio.h>

// merge sort On(log n)

void print_array(int how_many,int arr[],char *str)
{
    int i ;
    printf("%s\n",str);
    for ( i = 0; i < how_many; i++)
    {
        printf("%d\t", arr[i]);
    }
    
}

void merge(int a[], int b[],int c[], int how_many) // a and b of same size 
{
    int i=0,k=0 ,j=0;

    while (i<how_many && j<how_many)
    {
        if (a[i]<b[j])
        {
            c[k++] = a[i++];
        }else{
            c[k++] = b[j++];
        }
        
    }
    while (i<how_many)
    c[k++]= a[i++];
    while (j<how_many)
    c[k++]= b[j++];
    
    

}

void mergeSort(int key[],int how_many) // a power of 2
{
    int j , k;
    int w[how_many];

    for (k  = 1; k < how_many; k*=2)
    {
        for ( j = 0; j < how_many-k; j+=2*k)
            merge(key+j,key+j+k,w+j,k);
        for ( j = 0; j < how_many; j++)
            key[j]=w[j];
        
        
    }
    
}
int main(void)
{
    #define size 5
    int a[size]={23,54,65,65,34};
    int b[size]={63,84,65,15,32};
    int c[2*size];
    print_array(size,a,"my grades\n");
    printf("\n\n");
    print_array(size,b,"more grades\n");
    printf("\n\n");
    merge(a,b,c,size);
    print_array(2*size,c,"sorted merge grades\n");
 

    // mergeSort func work

    #define size2 8
    int a2[size2]={12,43,54,65,34,12,66,77};
    print_array(size2,a2,"my grades\n");
    printf("\n\n");
    mergeSort(a,size2);
    print_array(size2,a2,"my sorted merge grades\n");
    
    return 0;
}