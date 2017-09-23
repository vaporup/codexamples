#include <glib.h>
#include <unistd.h>
 
int main(void)
{
    g_print("Sleeping for 5 seconds...\n");
    sleep(5);
    g_print("I'm awake!!!\n");
 
    return 0;
}
