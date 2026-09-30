#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cout<<"Enter A Number: ";
    cin>>num;

    //find totalDigits in number
    int totalDigits=0, copy1=num;
    while(copy1>0){
        totalDigits++;
        copy1=copy1/10;
    }

    //find sum of power of each digit w.r.t to totalDigits
    int sum=0, copy2=num;
    while(copy2>0){
        int lastDigit = copy2%10;
        int exp = totalDigits;
        int base = lastDigit;
        int res = 1;
        while(exp!=0){
            res=res*base;
            exp--;
        }
        sum+=res;
        copy2=copy2/10;
    }

    //check sum
    if(sum==num){
        cout<<num<<" is armstrong number :)"<<endl;
    }
    else{
        cout<<num<<" is not armstrong number :)"<<endl;
    }
    return 0;
}