//create all substring of a string
#include<bits/stdc++.h>
using namespace std;

 void subseq(string s, string ans){

    if(s.lenght()==0){
        cout<<ans<<endl;
        return;
    }

    char ch=s[0];
    srting ros=s.substr(1);

    subseq(ros,ans);
    subseq(ros,ans+ch);
 }
 int main(){
    subseq("ABC", "");
    cout<<endl;
 }