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

        int duplicateNum=num,count=0;
        while(num>0){
            int lastDigit=num%10;
            if(lastDigit%2!=0){
                count++;
            }
            num=num/10;
        }

        cout<<"Number of odd digits in "<<duplicateNum<<" is: "<<count<<endl;
    }
    return 0;
}