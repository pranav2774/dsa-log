#include<bits/stdc++.h>
using namespace std;

void printNumbers(int N){
    if(N<1){
        return ;
    }
    cout<<N<<" ";
    printNumbers(--N);
}

int main(){
     
    int T;
    cout<<"Enter The Number of Test Cases: ";
    cin>>T;

    while(T--){
        int N;
        cout<<"Enter The Value of N: ";
        cin>>N;

        printNumbers(N);

        cout<<endl;

    }

    return 0;
}