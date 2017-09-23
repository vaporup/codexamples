#include <glib.h>
#include <string.h>

gchar *my_hmac;

const guchar *key = "foo";
const gchar  *data = "bar";

guint key_length = 0;
guint data_length = 0;

int main (void) {

  key_length = strlen(key);
  data_length = strlen(data);

  g_print("\n");

  // MD5
  my_hmac = g_compute_hmac_for_string(G_CHECKSUM_MD5, key, key_length, data, data_length);
  g_print("%10s: %s\n", "MD5", my_hmac);

  // SHA1
  my_hmac = g_compute_hmac_for_string(G_CHECKSUM_SHA1, key, key_length, data, data_length);
  g_print("%10s: %s\n", "SHA1", my_hmac);

  // SHA256
  my_hmac = g_compute_hmac_for_string(G_CHECKSUM_SHA256, key, key_length, data, data_length);
  g_print("%10s: %s\n", "SHA256", my_hmac);

  // SHA512
  my_hmac = g_compute_hmac_for_string(G_CHECKSUM_SHA512, key, key_length, data, data_length);
  g_print("%10s: %s\n", "SHA512", my_hmac);

  g_print("\n");

}
