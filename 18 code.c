#include <stdio.h>

int main() {
    double s1, s2, s3;

    
    printf("Enter the lengths of the three sides: ");
    
    
    scanf("%lf %lf %lf", &s1, &s2, &s3);

    
    if ((s1 > 0 && s2 > 0 && s3 > 0) &&
        (s1 + s2 > s3) && 
        (s1 + s3 > s2) && 
        (s2 + s3 > s1)) {

        
        
        
        if (s1 == s2 && s2 == s3) {
            printf("The triangle is Equilateral.\n");
        }
        
        else if (s1 == s2 || s1 == s3 || s2 == s3) {
            printf("The triangle is Isosceles.\n");
        }
        
        else {
            printf("The triangle is Scalene.\n");
        }
    } 
    
    else {
        printf("The given side lengths do not form a valid triangle.\n");
    }

    return 0;
}