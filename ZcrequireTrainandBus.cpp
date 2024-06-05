// Minimum Number of Platforms Required for a Railway/Bus Station


#include<bits/stdc++.h>
using namespace std;

int findMaxPlatform(int *arr,int *dep, int n){

    sort(arr,arr+n);        //900, 940, 950, 1100, 1500, 1800
    sort(dep,dep+n);        //910, 1120, 1130, 1200, 1900, 2000
    
    int require_Platform =1 , result =1;
    int i=1,j=0;
    while(i<n && j<n){
        if(arr[i] <= dep[j]){
            require_Platform ++;
            i++;
        }
        else if(arr[i] > dep[j]){
            require_Platform --;
            j++;
        }

        if(require_Platform > result){
            result = require_Platform;
        }
    }
    return result;

}

int main(){
    int arr[] = {100, 300, 500};
    int dep[] = {900, 400, 600};
    int n = sizeof(arr) / sizeof(arr[0]);
 
    int res = findMaxPlatform(arr,dep,n);
    cout<<"result is "<<res;
    return 0;
}