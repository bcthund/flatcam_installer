/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.19.23
 *
 * Copyright (c) 2018 Riverbank Computing Limited <info@riverbankcomputing.com>
 * 
 * This file is part of PyQt4.
 * 
 * This file may be used under the terms of the GNU General Public License
 * version 3.0 as published by the Free Software Foundation and appearing in
 * the file LICENSE included in the packaging of this file.  Please review the
 * following information to ensure the GNU General Public License version 3.0
 * requirements will be met: http://www.gnu.org/copyleft/gpl.html.
 * 
 * If you do not wish to use this file under the terms of the GPL version 3.0
 * then you may purchase a commercial license.  For more information contact
 * info@riverbankcomputing.com.
 * 
 * This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
 * WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 */

#include "sipAPIQtCore.h"

#line 241 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp2/pyqt4/sip/QtCore/qdatetime.sip"
#include <qdatetime.h>
#line 29 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp2/pyqt4/QtCore/sipQtCoreQTime.cpp"

#line 27 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp2/pyqt4/sip/QtCore/qstring.sip"
#include <qstring.h>
#line 33 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp2/pyqt4/QtCore/sipQtCoreQTime.cpp"
#line 26 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp2/pyqt4/sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 36 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp2/pyqt4/QtCore/sipQtCoreQTime.cpp"
#line 245 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp2/pyqt4/sip/QtCore/qdatetime.sip"
#include <QHash>

#if PY_VERSION_HEX >= 0x02040000
#include <datetime.h>
#endif
#line 43 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp2/pyqt4/QtCore/sipQtCoreQTime.cpp"


PyDoc_STRVAR(doc_QTime_toPyTime, "toPyTime(self) -> datetime.time");

extern "C" {static PyObject *meth_QTime_toPyTime(PyObject *, PyObject *);}
static PyObject *meth_QTime_toPyTime(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QTime *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTime, &sipCpp))
        {
            PyObject * sipRes = SIP_NULLPTR;

#line 353 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp2/pyqt4/sip/QtCore/qdatetime.sip"
        if (!PyDateTimeAPI)
            PyDateTime_IMPORT;
        
        // Convert to a Python time object.
        sipRes = PyTime_FromTime(sipCpp->hour(), sipCpp->minute(), sipCpp->second(), sipCpp->msec() * 1000);
#line 67 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp2/pyqt4/QtCore/sipQtCoreQTime.cpp"

            return sipRes;
        }
    }

    sipNoMethod(sipParseErr, sipName_QTime, sipName_toPyTime, doc_QTime_toPyTime);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QTime_isNull, "isNull(self) -> bool");

extern "C" {static PyObject *meth_QTime_isNull(PyObject *, PyObject *);}
static PyObject *meth_QTime_isNull(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QTime *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTime, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isNull();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QTime, sipName_isNull, doc_QTime_isNull);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QTime_isValid, "isValid(self) -> bool\n"
"isValid(int, int, int, msec: int = 0) -> bool");

extern "C" {static PyObject *meth_QTime_isValid(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QTime_isValid(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QTime *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, SIP_NULLPTR, "B", &sipSelf, sipType_QTime, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isValid();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    {
        int a0;
        int a1;
        int a2;
        int a3 = 0;

        static const char *sipKwdList[] = {
            SIP_NULLPTR,
            SIP_NULLPTR,
            SIP_NULLPTR,
            sipName_msec,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "iii|i", &a0, &a1, &a2, &a3))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes =  ::QTime::isValid(a0,a1,a2,a3);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QTime, sipName_isValid, doc_QTime_isValid);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QTime_hour, "hour(self) -> int");

extern "C" {static PyObject *meth_QTime_hour(PyObject *, PyObject *);}
static PyObject *meth_QTime_hour(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QTime *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTime, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->hour();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QTime, sipName_hour, doc_QTime_hour);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QTime_minute, "minute(self) -> int");

extern "C" {static PyObject *meth_QTime_minute(PyObject *, PyObject *);}
static PyObject *meth_QTime_minute(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QTime *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTime, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->minute();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QTime, sipName_minute, doc_QTime_minute);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QTime_second, "second(self) -> int");

