// Star Pattern 22
// Striver's A2Z DSA Sheet
#include<bits/stdc++.h>
using namespace std;
int min(int a, int b){
    return (a<b) ? a : b;
}
int main(){
    int T;
    cout<<"Enter The Number of Test Cases: ";
    cin>>T;

    while(T--){
        int rows;
        cout<<"Enter The Number of Rows: ";
        cin>>rows;

        for(int i=1;i<=2*rows-1;i++){
            for(int j=1;j<=2*rows-1;j++){
                int a = i;
                int b = j;
                
                if(i>rows) a = 2*rows-i;
                if(j>rows) b = 2*rows-j;

                cout<<(rows+1)-min(a,b)<<" ";
            }
            cout<<endl;
        }

    }
    return 0;
}