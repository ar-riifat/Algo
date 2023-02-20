#include <bits/stdc++.h> //header file that include every standard library

// Fibonacci with memorization
using namespace std; //namespace is a collection of identifiers of the C++ standard library, which
// is defined in std

long long int F[100000];    //globally declaring long long integer array named F with size of 100000
                            // note that globally declaring this array initialized it's value with 0

long long int fib(int n)    //defining a recursive function named fib with long long integer and n as parameter
{
    if (n == 0 || n == 1)   //if n is equal to 0 or 1
    {
        F[n] = n;           //set F[n] as n
        return F[n];        //and return it to the main function
    }
    if(F[n] == 0)           //if F[n] array is 0
    {
        F[n] = fib(n-1) + fib(n-2); //then call it's own function again and adding the previous 2 valie
    }

    return F[n];            //return F[n] to main function

}
int main() //main function
{
    int n;  //declaring integer variable n, denoting the nth fibonacci number
    cin>>n; // taking n as input from user

    long long int nfib = fib(n);

    cout<<"nth Fibo: "<<nfib<<endl;
    return 0;   //program executed successfully
}



// Input case:
// 10
// nth fibo: 55
