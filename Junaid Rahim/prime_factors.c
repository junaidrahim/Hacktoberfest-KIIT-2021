// Prime Factors of a given number

#include <stdio.h>

int isPrime(int n) {
    if (n <= 1) {
	    return 0
    }
    for(int i=2; i*i <= n; i++){
        if(n % i == 0)
            return 0;
    }

    return 1;
}

void print_prime_factors(int *n){
    for(int i=2; i*i < *n; i++){
        if ((*n % i == 0) && (isPrime(i)))
            printf("%d ", i);
    }
}


int main(){
    int number;
    printf("Enter number: ");
    scanf("%d", &number);

    print_prime_factors(&number);

    return 0;
}
