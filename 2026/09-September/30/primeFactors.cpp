#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cout<<"Enter A Number Whose Prime Factors Has To Be Displayed: ";
    cin>>num;

    int smallestPrime=2;
    cout<<"Prime Factors Of "<<num<<" are: ";
    while(num!=1){
        if(num%smallestPrime==0){
            cout<<smallestPrime<<" ";
            num=num/smallestPrime;
        }
        else{
            smallestPrime++;
        }
    }
    
    return 0;
}