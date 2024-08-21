#include <iostream>
#include <cmath>

int main(){
    double x=3;
    double y=6;
    double z;
    double u;
    double i = 56.3;
    double l;
    double h;
    double v;

    z = std::max(x,y);
    u = std::min(x,y);

    // Power
    i = std::pow(x,5);

    // Square root
    l = std::sqrt(x);

    // Absolute value of a number
    h = std::abs(-x);

    // Round a value
    v = std::round(i);

    // Round a value up
    v = std::ceil(i);

    // Round a value down
    v = std::floor(i);

    std::cout<<z<<'\n';
    std::cout<<u<<'\n';
    std::cout<<i<<'\n';
    std::cout<<l<<'\n';
    std::cout<<h<<'\n';
    std::cout<<v<<'\n';

    return 0;
}