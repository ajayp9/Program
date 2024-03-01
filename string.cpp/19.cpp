//Reverse each word
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

string reverseEachWord(string input)
{
    // Write your code here
    int n;
    n = input.size();
    string str = "";
    int k =0;
    for(int i=0;i<n;i++){
        if(input[i]==' '){
            for(int j=i-1;j>=k;j--){
                str = str+input[j];
            }
            str = str+" ";
            k = i;
        }
        else
            continue;
    }
    if(k<n){
        for(int j = n-1;j>=k;j--){
            str = str + input[j];
        }
    }
    return str;
}

int main()
{

    string str;
    getline(cin, str);
    string ans = reverseEachWord(str);
    cout << ans << endl;
    
}