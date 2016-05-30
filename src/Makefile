TARGET=fizzbuzz
LIB=lib$(TARGET).dylib
SLIB=lib$(TARGET)-static.a
CP=cp

$(LIB): $(TARGET).o
	$(CC) -Wl,-install_name -Wl,@rpath/$(LIB) -shared -o $@ $<

$(SLIB): $(TARGET).o
	$(AR) -r $(SLIB) $<

.PHONY: install clean
install: $(LIB) $(SLIB) $(TARGET).h
	mkdir -p ../lib
	mkdir -p ../include
	$(CP) $(LIB) $(SLIB) ../lib/
	$(CP) $(TARGET).h ../include/

clean:
	$(RM) -f $(TARGET).o $(LIB) $(SLIB)
