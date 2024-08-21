#include <iostream>
#include <vector>

typedef std::vector<std::pair<std::string,int>> pair_list_t;
typedef std::string text_t;

using number_t = int;

int main(){
    // std::vector<std::pair<std::string,int>> pair_list;
    pair_list_t pair_list;
    text_t name = "Darkalar";
    number_t age;

    std::cout<<name<<std::endl;

    return 0;
}