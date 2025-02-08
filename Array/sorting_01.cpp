#include <iostream>
using namespace std;
void sort(int arr[] , int size){
    int zero = 0;
    int one = 0;
    for(int i=0; i<size ; i++){
        if(arr[i] == 0){
            zero = zero + 1;
        }
        if(arr[i] == 1){
            one = one + 1;
        }
    }
    int i = 0;
    for(; i<zero ; i++){
        arr[i] = 0;
    }
    for(; i<size; i++){
        arr[i] = 1 ; 
    }
}
int main() {
    int size;
    cout<<"size"<<endl;
    cin >> size;
    
    int arr[size];
    for(int i = 0 ; i<size ; i++){
        cout<<"Enter element at indec :"<<i<<endl;
        cin>>arr[i];
    }
    
    sort(arr , size);
    
    for(int i = 0 ; i<size ; i++){
        cout<<arr[i] << " ";
    }
}
    
    
