
#include <glib.h>

int main(void) {

    const gchar *myapp;
    const gchar *myprg;

    g_set_application_name("this-is-my-app");
    g_set_prgname("this-is-my-prg");
    myapp = g_get_application_name();
    myprg = g_get_prgname();

    g_print("\n\tApp: %s\n", myapp);
    g_print("\tPrg: %s\n\n", myprg);

}

