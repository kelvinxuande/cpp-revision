#include <iostream>
#include <string>

int main(){
    std::string nickname;
    std::string name;

    // std::cout << "Enter nickname, this does not do well with spaces: ";
    // std::cin >> nickname;
    // std::cout << "Read nickname: " << nickname << "\n";

    std::cout << "Enter name, this is okay and reads in with spaces: ";
    std::getline(std::cin, name);
    std::cout << "Read name: " << name << "\n";

    return 0;
}