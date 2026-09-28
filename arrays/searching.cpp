#include<iostream>
#include<vector>
using namespace std;

int linear_search(vector<int> &arr, int x)
{
    for(int i=0;i<arr.size();i++){
        if(arr[i]==x){
            return i;
        }
    }
    return -1;
}

int binary_search(vector<int> &arr, int x)
{
    int low = 0;
    int high = arr.size()-1;
    while(low<=high)
    {
        int mid = low + (high - low)/2;

        if(arr[mid] == x)
        return mid;
        if(arr[mid]<x)
        low = mid+1;
        else
        high = mid -1 ;
    }
    return -1;
}

int main()
{
    vector<int> arr = {1,2,3,4,5};
    int n = arr.size();
    int x = 1;
    int res = binary_search(arr,x);
    if(res!=-1){
        cout << "element present at index " <<res <<endl;
    }
    else{
        cout <<"element not present";
    }
    return 0;
}