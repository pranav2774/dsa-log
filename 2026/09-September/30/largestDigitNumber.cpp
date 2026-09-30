#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cout<<"Enter The Number of Test Cases: ";
    cin>>T;

    while(T--){
        int num;
        cout<<"Enter A Number: ";
        cin>>num;

        int duplicateNum=num,maxDigit=INT_MIN;
        while(num>0){
            int lastDigit=num%10;
            if(lastDigit>maxDigit){
                maxDigit=lastDigit;
            }
            num=num/10;
        }

        cout<<"Largest Digit in "<<duplicateNum<<" is: "<<maxDigit<<endl;
        
    }
    return 0;
}