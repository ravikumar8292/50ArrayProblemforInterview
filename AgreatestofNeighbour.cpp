#include<bits/stdc++.h>
using namespace std;

int findGreatestofNeighbour(int arr[], int n){

    if(n ==  1){
        return 0;
    }
    if(arr[0] >= arr[1]){
        return 0;
    }
    // if(arr[n-1] >= arr[n-2]){
    //     return n-1;
    // }

    for(int i=1;i<n-1;i++){
        if(arr[i] >= arr[i-1] && arr[i] >= arr[i+1]){
            int Greatest = arr[i];
            return Greatest;
        }
    }
}

int main(){
    int arr[] = {1, 3, 20, 4, 19, 10,23,50};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout<<"find greatest value of neighbour of left and right "<<findGreatestofNeighbour(arr, n);

    return 0;
}