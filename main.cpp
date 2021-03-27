#include <iostream>
#include <assert.h>

int sum(int a, int b ) {
	return a + b;
}

int main() {

	int a = 10;
	int b = 5;
	int c = a + b;
	assert(2 == sum(1, 1));
	assert(c == sum(a, b));
	assert(0 == sum(0, 0));
	assert(0 == sum(0,1));
	// Other test cases
std::cout << "Test" << std::endl;

}
