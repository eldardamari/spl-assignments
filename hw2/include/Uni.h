#ifndef UNI_H_
#define UNI_H_

#include "Department.h"

class Uni {

private:
		Department Cs,Pg,El;
		unsigned int _numOfSemesters;
		bool _malag;

public:
		Uni(bool flag); // Constructor
		void simulate() // Start Uni life Cycle
		void graduate(); // Output all graduated students
};
#endif