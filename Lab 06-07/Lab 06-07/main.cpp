#include "Repository.h"
#include <iostream>
void handleadd(Repo repo) {
	char nume[10];
	int nr, loc;
	cout << "Number of flight:"; cin >> nr; cout << "Name of passenger: "; cin >> nume; cout << "Position: "; cin >> loc;
	Booking s(nr, nume, loc);
	repo.addBooking(s);
}
void handlePrint(Repo repo) {
	list<Booking> books = repo.get_all();
	for (const Booking& s : books){
		cout << s;
}
}
void main() 
{
	Repo repo;
	int gata = 0;
	while (gata == 0)
	{
		cout << "1.Add booking" << endl << "2.Show all the bookings" << endl;
		int opt; cin >> opt;
		if (opt == 1) {
			handleadd(repo);
		}
		if (opt == 2) {
			handlePrint(repo);
		}
	}
	
}
