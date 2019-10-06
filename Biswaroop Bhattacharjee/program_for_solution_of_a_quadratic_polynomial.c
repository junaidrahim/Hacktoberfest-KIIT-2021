#include<stdio.h>
#include<math.h>
int main(){

    double a, b, c, dis;
    printf("Enter values of a, b and c of a quadratic equation: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    dis = (b*b) - (4*a*c);
    switch(dis > 0){

        case 1:
            printf("the roots are real and distinct = %.2lf and %.2lf\n", ((-b + sqrt(dis))/(2*a)), (-b - sqrt(dis))/(2*a));
            break;        
        case 0: // which means discriminant can be either < 0 or equal to 0 so we check this with a nested switch statement
            switch (dis < 0){
                case 1:
                    printf("The roots are imaginary = %.2lf + i%.2lf and %.2lf - i%.2lf\n", -b/(2*a), sqrt(-dis)/(2*a), -b/(2*a), sqrt(-dis)/(2*a));
                    break;
            
                case 0: //which means discriminant is not > 0 and not < 0 so it should be equal to 0
                    printf("The roots are real and equal = %.2lf and %.2lf\n", -b/(2*a), -b/(2*a));
                    break;
            }
    }
    return 0;
}