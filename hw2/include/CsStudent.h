#ifndef CSSTUDENT_H_
#define CSSTUDENT_H_

#include "Student.h"

class CsStudent : public Student {

public:
		CsStudent(string studentId, String imagePath);
		virtual void study(Course &c);
};

#endif