extern "C" {static PyObject *meth_QTime_second(PyObject *, PyObject *);}
static PyObject *meth_QTime_second(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QTime *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTime, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->second();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QTime, sipName_second, doc_QTime_second);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QTime_msec, "msec(self) -> int");

extern "C" {static PyObject *meth_QTime_msec(PyObject *, PyObject *);}
static PyObject *meth_QTime_msec(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QTime *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTime, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->msec();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QTime, sipName_msec, doc_QTime_msec);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QTime_toString, "toString(self, format: Qt.DateFormat = Qt.TextDate) -> str\n"
"toString(self, str) -> str");

extern "C" {static PyObject *meth_QTime_toString(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QTime_toString(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::Qt::DateFormat a0 = Qt::TextDate;
        const  ::QTime *sipCpp;

        static const char *sipKwdList[] = {
            sipName_format,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "B|E", &sipSelf, sipType_QTime, &sipCpp, sipType_Qt_DateFormat, &a0))
        {
             ::QString*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::QString(sipCpp->toString(a0));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,SIP_NULLPTR);
        }
    }

    {
        const  ::QString* a0;
        int a0State = 0;
        const  ::QTime *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, SIP_NULLPTR, "BJ1", &sipSelf, sipType_QTime, &sipCpp, sipType_QString,&a0, &a0State))
        {
             ::QString*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::QString(sipCpp->toString(*a0));
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);

            return sipConvertFromNewType(sipRes,sipType_QString,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QTime, sipName_toString, doc_QTime_toString);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QTime_setHMS, "setHMS(self, int, int, int, msec: int = 0) -> bool");

extern "C" {static PyObject *meth_QTime_setHMS(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QTime_setHMS(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;
        int a1;
        int a2;
        int a3 = 0;
         ::QTime *sipCpp;

        static const char *sipKwdList[] = {
            SIP_NULLPTR,
            SIP_NULLPTR,
            SIP_NULLPTR,
            sipName_msec,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "Biii|i", &sipSelf, sipType_QTime, &sipCpp, &a0, &a1, &a2, &a3))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->setHMS(a0,a1,a2,a3);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QTime, sipName_setHMS, doc_QTime_setHMS);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QTime_addSecs, "addSecs(self, int) -> QTime");

extern "C" {static PyObject *meth_QTime_addSecs(PyObject *, PyObject *);}
static PyObject *meth_QTime_addSecs(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;
        const  ::QTime *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QTime, &sipCpp, &a0))
        {
             ::QTime*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::QTime(sipCpp->addSecs(a0));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QTime,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QTime, sipName_addSecs, doc_QTime_addSecs);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QTime_secsTo, "secsTo(self, Union[QTime, datetime.time]) -> int");

extern "C" {static PyObject *meth_QTime_secsTo(PyObject *, PyObject *);}
static PyObject *meth_QTime_secsTo(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QTime* a0;
        int a0State = 0;
        const  ::QTime *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QTime, &sipCpp, sipType_QTime, &a0, &a0State))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->secsTo(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::QTime *>(a0),sipType_QTime,a0State);

            return SIPLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QTime, sipName_secsTo, doc_QTime_secsTo);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QTime_addMSecs, "addMSecs(self, int) -> QTime");

extern "C" {static PyObject *meth_QTime_addMSecs(PyObject *, PyObject *);}
static PyObject *meth_QTime_addMSecs(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;
        const  ::QTime *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QTime, &sipCpp, &a0))
        {
             ::QTime*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::QTime(sipCpp->addMSecs(a0));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QTime,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QTime, sipName_addMSecs, doc_QTime_addMSecs);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QTime_msecsTo, "msecsTo(self, Union[QTime, datetime.time]) -> int");

extern "C" {static PyObject *meth_QTime_msecsTo(PyObject *, PyObject *);}
static PyObject *meth_QTime_msecsTo(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QTime* a0;
        int a0State = 0;
        const  ::QTime *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QTime, &sipCpp, sipType_QTime, &a0, &a0State))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->msecsTo(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::QTime *>(a0),sipType_QTime,a0State);

            return SIPLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QTime, sipName_msecsTo, doc_QTime_msecsTo);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QTime_currentTime, "currentTime() -> QTime");

