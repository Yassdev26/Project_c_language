#include <stdio.h>
#include <string.h>


int Ecnomic_Student_FC()
{
    puts(" =========== Books For Ecnomic Students =========== \n");
    puts(" - Reading and writing Book (Chinese Book)");
    puts(" - Speaking and Listening Book (Chinese Book)");
    puts(" - Ecnomic Book \n");
}

int Computer_science_student_FC()
{
    puts(" =========== Books For Computer Science Students =========== \n");
    puts(" - Reading and writing Book (Chinese Book)");
    puts(" - Speaking and Listening Book (Chinese Book)");
    puts(" - Data Structres and Algorithms Analysis in C \n");
}
int main()
{
    int x , y;
    char Ecnomic_Student[100] = "Ecnomic Student";
    char Computer_science_student[100] = "Computer science student";


    puts("WELCOME TO OUR SERVERS");
    printf("1 - I'm %s\n", Ecnomic_Student);
    printf("2 - I'm %s\n", Computer_science_student);
    printf("Enter Your Choice : ", x);
    scanf("%d", &x);
        switch (x)
    {
    case 1:
        Ecnomic_Student_FC();
        break;
    case 2:
        Computer_science_student_FC();
        break;
    default:
        printf("this the last case , DONE\n");
        break;
    }
}
