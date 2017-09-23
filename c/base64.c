
// for g_print, gchar and g_base64_encode
// https://developer.gnome.org/glib/stable/glib-Base64-Encoding.html#g-base64-encode
#include <glib.h>

// g_base64_encode() returns a pointer,
// so we need a pointer variable to store the memory address
// where g_base64_encode() stores the base64 encoded string
gchar *base64_encoded;

// char array for our plain text string
const unsigned char plain_text[] = "Hello World!";

int main() {

  // Print the original plain text
  g_print("plain\t: %s\n", plain_text);

  // base64 encode the original plain text
  base64_encoded = g_base64_encode(plain_text, sizeof(plain_text));

  // Print the base64 encoded text
  g_print("base64\t: %s\n", base64_encoded);

  // We don't need the base64 encoded string anymore and free the memory from it
  // so we don't create a memory leak
  g_free(base64_encoded);

}
