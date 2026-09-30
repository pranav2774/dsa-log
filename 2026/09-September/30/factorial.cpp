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

        int fact=1;
        for(int i=2;i<=num;i++){
            fact*=i;
        }

        cout<<"Factorial of "<<num<<" is: "<<fact<<endl;
        
    }
    return 0;
}