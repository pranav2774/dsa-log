#include<bits/stdc++.h>
using namespace std;

int printFactorialFunctional(int N){
    if(N==0 || N==1){
        return 1;
    }

    return N * printFactorialFunctional(N-1);
}

int main(){

    int T;
    cout<<"Enter The Number of Test Cases: ";
    cin>>T;

    while(T--){
        int N;
        cout<<"Enter The Value of N: ";
        cin>>N;

        cout<<"Factorial of "<<N<<" is: "<<printFactorialFunctional(N)<<endl;

    }
    
    return 0;
}