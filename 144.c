#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student students[5], topStudent;
    int i, topIndex = 0;

    
    for (i = 0; i < 5; i++) {
        printf("\nEnter details for student %d\n", i + 1);

        printf("Name: ");
        getchar();  
        fgets(students[i].name, sizeof(students[i].name), stdin);

        printf("Roll Number: ");
        scanf("%d", &students[i].roll_no);

        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    
    topStudent = students[0];
    for (i = 1; i < 5; i++) {
        if (students[i].marks > topStudent.marks) {
            topStudent = students[i];
        }
    }

    
    printf("\n---- Top Student ----\n");
    printf("Name: %s", topStudent.name);
    printf("Roll Number: %d\n", topStudent.roll_no);
    printf("Marks: %.2f\n", topStudent.marks);

    return 0;
}
