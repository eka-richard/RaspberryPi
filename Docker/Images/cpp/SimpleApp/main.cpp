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
    std::thread first(Task_500msCyclic);
    std::thread second(Task_1sCyclic);

    printf("Threads has been created, now spawning...\n");

    first.join();
    second.join();

    printf("Finish running");

    return 0;
}