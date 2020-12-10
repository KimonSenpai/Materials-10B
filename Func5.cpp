#include <iostream>
using namespace std;


void Add(int&, int);

template<typename T>
void Swap(T& a, T& b){
    T t = a;
    a = b;
    b = t;
}

int main(){
    char str[256];
    /*for(char i = 0; i < 256; i++){
        cout << i << '\n';
    }*/
    int a = 3, b = 5;
    Swap(a, b);
    cin >> str;

    str[2] = '\0';
    cout << str << '\n';

    cout << "Hello\0world";
}

void Add(int& a, int b = 1){
    a += b;
}