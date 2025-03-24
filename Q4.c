#include <stdio.h>
#define SUBJECTS 5
#define MAX_MARKS 100

void inputMarks(int arr[][SUBJECTS], int s);
void updateMarks(int arr[][SUBJECTS], int s, int r);
void printMarks(int arr[][SUBJECTS], int s);

int main() {
    int arr[100][SUBJECTS], s, r;
    
    printf("Enter number of students: ");
    scanf("%d", &s);
    
    inputMarks(arr, s);
    
    printf("\nEnter roll to update (1-%d): ", s);
    scanf("%d", &r);
    
    updateMarks(arr, s, r - 1);
    
    printf("\nUpdated marks:\n");
    printMarks(arr, s);
    
    return 0;
}

void inputMarks(int arr[][SUBJECTS], int s) {
    char *subjectNames[] = {"Eng", "Maths", "Phy", "Chem", "CS"};
    
    for (int i = 0; i < s; i++) {
        printf("\nStudent %d:\n", i + 1);
        for (int j = 0; j < SUBJECTS; j++) {
            printf("Marks of student %d in %s: ", i + 1, subjectNames[j]);
            scanf("%d", &arr[i][j]);
            if(arr[i][j] > MAX_MARKS) arr[i][j] = MAX_MARKS;
        }
    }
}

void updateMarks(int arr[][SUBJECTS], int s, int r) {
    if (r < 0 || r >= s) {
        printf("Invalid roll\n");
        return;
    }
    
    for (int j = 0; j < SUBJECTS; j++) {
        arr[r][j] += 5;
        if(arr[r][j] > MAX_MARKS) arr[r][j] = MAX_MARKS;
    }
}

void printMarks(int arr[][SUBJECTS], int s) {
    char *subjectNames[] = {"Eng", "Maths", "Phy", "Chem", "CS"};
    
    for (int i = 0; i < s; i++) {
        printf("\nStudent %d:\n", i + 1);
        for (int j = 0; j < SUBJECTS; j++) {
            printf("%s: %d\n", subjectNames[j], arr[i][j]);
        }
    }
}