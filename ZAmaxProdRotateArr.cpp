// Maximum sum of i*arr[i] among all rotations of a given array


#include<bits/stdc++.h>
using namespace std;

void findMaxProOfRotateArray(int *arr, int n){
    int Max = arr[0];
    vector<int>v;
    for(int i=0;i<n;i++){

        for(int j=1;j<n;j++){
            v.push_back(arr[j]);
        }
        v.push_back(arr[0]);

        int sum=0;
        for(int k=0;k<n;k++){
            sum += v[k]*k;
        }
        if(Max < sum){
            Max = sum;
        }
        v.clear();
    }
    cout<<"Maximum sum of i*arr[i] among all rotations of a given array "<<Max<<endl;
}

int main(){
    int arr[] = {8, 3, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
 
    findMaxProOfRotateArray(arr,n);
    return 0;
}