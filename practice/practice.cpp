#include "practice.h" //importing from an internal file which contains declrations and <iostream>.

int main() //main function. int in this case is the return type. this function is called when the program is executed.
{
    //all text has been moved to void print_pow().



    /*data types:
    int - integer
    char - character
    float - floating
    double - decimals
    bool - true or false
    strings - sequences of characters
    */

    /*int data types:
    short
    int
    long
    long long
    unsigned short
    unsigned int
    unsigned long
    unsigned long long*/

    /*char data type has single quotes: ''.
    double quotes: "" are reserved for string type.
    can store ascii numbers of the characters.
    x = 129
    std::cout << x << std::endl; this would output the character stored in the variable x*/


    bruh = 99999999;
    std::cout << bruh << std::endl;
    print_pow(a, b);

    return 0; //telling the program that everything went right. the "0" is an int. related to the return type.
}


//creating custom functions. useful for calling code that you will use multiple times.
double power(double x, int y) //currently x and y are parameters.
{
    result = 1;
    for (i = 0; i < y; i++)
    {
        result *= x;
    }
    return result;
}


//creating void functions.
void print_pow(double a, int b)
{
    hi = "hello\n"; //defining a string variable called "hi" with the value of "hello".

    sup = hi; //setting sup to the same value as hi but it doesnt point to it.

    hi = "yo"; //so i can change hi but it wouldnt change sup.

    number = 1;
    //std above is a namespace allows to group code and avoid naming conflicts. same var name, but different namespaces.


    std::cout << hi << " and sup is " << sup << std::endl; //outputting a variable on the console.

    printf("%i\n", number); //comes from C language and is used to print out variables, but std in c++ is better.


    //getting user input
    std::cout << "how many slices of pizza do you have?\n" << std::endl;
    std::cin >> slices;
    std::cout << "you have " << slices << " of pizza." << std::endl;


    //creating pre made functions.
    std::cout << "what is the base" << std::endl; //printing.
    std::cin >> base; //getting the user input for base.

    std::cout << "what is the exponent" << std::endl; //printing exponent.
    std::cin >> exponent; //asking for exponent

    myPower = pow(base, exponent); //assigning myPower to calculate power with arguments base and exponent.
    std::cout << myPower << std::endl;


    //calling the custom power function.
    std::cout << "what is x?";
    std::cin >> x;
    std::cout << "What is y?";
    std::cin >> y;
    POWER = power(x, y); //currently x and y are arguments. this x and y can be differently named to the parameters.
    std::cout << POWER << std::endl;


    std::cout << "what is a?";
    std::cin >> a;
    std::cout << "what is b?";
    std::cin >> b;
    std::cout << pow(a, b) << std::endl;
    std::cout << power(a, b) << std::endl;

}