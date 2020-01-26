#include "student.h"

Student::Student(string ID, string fName, string lName, string em, int ag, int days0, int days1, int days2) {
	studentID = ID;
	firstName = fName;
	lastName = lName;
	email = em;
	age = ag;
	daysCourse[0] = days0;
	daysCourse[1] = days1;
	daysCourse[2] = days2;
}

Student::~Student()
{
}

string Student::getStudentID(string firstName, string lastname) const
{
	return string();
}

string Student::getFirstName(string studentID) const
{
	return string();
}

string Student::getLastname(string studentID) const
{
	return string();
}

string Student::getEmail(string studentID) const
{
	return string();
}

int Student::getAge(string studentID) const
{
	return 0;
}

int Student::getDays(string studentID, int courseIndex) const
{
	return 0;
}

void Student::getDegreeType() {}


void Student::print() {}


void Student::setStudentID(string firstName, string lastName, string studentID)
{
}

void Student::setFirstName(string studentID, string firstName)
{
}

void Student::setLastName(string studentID, string lastName)
{
}

void Student::setEmail(string studentID, string email)
{
}

void Student::setAge(string studentID, int age)
{
}

void Student::setDays(string sudentID, int courseIndex)
{
}
