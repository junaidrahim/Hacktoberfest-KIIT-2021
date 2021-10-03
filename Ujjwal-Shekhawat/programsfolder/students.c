#include<stdio.h>
#include<stdlib.h>

struct Student {
    char name[100];
    int roll_no, marks[5], total_marks;
    float average_marks;
};

void total_and_average(struct Student*, int);
void Display(struct Student*, int);
void input(struct Student*, int);

void input(struct Student* s, int n) {
    for (int i = 0; i < n; i++)
    {
        printf("\nEnter the name of the student : ");
        scanf(" %s", (s+i)->name);
        printf("\nEnter the roll number of the student : ");
        scanf(" %d", &(s+i)->roll_no);
        for (int j = 0; j < 5; j++)
        {
            printf("\nEnter the marks of subject %d of the student : ", j+1);
            scanf(" %d", &(s+i)->marks[j]);
        }
        
    }
    total_and_average(s, n);
}

void total_and_average(struct Student* s, int n) {
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            ((s+i)->total_marks)+=(s+i)->marks[j];
        }
        (s+i)->average_marks=(((s+i)->total_marks)/500);
        
    }

    Display(s, n);
    
}

void Display(struct Student* s, int n) {
    for (int i = 0; i < n; i++)
    {
        printf("Name : %s\nRoll no : %d\nTotal marks : %d\nAverage marks : %f\n", (s+i)->name, (s+i)->roll_no, (s+i)->total_marks, (s+i)->average_marks);
        for (int j = 0; j < 5; j++)
        {
            printf("Marks in subject %d : %d\n",j+1, (s+i)->marks[j]);
        }
        
    }
    
}

int main() {
    struct Student* s;
    int n;
    scanf(" %d", &n);
    s=(struct Student*)malloc(n*sizeof(struct Student));
    input(s, n);
    
    return 0;

}
