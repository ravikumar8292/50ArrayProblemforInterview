#include<bits/stdc++.h>
using namespace std;

void LongestConsecutiveSubsequence(int *arr, int n){
    sort(arr,arr+n);
    int max = arr[n-1];
    
    int i=0,j=0;
    int temp[max];
    while(i<max){
        temp[i] = 0;
        i++;
    }
    while(j<n){
        temp[arr[j]-1] = 1;
        j++;
    } 
    int count=0;
    int LongestConsecutive = 0;
    for(int i=0;i<max;i++){
        if(temp[i] == 1){
            count++;
        }
        if(temp[i] == 0 || i == max-1){
            if(LongestConsecutive < count){
                LongestConsecutive = count;
            }
            count=0;
        }
    }
    cout<<LongestConsecutive <<endl;

}

int main(){
    int arr[] = {1, 9, 3, 10, 4, 20, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
 
    LongestConsecutiveSubsequence(arr,n);
    return 0;
}