#pragma once
#include "Repository.h"
using namespace std;

class Service
{
private:
	Repo<Booking> repo;
public: 
	void addBooking(int nr, const char* nume, int loc);
	//int delBooking(int nr, const char* nume, int loc);
	list<Booking> getll();
	int lung();
	void update(int nr, const char* nume, int loc, const int nr_nou, const char* nume_nou, int loc_nou);
	int findPosition( int nr, const char* nume, int loc);
	~Service();
};