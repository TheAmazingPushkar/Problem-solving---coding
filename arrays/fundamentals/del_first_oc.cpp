// to delete the first occurrence of an element from an array
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int> arr = {10,20,20,20,30};
    int n=arr.size();
    int ele = 20;
    auto lol =find(arr.begin(),arr.end(),ele); //finding th elemnet

    if(lol!=arr.end()){
        arr.erase(lol);
    }
    cout << "\nArray after deletion\n";
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";

    return 0;

}