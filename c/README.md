I could not find any good examples on the Internet
on glib and C so I try to document my learning steps
here in little snippets.

To try them out:

```
apt-get install libglib2.0-dev
```

Compiling example with base64.c:

```
gcc base64.c -o base64 `pkg-config --cflags --libs glib-2.0`
```


With the GLibs testcases there at least *some* examples but for a beginner not easy to digest

https://github.com/frida/glib/tree/master/glib/tests
