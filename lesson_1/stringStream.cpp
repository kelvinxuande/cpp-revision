#include <iostream>
#include <string>
#include <sstream>
#include <typeinfo>

int main(){
    std::string lengthStr;
    std::string widthStr;

    float length;
    float width;

    //take in inputs
    std::getline(std::cin, lengthStr);
    std::getline(std::cin, widthStr);

    //check and print types
    std::cout << "lengthStr is of type: " << typeid(lengthStr).name() << "\n";
    std::cout << "widthStr is of type: " << typeid(widthStr).name() << "\n";

    //convert inputs
    std::stringstream(lengthStr)>>length;
    std::stringstream(widthStr)>>width;

    //calculate and print area
    std::cout << length * width << "\n";

    return 0;
}