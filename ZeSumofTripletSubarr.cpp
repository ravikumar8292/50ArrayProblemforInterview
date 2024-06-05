// Triplet Sum in Array
// simple method using three nested loops. but it take O(n3)
// so Triplet Sum in Array (3sum) using Two pointer technique it take only O(n2):

#include<bits/stdc++.h>
using namespace std;

bool TripletSuminArray(int *arr, int n, int s){

    sort(arr, arr+n);
    for(int i=0;i<n-2;i++){
        int l = i+1;
        int r = n-1;
        while(l != r){
            if(arr[i]+arr[l]+arr[r] == s){
                cout<<arr[i]<<"+"<<arr[l]<<"+"<<arr[r]<<"="<<s<<endl;
                return true;
            }
            else if(arr[i]+arr[l]+arr[r] < s){
                l++;
            }
            else{
                r--;
            }
        }
    }
    return false;

}

int main(){
    int sum;
    int arr[] = {12, 3, 4, 1, 6, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout<<"Enter the sum value"<<endl;
    cin>> sum;

    TripletSuminArray(arr,n,sum);

    return 0;
}