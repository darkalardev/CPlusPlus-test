#include <iostream>

int main(){
    int correctAnswers = 3;
    int totalAnswers = 20;

    double score = correctAnswers / (double)totalAnswers * 100;
    std::cout<< score<<"%";
    return 0;
}