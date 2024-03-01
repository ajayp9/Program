//Remove character
#include<bits/stdc++.h>
using namespace std;
string removeAllOccurencesOfChar(string input, char c){
    string str;
    for(int i=0;i<input.size();i++){
        if(input[i]!=c){
            str.push_back(input[i]);
        }
        else
        continue;
    }
    return str;
}
int main(){
    string input;
    char c;
    cin>>input>>c;
    string output=removeAllOccurencesOfChar(input , c);
    cout<<output<<endl;
    return 0;
}