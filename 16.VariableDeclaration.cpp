#include <iostream>
using namespace std;

int main() {
    // VARIABLE DECLARATION
    // --------------------
    // Variable declaration is in fact both declaration and definition unless we add an
    // extra modifier called 'extern', to postpone the definition to some other part of 
    // the program.

    // SINGLE DECLARATION 
    int val; 
    double sum;
    char ch;

    // MULTIPLE DECLARATION 
    int first, second third;
    double average, mean;
    char ch;
    
    // INITIALIZATION
    int min = 0;
    double groot = 0.0, mean = 0.0;
    char relu = 'a';

    /* If a variable is not initialized:
       
       GLOBAL VARIABLES 
       ----------------
       If a variable is global (declared outside a function), it is initialized to default values 
       (integers are initialized to 0, floats to 0.0)

       LOCAL VARIABLES 
       ---------------
       If a varable is local (declared inside a function), it is not initialized, but the variable 
       holds some garbage left over from the previous use. Before using a local variable, we need 
       to either initialize it or change the garbage stored in it by other means.
    */
}
