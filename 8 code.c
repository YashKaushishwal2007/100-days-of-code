#include <stdio.h>

int main() {
    int total_seconds_input;
    int hours, minutes, seconds;

    
    printf("Enter time in total seconds: ");
    scanf("%d", &total_seconds_input);

    if (total_seconds_input < 0) {
        printf("Please enter a non-negative number of seconds.\n");
        return 1; 
    }

    
    hours = total_seconds_input / 3600;

    
    int remaining_seconds = total_seconds_input % 3600;

    
    minutes = remaining_seconds / 60;

    
    seconds = remaining_seconds % 60;


    printf("\nConverted time (HH:MM:SS): %02d:%02d:%02d\n", hours, minutes, seconds);

    return 0;
}