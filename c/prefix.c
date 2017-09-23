#include <glib.h>

int main(void) {

   if ( g_str_has_prefix("foo", "f") ) {
       g_print("\n\tfoo starts with a f");
   }

   if ( g_str_has_prefix("bar", "f") ) {
       g_print("\n\tbar starts with a f");
   } else {
       g_print("\n\tbar starts NOT with a f\n\n");
    }

}
