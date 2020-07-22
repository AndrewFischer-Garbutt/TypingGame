#include <iostream>
#include <string>
#include <vector>
#include <GLFW/glfw3.h>

#ifdef __cplusplus__
  #include <cstdlib>
#else
  #include <stdlib.h>
#endif


namespace Colors
{
	std::string Black  = "\033[0;30m";
	std::string Red    = "\033[0;31m";
	std::string Green  = "\033[0;32m";
	std::string Yellow = "\033[0;33m";
	std::string Blue   = "\033[0;34m";
	std::string Purple = "\033[0;35m";
	std::string Cyan   = "\033[0;36m";
	std::string White  = "\033[0;37m";
	std::string End    = "\033[0m";
}

using namespace Colors;

int main()
{
	std::string paragragph = "// namespaces\n"
				 "#include <iostream>\n"
				 "using namespace std;\n"
				 "\n"
				 "namespace first\n"
				 "{\n"
				 "  int var = 5;\n"
				 "}\n"
				 "\n"
				 "namespace second\n"
				 "{\n"
				 "  double var = 3.1416;\n"
				 "}\n"
				 "\n"
				 "int main () {\n"
				 "  cout << first::var << endl;\n"
				 "  cout << second::var << endl;\n"
				 "  return 0;\n"
				 "}\n"
				 "}\n";

	std::vector<char> typed;

	std::cin >> std::noskipws;
	while(true)
	{
		system("clear");
		for(int i = 0; i < paragragph.size(); i++)
		{
			if(i < typed.size() && typed[i] == paragragph[i]) std::cout << Black << paragragph[i] << End;
			else if(i < typed.size()) std::cout << Red << paragragph[i] << End;
			else std::cout << paragragph[i];
		}

		char ch;	
		std::cin >> ch;

		typed.push_back(ch);
	}

	return 0;
}
