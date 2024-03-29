#include <stdio.h>
#include <string.h>
 //131 --> 134

int main()
{
    char *names[] = {"Younes", "Yasser", "Abdo" , "Seteven"};
    int name_number = 4;
    int number = 131;
    int i = 0;

    for (i = 0; i < name_number ; i++)
    {
            printf("Student of Room[%d] = %s\n", number, names[i]);
            number = number + 1;
    }
    
}
