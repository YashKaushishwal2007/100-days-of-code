#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    FILE *file;
    struct Student s;
    int n, i;

    
    printf("Enter number of students: ");
    scanf("%d", &n);

    
    file = fopen("students.txt", "w");
    if (file == NULL) {
        printf("Error: Could not create file!\n");
        return 1;
    }

    
    for (i = 0; i < n; i++) {
        printf("\nEnter details for student %d\n", i + 1);

        printf("Name: ");
        getchar();  
        fgets(s.name, sizeof(s.name), stdin);

        printf("Roll Number: ");
        scanf("%d", &s.roll);

        printf("Marks: ");
        scanf("%f", &s.marks);

        fprintf(file, "%s %d %.2f\n", s.name, s.roll, s.marks);
    }

    fclose(file);

    printf("\nData stored successfully in students.txt!\n\n");


    

    file = fopen("students.txt", "r");
    if (file == NULL) {
        printf("Error: Could not open file!\n");
        return 1;
    }

    printf("---- Student Records ----\n");

    while (fscanf(file, "%s %d %f", s.name, &s.roll, &s.marks) == 3) {
        printf("Name: %s | Roll: %d | Marks: %.2f\n", s.name, s.roll, s.marks);
    }

    fclose(file);

    return 0;
}
