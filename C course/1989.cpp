#include <iostream>
#include <sstream>
int main() {
	std::string str;
	while (std::getline(std::cin, str)) {
		std::istringstream sp(str);
		while (sp >> str) {
			std::cout << str << std::endl;
		}
		std::cout << std::endl;
	}
}