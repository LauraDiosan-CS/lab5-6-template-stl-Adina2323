#pragma once
#include "Service.h"
//#include"functionalitati.h"
class UI {
private:

	Service service;
	int add();
	void update();
	void printAll();
	void menu();
	int existloc();
	void RezBySeat();
	//void delBooking();
public:
	void run();

};