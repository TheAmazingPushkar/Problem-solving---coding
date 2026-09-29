// to check if an array is sorted or not
#include <iostream> 
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> arr = {1,2,3,4,5};
    bool a = is_sorted(arr.begin(),arr.end());
    if(a==true)
    cout << "sorted";
    else
    cout <<"unsorted";
    return 0;
}