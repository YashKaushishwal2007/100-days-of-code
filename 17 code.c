#include <stdio.h>
#include <math.h> 

int main() {
    double a, b, c;
    double discriminant, root1, root2;
    double realPart, imaginaryPart;

    
    printf("Enter coefficients a, b, and c (for ax^2 + bx + c = 0): ");
    
    
    scanf("%lf %lf %lf", &a, &b, &c);

    
    if (a == 0) {
        if (b == 0) {
            if (c == 0) {
                printf("This is 0 = 0, an identity with infinite solutions.\n");
            } else {
                printf("This is %.2lf = 0, a contradiction with no solutions.\n", c);
            }
        } else {
            
            root1 = -c / b;
            printf("This is a linear equation (a=0).\n");
            printf("The single root is x = %.2lf\n", root1);
        }
        return 0; 
    }

    
    discriminant = (b * b) - (4 * a * c);

    

    
    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);

        printf("Roots are real and distinct.\n");
        printf("Root 1 = %.2lf\n", root1);
        printf("Root 2 = %.2lf\n", root2);
    }
    
    else if (discriminant == 0) {
        root1 = root2 = -b / (2 * a);

        printf("Roots are real and equal.\n");
        printf("Root 1 = Root 2 = %.2lf\n", root1);
    }
    
    else {
        realPart = -b / (2 * a);
        
        imaginaryPart = sqrt(-discriminant) / (2 * a); 

        printf("Roots are complex and imaginary.\n");
        printf("Root 1 = %.2lf + %.2lfi\n", realPart, imaginaryPart);
        printf("Root 2 = %.2lf - %.2lfi\n", realPart, imaginaryPart);
    }

    return 0;
}