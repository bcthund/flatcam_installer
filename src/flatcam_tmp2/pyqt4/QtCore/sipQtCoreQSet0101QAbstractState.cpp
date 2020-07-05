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

#line 412 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp2/pyqt4/sip/QtCore/qset.sip"
#include <qset.h>
#line 29 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp2/pyqt4/QtCore/sipQtCoreQSet0101QAbstractState.cpp"

#line 28 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp2/pyqt4/sip/QtCore/qabstractstate.sip"
#include <qabstractstate.h>
#line 33 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp2/pyqt4/QtCore/sipQtCoreQSet0101QAbstractState.cpp"


extern "C" {static void assign_QSet_0101QAbstractState(void *, SIP_SSIZE_T, void *);}
static void assign_QSet_0101QAbstractState(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast<QSet< ::QAbstractState*> *>(sipDst)[sipDstIdx] = *reinterpret_cast<QSet< ::QAbstractState*> *>(sipSrc);
}


extern "C" {static void *array_QSet_0101QAbstractState(SIP_SSIZE_T);}
static void *array_QSet_0101QAbstractState(SIP_SSIZE_T sipNrElem)
{
    return new QSet< ::QAbstractState*>[sipNrElem];
}


extern "C" {static void *copy_QSet_0101QAbstractState(const void *, SIP_SSIZE_T);}
static void *copy_QSet_0101QAbstractState(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QSet< ::QAbstractState*>(reinterpret_cast<const QSet< ::QAbstractState*> *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_QSet_0101QAbstractState(void *, int);}
static void release_QSet_0101QAbstractState(void *ptr, int)
{
    Py_BEGIN_ALLOW_THREADS
    delete reinterpret_cast<QSet< ::QAbstractState*> *>(ptr);
    Py_END_ALLOW_THREADS
}



extern "C" {static int convertTo_QSet_0101QAbstractState(PyObject *, void **, int *, PyObject *);}
static int convertTo_QSet_0101QAbstractState(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QSet< ::QAbstractState*> **sipCppPtr = reinterpret_cast<QSet< ::QAbstractState*> **>(sipCppPtrV);

#line 445 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp2/pyqt4/sip/QtCore/qset.sip"
    PyObject *it = PyObject_GetIter(sipPy), *itm;

    // Check the type if that is all that is required.
    if (sipIsErr == NULL)
    {
        if (it == NULL)
            return 0;

        while ((itm = PyIter_Next(it)) != NULL)
        {
            int ok = sipCanConvertToType(itm, sipType_QAbstractState, 0);

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

    QSet<QAbstractState *> *qs = new QSet<QAbstractState *>;

    while ((itm = PyIter_Next(it)) != NULL)
    {
        QAbstractState *t = reinterpret_cast<QAbstractState *>(sipConvertToType(itm, sipType_QAbstractState, sipTransferObj, 0, 0, sipIsErr));

        Py_DECREF(itm);

        if (*sipIsErr)
        {
            delete qs;
            Py_DECREF(it);
            return 0;
        }

        qs->insert(t);
    }

    Py_DECREF(it);

    *sipCppPtr = qs;

    return sipGetState(sipTransferObj);
#line 128 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp2/pyqt4/QtCore/sipQtCoreQSet0101QAbstractState.cpp"
}


extern "C" {static PyObject *convertFrom_QSet_0101QAbstractState(void *, PyObject *);}
static PyObject *convertFrom_QSet_0101QAbstractState(void *sipCppV, PyObject *sipTransferObj)
{
   QSet< ::QAbstractState*> *sipCpp = reinterpret_cast<QSet< ::QAbstractState*> *>(sipCppV);

#line 416 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp2/pyqt4/sip/QtCore/qset.sip"
    // Create the list.
    PyObject *l;

    if ((l = PyList_New(sipCpp->size())) == NULL)
        return NULL;

    // Set the list elements.
    QSet<QAbstractState *>::const_iterator it = sipCpp->constBegin();

    for (int i = 0; i < sipCpp->size(); ++i)
    {
        PyObject *tobj;

        // The explicit (void *) cast allows QAbstractState to be const.
        if ((tobj = sipConvertFromType((void *)*it, sipType_QAbstractState, sipTransferObj)) == NULL)
        {
            Py_DECREF(l);
            return NULL;
        }

        PyList_SET_ITEM(l, i, tobj);

        ++it;
    }

    return l;
#line 164 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp2/pyqt4/QtCore/sipQtCoreQSet0101QAbstractState.cpp"
}


sipMappedTypeDef sipTypeDef_QtCore_QSet_0101QAbstractState = {
    {
        -1,
        SIP_NULLPTR,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_7759,     /* QSet<QAbstractState*> */
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
    assign_QSet_0101QAbstractState,
    array_QSet_0101QAbstractState,
    copy_QSet_0101QAbstractState,
    release_QSet_0101QAbstractState,
    convertTo_QSet_0101QAbstractState,
    convertFrom_QSet_0101QAbstractState
};