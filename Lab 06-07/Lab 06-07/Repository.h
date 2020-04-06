#pragma once
#include "booking.h"
#include <list> 
#include <algorithm>

using namespace std;
template <class T> class Repo 
{
protected:
	list<T> bookings;
public:
	Repo() {}
	void add(T );
	list <T> get_all();
	//void remove( int );
	int find(T);
	int size();
	void update(T,  T );
	~Repo();
};

template <class T>
void Repo<T>::add( T s) {
	this->bookings.push_back(s);
}
template <class T>
list <T> Repo<T>::get_all() {
	return this->bookings;
}
/*template<class T>
void Repo<T>::remove( int poz)
{
	bookings.erase( poz);
}
*/
template <class T>
int Repo<T>::find( T s)
{
	int index = 0;
	for (T crt : bookings) {
		index++;
		if (crt == s) return index;
	}
	return -1;
}

template <class T>
int Repo<T>::size()
{
	return bookings.size();
}

template <class T>
void Repo<T>::update( T vechi, T nou)
{
	replace(bookings.begin(),bookings.end(), vechi, nou);
}

template <class T>
Repo<T> ::~Repo()
{

}
