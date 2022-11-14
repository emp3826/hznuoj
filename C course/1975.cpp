#include <iostream>
#include <sstream>
int main() {
	std::string str;
	std::getline(std::cin, str);
	std::istringstream sp(str);
	while (sp >> str) {
		if (str[0] == 'Q' || str[0] == 'q')
			std::cout << str << std::endl;
	}
}