#include "account.h"

PurchasesAccount::PurchasesAccount(float balance) {
    purchasesBalance = (balance > 0) ? balance : 0;
};

float PurchasesAccount::calculateMonthlyDiscount() {
    float monthlyDiscount = purchasesBalance * annualDiscountRate / 12;
    purchasesBalance -= monthlyDiscount;
    return purchasesBalance;
}

void PurchasesAccount::modifyDiscountRate(float rate) {
    annualDiscountRate = (rate > 0 && rate <= 1) ? rate : 0;
}