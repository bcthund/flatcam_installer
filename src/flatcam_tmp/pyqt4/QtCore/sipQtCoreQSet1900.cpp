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

#line 171 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp/pyqt4/sip/QtCore/qset.sip"
#include <qset.h>
#line 29 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp/pyqt4/QtCore/sipQtCoreQSet1900.cpp"



extern "C" {static void assign_QSet_1900(void *, SIP_SSIZE_T, void *);}
static void assign_QSet_1900(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QSet<uint> *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QSet<uint> *>(sipSrc);
}


extern "C" {static void *array_QSet_1900(SIP_SSIZE_T);}
static void *array_QSet_1900(SIP_SSIZE_T sipNrElem)
{
    return new  ::QSet<uint>[sipNrElem];
}


extern "C" {static void *copy_QSet_1900(const void *, SIP_SSIZE_T);}
static void *copy_QSet_1900(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::QSet<uint>(reinterpret_cast<const  ::QSet<uint> *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_QSet_1900(void *, int);}
static void release_QSet_1900(void *ptr, int)
{
    Py_BEGIN_ALLOW_THREADS
    delete reinterpret_cast< ::QSet<uint> *>(ptr);
    Py_END_ALLOW_THREADS
}



extern "C" {static int convertTo_QSet_1900(PyObject *, void **, int *, PyObject *);}
static int convertTo_QSet_1900(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
     ::QSet<uint> **sipCppPtr = reinterpret_cast< ::QSet<uint> **>(sipCppPtrV);

#line 204 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp/pyqt4/sip/QtCore/qset.sip"
    PyObject *it = PyObject_GetIter(sipPy), *itm;

    // Check the type if that is all that is required.
    if (sipIsErr == NULL)
    {
        if (it == NULL)
            return 0;

        Py_DECREF(it);
        return 1;
    }

    if (it == NULL)
    {
        *sipIsErr = 1;
        return 0;
    }

    QSet<unsigned> *qs = new QSet<unsigned>;

    while ((itm = PyIter_Next(it)) != NULL)
    {
        qs->insert(PyLong_AsUnsignedLong(itm));
        Py_DECREF(itm);
    }

    Py_DECREF(it);

    *sipCppPtr = qs;

    return sipGetState(sipTransferObj);
#line 102 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp/pyqt4/QtCore/sipQtCoreQSet1900.cpp"
}


extern "C" {static PyObject *convertFrom_QSet_1900(void *, PyObject *);}
static PyObject *convertFrom_QSet_1900(void *sipCppV, PyObject *)
{
    ::QSet<uint> *sipCpp = reinterpret_cast< ::QSet<uint> *>(sipCppV);

#line 175 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp/pyqt4/sip/QtCore/qset.sip"
    // Create the set.
    PyObject *s;

    if ((s = PySet_New(NULL)) == NULL)
        return NULL;

    // Set the set elements.
    QSet<unsigned>::const_iterator it = sipCpp->constBegin();
    QSet<unsigned>::const_iterator end = sipCpp->constEnd();

    while (it != end)
    {
        PyObject *el_obj;

        if ((el_obj = PyLong_FromUnsignedLong(*it)) == NULL)
        {
            Py_DECREF(s);
            return NULL;
        }

        PySet_Add(s, el_obj);

        ++it;
    }

    return s;
#line 138 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp/pyqt4/QtCore/sipQtCoreQSet1900.cpp"
}


sipMappedTypeDef sipTypeDef_QtCore_QSet_1900 = {
    {
        -1,
        SIP_NULLPTR,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_37238,     /* QSet<uint> */
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
    assign_QSet_1900,
    array_QSet_1900,
    copy_QSet_1900,
    release_QSet_1900,
    convertTo_QSet_1900,
    convertFrom_QSet_1900
};
