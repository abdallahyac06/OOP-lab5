#include "account.h"
#include <iostream>

int main() {
    PurchasesAccount customer1(200000), customer2(300000);
    PurchasesAccount::modifyDiscountRate(0.02);
    std::cout << "Customer 1 new balance: " << customer1.calculateMonthlyDiscount() << " DA." << std::endl;
    std::cout << "Customer 2 new balance: " << customer2.calculateMonthlyDiscount() << " DA." << std::endl;
    PurchasesAccount::modifyDiscountRate(0.03);
    std::cout << "Customer 1 new balance: " << customer1.calculateMonthlyDiscount() << " DA." << std::endl;
    std::cout << "Customer 2 new balance: " << customer2.calculateMonthlyDiscount() << " DA." << std::endl;
    return 0;
}