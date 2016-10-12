/*
 * Student.h
 *
 *  Created on: Oct 5, 2016
 *      Author: alpaydemiryurek
 */

#ifndef STUDENT_H_
#define STUDENT_H_

#include "Person.h"

namespace EDU {
namespace NEU {
namespace CSYE6205 {

class Student: public Person {
public:
	Student();
	virtual ~Student();
	void info();
	void info2();
};

} /* namespace CSYE6205 */
} /* namespace NEU */
} /* namespace EDU */

#endif /* STUDENT_H_ */
