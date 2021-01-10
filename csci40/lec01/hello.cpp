// this is a single-line comment
// this is just for the readers of this source code file--the compiler
// doesn't look at comments

/*
this is
a 
multi-line
comment
*/

#include <iostream> // iostream is a library that includes cout
using namespace std; // this makes it so that we don't have to say std::

// this first line defines a "main function"--this is where every C++ program begins
// this function returns an "int"eger
int main() {
    // main exists only between the braces

    // std::cout prints to the screen
    // '\n' is called an escape character
    //   it stands for "newline"
    // std::cout << "Hello, " << "world!" << std::endl;
    cout << "Hello, " << "world!" << endl;
    // std::endl is "\n"

    // "Hello, " is a string. Anything between ""s is a string

    // return gives back an answer
    // 0 means that the program was sucessful
    return 0;

    // every statement in C++ ends with a ;
        // think of each statement like a sentence
}