intliterals:	intliterals.c
	$(CC) $(CFLAGS) -o intliterals intliterals.c

clean::
	/bin/rm intliterals
