#include <iostream>
#include <string>


/*
Bouros, Razvan - 1DAE06

My answers to the questions
1. "C4700 uninitialized local variable 'intVar' used" because the variables weren't initialized yet
2. There is no error for the string.
3. No, because outside the main function they are automatically initialized.
4. the values I get:

char = \0
int = 0
bool = 0 that means false
unsigned char =\0
unsigned int = 0
float = 0.000000000
double = 0.00000000000000000
string=""

5. True or False
6. the float number 3.1415 looks like 3.1415f because it needs to be defined as a float value.
7. When assigning value 3.1415 without f at the end i get a truncation error to tell me there would be some lost decimals. 
If i build for release it prompts an error for assigning a double value to a float but if i assign the value 3.1415f  i get no errors.
8. Character literals are surrounded by single quotation marks like  'a'.
9. A text literal is surrounded by double quotation marks like:  " the result is :".
10. A binary literal looks like : 0b1011
11. A Hexadecimal looks like : 0xB
12. You can split a long literal number with single ' as a digit separator to make the number more readable example : 1'234'567'890
13. Magical numbers are numbers that are hardcoded in the calculation of a variable or expression with no explanation to what they mean. It is a bad practice,
because it poses problems if the number needs to change in the future. It is advised to used a variable in such cases which would make the code easier to understand.
14. These are all the whitespace characters : 
space (0x20, ' ')
form feed (0x0c, '\f')
line feed (0x0a, '\n')
carriage return (0x0d, '\r')
horizontal tab (0x09, '\t')
vertical tab (0x0b, '\v')

*/

int main() {
	int intVariable{};
	char charVariable{};
	bool boolVariable{};
	unsigned char unsignedCharVariable{};
	unsigned int unsignedIntVariable{};
	float floatVariable{};
	double doubleVariable{};
	std::string stringVariable{};
	int intVarDec = 11;
	int intVarBin = 0b1011;	// assign binary 0000 1011 to the variable
	int intVarHex = 0xB;		// assign Hex  value B to the variable
	//float floatVarTest{ 3.1415f};

	std::cout << "Please insert a value for each of the following variables separated by a space. intVar charVar boolVar unsignedCharVar unsignedIntVar floatVar doubleVar stringVar intVarDec intVarBin intVarHex :";
	std::cin >> intVariable >> charVariable >> boolVariable >> unsignedCharVariable >> unsignedIntVariable >> floatVariable >> doubleVariable >> stringVariable >> intVarDec >> intVarBin >> intVarHex >> intVarHex;
	std::cin.ignore(1);

	
	std::cout << "intVar :" << "(" << (intVariable) << ")" << std::endl;
	std::cout << "charVar :" << "(" << (charVariable) << ")" << std::endl;
	std::cout << "boolVar :" << "(" << (boolVariable) << ")" << std::endl;
	std::cout << "unsignedVar :" << "(" << (unsignedCharVariable) << ")" << std::endl;
	std::cout << "unsignedIntVar :" << "(" << (unsignedIntVariable) << ")" << std::endl;
	std::cout << "floatVar : " << "(" << (floatVariable) << ")" << std::endl;
	std::cout << "doubleVar : " << "(" <<(doubleVariable)<<")" << std::endl;
	std::cout << "stringVar : " << "(" << (stringVariable) << ")" << std::endl;
	std::cout << "intVarDec : " << "(" << (intVarDec) << ")" << std::endl;
	std::cout << "intVarBin : " << "(" << (intVarBin) << ")" << std::endl;
	std::cout << "intVarHex : " << "(" << (intVarHex) << ")" << std::endl;

	//std::cout << "float 3.1415 : " << "(" << (floatVarTest) << ")" << std::endl;
	

std::cin.get( );
system("pause");
return 0;


	
	
}
