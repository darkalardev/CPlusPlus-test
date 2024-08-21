#include <iostream>

int main(){
    char age;
    std::cout<<"Are you over 18 years old? Respond with Y or N\n";
    std::cin>>age;

    if(toupper(age) == 'Y'){
        std::cout<<"You have a legal age, congratulations!\n";
    }
    else if(toupper(age) == 'N'){
        std::cout<<"You don't have legal age, sorry\n";
    }
    else{
        std::cout<<"You did not enter a correct value, restarting the application\n";
        main();
    }


    return 0;
}