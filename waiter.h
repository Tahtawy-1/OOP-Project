#ifndef WAITER_H
#define WAITER_H
#include <string>
using namespace std;

class waiter
{
    const int staffNumber;
    const string name;
    static int numberWaiters; 
    static int nextStaffNumber;
    public:
        //constructors
        waiter(string n = "");
        waiter(const waiter& other);
        ~waiter();
        //getters
        int getStaffNumber() const;
        string getName() const;
        static int getnextStaffNumber();
        //print
        void print() const;

};



#endif
