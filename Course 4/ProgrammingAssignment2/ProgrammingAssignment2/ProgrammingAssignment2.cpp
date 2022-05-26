// Copyright A.T. Chamillard. All Rights Reserved.

#include <iostream>

#include "Digitizer.h"

// test case to run
int TestCaseNumber;

void GetInputValueFromString(std::string Input);

/**
 * Programming Assignment 2
 * @return exit status
*/
int main()
{
    Digitizer Digitizer;

    // loop while there's more input
    std::string Input;
    std::cin >> Input;
    while (Input[0] != 'q')
    {
        // extract test case number from string
        GetInputValueFromString(Input);

        // execute selected test case
        switch (TestCaseNumber)
        {
        case 1:
            if (Digitizer.ConvertWordToDigit("bob") == -1)
            {
                std::cout << "Passed\n";
            }
            else
            {
                std::cout << "FAILED\n";
            }
            break;
        case 2:
            if (Digitizer.ConvertWordToDigit("five") == 5)
            {
                std::cout << "Passed\n";
            }
            else
            {
                std::cout << "FAILED\n";
            }
            break;
        case 3:
            if (Digitizer.ConvertWordToDigit("four") == 4)
            {
                std::cout << "Passed\n";
            }
            else
            {
                std::cout << "FAILED\n";
            }
            break;
        case 4:
            if (Digitizer.ConvertWordToDigit("nine") == 9)
            {
                std::cout << "Passed\n";
            }
            else
            {
                std::cout << "FAILED\n";
            }
            break;
        case 5:
            if (Digitizer.ConvertWordToDigit("One") == 1)
            {
                std::cout << "Passed\n";
            }
            else
            {
                std::cout << "FAILED\n";
            }
            break;
        case 6:
            if (Digitizer.ConvertWordToDigit("seven") == 7)
            {
                std::cout << "Passed\n";
            }
            else
            {
                std::cout << "FAILED\n";
            }
            break;
        case 7:
            if (Digitizer.ConvertWordToDigit("six") == 6)
            {
                std::cout << "Passed\n";
            }
            else
            {
                std::cout << "FAILED\n";
            }
            break;
        case 8:
            if (Digitizer.ConvertWordToDigit("THREE") == 3)
            {
                std::cout << "Passed\n";
            }
            else
            {
                std::cout << "FAILED\n";
            }
            break;
        case 9:
            if (Digitizer.ConvertWordToDigit("tWo") == 2)
            {
                std::cout << "Passed\n";
            }
            else
            {
                std::cout << "FAILED\n";
            }
            break;
        case 10:
            if (Digitizer.ConvertWordToDigit("zero") == 0)
            {
                std::cout << "Passed\n";
            }
            else
            {
                std::cout << "FAILED\n";
            }
            break;
        }

        std::cin >> Input;
    }
}

/**
 * Extracts the test case number from the given input string
 * @param Input input string
 */
void GetInputValueFromString(std::string Input)
{
    TestCaseNumber = std::atoi(Input.c_str());
}

