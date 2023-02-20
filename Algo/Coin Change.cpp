#include <bits/stdc++.h> //header file that include every standard library

// Coin Change
using namespace std; //namespace is a collection of identifiers of the C++ standard library, which
                     // is defined in std

int main() //main function
{
    int n,m;    //declaring integer type variable named n and m.
    cin>>n>>m;  //taking input from user and storing it in n and m respectively
    int coin[n];    //declaring n size array named coin

    for(int i = 1; i <= n; i++) //loop for taking array input
    {
        cin>>coin[i];       //taking input from user and storing it in coin array
    }

    int COIN[n+1][m+1];     //declaring 2D array size of n+1 and m+1 respectively

    for (int i = 0; i < n+1; i++)   //loop for n+1 iteration, traversing the table
    {
        for (int j = 0; j < m+1; j++)   //loop for m+1 iteration, traversing the table
        {
           if (i == 0 && j == 0 || j==0)    //if the row and column value is 0 or only the column is 0
           {
               COIN[i][j] = 0;              //then set that whole row and column's cell 0
           }
           else if(i == 0)                  //if the row's value is 0
           {
               COIN[i][j] = INT_MAX;        //then set that whole row's cell 0
           }
           else if(j >= coin[i])            //if the column's value is greater or equal than coin's value
           {
               COIN[i][j] = min(COIN[i-1][j], 1 + COIN[i][j - coin[i]]);    //then use this algorithm
           }
           else                             //if the column's value is less than coin's value
           {
               COIN[i][j] = COIN[i-1][j];   //then set that cell value with it's upper cell's value
           }
        }
    }

    for(int i = 0; i < m+1; i++)    //outer loop for printing the table
    {
        for(int j = 0; j < n+1; j++) //inner loop for printing the table
        {
            cout<<LCS[i][j]<<" ";   //printing each value, and adding a space
        }
        cout<<endl; //adding an end line
    }

    cout<<"Maximum Profit: "<<LCS[m][n];        //printing the last cell from the table

    return 0;   //program executed successfully
}



// Input case:
// 4 8
// 1 2 5 6
// 2 3 4 5

