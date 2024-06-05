#include<bits/stdc++.h>
using namespace std;

void MaxProductOfSubarray(int *arr, int n){
    int max = arr[0];
    for(int i=0;i<n-1;i++){
        int product = 1;
        product *= arr[i];
        for(int j=i+1;j<n;j++){
            product *= arr[j];
            if(product > max){
                max = product;
            }
        }
    }
    if(max < arr[n-1]){
        max = arr[n-1];
    }
        cout<<"max product is : "<<max<<endl;
}

int main(){
    int arr[] = {-1, -3, -10, 0, 60};
    int n = sizeof(arr) / sizeof(arr[0]);
 
    MaxProductOfSubarray(arr,n);
    return 0;
}