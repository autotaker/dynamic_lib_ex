
INSTALL_DIR = $(CURDIR:%/src-exec=%)
INCLUDE_DIR = $(INSTALL_DIR:%=%/include)
LIB_DIR = $(INSTALL_DIR:%=%/lib)
CFLAGS = -I$(INCLUDE_DIR)

all: main main.static

main: main.o
	$(CC) $(CFLAGS) -o $@ -lfizzbuzz $< -L$(LIB_DIR) -Wl,-rpath -Wl,$(LIB_DIR)
main.static: main.o
	$(CC) $(CFLAGS) -o $@ -lfizzbuzz-static $< -L$(LIB_DIR)
.PHONY: clean all

clean:
	$(RM) -f main.o main main.static

