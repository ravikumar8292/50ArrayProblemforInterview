#include<bits/stdc++.h>
using namespace std;

bool sumOfSubArrayIsZero(int *arr, int n){
   if(arr[n-1] ==  0) return true;
   for(int i=0;i<n-1;i++){
    int sum=0;
    if(arr[i] == 0) return true;
    sum = sum+arr[i];
    for(int j=i+1;j<n;j++){
        sum += arr[j];
        if(sum == 0){
            return true;
        }
    }
   }
   return false;
}

int main(){
    int arr[] = {4, 2, -3, 1, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
 
    if(sumOfSubArrayIsZero(arr,n)){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
    return 0;
}