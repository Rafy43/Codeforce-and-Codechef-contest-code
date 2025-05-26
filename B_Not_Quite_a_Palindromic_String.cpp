#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int z=0,o=0;
        for(char c:s){
            if(c=='0'){
                z++;
            }
            else if(c=='1'){
                o++;
            }
        }
        int max_g=n/2;
        int min_g=max_g-min(z,o);
        if(min_g<=k && max_g>=k && (k-min_g)%2==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }
}