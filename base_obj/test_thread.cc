 ///
 /// @file    test_thread.cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2016-03-18 11:39:38
 ///

#include "Thread.h"
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <iostream>

using std::cout;
using std::endl;

struct Task
{
void run()
{
	srand(time(NULL));
	while(true)
	{
		int num = rand() % 100;
		cout << "num = " << num << endl;
		sleep(1);
	}
}
};

int main(void)
{
	Task task;
	wd::Thread thread(std::bind(&Task::run, &task));
	thread.start();
	thread.join();

	return 0;
}
