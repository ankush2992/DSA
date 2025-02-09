#include <iostream>
using namespace std;


    void check(int arr[] , int size , int target){
        
        for(int i = 0 ; i<size ; i++){
            for(int j = 0 ; j<size ; j++){
                
                if(arr[i] == arr[j]){
                    cout<<"same";
                }
                
                cout<<"("<<arr[i]<<","<<arr[j]<<")"<<" | ";
                
               

                if(arr[i] + arr[j] == target){
                    cout<<"Pair : "<<arr[i]<<","<<arr[j]<<endl;
                 
                }
            }
            
        }
       
    }

   

int main() {
    
    int size;
    cout<<"Enter size of array :"<<endl;
    cin>>size;
    
    int target;
    cout<<"Enter the target value to find in pairs :"<<endl;
    cin>>target;
    
    int arr[size];
    for(int i = 0 ; i<size ; i++){
        cout<<"Enter the elements of the array in (INDEX) : "<<i<<endl;
        cin>>arr[i];
    }
    
    
     check(arr , size , target);
    
    
    
    
    
    return 0;
}