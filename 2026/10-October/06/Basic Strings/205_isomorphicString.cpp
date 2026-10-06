#include<bits/stdc++.h>
using namespace std;
int main(){
    string s = "paper";
    string t = "title";

    int mapS[256];
    int mapT[256];

    //Initialize everything in mapS and mapT to -1
    for(int i=0;i<256;i++){
        mapS[i]=-1;
        mapT[i]=-1;
    }

    //Check mapping and if no mapping then create mapping
    bool isIsomorphic = true;
    for(int i=0;i<s.size();i++){
        char charS = mapS[s[i]];
        char charT = mapT[t[i]];  

        if(charS!=-1){
            if(charS!=t[i]){
                isIsomorphic=false;
                break;
            }
        }
        else{
            mapS[s[i]]=t[i];
        }

        if(charT!=-1){
            if(charT!=s[i]){
                isIsomorphic=false;
                break;
            }
        }
        else{
            mapT[t[i]]=s[i];
        }
    }

    if(isIsomorphic){
        cout<<"GIVEN TWO STRINGS ARE ISOMORPHIC :)"<<endl;
    }
    else{
        cout<<"GIVEN TWO STRINGS ARE NOT ISOMORPHIC :("<<endl;
    }

    return 0;
}