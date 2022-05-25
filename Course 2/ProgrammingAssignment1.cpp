// Copyright A.T. Chamillard. All Rights Reserved.

#include <iostream>

/**
 * Programming Assignment 1 solution
 * @return exit status
*/
int main()
{
	// IMPORTANT: Only add code in the section
	// indicated below. The code I've provided
	// makes your solution work with the
	// automated grader on Coursera
	char input[10];
	std::cin >> input;
	while (input[0] != 'q')
	{
		int number = atoi(input);

		// Add your code between this comment
		// and the comment below. You can of
		// course add more space between the
		// comments as needed
        int a,b;

		if(number % 2 == 0)
		    a = 0;
		else
            a = 1;
		if(number < 0)
            b = -1;
        else if(number == 0)
            b = 0;
        else
            b = 1;

        if(a == 0 && b == -1) std::cout << "e -1";
        if(a == 0 && b == 0) std::cout << "e 0";
        if(a == 0 && b == 1) std::cout << "e 1";
        if(a == 1 && b == -1) std::cout << "o -1";
        if(a == 1 && b == 0) std::cout << "o 0";
        if(a == 1 && b == 1) std::cout << "o 1";
        std::cout << std::endl;


		// Don't add or modify any code below
		// this comment
		std::cin >> input;
	}


}
