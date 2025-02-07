// Count Even and Odd Numbers

// Else, count it as odd.
// Print both counts.


#include <iostream>
using namespace std;
int main() {
    
    int arr[] = {1,2,3,4,5,6,7,8,9,10,12,12,12,12,12,12};
    int even = 0;
    int odd = 0;
    int i;
    int size = sizeof(arr) / sizeof(arr[0]);
    
    for (i=0 ; i<size ; i++){
        if(arr[i] % 2 == 0){
            even = even+1;
        }
        else{
            odd = odd+1;
        }
    }
    cout<<"even = "<<even<<endl;
    cout<<"odd = "<<odd<<endl;
    return 0;
}