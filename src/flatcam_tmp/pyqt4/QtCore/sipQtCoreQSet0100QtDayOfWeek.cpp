/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.19.21
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

#line 2024 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp/pyqt4/sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#include <qset.h>
#line 30 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp/pyqt4/QtCore/sipQtCoreQSet0100QtDayOfWeek.cpp"

#line 26 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp/pyqt4/sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 34 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp/pyqt4/QtCore/sipQtCoreQSet0100QtDayOfWeek.cpp"


extern "C" {static void assign_QSet_0100Qt_DayOfWeek(void *, SIP_SSIZE_T, void *);}
static void assign_QSet_0100Qt_DayOfWeek(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QSet< ::Qt::DayOfWeek> *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QSet< ::Qt::DayOfWeek> *>(sipSrc);
}


extern "C" {static void *array_QSet_0100Qt_DayOfWeek(SIP_SSIZE_T);}
static void *array_QSet_0100Qt_DayOfWeek(SIP_SSIZE_T sipNrElem)
{
    return new  ::QSet< ::Qt::DayOfWeek>[sipNrElem];
}


extern "C" {static void *copy_QSet_0100Qt_DayOfWeek(const void *, SIP_SSIZE_T);}
static void *copy_QSet_0100Qt_DayOfWeek(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::QSet< ::Qt::DayOfWeek>(reinterpret_cast<const  ::QSet< ::Qt::DayOfWeek> *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_QSet_0100Qt_DayOfWeek(void *, int);}
static void release_QSet_0100Qt_DayOfWeek(void *ptr, int)
{
    Py_BEGIN_ALLOW_THREADS
    delete reinterpret_cast< ::QSet< ::Qt::DayOfWeek> *>(ptr);
    Py_END_ALLOW_THREADS
}



extern "C" {static int convertTo_QSet_0100Qt_DayOfWeek(PyObject *, void **, int *, PyObject *);}
static int convertTo_QSet_0100Qt_DayOfWeek(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
     ::QSet< ::Qt::DayOfWeek> **sipCppPtr = reinterpret_cast< ::QSet< ::Qt::DayOfWeek> **>(sipCppPtrV);

#line 2059 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp/pyqt4/sip/QtCore/qnamespace.sip"
    PyObject *it = PyObject_GetIter(sipPy), *itm;

    // Check the type if that is all that is required.
    if (sipIsErr == NULL)
    {
        if (it == NULL)
            return 0;

        while ((itm = PyIter_Next(it)) != NULL)
        {
            int ok = sipCanConvertToEnum(itm, sipType_Qt_DayOfWeek);

            Py_DECREF(itm);

            if (!ok)
            {
                Py_DECREF(it);
                return 0;
            }
        }

        Py_DECREF(it);
        return 1;
    }

    if (it == NULL)
    {
        *sipIsErr = 1;
        return 0;
    }

    QSet<Qt::DayOfWeek> *qs = new QSet<Qt::DayOfWeek>;

    while ((itm = PyIter_Next(it)) != NULL)
    {
        long l = SIPLong_AsLong(itm);

        Py_DECREF(itm);

        qs->insert(static_cast<Qt::DayOfWeek>(l));
    }

    Py_DECREF(it);

    *sipCppPtr = qs;

    return sipGetState(sipTransferObj);
#line 122 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp/pyqt4/QtCore/sipQtCoreQSet0100QtDayOfWeek.cpp"
}


extern "C" {static PyObject *convertFrom_QSet_0100Qt_DayOfWeek(void *, PyObject *);}
static PyObject *convertFrom_QSet_0100Qt_DayOfWeek(void *sipCppV, PyObject *)
{
    ::QSet< ::Qt::DayOfWeek> *sipCpp = reinterpret_cast< ::QSet< ::Qt::DayOfWeek> *>(sipCppV);

#line 2029 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp/pyqt4/sip/QtCore/qnamespace.sip"
    // Create the set.
    PyObject *s;

    if ((s = PySet_New(NULL)) == NULL)
        return NULL;

    // Set the set elements.
    QSet<Qt::DayOfWeek>::const_iterator it = sipCpp->constBegin();
    QSet<Qt::DayOfWeek>::const_iterator end = sipCpp->constEnd();

    while (it != end)
    {
        PyObject *el_obj;

        if ((el_obj = sipConvertFromEnum(*it, sipType_Qt_DayOfWeek)) == NULL)
        {
            Py_DECREF(s);

            return NULL;
        }

        PySet_Add(s, el_obj);

        ++it;
    }

    return s;
#line 159 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp/pyqt4/QtCore/sipQtCoreQSet0100QtDayOfWeek.cpp"
}


sipMappedTypeDef sipTypeDef_QtCore_QSet_0100Qt_DayOfWeek = {
    {
        -1,
        SIP_NULLPTR,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_11943,     /* QSet<Qt::DayOfWeek> */
        {0},
        0
    },
    {
        -1,
        {0, 0, 1},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
    },
    assign_QSet_0100Qt_DayOfWeek,
    array_QSet_0100Qt_DayOfWeek,
    copy_QSet_0100Qt_DayOfWeek,
    release_QSet_0100Qt_DayOfWeek,
    convertTo_QSet_0100Qt_DayOfWeek,
    convertFrom_QSet_0100Qt_DayOfWeek
};
