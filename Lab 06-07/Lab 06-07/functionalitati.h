#pragma once
#include "Service.h"
#include <vector>
using namespace std;
list<class Booking> sortByFlight(int);
bool verify(list< Booking>,int );
void emptySeat(list<Booking>,int);