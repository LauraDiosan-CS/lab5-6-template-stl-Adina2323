#include "TestService.h"
#include <cassert>

void test()
{
	Booking b1(21, "Ana", 4);
	Booking b2(23, "Maria", 5);
	Booking b3(33, "George", 8);
	Booking b4(66, "Mihai", 2);
	Booking b5(66, "Mihai", 2);
	b4 == b5;
	Repo<Booking> repo;
	assert(repo.size() == 0);
	repo.add(b1); repo.add(b2); repo.add(b3); repo.add(b4);//repo add
	assert(repo.size() == 4);
	Booking neew(20, "Mihai", 2);
	repo.update(b4, neew);//repo update
	b4 == neew;
	assert(repo.find(neew) == 4);
	list<Booking> rez = repo.get_all();
	assert(rez.size() == repo.size());//repo-get all
	//repo.remove(repo.find(b2));
	//assert(repo.size() == 3);
}
void tests()
{
	Booking b1(21, "Ana", 4);
	Booking b2(23, "Maria", 5);
	Booking b3(33, "George", 8);
	Booking b4(66, "Mihai", 2);
	Booking b5(66, "Mihai", 2);
	b4 == b5;
	Service service;
	Repo<Booking> repo;
	assert(repo.size() == 0);
	service.addBooking(21, "Ana", 4);
	service.addBooking(23, "Maria", 5); 
	service.addBooking(33, "George", 8);
	service.addBooking(66, "Mihai", 2);
	assert(service.lung() == 4);
	Booking neew(20, "Mihai", 2);
	service.update(66, "Mihai", 2, 20, "Mihai", 2);//service update
	assert(service.findPosition(20, "Mihai", 2) == 4);
	list<Booking> rez = service.getll();
	assert(rez.size() == service.lung());//service-get all
}