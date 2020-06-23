#include <iostream>
#include <gtest/gtest.h>
#include "Checkout.h"

//x Can create instance of checkout
//x Can add an item price
//x Can add an item
//x Can calculate the current total
// Can add multiple items and get correct total
// Cam add discount rules
// Can apply discount rules to total
// Exception is throw for item added without price for the item

/* Removido por ser duplicata
TEST(CheckoutTests, CanInstantiateCheckout){
    Checkout co;
}*/

class CheckoutTest : public ::testing::Test{
public:

protected:
    Checkout checkOut;
};

/* Removido por serem duplitatas do teste CanCalculateTotal
TEST_F(CheckoutTest, CanAddItemPrice){
    checkOut.addItemPrice("a",1);
}

TEST_F(CheckoutTest, CanAddItem){
    checkOut.addItem("a");
}*/

TEST_F(CheckoutTest, CanCalculateTotal ){
    checkOut.addItemPrice("a",1);
    checkOut.addItem("a");
    int total = checkOut.calculateTotal();
    ASSERT_EQ(1,total);
}

TEST_F(CheckoutTest, CanGetTotalForMultipleItems){
    checkOut.addItemPrice("a",1);
    checkOut.addItemPrice("b",2);
    checkOut.addItem("a");
    checkOut.addItem("b");
    int total = checkOut.calculateTotal();
    ASSERT_EQ(3,total);
}