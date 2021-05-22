#include <iostream>
#include <iomanip>

int main(){
    int a = 45;
    float b = 12.345;
    float c = 56.789;

    std::cout<<"Printed with set width = 10\n";
    std::cout<<"Ints"<<std::setw(10);
    std::cout<<"Floats"<<std::setw(10);
    std::cout<<"Doubles"<<std::setw(10)<<"\n";

    std::cout<<a<<std::setw(10);
    std::cout<<b<<std::setw(10);
    std::cout<<c<<std::setw(10)<<"\n";

}