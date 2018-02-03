#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
/*Given an integer, , perform the following conditional actions:
/
If N is odd, print Weird
If N is even and in the inclusive range of 2 to 5, print Not Weird
If N is even and in the inclusive range of 6 to 20, print Weird
If N is even and greater than 20, print Not Weird
*/

int main(){
    int N; 
    scanf("%d",&N);
    if ( N%2  == 1)
        printf("Weird");
        else if (N>=6 && N<=20)
            printf("Weird");
    else
        printf("Not Weird");
    return 0;
}
