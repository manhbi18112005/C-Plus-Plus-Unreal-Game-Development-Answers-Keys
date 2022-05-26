// Copyright A.T. Chamillard. All Rights Reserved.

#include "Egg.h"
#include "EggColor.h"
#include "HowCooked.h"

/**
 * Constructor
 * @param Size size of egg
 * @param Color egg color
*/
Egg::Egg(int Size, EggColor Color)
{
	AmountLeft = Size;
	this->Color = Color;
	CookedStatus = HowCooked::NotCooked;
}

/**
 * Gets how much of the egg is left
 * @return amount left
*/
int Egg::GetAmountLeft()
{
	return AmountLeft;
}

/**
 * Gets the color of the egg
 * @return egg color
*/
EggColor Egg::GetEggColor()
{
	return Color;
}

/**
 * Gets how the egg is cooked
 * @return how the egg is cooked
*/
HowCooked Egg::GetCookedStatus()
{
	return CookedStatus;
}

/**
 * Gets whether or not the egg is cooked
 * @return true if the egg is cooked, false otherwise
*/
bool Egg::IsCooked()
{
	return CookedStatus != HowCooked::NotCooked;
}

/**
 * Cooks the egg
 * @param HowToCook how the egg should be cooked
*/
void Egg::Cook(HowCooked HowToCook)
{
	// only cook uncooked eggs
	if (!IsCooked())
	{
		CookedStatus = HowToCook;
	}
}

/**
 * Takes a bite of the given size from the egg.
 * Only takes a bite if the egg is cooked
 * @param Size size of the bite to take
*/
void Egg::TakeBite(int Size)
{
	// only bite cooked eggs
	if (IsCooked())
	{
		// reduce amount left, clamping to 0
		if (Size <= AmountLeft)
		{
			AmountLeft -= Size;
		}
		else
		{
			AmountLeft = 0;
		}
	}
}

/**
 * Dyes the egg the given color. Only white eggs
 * can be dyed, and eggs can only be dyed blue
 * @param Color color to dye the egg
*/
void Egg::Dye(EggColor Color)
{
	// only dye white eggs blue
	if (this->Color == EggColor::White &&
		Color == EggColor::Blue)
	{
		this->Color = Color;
	}
}