#include <iostream>

using namespace std;

int main()
{

    for (int i = 0; i < 10; i++)
    {
        cout << "Hello World" << endl;
    }
    // one iteration = increament,check condition,print
    // Time Complexity = O(10*3)

    int N = 100;
    // O(No of operations)=time complexity
    for (int i = 0; i < N; i++)
    {
        cout << "Hello World" << endl;
    }
    //Time Complexity = O(3*N)


     for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
          cout << "Hello World" << endl;
        }
        
    }
    //Time Complexity = O(3*N*N)



     for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <=i; j++)
        {
          cout << "Hello World" << endl;
        }
        
    }
    //Time Complexity = O(N(N+1)/2)=O(N^2/2+N/2)






    return 0;
}