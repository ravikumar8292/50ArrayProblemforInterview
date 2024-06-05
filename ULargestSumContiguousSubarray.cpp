#include<bits/stdc++.h>
using namespace std;

void LargestSumContiguousSubarray(int *arr, int n){
    int Max = arr[0];
    for(int i=0;i<n-1;i++){
        int sum=0;
        sum += arr[i];
        for(int j=i+1;j<n;j++){
            sum += arr[j];
            if(sum > Max){
                Max = sum;
            }
        }
    }
    cout<<"Max "<<Max<<" ";

}

int main(){
    int arr[] = {-2,-3,4,-1,-2,1,5,-3};
    int n = sizeof(arr) / sizeof(arr[0]);
 
    LargestSumContiguousSubarray(arr,n);
    return 0;
}