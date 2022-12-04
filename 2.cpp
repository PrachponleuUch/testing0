#include <iostream>
#include <string>
#include <iomanip>
#include <ios>
#include <limits>
#include <cmath>

using namespace std;

int main()
{
    //!Number Systems
    // int n1 = 15, n2 = 017, n3 = 0x0f, n4 = 0b00001111;
    // cout << n1 << endl;
    // cout << n2 << endl;
    // cout << n3 << endl;
    // cout << n4 << endl;
    
    //!Integer
    // int i;
    // int l1 {};
    // int l2 (0); //not recommended
    // cout << l1 << endl;
    // cout << l2 << endl;
    // cout << sizeof(int) << endl;
    // cout << i << endl;

    //!Int Modifiers
    // cout << sizeof(signed int) << endl; //Signed incl. neg
    // cout << sizeof(unsigned int) << endl; //Unsigned no neg
    // cout << sizeof(signed short int) << endl; //Short 2 bytes less range
    // cout << sizeof(unsigned short int) << endl; 
    // cout << sizeof(signed long int) << endl; //Long 4-8 bytes more range
    // cout << sizeof(unsigned long int) << endl;
    // cout << sizeof(signed long long int) << endl;//Long Long 8 bytes more more range
    // cout << sizeof(unsigned long long int) << endl;

    //!Fractional Numbers
    // cout << sizeof(float) << endl; //4 bytes 7 digits
    // cout << sizeof(double) << endl; //8 bytes 15 digits
    // cout << sizeof(long double) << endl; //12 bytes >15 digits
    // float n {1.011111111F};
    // long double n0 {1.011111111L};
    // double n1 {1.9e5};
    // double n2 {-1.9e-5};
    // cout << setprecision(5); 
    // cout << n << endl;
    // cout << n0 << endl;
    // cout << n1 << endl;
    // cout << n1/0 << endl;
    // cout << n2 << endl;
    // cout << n2/0 << endl;
    // cout << 0.0/0.0 << endl;

    //!Booleans 1 byte
    // bool redlight {false};
    // bool greenlight {true};
    // cout << redlight << endl;
    // cout << greenlight << endl;
    // cout << boolalpha;
    // cout << redlight << endl;
    // cout << greenlight << endl;

    //!Char and Text 1 byte
    // char c1 = 65;
    // int i1 = 65;
    // cout << c1 << endl;
    // cout << static_cast<int>(c1) << endl;
    // cout << static_cast<char>(i1) << endl;

    //!Auto (size depends on data types)
    // auto var1 {12}; //int
    // auto var2 {13.0}; //double
    // auto var3 {14.0f}; //float
    // auto var4 {15.0l}; //long
    // auto var5 {"a"}; //char
    // auto var6 {10u}; //unsigned
    // auto var7 {10ul}; //unsigned long
    // auto var8 {10ll}; //long long

    //!Assignments
    // int var1 {1}; //Declare and initialize
    // cout << var1 << endl;
    // var1 = 0; //Assign
    // cout << var1 << endl;
    
    //!Operations
    //+-*/%
    
    //!Prefix and Postfix
    //++ --
    // int i = 0;
    // while (i < 2)
    // {
    //     cout << ++i << endl;
    //     cout << i++ << endl;
    // }
    
    //!Compound Operators
    //+= -= *= /= %=

    //!Relational Operators
    // < <= > >= == !=
    //cout << boolalpha;
    //cout << 10 == 100 << endl; //error
    //cout << (10 == 100) << endl;

    //!Logical Operators
    //&& || !

    //!Output formatting
    //#include <ios> #include <iomanip>
    //endl{new line} 
    //flush{go directly to terminal} 
    //showpoint {show decimal point} 
    //right{number to right} 
    //boolalpha{show true/false} 
    //setfill(){set character between spaces} 
    //left{number to left}  
    //internal {separate number and sign}
    //setw(){specified width (make data cleaner/to look similar to a table)} 
    //hex{show in hex} 
    //fixed {no E for number}
    //setprecision() {digit count showed in output}
    //dec {show in dec} 
    //scientific {use E for number}
    //showbase {show base sign} 
    //uppercase {show in uppercase} 
    //showpos{show + sign next to number} 
    //oct{show in octodecimal} and more
    //cout.unsetf(ios::scientific|ios::fixed); {set to default}

    //!Numeric Limits
    //#include <limits>
    //min max lowest
    //cout << numeric_limits<int>::min();

    //!Math functions
    //#include <cmath>
    // floor {round down}
    // ceil {round up}
    // abs {absolute}
    // cos 
    // exp {e^x}
    // log
    // pow
    // sqrt
    // round {remove decimal}
    // sin
    // tan and more

    //!Weird Integral Types {Arithmetic operations dont work on these data types}
    //char 
    //short int
    
    //!If statement
    // bool result = (1<2);
    // cout << boolalpha;
    // if (result)
    // {
    //     cout << result << endl;
    // }
    // else
    // {
    //     cout << result << endl;
    // }
    //!Else if (only one block will be execute)
    // const int Pen{ 10 };
    // const int Marker{ 20 };
    // const int Eraser{ 30 };
    // const int Rectangle{ 40 };
    // const int Circle{ 50 };
    // const int Ellipse{ 60 };
    // int tool {Eraser};
    // if (tool == Pen) {
    //     std::cout << "Active tool is pen" << std::endl;
    //     //Do the actual painting
    // }
    // else if (tool == Marker) {
    //     std::cout << "Active tool is Marker" << std::endl;
    // }
    // else if (tool == Eraser) {
    //     std::cout << "Active tool is Eraser" << std::endl;
    // }
    // else if (tool == Rectangle) {
    //     std::cout << "Active tool is Rectangle" << std::endl;
    // }
    // else if (tool == Circle) {
    //     std::cout << "Active tool is Circle" << std::endl;
    // }
    // else if (tool == Ellipse) {
    //     std::cout << "Active tool is Ellipse" << std::endl;
    // }

    //!Switch
    // const int Pen{ 10 };
    // const int Marker{ 20 };
    // const int Eraser{ 30 };
    // const int Rectangle{ 40 };
    // const int Circle{ 50 };
    // int tool {Rectangle};
    // switch (tool)
    // {
    //     case Pen : {
    //         std::cout << "Active tool is Pen" << std::endl;
    //     }
    //     break;
    //     case Eraser :
    //     case Rectangle : 
    //     case Circle : {
    //         std::cout << "Drawing Shapes" << std::endl;
    //     }
    //     break;
    //     case Marker : {
    //         std::cout << "Active tool is Marker" << std::endl;
    //     }
    //     break;
    //     default:
    //         break;  
    // }

    //!Ternary Operator
    // const int Pen {10};
    // const int Marker{ 20 };
    // int tool {Pen};
    // auto result = (tool == 20)?"Marker":"Pen";
    // cout << result << endl;

    //!For loops
    //char l = 'A';
    // for (size_t i {4}; i < 10; i = i + 2)
    // {
    //     cout << l << endl;
    //     l = l + 2;
    // }
    // int scores[10] {5,2,3,4,5,6,7,8,9,10};
    // for (auto x: scores) cout << x << endl; //?is a c++11 style loop that just runs over (iterates) each element in the vector and copies it into x. Then x can be using within the body of the loop.
    //!While loops
    // char l = 'A';
    // size_t i {4}; 
    // while (i < 11) 
    // {
    //     cout << l << endl;
    //     l = l + 2;
    //     i = i + 2;
    //     cout << i << endl;
    // }

    //!Do while loops (run first, do test last => it runs at least once always)
    // char l = 'A';
    // size_t i {4};
    // do 
    // {
    //     cout << l << endl;
    //     l = l + 2;
    //     i = i + 2;
    //     cout << i << endl;
    // }while (i < 11);
    
    //!Array
    // int array[2] {0,1};
    // cout << array[1] << endl;
    // int count {size(array)};
    // cout << count << endl;
    // for ( auto i: array)
    // {
    //     cout << i << endl;
    // }

    //!Array of character
    // char message [6] {'H','E','L','L','O'};
    // char m0 [] {'H','E','L','L','O','\0'};
    // char m1[] {"Hello"};
    // cout << message << endl;
    // cout << m0 << endl;
    // cout << m1 << endl;

    //!Bound of Arrays
    // int n[] {1,2};
    // cout << n[1] << endl;
    return 0;
}       