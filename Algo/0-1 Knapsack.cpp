#include <bits/stdc++.h> //header file that include every standard library

// 0-1 Knapsack
using namespace std; //namespace is a collection of identifiers of the C++ standard library, which
                     // is defined in std

int main() //main function
{
    int n,m;  //declaring integer variable n an m, denoting number of object and weight respectively
    cin>>n>>m; // taking n as input from user

    int profit[n], weight[n];

    for (int i = 0; i < n; i++)
    {
        cin>>profit[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin>>weight[i];
    }

    int V[n+1][m+1];

    for(int i = 0; i < n+1; i++)
    {
        for(int j = 0; j < m+1; j++)
        {
            if(i == 0 || j == 0)
            {
                V[i][j] = 0;
            }
            else if(j >= weight[i-1])
            {
                V[i][j] = max(V[i-1][j], V[i-1][j-weight[i-1]] + profit[i-1]);
            }
            else
            {
                V[i][j] = V[i-1][j];
            }
        }
    }

    for (int i = 0; i < n+1; i++)
    {
        for (int j = 0; j <  m+1; j++)
        {
            cout<<V[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"Maximum Profit: "<<V[n][m]<<endl;

    return 0;   //program executed successfully
}



// Input case:
// 4 8
// 1 2 5 6
// 2 3 4 5

