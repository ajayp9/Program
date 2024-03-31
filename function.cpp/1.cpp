#include<bits/stdc++.h>
using namespace std;
//function declaration
int min(int x, int y);

int main(){
    int a=5;
    int b=12;
    int ans;

    //function call
    ans=min(a,b);

    cout<<ans<<endl;
    return 0;
}

// function definition
int min(int x, int y){
    int result;
    if(x<y)
    result=x;
    else
    result=y;

    return result;
}
