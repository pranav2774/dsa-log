#include<bits/stdc++.h>
using namespace std;
int main(){
    int num1,num2,gcd=1;
    
    cout<<"Enter The First Number: ";
    cin>>num1;
    cout<<"Enter The Second Number: ";
    cin>>num2;

    int copyNum1=num1, copyNum2=num2;

    while(num1!=0 && num2!=0){
        if(num1>num2) num1=num1%num2;
        else num2=num2%num1;
    }

    if(num1==0) cout<<"GCD of "<<copyNum1<<" and "<<copyNum2<<" is: "<<num2<<endl;
    else cout<<"GCD of "<<copyNum1<<" and "<<copyNum2<<" is: "<<num1<<endl;

    return 0;
}

// Time Complexity: O(log(min(num1,num2)))