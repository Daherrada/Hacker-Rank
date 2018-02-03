#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

/*Your task is to find their comparison 
/points by comparing a0 with b0, a1 with b1, and a2 with b2.
/If ai>bi, then Alice is awarded 1 point.
/If ai<bi, then Bob is awarded 1 point.
/If ai=bi, then neither person receives a point.
/Comparison points is the total points a person earned.
*/

int* solve(int a0, int a1, int a2, int b0, int b1, int b2, int *result_size){
    // Complete this function
    int alice[3]={a0,a1,a2};
    int bob[3]={b0,b1,b2};
    static int score[2];
    *result_size=2;
    for(int i= 0;i<3; i++)
        if(alice[i]>bob[i]){
            score[0]=score[0]+1;
        }
        else if (alice[i]<bob[i]){
        score[1]=score[1]+1;
    }
    return score;
}

int main() {
    int a0; 
    int a1; 
    int a2; 
    scanf("%d %d %d", &a0, &a1, &a2);
    int b0; 
    int b1; 
    int b2; 
    scanf("%d %d %d", &b0, &b1, &b2);
    int result_size;
    int* result = solve(a0, a1, a2, b0, b1, b2, &result_size);
    for(int result_i = 0; result_i < result_size; result_i++) {
        if(result_i) {
            printf(" ");
        }
        printf("%d", result[result_i]);
    }
    puts("");
    return 0;
}
