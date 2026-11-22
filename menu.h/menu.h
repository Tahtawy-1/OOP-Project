#ifndef MENU_H
#define MENU_H

class MenuItem;

class Menu
{
private:
    static const int maxCapacity = 50;

    MenuItem** items;
    const int capacity;
    int count;

public:
    Menu(int cap = maxCapacity);
    Menu(const Menu& other);
    ~Menu();

    bool addItem(MenuItem* item);
    MenuItem* getItem(int position) const;

    int  getCapacity() const;
    int  getCount() const;
    bool isFull() const;
    bool isEmpty() const;
    bool isValidPosition(int position) const;
    int  findItem(int code) const;

    void print() const;

    static int getMaxCapacity();
};

#endif
