#include <stdio.h>
#include <unistd.h>
#include <glib.h>
 
int main(int argc, char* argv[])
{
    gdouble elapsed;

    GTimer *timer;

    timer = g_timer_new();

    printf("Sleeping for 5 seconds...\n");
    sleep(5);
    elapsed = g_timer_elapsed(timer, NULL);
    printf("I'm awake!!! I slept for %f s\n", elapsed);
 
    return 0;
}
