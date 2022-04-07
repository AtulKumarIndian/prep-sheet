#include<bits/stdc++.h>
using namespace std;
/*
print all subsequences- thus means should follow order of array elements.
[3,1,2] = {1 , 2 , 3 , [3,1] , [3,2] , [1,2] , [3,1,2] } are the subsequences
 arr[] = {ds}  data structure carrying subsequences 
 time complexity - n* 2^n and space is O(n)
*/
void printF(int ind, vector<int>ds , int arr[] , int n){
    if(ind == n){
        for(auto it: ds){
            cout<<it<<" ";
        }
        if(ds.size() == 0) cout<<"[]";
        cout<<endl;
        return;
    }
    //take or pick particular index element into subsequence
    ds.push_back(arr[ind]);
    printF(ind+1, ds, arr, n);
    ds.pop_back();

    //not picking up this element for the part of subsequence
    printF(ind+1, ds, arr, n);

    // we can replace the positions of picking and not picking for the reverse printing

}
int main()
{   
    int arr[]  = {3,1,2};
    int n=3;
    vector<int>ds;
    printF(0, ds, arr, n);
    return 0;
}