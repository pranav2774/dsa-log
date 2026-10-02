#include<bits/stdc++.h>
using namespace std;

int printFibonacciNumber(int N){
    if(N<=2){
        return (N-1);
    }
    return printFibonacciNumber(N-1) + printFibonacciNumber(N-2);
}

int main(){

    int T;
    cout<<"Enter The Number of Test Cases: ";
    cin>>T;

    while(T--){
        int N;
        cout<<"Enter The Value of N: ";
        cin>>N;

        cout<<N<<" Fibonacci Number Is: "<<printFibonacciNumber(N)<<endl;

    }
    return 0;
}