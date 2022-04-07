#include<bits/stdc++.h>
using namespace std;
/*Multiple Recursion calls  Time complexity near to (2 to power n)  */
//Fibonacci 
int fib(int n)
{
    if(n <= 1) return n;
    else return fib(n-1)+fib(n-2);
}

int main()
{   int a = fib(3);
    std::cout << a << std::endl;
    return 0;
}