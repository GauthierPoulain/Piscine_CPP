#include <string>
#include <iostream>
#include <fstream>

static std::string find_and_replace(std::string line, std::string find, std::string replace, size_t i)
{
	size_t j;
	std::string res;

	res = line;
	while (line[i])
	{
		j = 0;
		while (line[i + j] && find[j] && line[i + j] == find[j])
		{
			if (find[j + 1] == 0)
			{
				res = line.substr(0, i);
				res += replace;
				res += line.c_str() + (i + find.length());
				i += replace.length();
				return (find_and_replace(res, find, replace, i));
			}
			j++;
		}
		i++;
	}
	return (res);
}

int main(int argc, char const *argv[])
{
	std::ifstream fsfilein;
	std::ofstream fsfileout;
	std::string filename;
	std::string resFilename;
	std::string base;
	std::string replace;
	std::string line;

	if (argc < 4 || argc > 4)
	{
		std::cerr << "invalid number of arguments: [file] [base string] [replace with]" << std::endl;
		exit(0);
	}
	filename = argv[1];
	resFilename = filename + ".replace";
	base = argv[2];
	replace = argv[3];
	fsfilein.open(filename, std::ios::in);
	if (!fsfilein.is_open())
	{
		std::cerr << "failed to open file: " << filename << std::endl;
		exit(0);
	}
	fsfileout.open(resFilename, std::ios::out);
	if (!fsfileout.is_open())
	{
		std::cerr << "failed to open file: " << resFilename << std::endl;
		exit(0);
	}
	while (std::getline(fsfilein, line))
	{
		fsfileout << find_and_replace(line, base, replace, 0);
		if (!fsfilein.eof())
			fsfileout << std::endl;
	}
	fsfilein.close();
	fsfileout.close();
	return 0;
}
