
#include <glib.h>

int main() {

  g_print("stdout:\tTry this -> ./echo  > /dev/null\n");
  g_printerr("stderr:\tTry this -> ./echo 2> /dev/null\n");

}
