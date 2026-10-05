// to multiply adjacent elements in an array
// (o(n) time complexity and o(1) space complexity)
#include<iostream>
#include<vector>
using namespace std;

void update_array(vector<int> &arr)
{
    int n = arr.size();
    int prev = 1;
    for(int i=0;i<n;i++)
    {
        int curr = arr[i];
        int next =(i==n-1)?1:arr[i+1];
        arr[i] = prev*curr*next;
        prev = curr;
    }
}

int main()
{
    vector<int> arr={2,4,5};
    update_array(arr);
    for(auto it : arr)
    {
        cout << it<<" ";
    }
}