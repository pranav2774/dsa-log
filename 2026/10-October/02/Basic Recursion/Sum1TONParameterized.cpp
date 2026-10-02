#include<bits/stdc++.h>
using namespace std;

void Sum1TON(int N, int sum){
    if(N<0){
        cout<<"Total Sum: "<<sum<<endl;
        return ;
    }
    Sum1TON(N-1,sum+N);
}

int main(){
    int T;
    cout<<"Enter The Number of Test Cases: ";
    cin>>T;

    while(T--){
        int N;
        cout<<"Enter The Value of N: ";
        cin>>N;

        Sum1TON(N,0);
    }
    return 0;
}