#include <iostream>

namespace horizontal{
    int x = 1920;
}

namespace vertical{
    int x = 1080;
}

int main(){
    using namespace horizontal;

    int result;

    result = x + vertical::x;
    std::cout<<result;
    return 0;
}