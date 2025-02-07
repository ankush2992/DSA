// Reverse an Array
// Use a loop to print elements from the last index (n-1) to the first (0).

#include <iostream>
using namespace std;
int main() {
    
    int arr[] = {1,2,3,4,5,6,7,8,9,31,3,13,1,31,3,1,31,3,1,31,3,13,1,31,235,236,34,53,2,5,23};
    
    int size = sizeof(arr) / sizeof(arr[0]);

    
    for (int i=size-1 ; i>=0 ; i--){
        cout<<arr[i]<<" ";
    }
    return 0;
}