#include <iostream>
using std::cout;

template<typename T1, typename T2>
void swap(T& a, T& b){
    T t = a;
    a = b;
    b = t;
}

template<typename T>
void rev(T* beg, T* end){
    end--;
    while(beg < end){
        swap(*beg, *end);
        beg++;
        end--;
    }
}


int main(){
    int a = 3, b = 5;
    cout << a << ' ' << b << '\n';
    int& c = a;
    double d = 2.5;
    // swap<int>(a, b);
    swap(a, b);
    // swap<double>(a, d);
    cout << a << ' ' << b << '\n';
}