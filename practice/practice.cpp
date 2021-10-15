#include "practice.h" //importing from an internal file which contains declrations and <iostream>.


/*

int main() //main function. int in this case is the return type. this function is called when the program is executed.
{
    //all text has been moved to void print_pow().



    //data types:
    int - integer
    char - character
    float - floating
    double - decimals
    bool - true or false
    strings - sequences of characters
    

    //int data types:
    short
    int
    long
    long long
    unsigned short
    unsigned int
    unsigned long
    unsigned long long

    //char data type has single quotes: ''.
    double quotes: "" are reserved for string type.
    can store ascii numbers of the characters.
    x = 129
    std::cout << x << std::endl; this would output the character stored in the variable x


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


    //escape sequences
    
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
    





    //Bool data type
    
    bool is boolean.
    true or false.
    it will output 0 or 1 tho. 0 for false and 1 for true.
    can write 0/1 instead of true/false.

    making the console say true/false instead of 0/1:
    when printing use: std::cout << std::boolalpha variable << std::endl;
    the boolalpha and the endl are maniupulators. they manipulate data.
    



    //floating points.
    
    float - trust 6 digits
    double - trust 15 digits
    long double - trust 18 digits
    there is a float.h file that exists in a library that we can use.
    FLT_DIG for float digits.
    DBL_DIG for double digits.
    LDBL_DIG for long double digits.

    if dealing with money use a library with exact presition. you can trust every digit in it.
    





    //Different Constants
    
    #define X 10 //macro constant
    cosnt int x = 5; //regular constant
    enum { y =100} //enum constant

    cannot change these constants ever again.
    

    //Numeric Functions
    
    #include <cmath>
    sqrt(25) //gives output of 5

    if the number in the sqrt() is a negative, it gives "nan" which is "not a number".
    if the number in pow() is large enough it will give hte result "inf" which is "infinity". if negative number it will be "-inf".

    remainder() can give a floating point value. unlike the mod(%) operator.
    fmod() is similar with some differences but its mostly the same. rounding vs truncation.

    fmax() get the max value from the defined parameters.
    fmin() get the min value fron the defined parameters.

    ceil() gives the ceiling value, so if the number is 3.25 the ceiling will be 4.
    floor() gives the bottom value, so if the number is 3.25, the floor will be 3.
    trunc() does the same thing as floor() but its truncation so it removes the decimal numbers no matter 
    how close to the next number they are.
    round() rounds the number to the closest value.


    More Functions but the list is too bit. like way too big.
    




    //using string
    
    #include <string>

    std::string greeting = "hello";
    std::cout:: greeting[0] << std::endl;
    ^^this will output H as its the first (0) value of the word.

    using the + sign is called a concatination.
    std::string greeting + " there" << std::endl;

    string is a class, so it has functions inside it such as string.length();

    char name[] = "abcdefg"; //this is an array of characters. so name[0] is "a" and so on.

    MAIN STRING INFORMATION FOR STRING INPUT
    std::cin >> greeting;
    std::cout << greeting << std::endl;

    if input is "Hello there!" the only wword that would be out putted is "Hello".

    using getline(std::cin, string_name) will get the full line.

    use cin.getline() if you'r etrying to get numbers.





    //string modifier functions.
    string.length() and string.size() are the same thing.
    sting.append(""); appends the string after the last piece.
    string.insert(position, "") inserts another string text at a specified location.
    string.erase(position_start, number of letters needing to be erased.)
    string.pop_back(); takes the last character off just like a backspace.
    string.replace(start_position, length, "") the length is how many characters from hte start position do you want to replace.


    //finding string inside a string
    string.find(""); finds the specific word in the string.
    string.substr(start_position, character_length);
    string.fnd_first_of(""); finds the first instance of the given character.
    if the function cant find the character, it will return a weird number as it will be a long data type and unsigned so it loops around.
    its equal to -1.
    string.compare("") can also be used to compare strings instead of using a double equal sign ==.
    but have to use comparison as it gives 0 or 1 ass output. 0 if compare sucessful, 1 if compare is failed.



    //literal constants
    5U putting a U tells c++ that the 5 is an unsigned int.
    auto x = 5U; this assigns the x variable the required data type automatically depending on the value stored into it.
    L for long, LL for long long, ULL for unsigned long long. decimal with L is double long.
    cant change data type. assign it once.

    //counting in hex, octo and decimal.
    hex is base 10.
    binary is base 2.
    octo is base 8

    binary: 0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24.25.26
    hex:    0,1,2,3,4,5,6,7,8,9,A,B,C,D,E,F,10,11,12,13,14,15,16,17,18,19,1A
    octo:   0,1,2,3,4,5,6,7,10,11,12,13,14,15,16,17,20,21,22,23,24,25,26,27,30,31,32

    when declaring number as a hexadecimal prefix it with 0x: int number = 0x30; //this turns into 48.
    when declaring numbers in octal prefix it with a 0: int number = 030; //this turns into 24.

    when converting decimal number variable into hex as a output use: std::cout << std::hex << number << std::endl;
    use: std::oct for converting octal numbers.
    */
