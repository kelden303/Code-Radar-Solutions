#include <stdio.h>
struct Student{
    int roll_num;
    char name[100];
    float marks;
};

int main(){
    int n;
    scanf("%d", &n);

    struct Student student[n];

    for(int i = 0; i < n; i++){
        scanf("%d %s %f", &student[i].roll_num, student[i].name, &student[i].marks);
    }
    struct Student topscorer = student[0];
    for(int i = 0; i < n; i++){
        if(student[i].marks > topscorer.marks){
            topscorer = student[i];
        }
    }
    printf("Top Scorer: Roll Number: %d, Name: %s, Marks: %.2f\n", topscorer.roll_num, topscorer.name, topscorer.marks);
    return 0;
}
