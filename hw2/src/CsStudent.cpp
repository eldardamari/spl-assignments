#include "CsStudent.h"

#include "Course.h"


void CsStudent :: study(Course &course){
	if (rand() % GRADE_RANGE >= course.getMinimumGrade() &&
            rand() % GRADE_RANGE >= CS_QUIT_CHANCE) {

        this->finishcourse(course);

        writeToStudentsLogFile(this->_id,
                course.getName(),
                this->_department,
                FINISHED_COURSE);
	} else {
        writeToStudentsLogFile(this->_id,
                course.getName(),
                this->_department,
                FAILED_COURSE);
    }
}
