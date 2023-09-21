#include <stdio.h>
struct User
{
    char *name;
    int age;
    char *place;
};
typedef struct User man;/*This is renaming the struct User to man*/
int main(void)
{
    man user;
    user.name = "GateWay Park";
    user.age = 19;
    user.place = "Nairobi";

    printf("My name is %s which am %d of age and I come from %s\n", user.name, user.age, user.place);
    return (0);
}