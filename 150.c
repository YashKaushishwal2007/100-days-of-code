#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student s;
    struct Student *ptr;


    ptr = &s;

    
    printf("Enter student name: ");
    getchar();  
    fgets(ptr->name, sizeof(ptr->name), stdin);

    printf("Enter roll number: ");
    scanf("%d", &ptr->roll_no);

    printf("Enter marks: ");
    scanf("%f", &ptr->marks);

    
    printf("\nEnter new marks to update: ");
    scanf("%f", &ptr->marks);

    
    printf("\nStudent Details:\n");
    printf("Name: %s", ptr->name);
    printf("Roll Number: %d\n", ptr->roll_no);
    printf("Marks: %.2f\n", ptr->marks);

    return 0;
}
