#include<bits/stdc++.h>
using namespace std;

void NegAndPosAlternative(int *arr, int n){
    vector<int> pos,neg,result;
    for(int i=0;i<n;++i){
        if(arr[i] >= 0){
            pos.push_back(arr[i]);
        }
        else{
            neg.push_back(arr[i]);
        }
    }

    int i=0,j=0;
    bool ispos = false;
    while(i < pos.size() && j < neg.size()){
        if(ispos == true){
            result.push_back(pos[i++]);
        }
        else{
            result.push_back(neg[j++]);
        }
        ispos = !ispos; 
    }
    while(i < pos.size()){
        result.push_back(pos[i++]);
    }
    while(j < neg.size()){
        result.push_back(neg[j++]);
    }

    for(int i=0;i<n; i++){
        cout<<result[i] <<" ";
    }
    cout<<endl;
}

int main(){
    int arr[] = {1, 2, 3, -4, -1, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<"Print Negative and positive alternative "<<endl;
    NegAndPosAlternative(arr,n);
    return 0;
}