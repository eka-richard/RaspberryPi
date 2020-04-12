#include <iostream>
#include <thread>
#include <chrono>
#include "main.h"

void Task_500msCyclic()
{
    while (1)
    {
        printf("Running 500 ms cyclic task...\n");

        std::this_thread::sleep_for(std::chrono::milliseconds(500));
    }
}

void Task_1sCyclic()
{
    while (1)
    {
        printf("Running 1 s cyclic task...\n");

        std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    }
}

int main()
{
    unsigned int totalDuration = 0;
    std::chrono::system_clock::time_point storedTime = std::chrono::system_clock::now();

    std::thread first(Task_500msCyclic);
    std::thread second(Task_1sCyclic);

    printf("Threads has been created, now spawning...\n");

    first.detach();
    second.detach();

    printf("Finish spawning all task...\n");

    while (totalDuration < 10)
    {
        std::chrono::system_clock::time_point currentTime = std::chrono::system_clock::now();
        std::chrono::system_clock::duration elapsedTime = currentTime - storedTime;

        if (elapsedTime.count() > 10000000)
        {
            totalDuration++;
            std::cout << "We have been running for: " << totalDuration << " seconds" << std::endl;

            storedTime = currentTime;
        }
    }

    std::cout << "Timer expired terminating all task..." << std::endl;

    return 0;
}