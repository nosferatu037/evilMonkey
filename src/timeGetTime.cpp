/*
 * timeofday.cpp
 *
 *  Created on: Jul 3, 2012
 *      Author: nosferatu
 */
#include "timeGetTime.h"
#include <cstddef>

unsigned int timeGetTime(){
  struct timeval now;
  gettimeofday(&now,NULL);
  return now.tv_usec/1000;
}
