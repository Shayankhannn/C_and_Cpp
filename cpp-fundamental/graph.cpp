// djikstra shortest path using graph data structure

#include <iostream>
#include <vector>
#include <ctime>
using namespace std;

double prob(){
    return (double) rand()/RAND_MAX;
}

bool is_connected(bool *graph[],int size)
{
    int old_size = 0;
    int c_size = 0;
    bool* close = new bool[size];
    bool* open = new bool[size];

    for (int i = 0; i < size; i++)
    {
        open[i]=close[i]= false;
        
    }
    open[0]= true;
    

}
int main()
{
    // vector<pair int,int>graph[5];
    // graph[0] = {2,4};

    const int size = 5;

    bool** graph; // pointer to pointer to bool
    srand(time(0)); //seed rand()
    graph = new bool*[size];
    for (int i = 0; i < size; ++i)
    {
        graph[i] = new bool[size];
    }
    // heap created 2d array

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (i==j)
                graph[i][j] = false;
            else
                graph[i][j] = (prob()< 0.19) ;
        }
        
    }
    

    


}
