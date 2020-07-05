#############################################################################
##
## Copyright (c) 2018 Riverbank Computing Limited <info@riverbankcomputing.com>
## 
## This file is part of PyQt4.
## 
## This file may be used under the terms of the GNU General Public License
## version 3.0 as published by the Free Software Foundation and appearing in
## the file LICENSE included in the packaging of this file.  Please review the
## following information to ensure the GNU General Public License version 3.0
## requirements will be met: http://www.gnu.org/copyleft/gpl.html.
## 
## If you do not wish to use this file under the terms of the GPL version 3.0
## then you may purchase a commercial license.  For more information contact
## info@riverbankcomputing.com.
## 
## This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
## WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
##
#############################################################################


from PyQt4.uic.exceptions import NoSuchWidgetError


def invoke(driver):
    """ Invoke the given command line driver.  Return the exit status to be
    passed back to the parent process.
    """

    exit_status = 1

    try:
        exit_status = driver.invoke()

    except IOError as e:
        driver.on_IOError(e)

    except SyntaxError as e:
        driver.on_SyntaxError(e)

    except NoSuchWidgetError as e:
        driver.on_NoSuchWidgetError(e)

    except Exception as e:
        driver.on_Exception(e)

    return exit_status
