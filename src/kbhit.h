/*
 * kbhit.h
 *
 *  Created on: Jul 3, 2012
 *      Author: nosferatu
 */

#ifndef KBHIT_H_
#define KBHIT_H_

#include <stdio.h>
#include <sys/select.h>
#include <termios.h>
#include <stropts.h>
#include <sys/ioctl.h>
#include <unistd.h>
#include <fcntl.h>

int kbhit(void);
#endif /* KBHIT_H_ */
