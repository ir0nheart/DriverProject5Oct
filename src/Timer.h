/*
 * Timer.h
 *
 *  Created on: Oct 5, 2016
 *      Author: alpaydemiryurek
 */

#ifndef TIMER_H_
#define TIMER_H_

#include <ctime>

namespace EDU {
namespace NEU {
namespace CSYE6205 {

class Timer {
public:
	Timer();
	virtual ~Timer();
	operator double() const ;
		void reset();
	private:

	        std::clock_t m_start;
};

} /* namespace CSYE6205 */
} /* namespace NEU */
} /* namespace EDU */

#endif /* TIMER_H_ */
