#ifndef PGSTUDENT_H_
#define PGSTUDENT_H_

#include "Student.h"

class PgStudent : public Student {

public:
		PgStudent(string studentId, String imagePath);
		virtual void study(Course &c);
};

#endif