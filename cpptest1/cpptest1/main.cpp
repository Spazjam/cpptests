#include <iostream>
#include <string>


const double pi = 3.14159;
#define nl '\n';

int main()
{
	int i = 1;
	std::string s;
	
	std::cout << i << nl;
	std::cout << "Enter your name please: ";
	std::cin >> s;
	std::cout << "Hi " << s << nl;
	system("pause");

	return 0;


}