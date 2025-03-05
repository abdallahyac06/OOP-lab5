#ifndef ACCOUNT_H
#define ACCOUNT_H

class PurchasesAccount {
    private:
        float purchasesBalance;
        static float annualDiscountRate;

    public:
        PurchasesAccount(float = 0);
        float calculateMonthlyDiscount();
        static void modifyDiscountRate(float);
};

float PurchasesAccount::annualDiscountRate = 0;

#endif