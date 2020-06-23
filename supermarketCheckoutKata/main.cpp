#include <iostream>
#include <gtest/gtest.h>
#include "Checkout.h"

//x Can create instance of checkout
//x Can add an item price
//x Can add an item
//x Can calculate the current total
//x Can add multiple items and get correct total
//x Cam add discount rules
//x Can apply discount rules to total
//x Exception is throw for item added without price for the item

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
/*
TEST_F(CheckoutTest, CanGetTotalForMultipleItems){
    checkOut.addItemPrice("a",1);
    checkOut.addItemPrice("b",2);
    checkOut.addItem("a");
    checkOut.addItem("b");
    int total = checkOut.calculateTotal();
    ASSERT_EQ(3,total);
}*/

TEST_F(CheckoutTest, CanAddDiscount){
    checkOut.addDiscount("a",3,2);
}

TEST_F(CheckoutTest, CanCalculateTotalWithDiscount){
    checkOut.addItemPrice("a",1);
    checkOut.addDiscount("a",3,2); // Significa que comprando 3, o preço será 2
    checkOut.addItem("a");
    checkOut.addItem("a");
    checkOut.addItem("a");
    int total = checkOut.calculateTotal();
    ASSERT_EQ(2,total);
}

TEST_F(CheckoutTest, ItemsWithNoPriceThrowException) {
    ASSERT_THROW(checkOut.addItem("a"), std::invalid_argument);
}