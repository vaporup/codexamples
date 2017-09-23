
#include <glib.h>

const gchar *myhostname;

int main(void) {

    myhostname = g_get_host_name();
    g_print("\n\tHostname: %s\n\n", myhostname);

}

