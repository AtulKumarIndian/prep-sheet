#include<bits/stdc++.h>
using namespace std;
/* We are writing void recursion function to swap elements in an array
    can be done using two indexs i , j where for every recursion we will
    do i+1 and j-1 to iterate and swap elements. condition (i>=j)

    here we choose to do it in one variable by i and n-i. condition i>= (n/2)
*/
void funRev(int i, int arr[], int n){
    if(i == n/2) return;
    else{
        swap(arr[i], arr[n-i-1]);  // i  is intially 0 so swap 0th element with last element
        funRev(i+1,arr,n);
    }
}
/*  Auxiliary stacks space and time complexity is O(n/2)*/
bool palin(int i, string &s){
    if(i>= s.size()/2) return true;
    if(s[i]!=s[s.size()-i-1]) return false;
    return palin(i+1,s);
}

int main() {
    
    return 0;
}