#pragma once
#include "booking.h"
#include <list> 
#include <iterator>
using namespace std;

class Repo {
private:
	list<Booking> bookings;
public:
	Repo();
	void addBooking(Booking s);
	list <Booking> get_all();
};