#include <iostream>
#include <string>

void fib(int n) {
	std::string f = "Fizz";
	std::string b = "Buzz";
	if (n == 0) return;
	fib(n - 1);
	if (n % 15 == 0) {
		std::cout << f << b << std::endl;
	} else if (n % 5 == 0) {
		std::cout << b << std::endl;
	} else if (n % 3 == 0) {
		std::cout << f << std::endl;
	} else {
		std::cout << n << std::endl;
	}
}

int main(int argc, char* argv) {
	fib(100);
}

