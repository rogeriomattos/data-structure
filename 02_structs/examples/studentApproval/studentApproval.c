#include <stdio.h>

typedef struct {
    float exams[3];
    char registration[40];
    char name[40];
    float average;
    int isApproved;//1 == true, 0 == false
} Student;


int main(){
    Student students[3];
    Student highestAverage, lowestAverage;

    for(int i = 0; i < 3; i++){
        
        printf("\nStudent %d:\n", i+1);
        printf("Name: ");
        scanf("%s", &students[i].name);
        printf("Registration: ");
        scanf("%s", &students[i].registration);
        
        float sumExams = 0;

        for(int j = 0; j < 3; j++){
            printf("Exam %d: ", j + 1);
            scanf("%f", &students[i].exams[j]);
            sumExams = sumExams + students[i].exams[j];
        }

        students[i].average = sumExams/3;  

        if(students[i].average >= 6){
            students[i].isApproved = 1;
        }else{
            students[i].isApproved = 0;
        }

        if(i == 0) {
            highestAverage = students[i];
            lowestAverage = students[i];
        }else {
            if(highestAverage.average < students[i].average){
                highestAverage = students[i];
            }  
            if(lowestAverage.average > students[i].average){
                lowestAverage = students[i];
            }     
        }
    }
    printf("\n---------------------------\n");
    printf("Highest Average\n");
    printf("Student Name: %s\n", highestAverage.name);
    printf("Avarege: %lf\n", highestAverage.average);
    printf("\n---------------------------\n");
    printf("Lowest Average\n");
    printf("Student Name: %s\n", lowestAverage.name);
    printf("Avarege: %lf\n", lowestAverage.average);
    printf("\n---------------------------\n");
    printf("\n");
    printf("\n---------------------------\n");
    printf("APROVAL RESULTS\n\n");
    for (int i = 0; i < 3; i++)
    {
        printf("Student %s ", students[i].name);
        if(students[i].isApproved == 1){
            printf("Pass");
        }else{
            printf("Fail");
        }
        printf("\n");
    }
    
}