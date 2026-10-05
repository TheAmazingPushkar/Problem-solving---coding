// to reverse an array using 2 pointer approach
// (o(n) time complexity and o(1) space complexity)

#include<iostream>
#include<vector>
using namespace std;

void reverse(vector<int> &arr);
int main()
{
    vector<int> arr = {1,2,3,4,5};
    reverse(arr);
    for(int i=0;i<arr.size();i++){
        cout << arr[i] << " ";
    }
    return 0;

}
void reverse(vector<int> &arr)
{
    int left =0;
    int right = arr.size() - 1;
    while(left<right)
    {
        swap(arr[left],arr[right]);
        left++;
        right--;
    }
}