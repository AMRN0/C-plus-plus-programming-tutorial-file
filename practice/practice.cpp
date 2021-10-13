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


    //escape sequences
    /*
    \t is a tab space
    usage: std::cout << "this is\t text" << std::endl; would give: this is   text
    \n is used for new line.
    \b used to delete a character places before it. basically a backspace.
    \v is vertical tab. so a new line with a tab space.
    usage: std::cout << "this is\v text" << std::endl; would give:
    this is
         text
    \a might not work in a regular console but it gives out a beep sound.
    \0 used to declare the end of a native style c string. basically strings that existed in C but also exist in c++
    "Hello \" There \" " is used to tell the compiler that the double quite inside the quote is not the end of itself, but its the start of an inside
    quote. it will print: Hello "There".
    \\ to interpret an actual backslash into your string.
    there are more but these are the most common ones.
    */


    //Bool data type
    /*
    bool is boolean.
    true or false.
    it will output 0 or 1 tho. 0 for false and 1 for true.
    can write 0/1 instead of true/false.

    making the console say true/false instead of 0/1:
    when printing use: std::cout << std::boolalpha variable << std::endl;
    the boolalpha and the endl are maniupulators. they manipulate data.
    */


    //floating points.
    /*
    float - trust 6 digits
    double - trust 15 digits
    long double - trust 18 digits
    there is a float.h file that exists in a library that we can use.
    FLT_DIG for float digits.
    DBL_DIG for double digits.
    LDBL_DIG for long double digits.

    if dealing with money use a library with exact presition. you can trust every digit in it.
    */
    

}