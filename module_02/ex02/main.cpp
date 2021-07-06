#include "Fixed.hpp"
#include <iostream>

int main(void)
{
	{
		std::cout << "indrement/decrement test" << std::endl;

		Fixed a;

		std::cout << "a = " << a << std::endl;
		std::cout << "++a = " << ++a << std::endl;
		std::cout << "a = " << a << std::endl;
		std::cout << "a++ = " << a++ << std::endl;
		std::cout << "a = " << a << std::endl;
		std::cout << "--a = " << --a << std::endl;
		std::cout << "a = " << a << std::endl;
		std::cout << "a-- = " << a-- << std::endl;
		std::cout << "a = " << a << std::endl;

		std::cout << std::endl;
	}
	{
		std::cout << "min/max test" << std::endl;

		Fixed a(1);
		Fixed b(2);

		std::cout << "max = " << Fixed::max(a, b) << std::endl;
		std::cout << "min = " << Fixed::min(a, b) << std::endl;

		b = Fixed(a);

		std::cout << "max = " << Fixed::max(a, b) << std::endl;

		std::cout << std::endl;
	}
	{
		std::cout << "operations test" << std::endl;

		Fixed a;
		Fixed b;

		a = Fixed(2);
		b = Fixed(4);

		std::cout << "a + b = " << a + b << std::endl;
		std::cout << "a - b = " << a - b << std::endl;
		std::cout << "a * b = " << a * b << std::endl;
		std::cout << "a / b = " << a / b << std::endl;

		std::cout << std::endl;
	}
	{
		std::cout << "comparaison test" << std::endl;

		Fixed a;
		Fixed b;
		bool res;

		a = Fixed(2);
		b = Fixed(1);
		res = a > b;
		std::cout << "a > b = " << res << std::endl;
		b = Fixed(2);
		res = a > b;
		std::cout << "a > b = " << res << std::endl;
		b = Fixed(3);
		res = a > b;
		std::cout << "a > b = " << res << std::endl;

		std::cout << std::endl;

		b = Fixed(1);
		res = a < b;
		std::cout << "a < b = " << res << std::endl;
		b = Fixed(2);
		res = a < b;
		std::cout << "a < b = " << res << std::endl;
		b = Fixed(3);
		res = a < b;
		std::cout << "a < b = " << res << std::endl;

		std::cout << std::endl;

		b = Fixed(1);
		res = a >= b;
		std::cout << "a >= b = " << res << std::endl;
		b = Fixed(2);
		res = a >= b;
		std::cout << "a >= b = " << res << std::endl;
		b = Fixed(3);
		res = a >= b;
		std::cout << "a >= b = " << res << std::endl;

		std::cout << std::endl;

		b = Fixed(1);
		res = a <= b;
		std::cout << "a <= b = " << res << std::endl;
		b = Fixed(2);
		res = a <= b;
		std::cout << "a <= b = " << res << std::endl;
		b = Fixed(3);
		res = a <= b;
		std::cout << "a <= b = " << res << std::endl;

		std::cout << std::endl;

		b = Fixed(1);
		res = a == b;
		std::cout << "a == b = " << res << std::endl;
		b = Fixed(2);
		res = a == b;
		std::cout << "a == b = " << res << std::endl;
		b = Fixed(3);
		res = a == b;
		std::cout << "a == b = " << res << std::endl;

		std::cout << std::endl;

		b = Fixed(1);
		res = a != b;
		std::cout << "a != b = " << res << std::endl;
		b = Fixed(2);
		res = a != b;
		std::cout << "a != b = " << res << std::endl;
		b = Fixed(3);
		res = a != b;
		std::cout << "a != b = " << res << std::endl;
	}
	return 0;
}