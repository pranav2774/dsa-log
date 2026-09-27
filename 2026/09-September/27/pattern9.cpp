// Star Pattern 9
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
        
        //upper diamond
        for(int i=1;i<=rows;i++){
            //spaces
            for(int j=1;j<=rows-i;j++){
                cout<<" ";
            }
            //stars
            for(int k=1;k<=2*i-1;k++){
                cout<<"*";
            }
            cout<<endl;
        }
        //lower diamond
        for(int i=1;i<=rows;i++){
            //spaces
            for(int j=1;j<=i-1;j++){
                cout<<" ";
            }
            //stars
            for(int k=1;k<2*(rows+1-i);k++){
                cout<<"*";
            }
            cout<<endl;
        }
    }
    return 0;
}