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

        int orgNumber = N, rev=0;
        while(N>0){
            int lastDigit = N % 10;
            rev = rev * 10 + lastDigit;
            N = N / 10;
        }

        cout<<"Original Number="<<orgNumber<<"--> Reversed Number="<<rev<<endl;
    }
    return 0;
}