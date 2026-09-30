#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cout<<"Enter A Number: ";
    cin>>num;

    // A.Brute Force Solution
    // int count=0;
    // for(int i=1;i<=num;i++){
    //     if(num%i==0){
    //         count++;
    //     }
    // }

    // if(count==2){
    //     cout<<num<<" is a Prime Number"<<endl;
    // }
    // else if(num==1){
    //     cout<<num<<" is neither prime nor composite number"<<endl;
    // }
    // else{
    //     cout<<num<<" is composite number"<<endl;
    // }

    // B.Optimal Solution
    int count = 0;
    for(int i=1;i*i<=num;i++){
        if(num%i==0){
            count++;
            if(num/i!=i){
                count++;
            }
        }
    }

    if(num==1){
        cout<<num<<" is neither prime nor composite number"<<endl;
    }
    else if(count==2){
        cout<<num<<" is prime number"<<endl;
    }
    else{
        cout<<num<<" is composite number"<<endl; 
    }
    
    return 0;
}