extern "C" {static PyObject *meth_QTime_currentTime(PyObject *, PyObject *);}
static PyObject *meth_QTime_currentTime(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
             ::QTime*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::QTime( ::QTime::currentTime());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QTime,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QTime, sipName_currentTime, doc_QTime_currentTime);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QTime_fromString, "fromString(str, format: Qt.DateFormat = Qt.TextDate) -> QTime\n"
"fromString(str, str) -> QTime");

extern "C" {static PyObject *meth_QTime_fromString(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QTime_fromString(PyObject *, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QString* a0;
        int a0State = 0;
         ::Qt::DateFormat a1 = Qt::TextDate;

        static const char *sipKwdList[] = {
            SIP_NULLPTR,
            sipName_format,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "J1|E", sipType_QString,&a0, &a0State, sipType_Qt_DateFormat, &a1))
        {
             ::QTime*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::QTime( ::QTime::fromString(*a0,a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);

            return sipConvertFromNewType(sipRes,sipType_QTime,SIP_NULLPTR);
        }
    }

    {
        const  ::QString* a0;
        int a0State = 0;
        const  ::QString* a1;
        int a1State = 0;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, SIP_NULLPTR, "J1J1", sipType_QString,&a0, &a0State, sipType_QString,&a1, &a1State))
        {
             ::QTime*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::QTime( ::QTime::fromString(*a0,*a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);
            sipReleaseType(const_cast< ::QString *>(a1),sipType_QString,a1State);

            return sipConvertFromNewType(sipRes,sipType_QTime,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QTime, sipName_fromString, doc_QTime_fromString);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QTime_start, "start(self)");

extern "C" {static PyObject *meth_QTime_start(PyObject *, PyObject *);}
static PyObject *meth_QTime_start(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::QTime *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTime, &sipCpp))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->start();
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_QTime, sipName_start, doc_QTime_start);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QTime_restart, "restart(self) -> int");

extern "C" {static PyObject *meth_QTime_restart(PyObject *, PyObject *);}
static PyObject *meth_QTime_restart(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::QTime *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTime, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->restart();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QTime, sipName_restart, doc_QTime_restart);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QTime_elapsed, "elapsed(self) -> int");

extern "C" {static PyObject *meth_QTime_elapsed(PyObject *, PyObject *);}
static PyObject *meth_QTime_elapsed(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QTime *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTime, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->elapsed();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QTime, sipName_elapsed, doc_QTime_elapsed);

    return SIP_NULLPTR;
}


extern "C" {static PyObject *slot_QTime___ge__(PyObject *,PyObject *);}
static PyObject *slot_QTime___ge__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QTime *sipCpp = reinterpret_cast< ::QTime *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTime));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QTime* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QTime, &a0, &a0State))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp-> ::QTime::operator>=(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::QTime *>(a0),sipType_QTime,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtCore, ge_slot, sipType_QTime, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QTime___gt__(PyObject *,PyObject *);}
static PyObject *slot_QTime___gt__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QTime *sipCpp = reinterpret_cast< ::QTime *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTime));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QTime* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QTime, &a0, &a0State))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp-> ::QTime::operator>(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::QTime *>(a0),sipType_QTime,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtCore, gt_slot, sipType_QTime, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QTime___le__(PyObject *,PyObject *);}
static PyObject *slot_QTime___le__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QTime *sipCpp = reinterpret_cast< ::QTime *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTime));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QTime* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QTime, &a0, &a0State))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp-> ::QTime::operator<=(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::QTime *>(a0),sipType_QTime,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtCore, le_slot, sipType_QTime, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QTime___lt__(PyObject *,PyObject *);}
static PyObject *slot_QTime___lt__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QTime *sipCpp = reinterpret_cast< ::QTime *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTime));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QTime* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QTime, &a0, &a0State))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp-> ::QTime::operator<(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::QTime *>(a0),sipType_QTime,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtCore, lt_slot, sipType_QTime, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QTime___ne__(PyObject *,PyObject *);}
static PyObject *slot_QTime___ne__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QTime *sipCpp = reinterpret_cast< ::QTime *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTime));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QTime* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QTime, &a0, &a0State))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp-> ::QTime::operator!=(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::QTime *>(a0),sipType_QTime,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtCore, ne_slot, sipType_QTime, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QTime___eq__(PyObject *,PyObject *);}
static PyObject *slot_QTime___eq__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QTime *sipCpp = reinterpret_cast< ::QTime *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTime));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QTime* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QTime, &a0, &a0State))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp-> ::QTime::operator==(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::QTime *>(a0),sipType_QTime,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtCore, eq_slot, sipType_QTime, sipSelf, sipArg);
}


