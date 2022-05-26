// Copyright A.T. Chamillard. All Rights Reserved.

#include <iostream>

#include "Matherator.h"

int Matherator::GetNthEvenNumber(int N)
{
	int num = 0;
	int count = 0;
	while (count < N) {
		num = num + 2;
		count++;
	}
	return num;
}

int Matherator::GetTenthEvenNumber() {
	return 20;
}

void Matherator::PrintMToN(int M, int N)
{
	for (int i = M; i <= N; i++) {
		std::cout << i << " ";
	}
	std::cout << std::endl;
}

void Matherator::PrintOneToTen()
{
	std::cout << "1 2 3 4 5 6 7 8 9 10 " << std::endl;
}
