
all:
	@(cd qpy; $(MAKE))
	@(cd QtCore; $(MAKE))
	@(cd Qt; $(MAKE))
	@(cd pyuic; $(MAKE))
	@(cd pylupdate; $(MAKE))
	@(cd pyrcc; $(MAKE))

install:
	@(cd qpy; $(MAKE) install)
	@(cd QtCore; $(MAKE) install)
	@(cd Qt; $(MAKE) install)
	@(cd pyuic; $(MAKE) install)
	@(cd pylupdate; $(MAKE) install)
	@(cd pyrcc; $(MAKE) install)
	@test -d $(DESTDIR)/usr/lib/python2.7/dist-packages/PyQt4 || mkdir -p $(DESTDIR)/usr/lib/python2.7/dist-packages/PyQt4
	cp -f /home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp2/pyqt4/__init__.py $(DESTDIR)/usr/lib/python2.7/dist-packages/PyQt4/__init__.py
	cp -f pyqtconfig.py $(DESTDIR)/usr/lib/python2.7/dist-packages/PyQt4/pyqtconfig.py

clean:
	@(cd qpy; $(MAKE) clean)
	@(cd QtCore; $(MAKE) clean)
	@(cd Qt; $(MAKE) clean)
	@(cd pyuic; $(MAKE) clean)
	@(cd pylupdate; $(MAKE) clean)
	@(cd pyrcc; $(MAKE) clean)
