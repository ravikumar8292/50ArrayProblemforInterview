#include<bits/stdc++.h>
using namespace std;

vector<int> findDuplicates(int *arr, int n){

    unordered_map<int, int>elementcount;
    vector<int>duplicate;
    for(int i=0;i<n;i++){
        elementcount[arr[i]]++;
    }
    
    for(auto it : elementcount){
       
        
        if(it.second > 1){
            duplicate.push_back(it.first);
        }
        
    }
    
    return duplicate;
}

int main(){
    vector<int>v1;
    int arr[] = {1, 2, 3, 6, 3, 6, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
 
    v1 = findDuplicates(arr,n);
    for(int i=0;i<v1.size();i++){
        cout<<v1[i]<<" ";
    }
    return 0;
}






// #include<bits/stdc++.h>
// using namespace std;

// void findDuplicates(int *arr, int n)

// int main(){
//     int arr[] = {1, 2, 3, 6, 3, 6, 1};
//     int n = sizeof(arr) / sizeof(arr[0]);
 
//     findDuplicates(arr,n);
//     return 0;
// }