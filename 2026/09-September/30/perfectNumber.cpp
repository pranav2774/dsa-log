#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cout<<"Enter A Number: ";
    cin>>num;

    int sum=0;
    for(int i=1;i*i<=num;i++){
        if(num%i==0){
            sum+=i;
            if((num/i!=i) && (num/i!=num)){
                sum+=(num/i);
            }
        }
    }

    if(num==sum){
        cout<<num<<" is perfect number"<<endl;
    }
    else{
        cout<<num<<" is not perfect number"<<endl;
    }

    return 0;
}