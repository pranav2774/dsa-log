#include<bits/stdc++.h>
using namespace std;

int Sum1TONFunctional(int N){
    if(N==0){
        return 0;
    }
    return N + Sum1TONFunctional(N-1);
}

int main(){

    int T;
    cout<<"Enter The Number of Test Cases: ";
    cin>>T;

    while(T--){
        int N;
        cout<<"Enter The Value of N: ";
        cin>>N;

        cout<<"Sum of First "<<N<<" Natural Numbers Is: "<<Sum1TONFunctional(N)<<endl;
    }
    
    return 0;
}