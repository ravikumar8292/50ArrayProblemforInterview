#include<bits/stdc++.h>
using namespace std;

int kthSmallest(int arr[], int n, int k){
    sort(arr,arr+n);
    return arr[k-1];
}

int main(){
    int k,s;
    int arr[] = {12, 3, 5, 7, 19};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<"enter kth value "<<" ";
    cin>>k;
    s = kthSmallest(arr,n,k);
    cout<<s<<endl;
    return 0;
}