#include <stdio.h>

int main() {
    FILE *file;
    int num, sum = 0, count = 0;
    float avg;


    file = fopen("numbers.txt", "r");
    if (file == NULL) {
        printf("Error: numbers.txt not found!\n");
        return 1;
    }

    
    while (fscanf(file, "%d", &num) == 1) {
        sum += num;
        count++;
    }

    fclose(file);

    
    if (count > 0)
        avg = (float)sum / count;
    else
        avg = 0;

    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", avg);

    return 0;
}
