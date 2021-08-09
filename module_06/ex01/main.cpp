#include <iostream>
#include <stdint.h>

typedef struct
{
	std::string content;
} Data;

uintptr_t serialize(Data *ptr)
{
	return ((uintptr_t)ptr);
}

Data *deserialize(uintptr_t raw)
{
	return ((Data *)raw);
}

int main(void)
{
	Data *base = new Data;
	base->content = "pouet";
	Data *result = deserialize(serialize(base));
	base->content = "omg";
	std::cout << "base = " << base << " <" << base->content << ">" << std::endl;
	std::cout << "res = " << result << " <" << result->content << ">" << std::endl;
	delete base;
	return (0);
}