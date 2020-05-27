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

	//Now we are going to compare each word

	std::string smallest_common_word = s[0];
	int word_length = smallest_common_word.length();

	//for loop that goes through each word
	for (int i = 0; i < s.size(); ++i)
	{
		std::cout << s[i] << std::endl;
		//for loop that goes through each letter in a word

		//how do we compare smallest word to words in vector
		//first we need to see which word is longer
		bool vector_word_longer = false;
		bool vector_word_shorter = false;
		bool vector_word_same = false;

		if (s[i].length() > smallest_common_word.length())
			vector_word_longer = true;
		else if (smallest_common_word.length() > s[i].length())
			vector_word_shorter = true;
		else
			vector_word_same = true;
		std::vector <std::string> longest_words;
		for (int j = 0; j < s[i].length(); ++j)
		{
			std::cout << s[i][j];
			if (vector_word_same)
			{
				//checks if letters are the same
				if (s[i][j] == smallest_common_word[j])
				{
					std::string k = s[i].substr(j, j);
					longest_words.push_back(k);
				}
				//k holds that letter
			}

		}
		std::cout << std::endl;
	}
	std::cout << smallest_common_word;
}