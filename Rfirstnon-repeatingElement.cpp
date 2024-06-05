#include<bits/stdc++.h>
using namespace std;

void findNonRepeatingElement(int *arr, int n){
   int i=0,j=i+1;
   bool isRepeat = true;
   while(i<n && j<n+1){
        if(arr[i] != arr[j]){
            j++;
            isRepeat = false;
        }
        else{
            i++;
            j = i+1;
            isRepeat = true;
        }
        if(j == n && isRepeat == false){
            cout<<arr[i]<<" ";
            return;
        }
   }
}

int main(){
    int arr[] = {1, 2, 3, 6, 17, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
 
    findNonRepeatingElement(arr,n);
    return 0;
}