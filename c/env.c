
#include <stdio.h>
#include <glib.h>

int main() {

  gchar **all_env;
  all_env = g_get_environ();
  g_print("2nd environment var: ");
  g_print("%s\n", all_env[1]);

  const gchar *env;
  env = g_environ_getenv(all_env, "LANG");
  g_print("LANG var: ");
  g_print("%s\n", env);

}
