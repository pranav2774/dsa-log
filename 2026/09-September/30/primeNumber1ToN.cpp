#include<bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cout<<"Enter The Value of N: ";
    cin>>N;

    cout<<"Prime Numbers From 1 To "<<N<<" are: ";
    for(int i=2;i<=N;i++){
        int num=i,count=0;
        for(int j=1;j*j<=num;j++){
            if(num%j==0){
                count++;
                if(num/j!=j){
                    count++;
                    if(count>2){break;}
                }
            }
        }
        if(count==2) cout<<num<<" ";
    }
    
    return 0;
}