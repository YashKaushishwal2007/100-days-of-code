#include <stdio.h>
#include <stdlib.h>

struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    FILE *file;
    struct Employee emp[3];  
    int i, n = 3;

    
    for (i = 0; i < n; i++) {
        printf("\nEnter details for employee %d\n", i + 1);

        printf("Name: ");
        getchar(); 
        fgets(emp[i].name, sizeof(emp[i].name), stdin);

        printf("ID: ");
        scanf("%d", &emp[i].id);

        printf("Salary: ");
        scanf("%f", &emp[i].salary);
    }

    
    file = fopen("employees.dat", "wb");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    fwrite(emp, sizeof(struct Employee), n, file);
    fclose(file);

    printf("\nEmployee data written to employees.dat successfully!\n");

    
    struct Employee empRead[n];
    file = fopen("employees.dat", "rb");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    fread(empRead, sizeof(struct Employee), n, file);
    fclose(file);

    
    printf("\n---- Employee Records ----\n");
    for (i = 0; i < n; i++) {
        printf("\nEmployee %d\n", i + 1);
        printf("Name: %s", empRead[i].name);
        printf("ID: %d\n", empRead[i].id);
        printf("Salary: %.2f\n", empRead[i].salary);
    }

    return 0;
}

