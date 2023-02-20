#include <bits/stdc++.h> //header file that include every standard library

// LCS
using namespace std; //namespace is a collection of identifiers of the C++ standard library, which
                     // is defined in std

int main() //main function
{
    string str1, str2;      //declaring string named str1, str2
    getline(cin,str1);      //getting the string input from user and storing in in str1
    getline(cin,str2);      //getting the string input from user and storing in in str2

    int m = str1.size(), n = str2.size();   //getting the size of str1 and str2 and storing in
                                            //integer declared variable m and n respectively

    int LCS[m+1][n+1];      //declaring a 2D size array named LCS and it's size as m+1 and n+1

    for (int i = 0; i < m+1; i++)       //outer loop for m+1 iteration, traversing the table
    {
        for (int j = 0; j < n+1; j++)   //inner loop for n+1 iteration, traversing the table
        {
            if(i == 0 || j == 0)        //if the row or column position number is zero, then the
            {
                LCS[i][j] = 0;          // whole row or column's value will be set as zero
            }
            else if(str1[i-1] == str2[j-1]) //if column and row's string match
            {
                LCS[i][j] = 1 + LCS[i-1][j-1];  //then it will enter the value from it's diagonal cell and add 1
            }
            else                            //if column and row's string does not match
            {
                LCS[i][j] = max(LCS[i-1][j], LCS[i][j-1]);  //then it will enter the maximum value from either it's upper cell or left cell
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

    cout<<"LCS Length: "<<LCS[m][n];        //printing the last cell from the table

    return 0;   //program executed successfully
}



// Input case:
// 4 8
// 1 2 5 6
// 2 3 4 5

