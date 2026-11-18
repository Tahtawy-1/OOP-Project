#pragma once

class Money {
private:
	double amount;
public:
	// Constructor
	Money(double damount = 0.0);

	// CP Constructor
	Money(const Money& other);

	// Destructor
	~Money();

	// Setters
	void set_amount(double damount);

	// Getters
	double get_amount();

};