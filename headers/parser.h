//
// Created by asif on 28-12-2020.
//


#ifndef CPCLI_PARSER_H
#define CPCLI_PARSER_H
/**
 *  Class to parse command passed to the command line interface.
 */
#include <string>

using namespace std;

class CmdParser {
public:
    string language;
    string filepath;

    void parse(const string &cmd) {

    }
};

#endif //CPCLI_PARSER_H
