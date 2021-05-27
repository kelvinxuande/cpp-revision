#include <iostream>
#include <stdio.h>

int main(){
    int userInput = 0;
    int maxNumber = 0;
    int minNumber = 0;
    int sumTotal = 0;
    float average = 0;

    //get the numbers from the user
    for (int i = 0; i < 15; i++){
        std::cout << "Enter a number: ";
        //scanf in as type int, remember the &
        scanf("%d", &userInput);
        std::cout << userInput << "\n";

        if (userInput > maxNumber){
            //the biggest number entered so far is the max number
            maxNumber = userInput;
        }
        if (userInput < minNumber){
            //the lowest number entered so far is the min number
            minNumber = userInput;
        }
        sumTotal = sumTotal + userInput;
    }
    std::cout << "Maximum number = " << maxNumber << "\n";
    std::cout << "Minimum number = " << maxNumber << "\n";
    average = sumTotal / 15;
    std::cout << "Average = " << average << "\n";
    return 0;
}