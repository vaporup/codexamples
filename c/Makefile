SRCS  = $(wildcard *.c)
PROGS = $(patsubst %.c,%,$(SRCS))
CFLAGS+= `pkg-config --cflags --libs glib-2.0`

all: $(PROGS)

%: %.c
	$(CC) $(CFLAGS) -o $@ $<
clean:
	rm -f $(PROGS)

.PHONY: clean
