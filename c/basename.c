#include <glib.h>

int main(void) {

    gchar *basename;
    basename = g_path_get_basename("/tmp/foo/bar.txt");
    g_print("\n\t /tmp/foo/bar.txt's basename is %s\n\n", basename);

}
