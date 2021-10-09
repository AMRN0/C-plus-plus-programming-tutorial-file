#include "practice.h" //importing from an internal file which contains declrations and <iostream>.

int main() //main function. int in this case is the return type.
{
    hi = "hello\n"; //defining a string variable called "hi" with the value of "hello".
    //std above is a namespace allows to group code and avoid naming conflicts. same var name, but different namespaces.
    std::cout << hi << std::endl; //outputting a variable.
    return 0; //telling the program that everything went right. the "0" is an int. related to the return type.
}