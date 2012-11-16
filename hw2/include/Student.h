#ifndef STUDEND_H_
#define STUDEND_H_

#include <iostream>
#include <string>

class Course;

class Student{

protected:
		const std::string _studentId;
		const std::string _imagePath;
		unsigned short _unfinishedSemesterCourses;
		unsigned short _currentSemester;
		unsigned short _electiveCoursesUnfinished;

		Student(){};

public:
		void finishcourse();
		virtual void study(Course &c)=0;
		virtual ~Student(){ std::cout << "Student is dead!" << std::endl;}

};

#endif