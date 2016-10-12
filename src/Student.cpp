/*
 * Student.cpp
 *
 *  Created on: Oct 5, 2016
 *      Author: alpaydemiryurek
 */

#include "Student.h"
#include <iostream>
using namespace std;
namespace EDU {
namespace NEU {
namespace CSYE6205 {

Student::Student() {
	// TODO Auto-generated constructor stub

}

Student::~Student() {
	// TODO Auto-generated destructor stub
}

void Student::info(){
	cout << fname << " " << lastname << " is our Student and has a GPA: " << s_GPA << endl;
}
void Student::info2(){
	cout << fname << " " << lastname << " is " << age << " years old student." << endl;
}
} /* namespace CSYE6205 */
} /* namespace NEU */
} /* namespace EDU */
