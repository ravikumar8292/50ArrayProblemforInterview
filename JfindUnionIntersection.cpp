#include<bits/stdc++.h>
using namespace std;

void findUnion(int *arr1, int *arr2, int n, int m){
 vector<int>v1;
        for(int i=0;i<n;i++){
          v1.push_back(arr1[i]);
        }
        for(int j=0;j<m;j++){
          v1.push_back(arr2[j]);
        }
        
        sort(v1.begin(), v1.end());
        for(int i=0;i<v1.size();i++){
            if(v1[i] == v1[i+1]){
                v1.erase(v1.begin() + i);
            }
        }

        cout<<"union of two array is ";
        for(int i=0;i<v1.size();i++){
            cout<< v1[i] <<" ";
        }
        cout<<endl;

}
void findIntersection(int *arr1, int *arr2, int n, int m){
    vector<int>v2;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(arr1[i] != arr1[i+1]){
                    if(arr1[i] == arr2[j]){
                        v2.push_back(arr1[i]);
                        break;
                    }
                }
               
            }
        }
        cout<<"intersection of two array is ";
        for(int i=0;i<v2.size();i++){
            cout<< v2[i] <<" ";
        }
}

int main(){
    int arr1[] = {1, 3, 4, 5, 7};
    int arr2[] = {2, 3, 5, 6};
    int n = sizeof(arr1) / sizeof(arr1[0]);
    int m = sizeof(arr2) / sizeof(arr2[0]);

    findUnion(arr1,arr2,n,m);
    findIntersection(arr1,arr2,n,m);


    return 0;
}