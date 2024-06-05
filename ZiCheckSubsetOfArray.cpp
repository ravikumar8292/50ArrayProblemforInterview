#include<bits/stdc++.h>
using namespace std;

bool CheckIsSubsetOfArray(int *arr1, int m, int *arr2, int n){

    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<m;j++){
            if(arr2[i] == arr1[j]){
                count++;
            }
        }
        if(count < 1){
            return false;
        }
    }
    return true;

}

int main(){
    int arr1[] = { 11, 1, 13, 21, 3, 7 };
    int arr2[] = { 11, 3, 7, 1 };
    int m = sizeof(arr1) / sizeof(arr1[0]);
    int n = sizeof(arr2) / sizeof(arr2[0]);

    if(CheckIsSubsetOfArray(arr1,m,arr2,n)){
        cout<<"Arr2 is the subset of arr1 "<<endl;
    }
    else{
        cout<<"Arr2 is the not subset of arr1 "<<endl;
    }

    return 0;
}