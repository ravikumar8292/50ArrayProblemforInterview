#include<bits/stdc++.h>
using namespace std;

unsigned long long factorialOfLargestNumber(int N){
    unsigned long long pro = 1;
    for(unsigned long long i=2;i<=N;i++){
        pro = pro*i;
    }
    return pro;
}

int main(){
    
    int N = 50;
    cout<<factorialOfLargestNumber(N)<<endl;
    return 0;
}