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

        int duplicateN=N, rev=0;
        while(N>0){
            int lastDigit = N % 10;
            rev = rev * 10 + lastDigit;
            N = N / 10;
        }

        if(duplicateN==rev){
            cout<<duplicateN<<" is Palindrome Number :)"<<endl;
        }
        else{
            cout<<duplicateN<<" is not Palindrome Number :("<<endl;
        }
    }
    return 0;
}