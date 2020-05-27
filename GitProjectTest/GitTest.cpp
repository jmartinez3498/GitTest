#include <iostream>
#include <vector>
#include <string>

int main()
{
	/* creating a longest common word counter.
		First create something that can take input from user
	*/
	std::vector<std::string> s;
	std::string v;
	std::cout << "I am a longest common word counter" << std::endl;
	bool result = 1;
	while (result == 1)
	{
		std::cout << "Enter any word. Type 0 when done." << std::endl;
		std::cin >> v;
		if (v=="0")
			result = 0;
		else if (result == 1)
		{
			s.push_back(v);
		}
	} 

	//weird nothing changed
	//lets try again
	//maybe it's because I didn't commit before I changed brances
	//Actually its because I tried stashing the changes

	for (int i = 0; i < s.size(); ++i)
	{
		std::cout << s[i] << std::endl;
	}
	
}