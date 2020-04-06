#include "UI.h"
#include <iostream>
using namespace std;

int UI::add()
{
	char name[250]; int nr, loc;
	cout << "Give number:";
	cin >> nr;
	cout << "Give name:"; cin >> name;
	cout << "Give position:"; cin >> loc;
	cout << endl;
	if (loc > 21 or loc < 0)
	{
		cout << "Locul este prea mare!";
		return -1;
	}

	this->service.addBooking(nr, name, loc);
	return 0;
}
void UI::update()
{
	char name1[250], name2[250]; int nr1, nr2, loc1, loc2;
	cout << "Data to change:";
	cout << "Give number:";cin >> nr1;
	cout << "Give name:"; cin >> name1;
	cout << "Give position:"; cin >> loc1;
	cout << endl;
	cout << "New data:"; cout << "Give number:";
	cin >> nr2;
	cout << "Give name:"; cin >> name2;
	cout << "Give position:"; cin >> loc2;
	cout << endl;
	service.update(nr1, name1, loc1, nr2, name2, loc2);
}
void UI::printAll()
{
	list<Booking> stud = service.getll();
	for (Booking s : stud)
		cout << s;
}
int UI::existloc()
{
	int loc;
	int gata = 0;
	while (gata == 0)
	{
		cout << "Insert seat";
		cin >> loc;
		gata = 1;
		if (loc > 20 or loc < 1)
		{
			cout << "Seat does not exist!";
			cout << "Retry";
		}
	}
	return loc;
}

/*void UI::RezBySeat()
{
	char nume[250]; cout << "Give a name:"; cin >> nume;
	int loc, zbor,v[20]; cout << "Give a flight:"; cin >> zbor;
	int gata = 0;
	list <Booking> rez;
	rez = sortByFlight(zbor);
	while (gata == 0)
	{
		cout << "Give a seat:";
		loc = this->existloc();
		if (verify(rez, loc))
		{
			service.addBooking(zbor, nume, loc);
			cout << "Booking complete";
			gata = 1;
			emptySeat(rez, *v);
		}
		else if (v == NULL)
		{
			cout << "All the seats are taken!";
			gata = 1;
		}
		else
		{
			cout << "Seat teaken";
			cout << "Empty seats: ";
			for (int i = 1; i <= 20; i++)
			{
				cout << v[i] << " ";
			}
		}
		cout << "Continue? Press 1 for no, and 0 for yes.";
		cin >> gata;
	}
}
*/


void UI::menu()
{
	cout << "MENU:" << endl;
	cout << "1.ADD BOOKING" << endl;
	cout << "2.UPDATE BOOKING" << endl;
	cout << "3.SHOW ALL" << endl;
	cout << "0.EXIT" << endl;
}
void UI::run()
{
    int opt = 1;
    while (opt) {
        cout << "Chose an option " << endl;
        menu();
        cout << "Your option is: ";
        cin >> opt;
        if (opt == 1) {
            this->add();
        }
        if (opt == 2) {
            this->update();
        }
       // if (opt == 3) {
            //this->delExam();
       // }
        if (opt == 3) {
            this->printAll();
        }
		if (opt == 4)
		{
			//this->RezBySeat();
		}

        if (opt == 0) {
			cout << "BYE.";
            break;
        }
    }

}
