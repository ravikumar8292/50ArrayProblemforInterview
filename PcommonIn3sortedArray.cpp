#include<bits/stdc++.h>
using namespace std;

void findCommon(int *arr1, int n, int *arr2, int m, vector<int> &v ){
    int i=0,j=0;
    while(i<n && j<m){
        if(arr1[i] < arr2[j]){
            i++;
        }
        else if(arr1[i] > arr2[j]){
            j++;
        }
        else{
            v.push_back(arr1[i]);
            i++;
            j++;
        }
    }
}


int main(){
    int arr1[] = { 1, 5, 10, 20, 40, 80 };
    int arr2[] = { 6, 7, 20, 80, 100 };
    int arr3[] = { 3, 4, 15, 20, 30, 70, 80, 120 };
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int n3 = sizeof(arr3) / sizeof(arr3[0]);
    vector<int> v1;
    vector<int> v2;

    findCommon(arr1,n1,arr2,n2,v1);
    int k = v1.size();
    findCommon(arr3,n3,v1.data(),k,v2);

    for(int i=0;i<v2.size();i++){
        cout<<v2[i] << " ";
    }
    return 0;
}