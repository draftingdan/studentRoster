#pragma once
#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
	Student(string ID, string fName, string lName, string em, int ag, int days0, int days1, int days2);
	string getStudentID(string firstName, string lastname) const;
	string getFirstName(string studentID) const;
	string getLastname(string studentID) const;
	string getEmail(string studentID) const;
	int getAge(string studentID) const;
	int getDays(string studentID, int courseIndex) const;
	
	virtual void getDegreeType();
	virtual void print();
	
	void setStudentID(string firstName, string lastName, string studentID);
	void setFirstName(string studentID, string firstName);
	void setLastName(string studentID, string lastName);
	void setEmail(string studentID, string email);
	void setAge(string studentID, int age);
	void setDays(string sudentID, int courseIndex);


private:
	string studentID;
	string firstName;
	string lastName;
	string email;
	int age;
	int daysCourse[3];
	int degreeType;
};

