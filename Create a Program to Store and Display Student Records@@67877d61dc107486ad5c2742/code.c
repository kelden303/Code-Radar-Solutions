#include <stdio.h>

struct Student{
    int roll_num;
    char name[100];
    float marks;
};

int main(){
    int n;
    scanf("%d", &n);

    struct Student s1[n];

    for(int i = 0; i < n; i++){
        scanf("%d %s %f", &s1[i].roll_num, s1[i].name, &s1[i].marks);
    }

    for(int i = 0; i < n; i++){
        printf("Roll Number: %d, Name: %s, Marks: %.2f\n", s1[i].roll_num, s1[i].name, s1[i].marks);
    }
    return 0;
}