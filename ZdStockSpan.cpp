// The Stock Span Problem

// Not working

#include<bits/stdc++.h>
using namespace std;

void StockSpanProblem(int *arr, int n){
	vector<int>v;
	v[0] = 1;
	int i=0,j=1;
	while(i<n && j<n){
		int count = 1;
		if(arr[i] > arr[j]){
			v[j] = 1;
			i++;
			j++;
		}
		else if(arr[i] < arr[j]){
			int m = i;
			while(m > 0 ){
				if(arr[j] > arr[m]){
					count++;
				}
				m--;
			}
			v[j] = count;
			i++;
			j++;

		}
	}
	for(int k=0;k<v.size();k++){
		cout<<v[k] <<" ";
	}
	
}

int main(){
    int arr[] = {100,80,60,70,60,75,85};
    int n = sizeof(arr) / sizeof(arr[0]);
 
    StockSpanProblem(arr,n);

    return 0;
}