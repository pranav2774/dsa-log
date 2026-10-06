#include<bits/stdc++.h>
using namespace std;
int main(){
    string s = "Aabb";

    unordered_map<char,int>mpp;
    for(int i=0;i<s.size();i++){
        mpp[s[i]]++;
    }

    //store mpp in form of vector --> pair<char,int>
    vector<pair<char,int>>freq;
    for(auto it : mpp){
        freq.push_back({it.first,it.second});
    }

    //sort vector 'freq' using bubble sort
    for(int i=0;i<freq.size()-1;i++){
        bool isSwap=false;
        for(int j=0;j<freq.size()-1-i;j++){
            if(freq[j].second<freq[j+1].second){
                swap(freq[j],freq[j+1]);
                isSwap=true;
            }
        }
        if(isSwap==false){
            break;
        }
    }

    //store resultant string in another string
    string ans = "";
    for(int i=0;i<freq.size();i++){
        for(int j=0;j<freq[i].second;j++){
            ans+=freq[i].first;
        }
    }

    cout<<"RESULTANT STRING: "<<ans<<endl;

    return 0;
}