#pragma once
#include <string>
#include "Table.h"
#include "Menu.h"
using namespace std;

class NightReport;

class Restaurant {
public:
    static const int MAX_TABLES = 20;

private:
    const string name;
    bool isOpen;
    Menu menu;                  
    Table tables[MAX_TABLES];   

    friend class NightReport;

public:

    // Constructor
    Restaurant(int menuCapacity = 50);

    // Destructor
    ~Restaurant();

    // Getters
    Menu& getMenu();
    const Menu& getMenu() const;
    Table& getTable(int index);
    const Table& getTable(int index) const;
    int getTableCount() const;
    void getIsOpen() const;

    // Functions
    void openRestaurant(int menuCapcity);

    void closeRestaurant();
};  