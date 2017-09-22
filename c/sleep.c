#include <stdio.h>
#include <unistd.h>
 
int main(int argc, char* argv[])
{
    printf("Sleeping for 5 seconds...\n");
    sleep(5);
    printf("I'm awake!!!\n");
 
    return 0;
}
