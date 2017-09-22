
#include <stdio.h>
#include <glib.h>

int main() {

  g_print("\n");

  gchar **all_env;
  all_env = g_get_environ();
  g_print("%-20s\t: ", "2nd environment var");
  g_print("%s\n", all_env[1]);

  const gchar *env;
  env = g_environ_getenv(all_env, "LANG");
  g_print("%-20s\t: ", "LANG");
  g_print("%s\n", env);

  const gchar *another_env;
  another_env = g_getenv("LANG");
  g_print("%-20s\t: ", "LANG");
  g_print("%s\n", another_env);

  const gchar *user_config_dir;
  user_config_dir = g_get_user_config_dir();
  g_print("%-20s\t: ", "USER__CONFIG_DIR");
  g_print("%s\n", user_config_dir);

  g_print("\n");
}
