// to insert an elemnet in any position in an array
#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> arr = {10,20,30,40};
    int n=arr.size();
    int ele = 50;
    int pos = 2;
    for(int i=n;i>=pos;i--){
        arr[i] = arr[i-1];

    }
    arr[pos-1]= ele;
     cout << "\nArray after insertion\n";
    for (int i = 0; i <= n; i++)
        cout << arr[i] << " ";

    return 0;
}