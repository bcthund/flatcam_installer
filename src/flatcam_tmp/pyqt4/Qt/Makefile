TARGET = Qt.so
OFILES = sipQtcmodule.o
HFILES =  

CC = gcc
CXX = g++
LINK = g++
CPPFLAGS = -DNDEBUG -DQT_DISABLE_DEPRECATED_BEFORE=0x04ffff -DSIP_PROTECTED_IS_PUBLIC -Dprotected=public -I. -I/usr/include/python3.8
CFLAGS = -fPIC -O2 -Wall -W
CXXFLAGS = -fPIC -O2 -Wall -W
LFLAGS = -shared  -Wl,-O1 -Wl,--version-script=Qt.exp
LIBS = 
.SUFFIXES: .c .o .cpp .cc .cxx .C


.cpp.o:
	$(CXX) -c $(CXXFLAGS) $(CPPFLAGS) -o $@ $<

.cc.o:
	$(CXX) -c $(CXXFLAGS) $(CPPFLAGS) -o $@ $<

.cxx.o:
	$(CXX) -c $(CXXFLAGS) $(CPPFLAGS) -o $@ $<

.C.o:
	$(CXX) -c $(CXXFLAGS) $(CPPFLAGS) -o $@ $<

.c.o:
	$(CC) -c $(CFLAGS) $(CPPFLAGS) -o $@ $<

all: $(TARGET)

$(OFILES): $(HFILES)

$(TARGET): $(OFILES)
	@echo '{ global: PyInit_Qt; local: *; };' > Qt.exp
	$(LINK) $(LFLAGS) -o $(TARGET) $(OFILES) $(LIBS)

install: $(TARGET)
	@test -d $(DESTDIR)/usr/lib/python3/dist-packages/PyQt4 || mkdir -p $(DESTDIR)/usr/lib/python3/dist-packages/PyQt4
	cp -f $(TARGET) $(DESTDIR)/usr/lib/python3/dist-packages/PyQt4/$(TARGET)
	strip $(DESTDIR)/usr/lib/python3/dist-packages/PyQt4/$(TARGET)
	@test -d $(DESTDIR)/usr/share/sip/PyQt4/Qt || mkdir -p $(DESTDIR)/usr/share/sip/PyQt4/Qt
	cp -f ../sip/Qt/Qtmod.sip $(DESTDIR)/usr/share/sip/PyQt4/Qt/Qtmod.sip

clean:
	-rm -f $(TARGET)
	-rm -f sipQtcmodule.o
	-rm -f Qt.exp
