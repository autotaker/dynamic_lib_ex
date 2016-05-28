

INSTALL_DIR = $(CURDIR:%/src-exec=%)
INCLUDE_DIR = $(INSTALL_DIR:%=%/include)
LIB_DIR = $(INSTALL_DIR:%=%/lib)
CFLAGS = -I$(INCLUDE_DIR)

main: main.o
	$(CC) $(CFLAGS) -o $@ -lfizzbuzz $< -L$(LIB_DIR) -Wl,-rpath -Wl,$(LIB_DIR)

.PHONY: clean

clean:
	$(RM) -f main.o main

