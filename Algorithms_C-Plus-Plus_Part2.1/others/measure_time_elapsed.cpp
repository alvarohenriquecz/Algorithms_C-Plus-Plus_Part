// To calculate the time taken by a code to execute
#include <sys/termios.h>
#include <iostream>

__int64_t getTimeInMicroSeconds()
{
    struct timeval start;
    gettimeofday(&start, NULL);
    return start.tv_sec * 1000000 + start.tv_usec;
}

// Write function sample(args)

int main()
{
    // Write code
    __ino64_t starttime = getTimeInMicroSeconds();
    // sample(args) function run
    // Any other funtions (if present) run
    std::cout << getTimeInMicroSeconds() - starttime;
    return 0;
}