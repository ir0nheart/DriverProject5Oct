/*
 * Person.cpp
 *
 *  Created on: Oct 5, 2016
 *      Author: alpaydemiryurek
 */

#include "Person.h"
#include <iostream>
using namespace std;
namespace EDU {
namespace NEU {
namespace CSYE6205 {

Person::Person() {
	// TODO Auto-generated constructor stub
age=0;
s_GPA=0.0;
}

Person::~Person() {
	// TODO Auto-generated destructor stub
}
void Person::info(){
	cout << fname << " " << lastname << " is a person." << endl;
}
void Person::info2(){
	cout << fname << " " << lastname << " is a " << age <<" years old person." << endl;
}
} /* namespace CSYE6205 */
} /* namespace NEU */
} /* namespace EDU */
