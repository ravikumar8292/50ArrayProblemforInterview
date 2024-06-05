// Find the smallest positive number missing from an unsorted array

#include<bits/stdc++.h>
using namespace std;

void findMissingSmallestPosetiveNum(int *arr, int n){
    int temp[n+1];

    for(int i=0;i<=n;i++){
        temp[i] = 0;
    }
    for(int j=0;j<n;j++){
        if(arr[j] > 0){
            temp[arr[j]-1] = 1;
        }
    }
    for(int i=0;i<=n;i++){
        if(temp[i] == 0){
            cout<<"Missing smallest Positive Number is "<<i+1;
            break;
        }
    }
}

int main(){
    int arr[] = {5, 3, 2,4, 6, -3, -6, -1};
    int n = sizeof(arr) / sizeof(arr[0]);
 
    findMissingSmallestPosetiveNum(arr,n);
    return 0;
}