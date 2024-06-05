#include<bits/stdc++.h>
using namespace std;

void reverseString(str){
    int n = str.size();
    string strt(n,' ');

    for(int i=0;i<n;i++){
        strt[i] = str[n-1-i];
    }
    cout<<"reverse string is " << strt;
}

int main(){
    string s;
    cin>>s;

    reverseString(s);

    return 0;
}