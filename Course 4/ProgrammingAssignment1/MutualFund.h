// Copyright A.T. Chamillard. All Rights Reserved.

#pragma once

#include "InvestmentAccount.h"

/**
 * A mutual fund
*/
class MutualFund :
    public InvestmentAccount
{
private:
    const float ServiceChargePercent{ 0.01f };

public:
    /**
     * Constructor
     * @param Deposit initial deposit
    */
    MutualFund(float Deposit);

    /**
     * Adds money to the account, deducting a
     * service charge
     * @param Amount amount to add
    */
    virtual void AddMoney(float Amount) override;

    /**
     * Updates the balance by adding 6% 
    */
    virtual void UpdateBalance() override;

    /**
     * Provides balance with account type caption
     * @return balance with caption
    */
    virtual std::string GetString() override;
};

