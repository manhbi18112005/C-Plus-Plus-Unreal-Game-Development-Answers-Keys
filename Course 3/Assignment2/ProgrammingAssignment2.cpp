// Copyright A.T. Chamillard. All Rights Reserved.

#include <iostream>
#include <string>

#include "Matherator.h"

// The only thing you should change in the code in this file
// is uncommenting test cases as you develeop the corresponding
// Matherator functions; if you change anything else,
// you'll break the automated grader!

// operation and arguments
int Operation;
int FirstArgument;
int SecondArgument;

void ExtractTestCaseInfoFromString(std::string SpaceSeparatedString);

/**
 * Programming Assignment 2
 * @return exit status
*/
int main()
{
    Matherator TheMatherator;

    // loop while there's more input
    std::string Input;
    std::getline(std::cin, Input);
    while (Input[0] != 'q')
    {
        ExtractTestCaseInfoFromString(Input);

        // execute selected operation
        if (Operation == 1)
        {
            std::cout << TheMatherator.GetNthEvenNumber(FirstArgument) << " \n";
        }
        else if (Operation == 2)
        {
           std::cout << TheMatherator.GetTenthEvenNumber() << " \n";
        }
        else if (Operation == 3)
        {
            TheMatherator.PrintMToN(FirstArgument, SecondArgument);
        }
        else
        {
            TheMatherator.PrintOneToTen();
        }

        std::getline(std::cin, Input);
    }
}

/**
 * Extracts the operation, first argument, and second 
 * argument from the given string ans stores them in
 * the corresponding variables
 * @param SpaceSeparatedString space-separated string
*/
void ExtractTestCaseInfoFromString(std::string SpaceSeparatedString)
{
    // find first space in string and save operation
    int SpaceIndex = SpaceSeparatedString.find(' ');
    Operation = std::stoi(SpaceSeparatedString.substr(0, SpaceIndex));

    // find second space in string and save first argument
    SpaceSeparatedString = SpaceSeparatedString.substr(SpaceIndex + 1);
    SpaceIndex = SpaceSeparatedString.find(' ');
    FirstArgument = std::stoi(SpaceSeparatedString.substr(0, SpaceIndex));

    // save second argument
    SpaceSeparatedString = SpaceSeparatedString.substr(SpaceIndex + 1);
    SecondArgument = std::stoi(SpaceSeparatedString);
}
