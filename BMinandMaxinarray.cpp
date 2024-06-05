#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1, 423, 6, 46, 34, 23, 13, 53, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    sort(arr , arr+n);

    cout << "min-" << arr[0] << " max-" << arr[n - 1] << endl;

    return 0;
}