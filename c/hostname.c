
#include <glib.h>

int main(void) {

    const gchar *myhostname;

    myhostname = g_get_host_name();

    g_print("\n\tHostname: %s\n\n", myhostname);

}

