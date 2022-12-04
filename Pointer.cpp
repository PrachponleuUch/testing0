#include <iostream>
#include <string>
#include <iomanip>
#include <ios>
#include <limits>
#include <cmath>

using namespace std;

int main()
{
    //!Deref
    // cout << sizeof(int*) << endl;
    // cout << sizeof(int) << endl;
    // cout << sizeof(double*) << endl;
    // cout << sizeof(double) << endl; 

    // int int_var {40};
    // int *p_int {&int_var};

    // cout << int_var << endl;
    // cout << *p_int << endl; //!Dereferencing
    // cout << p_int << endl;
    // cout << &int_var << endl;
    // cout << &p_int << endl;

    //!Pointer to Char
    // const char * p_message {"AAAAAA"}; //!Not recommended
    // cout << p_message << endl;
    // cout << *p_message << endl;

    //!Dynamic Memory Allocation
    // int *x; 
    // "*x = 1"; //!Setting value to a junk address BAD
    // int *x {};
    // "*x = 1"; //!Setting value to a pointer pointing to nowhere BAD

    // int *x{nullptr};
    // x = new int;
    // *x = 1;
    // cout<<*x<<endl;
    // delete x; //! delete twice == CRASH
    // x = nullptr;

    // int *l = new int (1);
    // int *l { new int (1)};
    // cout << *l << endl;
    // delete l;
    // l = nullptr;

    //!Dangling Pointers
    // int *x; //! Uninitialized
    // int *x1 = {nullptr};
    // *x1 = 1;
    // delete x1;
    // cout << *x1 << endl; //! Deleted pointer
    // int *x2 {new int (1)};
    // int *x3 {x2};
    // delete x2;
    // cout << x3 << endl; //! Multiple pointers pointing to one address
    //TODO Initialise with nullptr and after deleted pointer
    //TODO Use if statement to check if master pointer is valid before using slave pointers

    //!When "New" Operator Fails
    //int *data = new int [100000000000000]; //! This will fail
    //?Exception
    // try 
    // {
    //     int *data = new int [100000000000000];
    // } catch (exception& ex)
    // {
    //     cout << "L  " << ex.what() << endl;
    // }
    //cout << "W" << endl;
    //?Nothrow
    // int *data = new(nothrow) int[1000000000000];
    // if(data!=nullptr)
    // {
    //     cout << "W" << endl;
    // }
    // else
    // {
    //     cout << "L" << endl;
    // }

    //!Null pointer safety
    // int *p {};
    // p = new int (7);
    // if (p)
    // {
    // cout << "W" << endl;
    // }
    // else
    // {
    // cout << "L" << endl;
    // }
    // delete p;
    // p = nullptr;

    //!Memory Leak
    /*
    int *p_number {new int{67}}; // Points to some address, let's call that address1
    
    //Should delete and reset here 
    
    int number{55}; // stack variable
    
    p_number = &number; // Now p_number points to address2 , but address1 is still in use by 
                        // our program. But our program has lost access to that memory location.
						//Memory has been leaked.
    */

	//Double allocation 
    /*
    int *p_number1 {new int{55}};
    
	//Use the pointer
    
	//Should delete and reset here.
	
    p_number1 = new int{44}; // memory with int{55} leaked.
    delete p_number1;
    p_number1 = nullptr;
    */

	//Nested scopes with dynamically allocated memory
	{
		int *p_number2 {new int{57}};

        //Use the dynamic memory or delete before exiting the scope(curly brackets)
	}
	//Memory with int{57} leaked.

    //std::cout << "Program ending well" << std::endl;

    //!Dynamic Arrays
    //const size_t size{10};
    
    //Different ways you can declare an array
	//dynamically and how they are initialized
	
    // double *p_salaries { new double[size]}; // salaries array will
	// 														//contain garbage  values
    // int *p_students { new(std::nothrow) int[size]{} }; //TODO All values initialized to 0 
    
    // double *p_scores { new(std::nothrow) double[size]{1,2,3,4,5}}; // Allocating memory space
	// 																// for an array  of size double
	// 																//vars. First 5 will be initialized
	// 																//with 1,2,3,4,5, and the 
	// 																//rest will be 0's.


    // //nullptr check and use the allocated array
    // if(p_scores){
    //     std::cout << "size of scores (it's a regular pointer) : " << sizeof(p_scores) << std::endl;
    //     std::cout << "Successfully allocated memory for scores."<< std::endl;
        
    //     //Print out elements. Can use regular array access notation, or pointer arithmetic
    //     for( size_t i{}; i < size ; ++i){
    //        std::cout << "value : " << p_scores[i] << " : " << *(p_scores + i) << std::endl; 
    //     }
    // }

    // delete [] p_salaries;
    // p_salaries = nullptr;

    // delete [] p_students;
    // p_students = nullptr;

    // delete [] p_scores;
    // p_scores = nullptr;

   //?Static arrays Vs dynamic arrays
//     std::cout << "=====================================" << std::endl;

//    int scores[10] {5,2,3,4,5,6,7,8,9,10}; // Lives on the stack

//     std::cout << "scores size : " << std::size(scores) << std::endl;
//     for( auto s : scores){
//         std::cout << "value : " << s << std::endl;
//     }
    //!These keywords don't work because its a pointer not an array
   //int* p_scores1 = new int[10] {1,2,3,4,5,6,7,8,9,10}; // Lives on the heap.
   //std::cout << "p_scores1 size : " << std::size(p_scores) << std::endl; 
    /*
    for( auto s : p_scores1){
        std::cout << "value : " << s << std::endl;
    }
   */

}