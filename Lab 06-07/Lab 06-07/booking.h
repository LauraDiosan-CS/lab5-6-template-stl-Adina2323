#pragma once
#include <ostream>
using namespace std;

class Booking {
private:
	int nr;
	char* nume;
	int loc;
public:
	Booking();
	Booking(const int nr,const char*nume,int loc);
	Booking(const Booking& s);
	~Booking();
	int getNr();
	char* getName();
	int getLoc();
	void setNume(const char* nume);
	void setNr(int nr);
	void setLoc(int loc);
	Booking& operator=(const Booking& s);
	bool operator==(const Booking& s);
	friend ostream& operator<<(ostream& os, const Booking& s);
};
