#include <stdio.h>

struct Time {
    int hours;
    int minutes;
    int seconds;
};

struct Time calculateTimeDifference(struct Time start, struct Time stop);

int main() {
    struct Time startTime, stopTime, difference;

    // Read the start time
    printf("Enter the start time:\n");
    printf("Enter hours, minutes, and seconds: ");
    scanf("%d %d %d", &startTime.hours, &startTime.minutes, &startTime.seconds);

    // Read the stop time
    printf("\nEnter the stop time:\n");
    printf("Enter hours, minutes, and seconds: ");
    scanf("%d %d %d", &stopTime.hours, &stopTime.minutes, &stopTime.seconds);

    // Calculate the time difference
    difference = calculateTimeDifference(startTime, stopTime);

    // Display the result
    printf("\nTime Difference: %02d:%02d:%02d - %02d:%02d:%02d = %02d:%02d:%02d\n",
           startTime.hours, startTime.minutes, startTime.seconds,
           stopTime.hours, stopTime.minutes, stopTime.seconds,
           difference.hours, difference.minutes, difference.seconds);

    return 0;
}

struct Time calculateTimeDifference(struct Time start, struct Time stop) {
    struct Time difference;

    // Convert all times to seconds
    int startTimeSeconds = start.hours * 3600 + start.minutes * 60 + start.seconds;
    int stopTimeSeconds = stop.hours * 3600 + stop.minutes * 60 + stop.seconds;
    int differenceSeconds = stopTimeSeconds - startTimeSeconds;

    // Calculate hours, minutes, and seconds
    difference.hours = differenceSeconds / 3600;
    differenceSeconds %= 3600;
    difference.minutes = differenceSeconds / 60;
    difference.seconds = differenceSeconds % 60;

    return difference;
}
