// djikstra shortest path using graph data structure

#include <iostream>
#include <vector>
#include <ctime>
using namespace std;

double prob(){
    return (double) rand()/RAND_MAX;
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
