// Single line comment
/* Multiple
   line comment*/
#include <iostream>
/* # is begining of preprocessor directive
   include is a preprocessor directive that . execute before compilation of program
                                          . include is going to take content of text file <iostream> and bring it into this source code file we're working on
   <iostream> is the text file, it is the standard library header file(predefine cpp objects and consist declaration of built in functions) */
using namespace std;   // using namespace std allow us to skip the word std::cout which mean cout is word of standard namespace/ std::cin it saves time
int main()  //function main begin execution of program
{
								cout << "Welcome to C++"; // it is a statement almost all statements end with(;) Here Welcome to c++ is a string. string are writen inside" "/' '
								cout << "YASH " << endl; //endl means end of line or start from new line after this line. We can also use /n for new line
								cout << "DUHAN";   // << is string insertion character
								return 0; //indicate end of program/end execution of program
}
