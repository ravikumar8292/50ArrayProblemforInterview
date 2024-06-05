// Find the Minimum element in a Sorted and Rotated Array

#include<bits/stdc++.h>
using namespace std;

void findMinEleSortandrotateArray(int *arr, int n){
    int min_ele = arr[0];
    for(int i=1;i<n;i++){
        if(arr[i] < min_ele){
            min_ele = arr[i];
        }
    }
    cout<<"Minimum Element in a sorted and rotated array is : "<< min_ele<<endl;
}

int main(){
    int arr[] = {5, 6, 1, 2, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
 
    findMinEleSortandrotateArray(arr,n);
    return 0;
}