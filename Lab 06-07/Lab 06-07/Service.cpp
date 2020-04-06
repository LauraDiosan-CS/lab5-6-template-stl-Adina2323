#include "Service.h"
#include "Repository.h"
using namespace std;

void Service::addBooking(int nr, const char* nume, int loc)
{
	Booking s(nr, nume, loc);
	repo.add(s);
}
/*
int Service::delBooking( int nr, const char* nume, int loc)
{
	Booking s(nr, nume, loc);
	return repo.remove(s);
}
*/
list <Booking> Service::getll()
{
	list<Booking> rez = repo.get_all();
	return rez;
}
void Service::update(int nr, const char* nume, int loc, int nr_nou, const char* nume_nou, int loc_nou)
{
	Booking s(nr, nume, loc);
	Booking n(nr_nou, nume_nou, loc_nou);
	repo.update(s, n);
}
int Service::findPosition(int nr, const char* nume, int loc )
{
	Booking s(nr, nume, loc);
	return repo.find(s);
}
int Service::lung()
{
	return repo.size();
}

Service::~Service() {}