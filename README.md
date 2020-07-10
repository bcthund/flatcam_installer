# flatcam_installer
## Description
This is a script I created for a system restore procedure during a fresh install when upgrading from Ubuntu 18.04 to Kubuntu 20.04.

This currently is broken.

I tried compiling with PyQt4 but couldn't get FlatCAM to see that it was actually installed and it kept trying to use PyQt5. So I tried converting FlatCAM to use PyQt5 but ran into difficulty when trying to update the connect() logic from Qt4 style to Qt5 style. So conversion is still in-progress as I have time to look into it, I do not use QT in my own programming very much so I have to figure out how things work.

See also:
  * [fresh_install](https://github.com/bcthund/fresh_install)

## Usage
```chmod +x flatcam.sh```  
<br>
<u>**Live run:**</u>  
This will prompt you with a series of questions and perform the actions, making changes to your filesystem.  
```./flatcam.sh```  
<br>
<u>**Debug:**</u>  
This will prompt you with a series of questions but will not actually perform them. It will echo the command that would be run so you can do a dry run first.  
```./flatcam.sh debug```

## Packages for Reference (installed automatically):
<u>**All Dependencies**</u>
<pre>
  libpng-dev
  libfreetype6
  libfreetype6-dev
  python3-dev
  python3-simplejson
  python3-pyqt4 -> `pip3 install PyQt4` -> "No matching distribution found" -> install from source?
  python3-numpy
  python3-scipy
  python3-matplotlib
  libgeos-dev
  python-shapely -> "APT: Unable to locate package" -> `pip3 install shapely` (WORKS)
  python-pip -> Doesn't exist
  libspatialindex-dev
  python3-tk
  python3-shapely
  python3-rtree
  python3-svg.path
</pre>

libpng-dev  libfreetype6  libfreetype6-dev  python3-dev  python3-simplejson  python3-pyqt4  python3-numpy  python3-scipy  python3-matplotlib  libgeos-dev  python-shapely  python-pip  libspatialindex-dev  python3-tk  python3-shapely python3-rtree python3-svg.path

libpng-dev  libfreetype6  libfreetype6-dev  python3-dev  python3-simplejson  python3-numpy  python3-scipy  python3-matplotlib  libgeos-dev  python-shapely  libspatialindex-dev  python3-tk python3-shapely python3-rtree python3-svg.path

## Addons
<pre>
  none
</pre>

---
---
---

# TEMP INSTALL INSTRUCTIONS FOR PyQT4 and SIP

# SIP
## Install with apt (does this work? is it detected when compiling PyQT4)
sudo apt install -y python3-sip (already installed, SID OK then?)

## My compile attempt in python2
sudo apt-get install python2-dev
python2 configure.py
make
sudo make install


## Compiling
sudo apt-get install python3-dev (already installed byt Python.h not found during make)
python configure.py
make 
sudo make install

Should probably be using:
python3 configure.py
make 
sudo make install


# PyQT4
## My compile attempt
Install PyQT4 - Not necessary if using QT5
  * ```sudo apt install -y python2-sip```
  * ```python2 configure.py```, answer yes
  * ```sed -i 's/SIP_OVERRIDE//g' ./QtCore/sipQtCoreQAbstractEventDispatcher.cpp```
  * ```sed -i 's/\$\$\[QT_INSTALL_LIBS\]/$(shell qmake -query QT_INSTALL_LIBS)/g' ./pylupdate/Makefile```
  * ```sed -i 's/\$\$\[QT_INSTALL_LIBS\]/$(shell qmake -query QT_INSTALL_LIBS)/g' ./pyrcc/Makefile```
  * ```make```
  * ```sudo make install```

Install Dependencies
  * ```sudo apt install libpng-dev  libfreetype6  libfreetype6-dev  python3-dev  python3-simplejson  python3-numpy  python3-scipy  python3-matplotlib  libgeos-dev  libspatialindex-dev  python3-tk python3-shapely python3-rtree python3-svg.path```

FlatCAM
  * Change all `from PyQt5 import QtGui` to `from PyQt5 import QtWidgets`
  * Change all `PyQt4` to `PyQt5`
  * Change all `QtGui` to `QtWidgets`

## General
After unpacking the source package (either a .tar.gz or a .zip file depending on your platform) you should then check for any README files that relate to your platform.

If you are using the commercial version of PyQt4 then you must copy your license file to the sip directory, or to the directory specified by the --license-dir option of configure-ng.py.

You need to make sure your environment variables are set properly for your development environment.

In order to configure the build of PyQt4 you need to run either the configure-ng.py or the configure.py script.

configure.py is the original configuration script that uses the build system of SIP v4 (i.e. the sip.sipconfig module). It will be supported for the life of PyQt4.

configure-ng.py is the new configuration script that uses Qt’s qmake program to do all the heavy lifting. It has the following advantages:

it supports cross-compilation
it is the basis of PyQt5’s configuration script
generated Makefiles have an uninstall target
it will work with SIP v5 (which will have no build system).
Users are encouraged to switch to using configure-ng.py in order to ease the future transition to SIP v5 and/or PyQt5.

## Using configure-ng.py
New in version 4.10.1.

The configure-ng.py script is used to configure PyQt4 as follows:

python configure-ng.py
This assumes that the Python interpreter is on your path. Something like the following may be appropriate on Windows:

c:\python34\python configure-ng.py
If you have multiple versions of Python installed then make sure you use the interpreter for which you wish to build PyQt4 for.

## Using configure.py
The configure.py script is used to configure PyQt4 as follows:

python configure.py
This assumes that the Python interpreter is on your path. Something like the following may be appropriate on Windows:

c:\python34\python configure.py
If you have multiple versions of Python installed then make sure you use the interpreter for which you wish to build PyQt4 for.

## Building PyQt4
The next step is to build PyQt4 by running your platform’s make command. For example:

make
The final step is to install PyQt4 by running the following command:

make install
(Depending on your system you may require root or administrator privileges.)

This will install the various PyQt4 components.

