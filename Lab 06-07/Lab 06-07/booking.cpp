#include "booking.h"
#include <cstddef>
#include <ostream>

using namespace std;

Booking::Booking() {
	this->nr = 0;
	this->nume=NULL;
	this->loc = 0;
}

Booking::Booking(int nr,const char* nume, int loc)
{
	this->nume = new char[strlen(nume) + 1];
	strcpy_s(this->nume, 1 + strlen(nume), nume);
	this->nr = nr;
	this->loc = loc;
}

Booking::Booking(const Booking& s)
{
	this->nume = new char[strlen(s.nume) + 1];
	strcpy_s(this->nume, 1 + strlen(s.nume), s.nume);
	this->nr = s.nr;
	this->loc = s.loc;
}

Booking::~Booking() {
	if (this->nume) {
		delete[] this->nume;
		this->nume = NULL;
		this->nr = 0;
		this->loc = 0;
	}
}

char* Booking::getName() {
	return this->nume;
}
int Booking::getNr() {
	return this->nr;
}
int Booking::getLoc() {
	return this->loc;
}
void Booking::setNume(const char* nume)
{
	if (this->nume) {
		delete[] this->nume;
	}
	this->nume = new char[strlen(nume) + 1];
	strcpy_s(this->nume, strlen(nume) + 1, nume);
}
void Booking::setNr(int nr)
{
	this->nr=nr;
}

void Booking::setLoc(int loc) {
	this->loc=loc;
}

Booking& Booking::operator=(const Booking& s) {
	this->setNume(s.nume);
	this->setNr(s.nr);
	this->setLoc(s.loc);
	return *this;
}

bool Booking:: operator==(const Booking& s) 
{
	return ((strcmp(this->nume, s.nume) == 0) and (this->nr == s.nr) and (this->loc == s.loc));
}

ostream& operator<<(ostream& os, const Booking& s)
{
	os << "Nume:" << s.nume << " Nr Zbor:" << s.nr << " Loc:" << s.loc;
	return os;
}




