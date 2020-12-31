#include <iostream>
#include <unordered_set>
#include <vector>
#include "headers/utility.h"
#include "headers/constants.h"

using namespace std;

void outputInColoredConsole(int color,const string& s){
    setConsoleTextColor(color);
    cout<<s<<endl;
    setConsoleTextColor(15);
}

int main(int argc, char **argv) {
    std::cout << "You have entered " << argc
              << " arguments:" << "\n";
    std::vector<string> arguments;
    for (int i = 0; i < argc; ++i) {
        if (i) {
            std::cout << argv[i] << "\n";
            arguments.emplace_back(argv[i]);
        }
    }
    outputInColoredConsole(9,intro);
    outputInColoredConsole(15, help);

    return 0;
}
