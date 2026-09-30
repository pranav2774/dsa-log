#include<bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cout<<"Enter The Value of N: ";
    cin>>N;

    int totalCount=0;
    for(int i=1;i<=N;i++){
        int count=0;
        for(int j=1;j*j<=i;j++){
            if(i%j==0){
                count++;
                if(i/j!=j){
                    count++;
                    if(count>2){
                        break;
                    }
                }
            }
        }
        if(count==2){totalCount++;}
    }

    cout<<"Total Prime Numbers From 1 To "<<N<<" Are: "<<totalCount<<endl;
    
    return 0;
}