//A 200 m train crosses a pole in 10 s. Find its speed in km/h.
#include <stdio.h>

int main() {
    float trainlength = 200, time = 10;
    float speed;

    speed = trainlength / time;
    speed = speed * 3600 / 1000;

    printf("Speed of train : %f km/h", speed);

    return 0;
}

