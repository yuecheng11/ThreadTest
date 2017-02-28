 ///
 /// @file    test_thread.cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2016-03-18 11:25:41
 ///

#include "TestThread.h"
#include <iostream>

int main(void)
{
	wd::Thread * pThread = new wd::TestThread;
	pThread->start();
	pThread->join();
	return 0;
}

