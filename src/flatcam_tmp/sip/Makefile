
all:
	@(cd sipgen; $(MAKE))
	@(cd siplib; $(MAKE))

install:
	@(cd sipgen; $(MAKE) install)
	@(cd siplib; $(MAKE) install)
	@test -d $(DESTDIR)/usr/lib/python2.7/dist-packages || mkdir -p $(DESTDIR)/usr/lib/python2.7/dist-packages
	cp -f sipconfig.py $(DESTDIR)/usr/lib/python2.7/dist-packages/sipconfig.py
	cp -f /home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp/sip/sipdistutils.py $(DESTDIR)/usr/lib/python2.7/dist-packages/sipdistutils.py
	/usr/bin/python2 /home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp/sip/mk_distinfo.py "$(DESTDIR)" /usr/lib/python2.7/dist-packages/sip-4.19.23.dist-info installed.txt

clean:
	@(cd sipgen; $(MAKE) clean)
	@(cd siplib; $(MAKE) clean)
