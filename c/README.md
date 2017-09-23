I could not find any good examples on the Internet
on glib and C so I try to document my learning steps
here in little snippets.

To try them out:

```
apt-get install libglib2.0-dev
```

Compile them all

```
make
```

Compile single example like base64.c manually:

```
gcc base64.c -o base64 `pkg-config --cflags --libs glib-2.0`
```

Housekeeping
```
make clean
```

With the GLibs testcases there at least *some* examples but not easy to digest for a beginner

https://github.com/GNOME/glib/tree/master/glib/tests
