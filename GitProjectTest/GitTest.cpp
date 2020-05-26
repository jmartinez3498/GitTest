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
	std::cout << "Enter any strings" << std::endl;
	std::getline(std::cin, v);

	//testing how to get the user's inputs from getline into a vector with a for loop
	//maybe there is an easier way if I google it. RN just testing for space seperated words
	std::cout << v[1];
	
	//having problem with arguments, try to make it function
	//didn't work, had to change arguments to be by reference
	for (int i = 0; i < v.length(); i++)
	{
		int j = 0;
		char sp = ' ';
		int result = strcmp(&v[i], &sp);
		if (result == 1)
		{
			s.push_back(v.substr(j, i));
			j = i;
		}

	}
	
}