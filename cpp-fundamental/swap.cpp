#include <iostream>
using namespace std;

// c++ ha overloading and call  by reference


inline void swap(int &i,int&j) //& call by reference
{
    int temp;
    temp = i;
    i=j;
    j=temp;
}
// no need for diff func name c+++ has overloading
// compiler will know if we are using doubles or int to which func to use
// overloading involves discriminating by signature types+ no of arg func use

inline void swap(double &j,double&i) // & call by reference
{
    double temp;
    temp = i;
    i=j;
    j=temp;
}


int main(){
    int m= 5, n=6;
    double x = 6.5 ,y=5.5;
    cout <<"inputs :"<<m<<","<<n<<endl;
    swap(m,n); // signature match 
    cout <<" outputs :"<<m<<","<<n<<endl;
    cout <<"double inputs :"<< x <<","<< y <<endl;
    swap(x,y); // signature match
    cout <<"double outputs :"<<x<<","<<y<<endl;


    
}