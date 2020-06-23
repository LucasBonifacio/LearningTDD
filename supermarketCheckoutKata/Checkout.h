//
// Created by lucas on 18/06/2020.
//

#ifndef SUPERMARKETCHECKOUTKATA_CHECKOUT_H
#define SUPERMARKETCHECKOUTKATA_CHECKOUT_H
#include <string>
#include <map>

class Checkout {

    public:
        Checkout();

        void addItemPrice(std::string item,int price);
        void addItem(std::string item);
        int calculateTotal();

    protected:
        std::map<std::string, int> prices;
        int total;
    };





#endif //SUPERMARKETCHECKOUTKATA_CHECKOUT_H
