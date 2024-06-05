#include<bits/stdc++.h>
using namespace std;

void SortArray(int *arr, int n){

    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i] > arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[] = {1, 12, 3, 66, 23, 6, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
 
    SortArray(arr,n);
    return 0;
}