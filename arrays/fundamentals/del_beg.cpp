// deletion of an element from the beginning of an array
#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> arr = {10,20,30,40};
    int n=arr.size();
    //shifting towards left
    for(int i=1;i<n;i++){
        arr[i-1] = arr[i];
    }
    n= n-1;//reducing array size by one
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    return 0;

}