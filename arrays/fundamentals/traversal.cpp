#include<iostream>
#include<vector>
using namespace std;

int main()
{
// two way array traversal
vector<int> arr;

arr = {3,2,3,4,5,66,4};
cout << "traversal of array in dynamic mode" << endl;


for(int i=0;i<arr.size();i++){
    cout << arr[i] <<" " ;
}
cout << endl;
return 0;
}