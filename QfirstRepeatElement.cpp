#include<bits/stdc++.h>
using namespace std;

void firstRepeatingElement(int *arr, int n){
    int i=0,j=i+1;
    while(i<n && j<n){
        if(arr[i] != arr[j]){
            j++;
        }
        else{
            cout<<"first Repeating Element in array is: "<<arr[i]<<" ";
            break;
        }
        if(j == n-1){
            i++;
            j=i+1;
        }
    }
}

int main(){
    int arr[] = {1, 2, 3, 6, 3, 6, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
 
    firstRepeatingElement(arr,n);
    return 0;
}




// newQuestion arr[] = {2,3,4,9,3,2} 
// output is 3 because of 3 is firstly repeatin number in array