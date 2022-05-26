// Copyright A.T. Chamillard. All Rights Reserved.

#include "Digitizer.h"

#include <cctype>

#include <string>         // std::string
#include <locale>         // std::locale, std::tolower
/**
 * Constructor
*/
Digitizer::Digitizer()
{
	// populate your map here
	mp.insert(std::make_pair<std::string, int>("one", 1));
	mp.insert(std::make_pair<std::string, int>("two", 2));
	mp.insert(std::make_pair<std::string, int>("three", 3));
	mp.insert(std::make_pair<std::string, int>("four", 4));
	mp.insert(std::make_pair<std::string, int>("five", 5));
	mp.insert(std::make_pair<std::string, int>("six", 6));
	mp.insert(std::make_pair<std::string, int>("seven", 7));
	mp.insert(std::make_pair<std::string, int>("eight", 8));
	mp.insert(std::make_pair<std::string, int>("nine", 9));
	mp.insert(std::make_pair<std::string, int>("zero", 9));
	//mp["zero"] = 0;
}

/**
 * Converts the given word to the corresponding digit.
 * If the word isn't a valid digit name, returns -1
 * @param Word word to convert
 * @return corresponding digit or -1
*/
int Digitizer::ConvertWordToDigit(std::string Word)
{
	// convert to lower case 
	// DO NOT use std::transform, which works fine in Visual
	// Studio and in Xcode, but doesn't work in g++ in the autograder
	// Instead, use a for loop to convert each character to
	// lower or upper case (depending on the case you used
	// in your map

	/*for (char& c : Word) {
		if (isupper(c)) 
		...
		}
	}*/
	int length = Word.length();
	for (int i = 0; i < length; i++) {
		int c = Word[i];
		if (isupper(c))
			Word[i] = std::tolower(c);
	}

	int num = mp[Word];
	// do the conversion
	// replace the code below with your code
	if (!mp[Word]) num = -1;
	return num;
}