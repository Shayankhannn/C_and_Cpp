#include <iostream>
using namespace std;

// generics 

template <class T>
void sum(T data[],int size)
{
     T total = 0;
    for (int i = 0; i < size; i++)
    {
        total+=data[i];
    }
    cout << "the sum  is :" << total <<endl;
}




// inline int sum(int data[],int size)
// {
//     int sum = 0;
//     for (int i = 0; i < size; i++)
//     {
//         sum+=data[i];
//     }
//     cout << "the sum of int is :" << sum <<endl;
    
// }
// inline double sum(double data[],int size)
// {
//     double sum = 0.0;
//     for (int i = 0; i < size; i++)
//     {
//         sum+=data[i];
//     }
//     cout << "the sum of double is :" << sum <<endl;
    
// }
int main(){
    const int SIZE =  10;
    int data_int[SIZE]={1,4,5,6,2,6,5,34,32,12};
    double data_double[SIZE]={1.4,4.9,5.9,6.7,2.4,6.0,5.1,34.5,32.4,12.5};
    char data_char[SIZE]={'s','h','a','y','a','n'};
    cout << "the int sum is below " << endl;
    sum(data_int,SIZE);
    cout << "the double sum is below " << endl;
    sum(data_double,SIZE);
    cout << "the char sum is below " << endl;
    sum(data_char,SIZE);
    
}