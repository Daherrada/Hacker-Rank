#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    double meal_cost; 
    scanf("%lf", &meal_cost);
    int tip_percent; 
    scanf("%i", &tip_percent);
    int tax_percent; 
    scanf("%i", &tax_percent);
    
    double tip, tax, totalCost;   
    tip = meal_cost * ( (double) tip_percent / 100 );
    tax = meal_cost * ( (double) tax_percent / 100 );
    totalCost = meal_cost + tip + tax;    
    round(totalCost);    
    printf("The total meal cost is %.0lf dollars.", totalCost);
    return 0;
}