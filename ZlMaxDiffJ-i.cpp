// Given an array arr[], find the maximum j – i such that arr[i] <= arr[j]


#include<bits/stdc++.h>
using namespace std;

int maxDifference(int *arr, int n){
    int MaxDiff = -1;
    for(int i=0;i<n-1;i++){
        for(int j=n-1;j>i;j--){
            if(arr[j] > arr[i] && MaxDiff < (j-i)){
                MaxDiff = j-i;
            }
        }
    }
    return MaxDiff;
}

int main(){
    int arr[]={34, 8, 10, 3, 2, 80, 30, 33, 1};
    int n = sizeof(arr)/ sizeof(arr[0]);

    int MaxDiff = maxDifference(arr,n);
    cout<<"\n"<<MaxDiff;

    return 0;
}