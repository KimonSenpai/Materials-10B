#include <iostream>
using namespace std;


int Add(int& a, int b){
    //a = 3;
    return a + b;
}

void swap(int& a, int& b){
    int t = a;
    a = b;
    b = t;
}


int main(){
    int x, y;
    cin >> x >> y;
    cout << Add(x, y) << ' ' << x << '\n';
    cout << x << ' ' << y << '\n';
    swap(x, y);
    cout << x << ' ' << y << '\n';
}