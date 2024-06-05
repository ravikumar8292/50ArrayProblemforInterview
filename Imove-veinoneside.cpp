#include<bits/stdc++.h>
using namespace std;

void moveNegativeInOneSide(int *arr, int n){
    sort(arr, arr+n);

    for(int i=0;i<n;i++){
        cout<<arr[i] << " ";
    }
}

int main(){
    int arr[] = {-12, 11, -13, -5, 6, -7, 5, -3, -6};
    int n = sizeof(arr) / sizeof(arr[0]);

    moveNegativeInOneSide(arr,n);

    return 0;
}