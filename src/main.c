#include <stdio.h>

int main() {
    float marksOne, marksTwo, marksThree;
    float totalMarks, average;
    printf("Marks in Subject One:");
    scanf("%f", &marksOne);
    printf("%f \n", marksOne);
    
    printf("Marks in Subject Two:");
    scanf("%f", &marksTwo);
    printf("%f \n", marksTwo);
    
    printf("Marks in Subject Three:");
    scanf("%f", &marksThree);
    printf("%f \n", marksThree);
    
    totalMarks= marksOne+marksTwo+marksThree;
    average=totalMarks/3;
    printf("Total Marks is %f \n", totalMarks);
    printf("Average is %f", average);
    return 0;
}