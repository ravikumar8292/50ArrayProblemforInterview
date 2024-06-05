#include<bits/stdc++.h>
using namespace std;

void FindMissingNumber(int *arr, int n){
    int temp[n+1];

    for(int i=0;i<=n;i++){
        temp[i] = 0;
    }
    for(int j=0;j<n;j++){
        temp[arr[j]-1] = 1;
    }
    for(int i=0;i<=n;i++){
        if(temp[i] == 0){
            cout<< i+1;
        }
    }
}

int main(){
    int arr[] = {5, 3, 1, 4, 7, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    FindMissingNumber(arr,n);

    return 0;
}