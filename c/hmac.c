#include <glib.h>

gchar *my_hmac;

int main (void) {

  g_print("\n");

  // MD5
  my_hmac = g_compute_hmac_for_string(G_CHECKSUM_MD5, (guchar*)"foo", 3, "bar", -1);
  g_print("%10s: %s\n", "MD5", my_hmac);

  // SHA1
  my_hmac = g_compute_hmac_for_string(G_CHECKSUM_SHA1, (guchar*)"foo", 3, "bar", -1);
  g_print("%10s: %s\n", "SHA1", my_hmac);

  // SHA256
  my_hmac = g_compute_hmac_for_string(G_CHECKSUM_SHA256, (guchar*)"foo", 3, "bar", -1);
  g_print("%10s: %s\n", "SHA256", my_hmac);

  // SHA512
  my_hmac = g_compute_hmac_for_string(G_CHECKSUM_SHA512, (guchar*)"foo", 3, "bar", -1);
  g_print("%10s: %s\n", "SHA512", my_hmac);

  g_print("\n");

}
