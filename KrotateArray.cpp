#include<bits/stdc++.h>
using namespace std;

void rotateArray(int *arr, int n){
    int lastElement = arr[n-1];
    for(int i=n-1;i>0;i--){
        arr[i] = arr[i-1];
        }
    arr[0] = lastElement;
}

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout<<"before rotated array"<<endl;
    for(int i=0;i<n;i++){
        cout<< arr[i]<< " ";
    }

    rotateArray(arr,n);

    cout<<endl;
    cout<<"after rotated array "<<endl;
    for(int i=0;i<n;i++){
        cout<< arr[i]<< " ";
    }

    return 0;
}