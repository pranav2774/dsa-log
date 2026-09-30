#include<bits/stdc++.h>
using namespace std;
int min(int a,int b){
    return (a<b) ? a : b;
}
int main(){
    int num1,num2,gcd=1;

    cout<<"Enter The First Number: ";
    cin>>num1;
    cout<<"Enter The Second Number: ";
    cin>>num2;

    for(int i=min(num1,num2);i>=2;i--){
        if(num1%i==0 && num2%i==0){
            gcd=i;
            break;
        }
    }

    cout<<"GCD of "<<num1<<" and "<<num2<<" is: "<<gcd<<endl;

    // Time complexity: O(min(num1,num2))
    return 0;
}