#include <stdio.h>

enum Gender { MALE, FEMALE, OTHER };

struct Person {
    char name[50];
    int age;
    enum Gender gender;
};

int main() {
    struct Person p;

    // Input person details
    printf("Enter name: ");
    fgets(p.name, sizeof(p.name), stdin);

    printf("Enter age: ");
    scanf("%d", &p.age);

    int g;
    printf("Enter gender (0 = MALE, 1 = FEMALE, 2 = OTHER): ");
    scanf("%d", &g);
    p.gender = (enum Gender)g;

    
    printf("\nPerson Details:\n");
    printf("Name: %s", p.name);
    printf("Age: %d\n", p.age);

    printf("Gender: ");
    switch (p.gender) {
        case MALE:   printf("MALE\n"); break;
        case FEMALE: printf("FEMALE\n"); break;
        case OTHER:  printf("OTHER\n"); break;
        default:     printf("UNKNOWN\n");
    }

    return 0;
}
