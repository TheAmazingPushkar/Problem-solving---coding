// to multiply with adjacent elements in an array using naive approach
// (o(n^2) time complexity and o(n) space complexity)
#include<iostream>
#include<vector>

using namespace std;
void update_array(vector<int> &arr);
int main()
{
    vector<int> arr={2,4,5};
    update_array(arr);
    for(auto it : arr)
    {
        cout << it<<" ";
    }
}

void update_array(vector<int> &arr)
{
    int n =arr.size();
    vector<int> temp(n);

    for(int i=0;i<n;i++){

        int prev = (i==0)?1:arr[i-1];

        int next = (i==n-1)?1:arr[i+1];

        temp[i] = prev*arr[i]*next;

    }
    arr = temp;
}