#include <glib.h>

int main(void) {

    #ifdef G_OS_UNIX
        g_print("\n\tA UNIX MACHINE\n\n");
    #endif

}
