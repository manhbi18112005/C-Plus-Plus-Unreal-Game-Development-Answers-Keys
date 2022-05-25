// Copyright A.T, Chamillard. All Rights Reserved.

#include <iostream>
#include <iomanip>
#include <string>
#include <vector>

void BuildVectorFromString(std::string SpaceSeparatedString);
int GetNumber();

std::vector<int> Numbers;

/**
 * Programming Assignment 2
 * @return exit status
*/
int main()
{
	// IMPORTANT: Only add code in the section
	// indicated below. The code I've provided
	// makes your solution work with the 
	// automated grader on Coursera
	std::string Input;
	std::getline(std::cin, Input);
	while (Input[0] != 'q')
	{
		BuildVectorFromString(Input);

		// Add your code between this comment
		// and the comment below. You can of
		// course add more space between the
		// comments as needed

		int n = 0;
		int count = 0;
		float mean = 0;
		int a = GetNumber();
		while (a != -1) {
			n = n + a;
			count++;
			a = GetNumber();
		}
		if (count > 0) {
			mean = float(n) / float(count);
		}
		else {
			count = 0;
			mean = 0;
		}
		std::cout << count << " ";
		std::cout << std::setprecision(2) << mean << std::endl;

		// Don't add or modify any code below
		// this comment
		std::getline(std::cin, Input);
	}

	return 0;
}

/**
 * Builds a vector of input values from provided string
 * @param spaceSeparatedString space-separated string
*/
void BuildVectorFromString(std::string SpaceSeparatedString)
{
	int Value;

	// find first space in string
	int SpaceIndex = SpaceSeparatedString.find(' ');

	// loop while there are more spaces in string
	while (SpaceIndex != std::string::npos)
	{
		// add number to vector
		Value = std::stoi(SpaceSeparatedString.substr(0, SpaceIndex));
		Numbers.push_back(Value);

		// find next space in string
		SpaceSeparatedString = SpaceSeparatedString.substr(SpaceIndex + 1);
		SpaceIndex = SpaceSeparatedString.find(' ');
	}

	// add final value to vector
	Value = std::stoi(SpaceSeparatedString);
	Numbers.push_back(Value);
}

/*
* Get a number from the vector. If the vector is empty, returns -1
*/
int GetNumber()
{
	// check for empty vector
	if (Numbers.empty())
	{
		return -1;
	}
	else
	{
		int Value = Numbers.front();
		Numbers.erase(Numbers.begin());
		return Value;
	}
}