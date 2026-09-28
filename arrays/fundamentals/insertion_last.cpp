// to insert an element at the end of the array
#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> arr = {10,20,30,40};
    int n = arr.size();
    int element = 50;
    arr[n] = element;
    for(int i=0;i<=n;i++){
        cout << arr[i] << " ";
    }
    return 0;

}