/*
 * Person.h
 *
 *  Created on: Oct 5, 2016
 *      Author: alpaydemiryurek
 */

#include <string>
using namespace std;
#ifndef PERSON_H_
#define PERSON_H_

namespace EDU {
namespace NEU {
namespace CSYE6205 {

class Person {
public:
	Person();
	virtual ~Person();
	virtual void info();
	virtual void info2();
	string fname;
	string lastname;
	int age;
	float s_GPA;
};

} /* namespace CSYE6205 */
} /* namespace NEU */
} /* namespace EDU */

#endif /* PERSON_H_ */
