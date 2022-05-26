// Copyright A.T. Chamillard. All Rights Reserved.

#pragma once

#include "MutualFund.h"

/**
 * An employer-sponsored account
*/
class EmployerSponsoredAccount :
    public MutualFund
{
public:
    /**
     * Constructor
     * @param Deposit initial deposit
    */
    EmployerSponsoredAccount(float Deposit);

    /**
     * Adds money to the account, adding employer match 
     * @param Amount amount to add
    */
    virtual void AddMoney(float Amount) override;

    /**
     * Provides balance with account type caption
    * @return balance with caption
    */
    virtual std::string GetString() override;
};
