#include<bits/stdc++.h>
using namespace std;

int gcd(int &s,int &l){
    int i=1,res=1;
    while(i<=s){
        if(s%i==0 && l%i==0){
           res=i
        }
        i++;
    }
    cout<<res;
}

int main(){
    
    vector<int>v;
    v={11,22,11,33};
    int s=INT_MAX;
    int l=INT_MIN;
    
    for(int i=0;i<v.size();i++){
        if(v[i]<s)s=v[i];
        if(v[i]>l)l=v[i];
    }
    
    // s=*min_element(v.begin(),v.end());
    // l=*max_element(v.begin(),v.end());
    // cout<<s<<" "<<l<<endl;
    
    
    gcd(s,l);
    return 0;
}