extern "C" {static int slot_QTime___bool__(PyObject *);}
static int slot_QTime___bool__(PyObject *sipSelf)
{
     ::QTime *sipCpp = reinterpret_cast< ::QTime *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTime));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 364 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp2/pyqt4/sip/QtCore/qdatetime.sip"
        sipRes = !sipCpp->isNull();
#line 901 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp2/pyqt4/QtCore/sipQtCoreQTime.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static long slot_QTime___hash__(PyObject *);}
static long slot_QTime___hash__(PyObject *sipSelf)
{
     ::QTime *sipCpp = reinterpret_cast< ::QTime *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTime));

    if (!sipCpp)
        return 0L;


    {
        {
            long sipRes = 0;

#line 339 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp2/pyqt4/sip/QtCore/qdatetime.sip"
        if (sipIsAPIEnabled("QTime", 2, 0))
        {
            sipRes = qHash(sipCpp->toString(Qt::ISODate));
        }
        else
        {
            // Mimic Python's default behavour.
            sipRes = _Py_HashPointer(sipSelf);
        }
#line 934 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp2/pyqt4/QtCore/sipQtCoreQTime.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QTime___repr__(PyObject *);}
static PyObject *slot_QTime___repr__(PyObject *sipSelf)
{
     ::QTime *sipCpp = reinterpret_cast< ::QTime *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTime));

    if (!sipCpp)
        return SIP_NULLPTR;


    {
        {
            PyObject * sipRes = SIP_NULLPTR;

#line 293 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp2/pyqt4/sip/QtCore/qdatetime.sip"
        if (sipCpp->isNull())
        {
        #if PY_MAJOR_VERSION >= 3
            sipRes = PyUnicode_FromString("PyQt4.QtCore.QTime()");
        #else
            sipRes = PyString_FromString("PyQt4.QtCore.QTime()");
        #endif
        }
        else
        {
        #if PY_MAJOR_VERSION >= 3
            sipRes = PyUnicode_FromFormat("PyQt4.QtCore.QTime(%i, %i", sipCpp->hour(),
                    sipCpp->minute());
        
            if (sipCpp->second() || sipCpp->msec())
            {
                qpycore_Unicode_ConcatAndDel(&sipRes,
                        PyUnicode_FromFormat(", %i", sipCpp->second()));
        
                if (sipCpp->msec())
                    qpycore_Unicode_ConcatAndDel(&sipRes,
                            PyUnicode_FromFormat(", %i", sipCpp->msec()));
            }
        
            qpycore_Unicode_ConcatAndDel(&sipRes, PyUnicode_FromString(")"));
        #else
            sipRes = PyString_FromFormat("PyQt4.QtCore.QTime(%i, %i", sipCpp->hour(),
                    sipCpp->minute());
        
            if (sipCpp->second() || sipCpp->msec())
            {
                PyString_ConcatAndDel(&sipRes,
                        PyString_FromFormat(", %i", sipCpp->second()));
        
                if (sipCpp->msec())
                    PyString_ConcatAndDel(&sipRes,
                            PyString_FromFormat(", %i", sipCpp->msec()));
            }
        
            PyString_ConcatAndDel(&sipRes, PyString_FromString(")"));
        #endif
        }
#line 1000 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp2/pyqt4/QtCore/sipQtCoreQTime.cpp"

            return sipRes;
        }
    }

    return 0;
}


