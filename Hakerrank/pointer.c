#include <stdio.h>
#include<math.h>

void update(int *a,int *b) {
/* Declare a temporary variable(temp), which stores the value of a. 
Update the value of *a to *a + *b and the value of *b = abs(temp - *b). (C++ solution below)

If you want to avoid a temporary variable, (a + b) - 2b = a - b. 
(C solution below)

STested by saikiran9194
Problem Tester's code:

C
void update(int *a,int *b) {
}
 */

    *a += *b;
    *b = abs(*a - 2 * *b);
    
    // c++

//     void update(int *a,int *b) {
//     int temp = *a;
//     *a = *a + *b;
//     *b = abs(temp - *b);

// }

        
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    // printf("%d\n%d", a, b);

    return 0;
}

