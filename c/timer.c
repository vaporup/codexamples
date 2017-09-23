#include <unistd.h>   // for sleep()
#include <glib.h>
 
int main(void)
{
    gdouble elapsed;

    GTimer *timer;

    timer = g_timer_new();

    g_print("Sleeping for 5 seconds...\n");
    sleep(5);
    elapsed = g_timer_elapsed(timer, NULL);
    g_print("I'm awake!!! I slept for %f s\n", elapsed);
 
    return 0;
}
