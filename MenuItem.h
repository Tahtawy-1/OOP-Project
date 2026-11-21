#ifndef DININGOUT_MENUITEM_H
#define DININGOUT_MENUITEM_H

#include "Money.h"

class MenuItem {
private:
    static const int maxNameLength = 50;

    char name[maxNameLength + 1];
    char* description;
    const int code;
    Money price;
    int portions;

    static int liveItemCount;
    static int nextCode;

public:
    MenuItem();

    MenuItem(const char* name, const char* description,
             const Money& price, int portions = 0);

    MenuItem(const MenuItem& other);

    ~MenuItem();

    const char* getName() const;
    const char* getDescription() const;
    int getCode() const;
    const Money& getPrice() const;
    int getPortions() const;

    MenuItem& setName(const char* name);
    MenuItem& setPrice(const Money& price);
    MenuItem& setPortions(int portions);

    bool setDescription(const char* description);

    bool addPortions(int quantity = 1);
    bool removePortions(int quantity);

    static int getMaxNameLength();
    static int getLiveItemCount();
    static int getNextCode();

};

#endif
