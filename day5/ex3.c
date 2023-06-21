#include <stdio.h>

struct Time {
    int hours;
    int minutes;
    int seconds;
};

// Function to calculate the difference between two time periods
struct Time calculateTimeDifference(struct Time t1, struct Time t2) {
    struct Time diff;

    // Convert both time periods to seconds
    int time1Seconds = t1.hours * 3600 + t1.minutes * 60 + t1.seconds;
    int time2Seconds = t2.hours * 3600 + t2.minutes * 60 + t2.seconds;

    // Calculate the difference in seconds
    int diffSeconds = time2Seconds - time1Seconds;

    // Convert the difference back to hours, minutes, and seconds
    diff.hours = diffSeconds / 3600;
    diffSeconds %= 3600;
    diff.minutes = diffSeconds / 60;
    diff.seconds = diffSeconds % 60;

    return diff;
}

int main() {
    struct Time time1, time2, diff;

    printf("Enter the first time period:\n");
    printf("Hours: ");
    scanf("%d", &(time1.hours));
    printf("Minutes: ");
    scanf("%d", &(time1.minutes));
    printf("Seconds: ");
    scanf("%d", &(time1.seconds));

    printf("\nEnter the second time period:\n");
    printf("Hours: ");
    scanf("%d", &(time2.hours));
    printf("Minutes: ");
    scanf("%d", &(time2.minutes));
    printf("Seconds: ");
    scanf("%d", &(time2.seconds));

    // Calculate the difference between the two time periods
    diff = calculateTimeDifference(time1, time2);

    printf("\nDifference between the two time periods:\n");
    printf("Hours: %d\n", diff.hours);
    printf("Minutes: %d\n", diff.minutes);
    printf("Seconds: %d\n", diff.seconds);

    return 0;
}
