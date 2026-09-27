// Star Pattern 12
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

        int nbsp = 2*(rows-1);
        for(int i=1;i<=rows;i++){
            //numbers-1
            for(int j=1;j<=i;j++){
                cout<<j;
            }
            //spaces
            for(int k=1;k<=nbsp;k++){
                cout<<" ";
            }
            //numbers-2
            for(int l=i;l>=1;l--){
                cout<<l;
            }
            nbsp-=2;
            cout<<endl;
        }
    }
    return 0;
}