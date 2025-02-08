#include <iostream>
using namespace std;

int main() {

    int i , j;
    cout<<"Enter i and j "<<endl;
    cin>>i;
    cin>>j;

    int arr[] = {1,2,3,4,5};
    int size = 5;
    
    swap(arr[i], arr[j]);
    for(int k=0 ; k<size ; k++){
    cout<<arr[k]<<"  ";
    }
    


}
