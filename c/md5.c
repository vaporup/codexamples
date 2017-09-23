
// for g_print, gchar and g_compute_checksum_for_string()
// -> https://developer.gnome.org/glib/stable/glib-Data-Checksums.html
#include <glib.h>

// g_compute_checksum_for_string() returns a pointer,
// so we need a pointer variable to store the memory address
// where g_compute_checksum_for_string() stores the md5 encoded string
gchar *md5_encoded;

// char array for our plain text string
const char plain_text[] = "Hello World!";

int main() {

  // Print the original plain text
  g_print("plain\t: %s\n", plain_text);

  // md5 encode the original plain text
  md5_encoded = g_compute_checksum_for_string(G_CHECKSUM_MD5, plain_text, sizeof(plain_text));

  // Print the md5 encoded text
  g_print("md5\t: %s\n", md5_encoded);

  // We don't need the md5 encoded string anymore and free the memory from it
  // so we don't create a memory leak
  g_free(md5_encoded);

}
