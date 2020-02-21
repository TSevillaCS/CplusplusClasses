
#include <iostream>
#include <string>
#include "GradeBook.h"
using namespace std;


	//constructor initial values
	GradeBook::GradeBook(string name)
	{
		setCourseName(name);
	}

	void GradeBook::setCourseName(string name)
	{
		courseName = name;
	}

	string GradeBook::getCourseName()
	{
		return courseName;
	}

	void GradeBook::displayMessage()
	{
		cout << "Welcome to the gradebook for \n" << getCourseName() << endl;
	}
