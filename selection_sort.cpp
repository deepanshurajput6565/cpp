#include <iostream>
#include <algorithm>

using namespace std;
int main(){
    int arr[6]={9,42,59,20,13,56};
    int temp;
    for(int i=0;i<6;i++){
        int min=i;
        
        for(int j=i+1;j<6;j++){
            if(arr[min]>arr[j]){
                min=j;
            }
            
        }
        // temp=arr[min];
        // arr[min]=arr[i];
        // arr[i]=temp;
        swap(arr[min],arr[i]);
        
    }
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
}