#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> arr = {10,20,30,40};
    int n= arr.size();
    int element = 50;

    // Shift all elements to the right
    for(int i = n - 1; i >= 0; i--) {
    	arr[i + 1] = arr[i];
    }
    arr[0] = element;
    cout << "\nArray after insertion\n";
    for (int i = 0; i <= n; i++)
        cout << arr[i] << " ";

    return 0;

}