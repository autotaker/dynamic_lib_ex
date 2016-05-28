TARGET=fizzbuzz
LIB=lib$(TARGET).dylib
CP=cp

$(LIB): $(TARGET).o
	$(CC) -Wl,-install_name -Wl,@rpath/$(LIB) -shared -o $@ $<

.PHONY: install clean
install: $(LIB) $(TARGET).h
	mkdir -p ../lib
	mkdir -p ../include
	$(CP) $(LIB) ../lib/
	$(CP) $(TARGET).h ../include/

clean:
	$(RM) -f $(TARGET).o $(LIB)
