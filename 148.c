#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};


int isIdentical(struct Student s1, struct Student s2) {
    if (strcmp(s1.name, s2.name) == 0 &&
        s1.roll_no == s2.roll_no &&
        s1.marks == s2.marks) {
        return 1;
    } else {
        return 0; 
    }
}

int main() {
    struct Student s1, s2;

    
    printf("Enter details for Student 1\n");
    printf("Name: ");
    fgets(s1.name, sizeof(s1.name), stdin);
    printf("Roll Number: ");
    scanf("%d", &s1.roll_no);
    printf("Marks: ");
    scanf("%f", &s1.marks);

    getchar(); 

    
    printf("\nEnter details for Student 2\n");
    printf("Name: ");
    fgets(s2.name, sizeof(s2.name), stdin);
    printf("Roll Number: ");
    scanf("%d", &s2.roll_no);
    printf("Marks: ");
    scanf("%f", &s2.marks);

    
    if (isIdentical(s1, s2)) {
        printf("\nThe two students are identical.\n");
    } else {
        printf("\nThe two students are NOT identical.\n");
    }

    return 0;
}
