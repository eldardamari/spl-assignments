#ifndef DEPARTMENT_H_
#define DEPARTMENT_H_

#include <iostream>
#include <vector>
#include <string>

#include "Course.h"
#include "Student.h"

class Department {

private:
		std::vector< Student::Student > _students;   // Do i need the Student::?
		std::vector< Course::Course >  _autumnCourses; // "
		std::vector< Course::Course >  _springCourses;
		const std::string _name;
		const unsigned short _mandatoryElectiveCourses;

public:
		Department(std::string depName); //constructor
		void registerStudents(unsigned short semester);
		void teach(unsigned short semester);
		void gruduate(unsigned short numOfsemesters);

};

#endif
