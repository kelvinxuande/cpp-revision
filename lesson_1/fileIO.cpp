#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
    string line;

    // //create an output stream to write to the file
    // //append the new lines to the end of the file

    // ofstream myFileI("input.txt", ios::app);

    // if (myFileI.is_open()){
    //     myFileI << "Written first line.\n";
    //     myFileI << "Written second line.\n";
    // }else{
    //     cout << "Unable to open file for writing.\n";
    // }

    //create an input stream to read file
    ifstream myFileO("input.txt");

    //during the creation of ifstream, the file is opened
    //so we do not have to explicitly open the file

    if (myFileO.is_open()){
        while (getline(myFileO, line)){
            cout << line << "\n";
            cout << "Reading next line...\n";
        }
        myFileO.close();
    }else{
        cout << "Unable to open file for reading.\n";
    }

    return 0;
}