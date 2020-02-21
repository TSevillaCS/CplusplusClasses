#include<iostream>
#include "GradeBook.h"
using namespace std;

int main()
{
	GradeBook gradeBook1("CS101 intro to C++");
	GradeBook gradeBook2("CS102 Data Structures in C++");

	cout << "gradebook 1 created for course: " << gradeBook1.getCourseName() << endl;
	cout << "gradebook 2 created for course: " << gradeBook2.getCourseName() << endl;
}
