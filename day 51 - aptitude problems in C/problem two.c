//A train 120 m long crosses a man walking at 6 km/h in 6 s. Find train’s speed (Opposite direction).

#include <stdio.h>

int main() {
    float trainlength = 120;
	float crossingtime = 6;
	float manspeed = 6;
    float trainspeed, relativespeed;

    manspeed = manspeed * 1000 / 3600;
    relativespeed = trainlength / crossingtime;
    trainspeed = relativespeed - manspeed;
    trainspeed = trainspeed * 3600 / 1000;

    printf("Speed of train : %f km/h", trainspeed);

    return 0;
}

