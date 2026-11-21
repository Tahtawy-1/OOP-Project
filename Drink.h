#ifndef DININGOUT_DRINK_H
#define DININGOUT_DRINK_H

class Money;

class Drink {
public:
    enum CupSize { small, medium, large };

private:
    static const int largeSurchargeFils = 500;

    CupSize cupSize;
    bool hot;

public:
    Drink(CupSize cupSize = medium, bool hot = false);

    CupSize getCupSize() const;
    bool isHot() const;

    bool setCupSize(CupSize cupSize);
    void setHot(bool hot);

    bool priceForQuantity(const Money& unitPrice, int quantity, Money& total) const;

    static int getLargeSurchargeFils();

};

#endif
