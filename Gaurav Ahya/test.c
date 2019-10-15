#include <stdio.h>
#include <math.h>

int main(){
    int a, b, c;
    printf("Enter a, b, c: ");
    scanf("%d %d %d", &a, &b, &c);

    float root1, root2;

    switch (b*b - 4*a*c > 0) {
        case 0:
            printf("No Real Roots\n");
            break;

        case 1:
            root1 = (-b + sqrt(b*b - 4*a*c)) / (2*a);
            root2 = (-b - sqrt(b*b - 4*a*c)) / (2*a);

            printf("The roots are %f %f", root1, root2);
            break;
    }
    
    return 0;    
}