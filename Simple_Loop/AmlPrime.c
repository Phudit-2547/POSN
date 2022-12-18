#include <stdio.h>
#include <math.h>
int main() {
    int i, x, prime=1;
    scanf("%d", &x);
    if(x!=0 && x!=1){
        for(i=2; i<sqrt(x); i++) {
            if(x%i==0){
                prime=0;
                break;
            }
        }
    }
    if(prime==1)
        printf("%d is prime", x);
    else
        printf("%d is not prime", x);
        return 0;
}
