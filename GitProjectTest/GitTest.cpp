#include <iostream>
#include <vector>
#include <string>

int main()
{
	/* creating a longest common string counter.
		First create something that can take input from user
	*/
	std::vector<std::string> s;
	std::string v;
	std::cout << "I am a longest common string counter" << std::endl;
	bool result = 1;
	while (result == 1)
	{
		std::cout << "Enter any string. Type 0 when done." << std::endl;
		std::cin >> v;
		if (v=="0")
			result = 0;
		else if (result == 1)
		{
			s.push_back(v);
		}
	} 

	for (int i = 0; i < s.size(); ++i)
	{
		std::cout << s[i] << std::endl;
	}
	
}