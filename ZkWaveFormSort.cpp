// Given an unsorted array of integers, sort the array into a wave array. An array arr[0..n-1] is sorted in wave form if:
// arr[0] >= arr[1] <= arr[2] >= arr[3] <= arr[4] >= …..

#include<bits/stdc++.h>
using namespace std;

void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;

}

void WaveFormSort(int *arr, int n){
    sort(arr,arr+n);

    for(int i=0;i<n-1;i+=2){
        swap(&arr[i],&arr[i+1]);
    }
}

int main(){
    int arr[] = {10, 90, 49, 2, 1, 5, 23};
    int n = sizeof(arr) / sizeof(arr[0]);
 
    WaveFormSort(arr,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}