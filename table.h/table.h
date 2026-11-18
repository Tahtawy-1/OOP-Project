#ifndef TABLE_H
#define TABLE_H

class Menu;
class Money;

class Table
{
private:
    static const int maxItems = 50;

    int  number;
    int  capacity;
    int  groupSize;
    int  orders[maxItems];
    bool used;
    int  guestsServed;

public:
    Table(int num = 0);

    bool setNumber(int num);

    int  getNumber() const;
    int  getCapacity() const;
    int  getGroupSize() const;
    int  getGuestsServed() const;
    int  getOrderQuantity(int position) const;

    bool isAvailable() const;
    bool wasUsed() const;

    bool seatGroup(int size);
    bool addOrder(int position, int quantity, Menu& menu);

    Money calculateSubtotal(const Menu& menu) const;

    bool completePayment();

    static int getMaxItems();
};

#endif
