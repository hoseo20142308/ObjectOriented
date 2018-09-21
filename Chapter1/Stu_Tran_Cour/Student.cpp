#include "Student.h"



Student::Student(char sName)
{
	this->name = sName;
	this->transcript = new Transcript;
}


Student::~Student()
{
}
