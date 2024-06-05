// Find the majority element in the array. A majority element in an array A[] of size n is an element that appears more than n/2 times (and hence there is at most one such element). 

#include<bits/stdc++.h>
using namespace std;

void majorityElement(int *arr, int n){
    unordered_map<int,int>m;
    for(int i=0;i<n;i++){
        m[arr[i]]++;
    }
    int count = 0;
    for(auto i : m){
        if(i.second > n/2){
            count++;
            cout<<"majority Element in the array is "<< i.first<<endl;
            break;
        }
    }
    if(count < 1){
        cout<<"No Majority element "<<endl;
    }

}

int main(){
    int arr[]={3, 3, 4, 2, 3, 3, 2, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    majorityElement(arr,n);

    return 0;
}