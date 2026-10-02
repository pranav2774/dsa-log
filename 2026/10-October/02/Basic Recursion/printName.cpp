#include<bits/stdc++.h>
using namespace std;

void printName(string name, int N){
    if(N<1){
        return ;
    }
    cout<<name<<endl;
    N--;
    printName(name,N);
}

int main(){
    string name;
    cout<<"Enter The Name: ";
    cin>>name;

    int N;
    cout<<"Enter How Many Times "<<name<<" Has To Be Printed: ";
    cin>>N;

    printName(name,N);

    return 0;
}