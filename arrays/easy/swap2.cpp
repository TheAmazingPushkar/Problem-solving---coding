//reversing an array using a single pointer approach
// (o(n) time complexity and o(1) space complexity)

#include<iostream>
#include<vector>
using namespace std;

void reverse(vector<int> &arr)
{
    int n=arr.size();
    for(int i=0;i<n/2;i++){
        swap(arr[i],arr[n-1-i]);
    }
}
int main()
{
    vector<int> arr = {1,2,3,4,5};
    reverse(arr);
    for(int i=0;i<arr.size();i++){
        cout << arr[i] << " ";
    }
    return 0;

}