TARGET = pylupdate4
OFILES = fetchtr.o merge.o numberh.o sametexth.o main.o metatranslator.o proparser.o translator.o simtexth.o moc_translator.o
HFILES = metatranslator.h proparser.h simtexth.h

CC = gcc
CXX = g++
LINK = g++
CPPFLAGS = -DNDEBUG -DQT_NO_DEBUG -DQT_CORE_LIB -DQT_XML_LIB -I. -I/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp2/pyqt4/pylupdate -I/usr/mkspecs/linux-g++ -I/usr/include/x86_64-linux-gnu/qt5/QtCore -I/usr/include/x86_64-linux-gnu/qt5/QtXml -I/usr/include/x86_64-linux-gnu/qt5
CFLAGS = -O2 -Wall -W -D_REENTRANT
CXXFLAGS = -fPIC -O2 -Wall -W -D_REENTRANT
LFLAGS =  -Wl,-O1 -Wl,-rpath,/usr/lib/x86_64-linux-gnu
LIBS = -L/usr/lib/x86_64-linux-gnu -lQt5Core -lpthread -lQt5Xml $(shell qmake -query QT_INSTALL_LIBS)/libQt5Core.so -lpthread -lpthread
MOC = /usr/lib/qt5/bin/moc
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

moc_translator.cpp: translator.h
	$(MOC) -o moc_translator.cpp $<

$(TARGET): $(OFILES)
	$(LINK) $(LFLAGS) -o $(TARGET) $(OFILES) $(LIBS)

install: $(TARGET)
	@test -d $(DESTDIR)/usr/bin || mkdir -p $(DESTDIR)/usr/bin
	cp -f $(TARGET) $(DESTDIR)/usr/bin/$(TARGET)

clean:
	-rm -f $(TARGET)
	-rm -f fetchtr.o
	-rm -f merge.o
	-rm -f numberh.o
	-rm -f sametexth.o
	-rm -f main.o
	-rm -f metatranslator.o
	-rm -f proparser.o
	-rm -f translator.o
	-rm -f simtexth.o
	-rm -f moc_translator.o
	-rm -f moc_translator.cpp
