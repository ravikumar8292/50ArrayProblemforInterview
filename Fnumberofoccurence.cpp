#include<bits/stdc++.h>
using namespace std;

void highestNOfO(int *arr , int n){
    int max = 0;
    int maxArrayValue;
    for(int i=0;i<n;i=i+(max+1)){
        int count = 0;
        for(int j=i+1;j<n;j++){
            if(arr[i] == arr[j]){
                count++;
            }
        }
        if(count > max){
            max = count;
            maxArrayValue = arr[i];
        }
        if(i == n-1){
            cout<<"maxArrayValue"<<maxArrayValue<<" "<<max+1<<endl;
        }
    }

}

int main(){
    int arr[] = {1, 1, 2, 2, 2, 2, 3, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    highestNOfO(arr,n);

    return 0;
}