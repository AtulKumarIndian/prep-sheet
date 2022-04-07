#include<bits/stdc++.h>
using namespace std;
int fun(int n)
    {   if(n == 1) return 1;
        else {
             std::cout << n << std::endl;
            fun(n-1);
            std::cout << n << std::endl;
            
        }
    
        
    }
int fSum(int n){
    if (n==0) return 0;
    else {
        return n+fSum(n-1);
    }
}
int fact(int n){
if(n == 1) return 1;
else {
    return n*fact(n-1);
}
}

int main()
{   
    std::cout << fSum(10) << std::endl;
    std::cout << fact(5) << std::endl;
    std::cout << "hay" << std::endl;
    fun(10);
}