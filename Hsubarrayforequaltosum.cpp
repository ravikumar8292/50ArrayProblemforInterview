#include<bits/stdc++.h>
using namespace std;

void subarrayEqualToSum(int *arr, int n, int sum){
    for(int i=0;i<n;i++){
        int currentSum = arr[i];
        if(currentSum == sum){
            cout<<"index of subarray "<< i << " ";
            return;
        }
        else{
            for(int j=i+1;j<n;j++){
                currentSum += arr[j];

                if(currentSum == sum){
                    cout<< "Sum found between indexes "<< i << " and " << j << endl;
                    return;
                }
            }
        }
    }
    cout<<"no subarray found"<<" ";
    return;
}

int main(){
    int sum;
    int arr[] = {1, 4, 20, 3, 10, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<"enter sum value "<<endl;
    cin>>sum;

    subarrayEqualToSum(arr,n,sum);


    return 0;
}