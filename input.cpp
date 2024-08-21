#include <iostream>

int main(){
    std::string name;
    int age;

    std::cout<<"How is your name?\n";
    // Use getline for spaces
    // Use std::ws for remove blank spaces
    std::getline(std::cin>>std::ws,name);

    std::cout<<"Welcome "<<name<<"!!\nAnd how is your age?\n";
    std::cin>>age;

    std::cout<<"Hello "<<name<<", your age is "<<age;

    return 0;
}