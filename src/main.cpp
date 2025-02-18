#include "utils.cpp"
#include <iostream>

int main(){

    int a = 10;
    int b = 5;

    int c = add(a, b);
    int d = sub(a, b);
    
    std::cout << c << ' ' << d;
    return 0;
}