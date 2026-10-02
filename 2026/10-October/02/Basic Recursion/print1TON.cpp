#include<bits/stdc++.h>
using namespace std;

void printNumbers(int start, int end){
    if(start>end){
        return ;
    }
    cout<<start<<" ";
    printNumbers(++start,end);
}

int main(){

    int T;
    cout<<"Enter The Number of Test Cases: ";
    cin>>T;

    while(T--){
        int N;
        cout<<"Enter The Value of N: ";
        cin>>N;

        printNumbers(1,N);

        cout<<endl;
    }

    return 0;
}