// Mike M -> This code is looking Great!

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // declare name var
    string name = get_string("what is your name?\n");

    // print out name var with string interpilation
    printf("hello, %s\n", name);
}
