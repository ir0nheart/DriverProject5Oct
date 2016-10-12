/*
 * Timer.cpp
 *
 *  Created on: Oct 5, 2016
 *      Author: alpaydemiryurek
 */

#include "Timer.h"

namespace EDU {
namespace NEU {
namespace CSYE6205 {

Timer::Timer() :
		m_start(std::clock()) {
}

Timer::~Timer() {
	// TODO Auto-generated destructor stub
}

Timer::operator double() const

{
	return (std::clock() - m_start) / static_cast<double>(CLOCKS_PER_SEC);
}

void Timer::reset() {
	m_start = std::clock();
}



} /* namespace CSYE6205 */
} /* namespace NEU */
} /* namespace EDU */
