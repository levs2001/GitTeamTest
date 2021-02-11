#include <iostream>

int sum(int a,int b)
{
	return a+b;
}

int pow(int a,int b)
{
	int c = 1;
	while(b--)
	c*=a;
	return c;
}

int main() {

	std::cout << "Hello" << std::endl;

	return 0;
}