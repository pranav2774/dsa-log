// Star Pattern 11
// Striver's A2Z DSA Sheet
#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cout<<"Enter The Number of Test Cases: ";
    cin>>T;

    while(T--){
        int rows;
        cout<<"Enter The Number of Rows: ";
        cin>>rows;
        int a;
        for(int i=1;i<=rows;i++){
            if(i%2==0){a=0;}//even rows
            if(i%2!=0){a=1;}//odd rows
            for(int j=1;j<=i;j++){
                cout<<a;
                if(a==1) a=0;
                else a=1;
            }
            cout<<endl;
        }
    }
    return 0;
}