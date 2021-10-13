#include "practice.h" //importing from an internal file which contains declrations and <iostream>.

int main() //main function. int in this case is the return type. this function is called when the program is executed.
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
    std::cin >> slices ;
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
    POWER = power(x, y);
    std::cout << POWER << std::endl;
    return 0; //telling the program that everything went right. the "0" is an int. related to the return type.
}

//creating custom functions. useful for calling code that you will use multiple times.
double power(double x, int y)
{
    result = 1;
    for (i = 0; i < y; i++)
    {
        result *= x;
    }
    return result;
}
