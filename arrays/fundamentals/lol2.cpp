#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> arr;
    //adding elements

    arr.push_back(10);
    arr.push_back(20);
    arr.push_back(30);

    //printing elements
    for(int i=0;i<arr.size();i++)
    {
        cout << arr[i] << " ";
    }
   
    return 0;

}