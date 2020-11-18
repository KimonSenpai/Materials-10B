#include <iostream>
using namespace std;
int Sum(int a, int b);
void print(int a);
void swap(int* a, int* b){
    int t = *a;
    *a = *b;
    *b = t;
}

void swap(int& a, int& b){
    int t = a;
    a = b;
    b = t;
}
//void swap(int, int);

int main(){
    int k = Sum(3, 5);
    Sum(3,4);
    Sum(k, 4);
    print(k);
    int l = 3;
    swap(&k, &l);
    swap(k, l);
    //return 0;
}

int Sum(int a, int b = 1){
    int s = a + b;
    return s;
}

void print(int a){
    cout << a;
}

