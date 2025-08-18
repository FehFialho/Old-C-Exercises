/* Evaluation 2 - (04/22/2025)
2) Create a C program that receives the lengths of the three sides of a triangle 
and determines its type using if... else if... else conditions.

The program:
- Asks the user to enter three side lengths.
- Classifies the triangle as:
    • Equilateral: all three sides equal.
    • Isosceles: exactly two sides equal.
    • Scalene: all three sides different.
    • Right triangle: validated using Pythagoras theorem (a² + b² = c²).
- Handles invalid inputs (zero or negative lengths).
- Declares Invalid if the given sides cannot form a triangle (sum of two sides ≤ third side).
*/
#include <stdio.h>

int main(){
    
    float a,b,c;
    
    printf("Enter the three sides of the triangle (A B C): ");
    scanf("%f %f %f", &a, &b, &c);
    
    if ( a < b + c && b < a + c && c < a + b && a > 0 && b > 0 && c > 0 ){
        
        if ( a == b && c == b){
            printf("\nTriangle Type: EQUILATERAL\n");
        } else if ( a == b || b == c || c == a){
            printf("\nTriangle Type: ISOSCELES\n");
        } else {
            printf("\nTriangle Type: SCALENE\n");
        }
        
        if ( (a * a) + (b * b) == (c * c)){
            printf("\nTriangle Type: RIGHT ANGLED\n");
        }
        
    } else {
        printf("\nTriangle Type: INVALID!\n");
    }
    
    return 0;
}
