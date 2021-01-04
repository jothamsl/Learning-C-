#include <iostream> // Header File
// ^          ^ Preprocessor Directive
// Preprocessor
// command

int main(void)
{
    std::cout << "Hello to the cpp world of programming!";
    //  ^      ^                  ^                      ^
    //Target  write        Message (object)          Terminator
    //            on
    std::cout << "To show the main structure." << std::endl;
    //                                                  ^
    //                                             Same as \n
    return 0;
}
