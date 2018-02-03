#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

/*Simple Array Sum
/Output Format
/Print the sum of the array's elements as a single integer.
*/

int simpleArraySum(int n, int ar_size, int* ar) {
    // Complete this function
    int sum = 0;
    for (int i = 0; i < ar_size; i++) {
        sum += ar[i];
    }
    return sum;
}

int main() {
    int n; 
    scanf("%i", &n);
    int *ar = malloc(sizeof(int) * n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       scanf("%i",&ar[ar_i]);
    }
    int result = simpleArraySum(n, n, ar);
    printf("%d\n", result);
    return 0;
}