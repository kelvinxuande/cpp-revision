#include <iostream>

using namespace std;

int main(){

    //define possible options
    enum possibleOptions {
        notSatisfied,
        satisfied,
        verySatisfied
    };

    //define chosenOption as a variable of type possibleOptions
    possibleOptions chosenOption;

    //assign chosenOption one of the values of possibleOption
    chosenOption = verySatisfied;

    if (chosenOption == verySatisfied){
        cout<<"Very satisfied option was chosen!\n";
    }

    if (chosenOption == 2){
        cout<<"Double checked - Very satisfied option was chosen!\n";
    }

    return 0;
}