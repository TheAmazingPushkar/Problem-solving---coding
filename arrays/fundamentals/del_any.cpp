//to delete an elemnet from any position in array

#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> arr ={10,20,30,40};
    int n=arr.size();
    int pos = 2;
    for(int i=pos;i<n;i++){
        arr[i-1] = arr[i];
    }
    if(pos<=n){
        n--;
    }
     for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    return 0;
}