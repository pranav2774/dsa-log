#include<bits/stdc++.h>
using namespace std;
int main(){
    string s = "abcde";
    string goal = "abced";

    if(s.size()!=goal.size()){
        cout<<"false"<<endl;
    }

    bool isRotate=false;
    for(int i=0;i<s.size();i++){
        char firstChar = s[0];
        bool misMatch=false;
        for(int j=1;j<s.size();j++){
            s[j-1]=s[j];
        }
        s[s.size()-1]=firstChar;

        //compare s and goal
        for(int i=0;i<s.size();i++){
            if(s[i]!=goal[i]){
                misMatch=true;
                break;
            }
        }

        if(misMatch==false){
            isRotate=true;
            break;
        }
    }

    if(isRotate){
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }

    return 0;
}