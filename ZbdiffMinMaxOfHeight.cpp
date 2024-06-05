// Minimize the maximum difference between the heights

#include<bits/stdc++.h>
using namespace std;

void diffMinMaxOfHeight(int *arr, int n, int k){
    sort(arr,arr+n);           // {1,5,10,15} and k=6
    int minEle = arr[0];
    int maxEle = arr[n-1];
    int res = maxEle - minEle;

    for(int i=1;i<n;i++){
        if(arr[i]-k < 0){
            continue;
        }

        minEle = min(arr[0] + k , arr[i]-k); 
        maxEle = max(arr[i-1]+k ,arr[n-1]-k); 
        res = min(res, maxEle-minEle);
    }

    cout<<"answer is "<<" "<<res;

}

int main(){
    int k;     // k=3;
    int arr[] ={1, 5, 15, 10};
    int n = sizeof(arr) / sizeof(arr+n);
    cout<<"enter the value of k "<<endl;
    cin>>k;

    diffMinMaxOfHeight(arr,n,k);

    return 0;
}