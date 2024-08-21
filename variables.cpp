#include <iostream>

int main(){
    int x;
    int y;
    const int width = 1920;
    const int height = 1080;

    double price = 13.2;

    const double PI = 3.14159;
    double radius = 15;
    double circumference = 2 * PI * radius;

    float priceTwo = 12.7;

    long double priceThree = 78.53453;

    char classification = 'A';

    std::string name;

    bool student;

    x = 5;
    y = 9;

    price = priceThree + priceTwo;

    std::cout<<"Name: ";
    std::cin>>name;

    std::cout<<"Circumference: "<<circumference<<"\n";
    std::cout<<"Student name: "<<name<<"\n"<<"Classification: "<<classification;
    return 0;
}