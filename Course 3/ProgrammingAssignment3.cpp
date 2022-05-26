// Copyright A.T. Chamillard. All Rights Reserved.

#include <iostream>
#include <string>
#include <array>

// IMPORTANT: Only add code in the section
// indicated below. The code I've provided
// makes your solution work with the
// automated grader on Coursera

/**
 * Programming Assignment 3
 * @return exit status
*/
int main()
{
	std::string Input;

	// loop while there's more input
	std::getline(std::cin, Input);
	while (Input[0] != 'q')
	{
		// Add your code between this comment
		// and the comment below. You can of
		// course add more space between the
		// comments as needed

		// declare and initialize counts
		std::array<int, 26> Counts{ 0 };

		// count the occurrences of each letter
		for (int i = 0; i < Input.size(); i++)
		{
			// only process alphabetic characters
			if (isalpha(Input[i]))
			{
				// convert character to array index and increment count
				char Character = toupper(Input[i]);
				Counts[Character - 'A']++;
			}
		}

		// print out input and non-zero character counts
		for (int i = 0; i < Counts.size(); i++)
		{
			if (Counts[i] > 0)
			{
				std::cout << (char)(i + 'A');
				std::cout << Counts[i];
				std::cout << ' ';
			}
		}
		std::cout << std::endl;

		// Don't add or modify any code below
		// this comment
		std::getline(std::cin, Input);
	}
}
