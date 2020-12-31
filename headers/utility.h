//
// Created by asif on 23-12-2020.
//
#ifdef WINDOWS
#include <direct.h>
#define GetCurrentDir _getcwd
#else

#include <unistd.h>

#define GetCurrentDir getcwd
#endif

#include <windows.h>

std::string get_current_dir() {
    char buff[FILENAME_MAX]; //create string buffer to hold path
    GetCurrentDir(buff, FILENAME_MAX);
    std::string current_working_dir(buff);
    return current_working_dir;
}

void setConsoleTextColor(int color){
    HANDLE  hConsole;
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    SetConsoleTextAttribute(hConsole, color);
    // you can loop k higher to see more color choices
}
