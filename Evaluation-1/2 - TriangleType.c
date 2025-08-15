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
