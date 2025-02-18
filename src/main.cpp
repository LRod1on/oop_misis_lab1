#include <lib/utils.hpp>
#include <iostream>

int main(){

    int a = 10;
    int b = 5;

    int c = add(a, b);
    int d = sub(a, b);
    int e = mult(a, b);
    
    std::cout << c << ' ' << d << ' ' << e;

    return 0;
}