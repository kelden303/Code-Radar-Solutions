#include <stdio.h>
int struct Student{
    int rn;
    char[100] name;
    float marks;
};

int main(){
    int n;
    scanf("%d", &n);

    struct Student student(n);

    for(int i = 0; i < n; i++){
        printf("%d %s %.2f", &student[i].rn, student[i].name, &student[i].marks);
    }

    for(int i = 0; i < n; i++){
        printf("Roll Number: %d, Name: %s, Marks: %.2f", student[i].rn, student[i].name, student[i].marks);
    }
    return 0;
}