/* Call the instance's destructor. */
extern "C" {static void release_QTime(void *, int);}
static void release_QTime(void *sipCppV, int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast< ::QTime *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static PyObject *pickle_QTime(void *);}
static PyObject *pickle_QTime(void *sipCppV)
{
     ::QTime *sipCpp = reinterpret_cast< ::QTime *>(sipCppV);
    PyObject *sipRes;

#line 285 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp2/pyqt4/sip/QtCore/qdatetime.sip"
    sipRes = Py_BuildValue((char *)"iiii", sipCpp->hour(), sipCpp->minute(), sipCpp->second(), sipCpp->msec());
#line 1030 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp2/pyqt4/QtCore/sipQtCoreQTime.cpp"

    return sipRes;
}


extern "C" {static void *array_QTime(Py_ssize_t);}
static void *array_QTime(Py_ssize_t sipNrElem)
{
    return new  ::QTime[sipNrElem];
}


extern "C" {static void assign_QTime(void *, SIP_SSIZE_T, void *);}
static void assign_QTime(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QTime *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QTime *>(sipSrc);
}


extern "C" {static void *copy_QTime(const void *, SIP_SSIZE_T);}
static void *copy_QTime(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::QTime(reinterpret_cast<const  ::QTime *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QTime(sipSimpleWrapper *);}
static void dealloc_QTime(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QTime(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QTime(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QTime(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QTime *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::QTime();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        int a0;
        int a1;
        int a2 = 0;
        int a3 = 0;

        static const char *sipKwdList[] = {
            SIP_NULLPTR,
            SIP_NULLPTR,
            sipName_second,
            sipName_msec,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "ii|ii", &a0, &a1, &a2, &a3))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::QTime(a0,a1,a2,a3);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const  ::QTime* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J1", sipType_QTime, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::QTime(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::QTime *>(a0),sipType_QTime,a0State);

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


extern "C" {static int convertTo_QTime(PyObject *, void **, int *, PyObject *);}
static int convertTo_QTime(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
     ::QTime **sipCppPtr = reinterpret_cast< ::QTime **>(sipCppPtrV);

#line 253 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp2/pyqt4/sip/QtCore/qdatetime.sip"
#if PY_VERSION_HEX >= 0x02040000
    if (!PyDateTimeAPI)
        PyDateTime_IMPORT;
#endif

// Allow a Python time object whenever a QTime is expected.

if (sipIsErr == NULL)
    return (
#if PY_VERSION_HEX >= 0x02040000
            PyTime_Check(sipPy) ||
#endif
            sipCanConvertToType(sipPy, sipType_QTime, SIP_NO_CONVERTORS));

#if PY_VERSION_HEX >= 0x02040000
if (PyTime_Check(sipPy))
{
    *sipCppPtr = new QTime(PyDateTime_TIME_GET_HOUR(sipPy),
                           PyDateTime_TIME_GET_MINUTE(sipPy),
                           PyDateTime_TIME_GET_SECOND(sipPy),
                           PyDateTime_TIME_GET_MICROSECOND(sipPy) / 1000);

    return sipGetState(sipTransferObj);
}
#endif

*sipCppPtr = reinterpret_cast<QTime *>(sipConvertToType(sipPy, sipType_QTime, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 1160 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp2/pyqt4/QtCore/sipQtCoreQTime.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QTime[] = {
    {(void *)slot_QTime___ge__, ge_slot},
    {(void *)slot_QTime___gt__, gt_slot},
    {(void *)slot_QTime___le__, le_slot},
    {(void *)slot_QTime___lt__, lt_slot},
    {(void *)slot_QTime___ne__, ne_slot},
    {(void *)slot_QTime___eq__, eq_slot},
    {(void *)slot_QTime___bool__, bool_slot},
    {(void *)slot_QTime___hash__, hash_slot},
    {(void *)slot_QTime___repr__, repr_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QTime[] = {
    {SIP_MLNAME_CAST(sipName_addMSecs), meth_QTime_addMSecs, METH_VARARGS, SIP_MLDOC_CAST(doc_QTime_addMSecs)},
    {SIP_MLNAME_CAST(sipName_addSecs), meth_QTime_addSecs, METH_VARARGS, SIP_MLDOC_CAST(doc_QTime_addSecs)},
    {SIP_MLNAME_CAST(sipName_currentTime), meth_QTime_currentTime, METH_VARARGS, SIP_MLDOC_CAST(doc_QTime_currentTime)},
    {SIP_MLNAME_CAST(sipName_elapsed), meth_QTime_elapsed, METH_VARARGS, SIP_MLDOC_CAST(doc_QTime_elapsed)},
    {SIP_MLNAME_CAST(sipName_fromString), SIP_MLMETH_CAST(meth_QTime_fromString), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QTime_fromString)},
    {SIP_MLNAME_CAST(sipName_hour), meth_QTime_hour, METH_VARARGS, SIP_MLDOC_CAST(doc_QTime_hour)},
    {SIP_MLNAME_CAST(sipName_isNull), meth_QTime_isNull, METH_VARARGS, SIP_MLDOC_CAST(doc_QTime_isNull)},
    {SIP_MLNAME_CAST(sipName_isValid), SIP_MLMETH_CAST(meth_QTime_isValid), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QTime_isValid)},
    {SIP_MLNAME_CAST(sipName_minute), meth_QTime_minute, METH_VARARGS, SIP_MLDOC_CAST(doc_QTime_minute)},
    {SIP_MLNAME_CAST(sipName_msec), meth_QTime_msec, METH_VARARGS, SIP_MLDOC_CAST(doc_QTime_msec)},
    {SIP_MLNAME_CAST(sipName_msecsTo), meth_QTime_msecsTo, METH_VARARGS, SIP_MLDOC_CAST(doc_QTime_msecsTo)},
    {SIP_MLNAME_CAST(sipName_restart), meth_QTime_restart, METH_VARARGS, SIP_MLDOC_CAST(doc_QTime_restart)},
    {SIP_MLNAME_CAST(sipName_second), meth_QTime_second, METH_VARARGS, SIP_MLDOC_CAST(doc_QTime_second)},
    {SIP_MLNAME_CAST(sipName_secsTo), meth_QTime_secsTo, METH_VARARGS, SIP_MLDOC_CAST(doc_QTime_secsTo)},
    {SIP_MLNAME_CAST(sipName_setHMS), SIP_MLMETH_CAST(meth_QTime_setHMS), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QTime_setHMS)},
    {SIP_MLNAME_CAST(sipName_start), meth_QTime_start, METH_VARARGS, SIP_MLDOC_CAST(doc_QTime_start)},
    {SIP_MLNAME_CAST(sipName_toPyTime), meth_QTime_toPyTime, METH_VARARGS, SIP_MLDOC_CAST(doc_QTime_toPyTime)},
    {SIP_MLNAME_CAST(sipName_toString), SIP_MLMETH_CAST(meth_QTime_toString), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QTime_toString)}
};

PyDoc_STRVAR(doc_QTime, "\1QTime()\n"
"QTime(int, int, second: int = 0, msec: int = 0)\n"
"QTime(QTime)");


static pyqt4ClassPluginDef plugin_QTime = {
    SIP_NULLPTR,
    0,
    SIP_NULLPTR
};


sipClassTypeDef sipTypeDef_QtCore_QTime = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_CLASS,
        sipNameNr_QTime,
        {SIP_NULLPTR},
        &plugin_QTime
    },
    {
        sipNameNr_QTime,
        {0, 0, 1},
        18, methods_QTime,
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_QTime,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    SIP_NULLPTR,
    slots_QTime,
    init_type_QTime,
    SIP_NULLPTR,
    SIP_NULLPTR,
#if PY_MAJOR_VERSION >= 3
    SIP_NULLPTR,
    SIP_NULLPTR,
#else
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
#endif
    dealloc_QTime,
    assign_QTime,
    array_QTime,
    copy_QTime,
    release_QTime,
    SIP_NULLPTR,
    convertTo_QTime,
    SIP_NULLPTR,
    SIP_NULLPTR,
    pickle_QTime,
    SIP_NULLPTR,
    SIP_NULLPTR
};
