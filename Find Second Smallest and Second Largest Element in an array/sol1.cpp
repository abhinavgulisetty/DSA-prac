#include <bits/stdc++.h>
using namespace std;

int secondLargest(vector<int> arr,int n){
    int first = INT_MIN, second = INT_MIN;
    if( n < 2 ) return -1;
    for(int i = 0;i<n;i++) {
        if(arr[i] > first){
            second = first;
            first = arr[i];
        }
        else if(arr[i] > second && arr[i] != first){
            second = arr[i];
        }
    } 
    return second;
}

int secondSmallest(vector<int> arr, int n){
    int first = INT_MAX, second = INT_MAX;
    if ( n < 2 ) return -1;
    for(int i=0;i<n;i++){
        if(arr[i] < first){
            second = first;
            first = arr[i];
        }
        else if(arr[i] < second && arr[i] != first){
            second =arr[i];
        }
    }
    return second;
}


int main(){
    vector<int> arr = {5, 2, 3, 4, 1};
    int n = arr.size();
    cout << "Second largest number in the array is " << secondLargest(arr,n) << endl;
    cout << "Second smallest number in the array is " << secondSmallest(arr,n) << endl;
    return 0;
}