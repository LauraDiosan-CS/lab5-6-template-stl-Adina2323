#include "Repository.h"
#include <list> 
#include <iterator>
#include<iostream>
using namespace std;

Repo::Repo() {

}
void Repo::addBooking(Booking s) {
	bookings.push_back(s);
}
list <Booking> Repo::get_all() {
	return bookings;
}