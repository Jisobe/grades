// Programmer Name: Jennifer Isobe 
// Program Name: Arrays and Loops Project Assignment 4 Grading Program
// Date: 04/06/2024

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// BASIC for 6 assignments --------------------------------------------------
int main(void) {

  // Declare and initialize variables
  int allGradesArr[6]; //Array for the 6 assignment grades to populate
  int gradeTotal = 0;
  double overallPercentage;
  int inputGrade;
  int currentAssignment;

  // Loop to get the grades of the assignments 
  for (currentAssignment = 0; currentAssignment < 6; currentAssignment++){
    printf("Please enter the grade for assignment #%d: ", currentAssignment+1);
    scanf("%d", &inputGrade);
    allGradesArr[currentAssignment] = inputGrade;
  }

  // Loop to add all of the assignment scores
  for (currentAssignment = 0; currentAssignment < 6; currentAssignment++){
    gradeTotal += allGradesArr[currentAssignment];
  }

  // Get the overall percentage for all assignments
  overallPercentage = ((gradeTotal*1.0)/(300.00)) * 100.0;

  // Print total points and percentage
  printf("\n\nOver 6 assignments you earned %d points out of a possible 300 points!\n", gradeTotal);

  printf("\nYour grade is %0.2lf%%. ", overallPercentage);
}

// ADVANCED ----------------------------------------------------------------
// int main(void) {

//   // Declare and initialize variables
//   int allGradesArr[6]; //Array for the grades to populate
//   int assignmentNumber = 0;
//   const int maxAssignmentPoints = 50; //Assignments are worth 50 points each
//   int totalPointsPossible;
//   int gradeTotal = 0;
//   double overallPercentage;
//   char inputGrade[2];
//   int convertedGrade;

//   printf("At any time enter Q to quit\n");

//   // Get the first value and set inputGrade before entering while loop
//   printf("Please enter the grade for assignment #%d: ", assignmentNumber+1);
//   scanf("%s", inputGrade);

//   // Get grades for assignments until Q or q is entered 
//   while (strcmp(inputGrade, "Q") != 0 && strcmp(inputGrade, "q") != 0 ){
//     convertedGrade = atoi(inputGrade);
//     allGradesArr[assignmentNumber] = convertedGrade;
//     assignmentNumber ++;     
//     printf("Please enter the grade for assignment #%d: ", assignmentNumber+1);
//     scanf("%s", inputGrade);
//   }

//   // Loop through to get the total points 
//   for (int currentAssignment = 0; currentAssignment < assignmentNumber; currentAssignment++){
//     gradeTotal += allGradesArr[currentAssignment];
//   }

//   // Get max points total for all assignments
//   totalPointsPossible = maxAssignmentPoints * assignmentNumber;

//   // Get the percentage for the combined assignments
//   overallPercentage = (gradeTotal*1.0)/(totalPointsPossible*1.0) * 100.0;

//   // Print the total points and percetage for the assignments
//   printf("\n\nOver %d assignments you earned %d points out of a possible %d points!\n", assignmentNumber, gradeTotal, totalPointsPossible);

//   printf("\nYour grade is %0.2lf%%. ", overallPercentage);

//   // Get and print the letter grade based on the percentage
//   if (overallPercentage >= 90){
//     printf("Letter grade is A.");
//   }
//   else if (overallPercentage >= 80){
//     printf("Letter grade is B.");
//   }
//   else if (overallPercentage >= 70){
//     printf("Letter grade is C.");
//   }
//   else if (overallPercentage >= 60){
//     printf("Letter grade is D.");
//   }
//   else{
//     printf("Letter grade is F.");
//   }
// }