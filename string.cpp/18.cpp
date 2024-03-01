//Remove consecutive duplicates
#include <iostream>
#include <cstring>
using namespace std;

string removeConsecutiveDuplicates(string input)
{
    // Write your code here
    string str = "";
    for(int i=0;i<input.size();i++){
        if(input[i]!=input[i+1])
            str = str+input[i];
    }
    return str;
}

int main()
{
    string str;
    cin >> str;
    string ans = removeConsecutiveDuplicates(str);
    cout << ans << endl;
}