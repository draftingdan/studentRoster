#include "roster.h"
#include <iostream>
#include <string>
using namespace std;


const string studentData[] =
{ "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
"A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
"A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
"A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
"A5,Daniel,Allen,dall202@wgu.edu,38,22,35,31,SOFTWARE" };

int main()
{
	cout << "Hello world!\n";
	cout << studentData[4] << endl;
	return 0;
}


