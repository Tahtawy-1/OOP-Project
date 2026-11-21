#ifndef DININGOUT_MAINDISH_H
#define DININGOUT_MAINDISH_H

class MainDish {
private:
    static const int minSpiceLevel = 0;
    static const int maxSpiceLevel = 3;

    int spiceLevel;
    int preparationTimeMinutes;

public:
    MainDish(int spiceLevel = 0, int preparationTimeMinutes = 0);

    int getSpiceLevel() const;
    int getPreparationTimeMinutes() const;

    bool setSpiceLevel(int spiceLevel);
    bool setPreparationTimeMinutes(int preparationTimeMinutes);

    static int getMinSpiceLevel();
    static int getMaxSpiceLevel();

};

#endif
