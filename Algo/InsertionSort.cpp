#include <bits/stdc++.h> //header file that include every standard library

// Insertion Sort
using namespace std; //namespace is a collection of identifiers of the C++ standard library, which
                    // is defined in std

int main() //main function
{
    int n;  //declaring integer variable n, denoting the size of array
    cin>>n; // taking n as input from user
    int num[n];     // declaring n size array named num

    for (int i=0; i<n; i++) //loop for taking array as an input from user
    {
        cin>>num[i];    //saving the value taken from user into num array
    }

    for (int i = 0; i < n; i++) //loop for n passes of insertion sort
    {
        int x = num[i];     // saving the selected value from array into integer declared x
        int j = i-1;        // declaring integer variable j denoting the the predecessor value
        while(j >= 0 && num[j] > x)     //while the predecessor value is greater than or equal to zero
        {                               //or greater than the selected value from the array
            num[j+1] = num[j];      //swap the value
            j--;                    //decrement the value of j
        }
        num[j+1] = x;       //fixing the value of swap value into x
    }

    for(int i = 0; i < n; i++)  //loop for printing the array
    {
        cout<<num[i]<<" ";      //showing the output of num array and adding a space after printing each value
    }
    cout<<endl;                 //printing end line

    return 0;               //program executed successfully
}


// Input case:
// 5
// 5 6 8 1 2
// 1 2 5 6 8
