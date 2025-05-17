//Using Recursion we find the largest number in an array
// Time Complexity: O(n)
// Space Complexity: O(1)
#include <iostream>
#include <vector>
using namespace std;

int largest(vector<int> arr,int n){
    int max = arr[0];
    for(int j=1;j<n;j++){
        if(arr[j]> max){
            max = arr[j];
        }
    }
    return max;
} 

int main(){
    vector<int> arr = {1, 2, 3, 4, 5};
    int n = arr.size();
    cout << "Largest number in the array is " << largest(arr,n) << endl;
    return 0;
}
