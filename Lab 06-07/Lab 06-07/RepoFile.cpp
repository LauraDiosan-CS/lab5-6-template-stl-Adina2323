/*#include "RepoFile.h"

template <class Repo>
void RepoFile<Repo>::load_from_file(const char* filename)
{
	bookings.clear();
	fis = filename;
	ifstream f(filename);
	char* nume = new char[10];
	int zbor,loc;
	while (!f.eof()) {
		f >> zbor>>nume >> loc;
		if (strcmp(nume, "") != 0) {
			Student s(nume, varsta);
			bookings.push_back(s);
		}
	}
	delete[] nume;
	f.close();
}*/