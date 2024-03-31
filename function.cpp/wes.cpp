#include <iostream>
using namespace std;

int func(int num){
    if(num==0){
        return 0;
    }
    return func(num- 1);
}

int main() {
    int num = 5;
    int ans = func(num - 1);
    cout << ans;
}