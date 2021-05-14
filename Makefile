PREFIX ?= /usr
BINDIR ?= /bin

8ball:

clean:
	rm 8ball

install: 8ball
	mkdir -p ${DESTDIR}${PREFIX}${BINDIR}
	$@ -m755 $< ${DESTDIR}${PREFIX}${BINDIR}/$<

.PHONY: clean install
