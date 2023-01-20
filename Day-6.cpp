#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v;
    //v={3,1,-2,-5,2,-4};
    //v={-2,3,1,2,3,-4,-6,-7};
    v={1,-1};
    int n=v.size();
    vector<int>v1,v2;
    for(int i=0;i<n;i++){
        if(v[i]<0){
            v1.push_back(v[i]);
        }
        else{
            v2.push_back(v[i]);
        }
    }
    
    vector<int>ans;
    for(int i=0;i<v1.size();i++){
        ans.push_back(v1[i]);
        ans.push_back(v2[i]);
    }
    
    for(auto x:ans)cout<<x<<" ";
    return 0;
}
