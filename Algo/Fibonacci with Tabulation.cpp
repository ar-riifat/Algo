#include <bits/stdc++.h> //header file that include every standard library

// Fibonacci with tabulation
using namespace std; //namespace is a collection of identifiers of the C++ standard library, which
                    // is defined in std

int main() //main function
{
    int n;  //declaring integer variable n, denoting the nth fibonacci number
    cin>>n; // taking n as input from user

    long long int F[100000];    //declaring long long integer size array named F with size of 100000
    F[0] = 0, F[1] = 1;     //fixing the value of 1st and 2nd position as 0 and 1 respectively
                            //per the rule of Fibonacci

    for(int i = 2; i <=n; i++)  //loop for nth iteration, i start at 2 because 1st 2 position are fixed
    {
        F[i] =  F[i-1] + F[i-2];    //adding the previous 2 value
    }

    cout<<"nth Fibo: "<<F[n]<<endl; //printing the value of F[n] where the result is stored and adding
                                    //an end line


    return 0;   //program executed successfully
}


// Input case:
// 10
// nth fibo: 55
