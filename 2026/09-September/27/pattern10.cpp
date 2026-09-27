// Star Pattern 10
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

        //upper part
        for(int i=1;i<=rows;i++){
            for(int j=1;j<=i;j++){
                cout<<"*";
            }
            cout<<endl;
        }
        //lower part
        for(int i=1;i<=rows;i++){
            for(int j=1;j<=rows-i;j++){
                cout<<"*";
            }
            cout<<endl;
        }
    }
    return 0;
}