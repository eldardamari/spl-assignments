#include "../include/CsStudent.h"

CsStudent :: CsStudent(string studentId, String imagePath){

		_studentId.assign(studentId);
		_imagePath.assign(imagePath);
		_unfinishedSemesterCourses = 0;
		_electiveCoursesUnfinished = 0;

}

virtual void CsStudent :: study(Course &c){

	if ( rand()%100 >= c.getMinGrade() && rand()%100 >= 25 ) {


		this->finishCourse();
}

}