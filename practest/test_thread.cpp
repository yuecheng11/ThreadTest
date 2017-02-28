 ///
 /// @file    test_thread.cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2016-03-18 11:25:41
 ///

#include "TestThread.h"
#include <iostream>

int main(void)
{
	wd::Thread * pThread1 = new wd::TestThread;
	wd::Thread * pThread2 = new wd::TestThread;
	
	pThread1->start();	
	pThread2->start();
	
	
	pThread1->join();
	pThread2->join();

	
	return 0;
}

