#include"functionalitati.h"
#include <iostream>
list<Booking> sortByFlight(int nr)
{
	Service service;
	list<Booking> rez;
	for ( Booking T : service.getll()) {
		if (T.getNr() == nr) rez.push_back(T);
	}
	return rez;
}
bool verify(list<Booking> rez,int loc)
{
	Service service;
	for (Booking T : service.getll()) 
	{
		if (T.getLoc() == loc)
		{
			cout << "Seat is taken!";
			return false;
		}
	}
	return true;
}


void emptySeat(list<Booking> rez,int v[])
{
	for (int i = 1; i <= 20; i++)
		v[i] = i;
	Service service;
	for (Booking T : service.getll())
	{
		for (int i = 1; i <= 20; i++)
		{
			if (T.getLoc() == v[i])
			{
				v[i] = 0;
			}
		}
	}
	
}