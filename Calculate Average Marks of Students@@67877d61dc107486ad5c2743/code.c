#include <stdio.h>
struct Student{
    int roll_num;
    char name[100];
    float marks;
};

int main(){
    int n;
    float total_marks = 0;
    scanf("%d", &n);

    struct Student s1[n];

    for(int i = 0; i < n; i++){
        scanf("%d %s %f", &s1[i].roll_num, s1[i].name, &s1[i].marks);
        total_marks += s1[i].marks;
    }
    float avrage = total_marks / n;

    printf("Average Marks: %.2f\n", average);
    return 0;

}