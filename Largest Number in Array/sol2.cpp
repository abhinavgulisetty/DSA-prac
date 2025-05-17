#include<bits/stdc++.h>
using namespace std;

int largest(vector<int> &arr, int n){ // & Used for efficient memory usage (Editing the original array)
    sort(arr.begin(),arr.end());
    return arr[n-1];
}

int main(){
    vector<int> arr = {1, 2, 3, 4, 5};
    int n = arr.size();
    cout << "Largest number in the array is " << largest(arr,n) << endl;
    return 0;
}
