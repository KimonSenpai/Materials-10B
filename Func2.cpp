#include <iostream>
using namespace std;

int Sum(int a, int b){
    return a + b;
}

double Sum(double a, double b = 1){
    return a + b;
}
void swap(int& a, int& b){
    int t = a;
    a = b;
    b = t;
}
/*
double Sum(int a, int b){
    return a + b;
}
*/
int main(){
    int c = Sum(2, 5), d = 6;
    cout << c << '\t' << d << '\n';
    swap(c, d);
    cout << c << '\t' << d << '\n';
    cout << Sum(2) << ' ' << Sum((double)2, 4.5) << '\n';
    cout << "Hello\0world!\n";
    return 0;
}

