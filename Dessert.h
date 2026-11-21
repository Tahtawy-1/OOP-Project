#ifndef DININGOUT_DESSERT_H
#define DININGOUT_DESSERT_H

class Money;

class Dessert {
private:
    static const int freePortionInterval = 3;

    bool containsNuts;

public:
    Dessert(bool containsNuts = false);

    bool getContainsNuts() const;
    void setContainsNuts(bool containsNuts);

    bool priceForQuantity(const Money& unitPrice, int quantity, Money& total) const;

    static int getFreePortionInterval();

};

#endif
