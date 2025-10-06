//Two trains 100 m and 120 m long run in opposite directions at 36 km/h and 54 km/h. Find time to cross.
#include <stdio.h>

int main()
{
    float length1 = 100, length2 = 120;
    float speed1 = 36, speed2 = 54;
    float relativespeed, time;

    speed1 = speed1 * 1000 / 3600;
    speed2 = speed2 * 1000 / 3600;
    relativespeed = speed1 + speed2;
    time = (length1 + length2) / relativespeed;


    printf("Amount of time taken to cross : %f\n", time);

    return 0;
}

