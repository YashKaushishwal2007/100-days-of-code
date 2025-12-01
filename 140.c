#include <stdio.h>

enum Status { SUCCESS = 100, FAILURE = 200, TIMEOUT = 300 };

int main() {
    enum Status s;

    
    printf("SUCCESS = %d\n", SUCCESS);
    printf("FAILURE = %d\n", FAILURE);
    printf("TIMEOUT = %d\n", TIMEOUT);

    
    s = FAILURE;
    printf("Enum variable s = FAILURE has value = %d\n", s);

    return 0;
}
