#include<bits/stdc++.h>
using namespace std;
int main(){
    string strs[3] = {"cat","rat","sat"};
    int size=3;

    string reference = strs[0];
    int ansIndex=-1;

    for(int i=0;i<reference.size();i++){
        bool misMatch=false;
        for(int j=1;j<size;j++){
            if(reference[i]!=strs[j][i]){
                misMatch=true;
                break;
            }
        }
        if(misMatch==true){
            break;
        }
        ansIndex=i;
    }

    cout<<reference.substr(0,ansIndex+1);

    return 0;
}