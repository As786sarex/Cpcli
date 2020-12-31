#pragma clang diagnostic push
#pragma ide diagnostic ignored "cert-err58-cpp"
//
// Created by asif on 24-12-2020.
//

#include <string>

const std::string intro = R""""(
+++++++++++++++++++++++Competitive Programming Cli+++++++++++++++++++++++                         
                                                                             
   ###########   ###########   #############      ##              ######     
   ##       ##   ##       ##   ##         ##      ##                ##       
   ##            ##       ##   ##                 ##                ##       
   ##            ###########   ##                 ##                ##       
   ##            ##            ##                 ##                ##       
   ##       ##   ##            ##         ##      ##                ##       
   ###########   ##            #############      ############    ######

++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++


)"""";

const std::string help = R""""(
Usage: cpcli [sub-command] [ options ]

where sub-command include :
    basic : creates a basic template for the language provided

where options include :
    -h --help : print this help message to the output stream.
    -fp --filepath : creates specified file in the provided file path.
                     Takes filepath with filename as argument and extension is as
                     language specifies.
    -l --lang : creates file for the specified language. As of now options can be
                [ 'java' , 'cpp' ].
)"""";


#pragma clang diagnostic pop