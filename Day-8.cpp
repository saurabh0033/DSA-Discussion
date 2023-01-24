#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v;
    v={9,9,9,9};
    int n=v.size();
    int num=0;
    for(int i=0;i<n;i++){
        num=num*10+v[i];
    }
    num+=1;
    //cout<<num<<endl;
    vector<int>ans;
    while(num>0){
        int rem=num%10;
        ans.push_back(rem);
        num/=10;
    }
    reverse(ans.begin(),ans.end());
    for(auto x:ans)cout<<x<<" ";
    return 0;
}
