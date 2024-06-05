#include<bits/stdc++.h>
using namespace std;

void countPairForsum(int *arr, int n, int k){
    int count = 0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i] + arr[j] == k){
                count++;
            }
        }
    }
    cout<<count<<" ";
}


int main(){
    int k;
    int arr[] = {1, 5, 7, -1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<"enter the value of sum "<<endl;
    cin>>k;

    countPairForsum(arr,n,k);

    return 0;
}