//move all x to the end of the string
#include<bits/stdc++.h>
using namespace std;

string moveallx(string s){
    if(s.length()==0){
        return "";
    }
    char ch=s[0];
    string ans=moveallx(s.substr(1));

    if(ch=='x'){
        return ans+ch;
    }
    else{
        return ch+ans;
    }
}
int main(){

    cout<<moveallx("axxbdxcefxhix")<<endl;
}