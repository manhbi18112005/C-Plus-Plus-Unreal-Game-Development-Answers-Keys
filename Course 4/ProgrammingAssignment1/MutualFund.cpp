// Copyright A.T. Chamillard. All Rights Reserved.

#include "MutualFund.h"

#include <string>

/**
  * Constructor
  * @param Deposit initial deposit
 */
MutualFund::MutualFund(float Deposit) :
	InvestmentAccount{ Deposit }
{

}

/**
 * Adds money to the account, deducting a
 * service charge
 * @param Amount amount to add
*/
void MutualFund::AddMoney(float Amount)
{
	InvestmentAccount::AddMoney(Amount * (1 - ServiceChargePercent));
}

/**
 * Updates the balance by adding 6%
*/
void MutualFund::UpdateBalance()
{
	// add 6% to balance
	SetBalance(GetBalance() * 1.06f);
}

/**
 * Provides balance with account type caption
 * @return balance with caption
*/
std::string MutualFund::GetString()
{
	return std::string{ "Mutual Fund Balance: " } +
		std::to_string(GetBalance());
}

