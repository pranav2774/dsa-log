#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cout<<"Enter The Number of Test Cases: ";
    cin>>T;

    while(T--){
        int N;
        cout<<"Enter A Number: ";
        cin>>N;

        cout<<"Divisors of "<<N<<" are: ";
        for(int i=1;i<=N;i++){
            if(N%i==0){
                cout<<i<<" ";
            }
        }
    }
    return 0;
}