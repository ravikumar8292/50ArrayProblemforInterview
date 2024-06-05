#include<bits/stdc++.h>
using namespace std;

void sortArray(int arr[], int n){
    bool swapped = false;

    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i] > arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;

                swapped = true;
            }

        }
        if(swapped == false){
            break;
        }
    }
   
}

int main(){
    int arr[] = {30, 3, 14, 12, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    sortArray(arr,n);

    cout<<"after sorted array using bubule sort algo"<<endl;

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}