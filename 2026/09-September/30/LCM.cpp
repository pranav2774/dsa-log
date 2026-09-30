#include<bits/stdc++.h>
using namespace std;
int max(int num1,int num2){
    return (num1>num2) ? num1 : num2;
}
int main(){
    int T;
    cout<<"Enter The Number of Test Cases: ";
    cin>>T;

    while(T--){
        int LCM,num1,num2;

        cout<<"Enter The First Number: ";
        cin>>num1;
        cout<<"Enter The Second Number: ";
        cin>>num2;

        if(num1==0 || num2==0){
            cout<<"LCM of "<<num1<<" and "<<num2<<" is: "<<0<<endl;
        }

        else{
            for(int i=max(num1,num2); i<=num1*num2;i+=max(num1,num2)){
                if(i%num1==0 && i%num2==0){
                    LCM=i;
                    break;
                }
            }

            cout<<"LCM of "<<num1<<" and "<<num2<<" is: "<<LCM<<endl;
        }

    }
    return 0;
}