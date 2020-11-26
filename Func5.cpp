#include <iostream>
using namespace std;

int main(){
    char str[256];
    /*for(char i = 0; i < 256; i++){
        cout << i << '\n';
    }*/
    cin >> str;

    str[2] = '\0';
    cout << str << '\n';

    cout << "Hello\0world";
}