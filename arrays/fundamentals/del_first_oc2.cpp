// deletion of first occurrence of an element in an array
#include <iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> arr = {10,20,20,20,30};
    int n = arr.size();
    int ele = 20;

    bool found = false;
    for(int i=0;i<n;i++){
        if(found){
            arr[i-1] = arr[i];
        }
        else if(arr[i] == ele){
            found = true;
        }
    }

    if(found == true)
        n--;
    cout << "\nArray after deletion\n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
    
}