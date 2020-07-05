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

#line 28 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp2/pyqt4/sip/QtCore/qlist.sip"
#include <qlist.h>
#line 29 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp2/pyqt4/QtCore/sipQtCoreQList0100QModelIndex.cpp"

#line 26 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp2/pyqt4/sip/QtCore/qabstractitemmodel.sip"
#include <qabstractitemmodel.h>
#line 33 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp2/pyqt4/QtCore/sipQtCoreQList0100QModelIndex.cpp"


extern "C" {static void assign_QList_0100QModelIndex(void *, SIP_SSIZE_T, void *);}
static void assign_QList_0100QModelIndex(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast<QList< ::QModelIndex> *>(sipDst)[sipDstIdx] = *reinterpret_cast<QList< ::QModelIndex> *>(sipSrc);
}


extern "C" {static void *array_QList_0100QModelIndex(SIP_SSIZE_T);}
static void *array_QList_0100QModelIndex(SIP_SSIZE_T sipNrElem)
{
    return new QList< ::QModelIndex>[sipNrElem];
}


extern "C" {static void *copy_QList_0100QModelIndex(const void *, SIP_SSIZE_T);}
static void *copy_QList_0100QModelIndex(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QList< ::QModelIndex>(reinterpret_cast<const QList< ::QModelIndex> *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_QList_0100QModelIndex(void *, int);}
static void release_QList_0100QModelIndex(void *ptr, int)
{
    Py_BEGIN_ALLOW_THREADS
    delete reinterpret_cast<QList< ::QModelIndex> *>(ptr);
    Py_END_ALLOW_THREADS
}



extern "C" {static int convertTo_QList_0100QModelIndex(PyObject *, void **, int *, PyObject *);}
static int convertTo_QList_0100QModelIndex(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QList< ::QModelIndex> **sipCppPtr = reinterpret_cast<QList< ::QModelIndex> **>(sipCppPtrV);

#line 59 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp2/pyqt4/sip/QtCore/qlist.sip"
    SIP_SSIZE_T len;

    // Check the type if that is all that is required.
    if (sipIsErr == NULL)
    {
        if (!PySequence_Check(sipPy) || (len = PySequence_Size(sipPy)) < 0)
            return 0;

        for (SIP_SSIZE_T i = 0; i < len; ++i)
        {
            PyObject *itm = PySequence_ITEM(sipPy, i);
            bool ok = (itm && sipCanConvertToType(itm, sipType_QModelIndex, SIP_NOT_NONE));

            Py_XDECREF(itm);

            if (!ok)
                return 0;
        }

        return 1;
    }

    QList<QModelIndex> *ql = new QList<QModelIndex>;
    len = PySequence_Size(sipPy);
 
    for (SIP_SSIZE_T i = 0; i < len; ++i)
    {
        PyObject *itm = PySequence_ITEM(sipPy, i);
        int state;
        QModelIndex *t = reinterpret_cast<QModelIndex *>(sipConvertToType(itm, sipType_QModelIndex, sipTransferObj, SIP_NOT_NONE, &state, sipIsErr));

        Py_DECREF(itm);
 
        if (*sipIsErr)
        {
            sipReleaseType(t, sipType_QModelIndex, state);

            delete ql;
            return 0;
        }

        ql->append(*t);

        sipReleaseType(t, sipType_QModelIndex, state);
    }
 
    *sipCppPtr = ql;
 
    return sipGetState(sipTransferObj);
#line 123 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp2/pyqt4/QtCore/sipQtCoreQList0100QModelIndex.cpp"
}


extern "C" {static PyObject *convertFrom_QList_0100QModelIndex(void *, PyObject *);}
static PyObject *convertFrom_QList_0100QModelIndex(void *sipCppV, PyObject *sipTransferObj)
{
   QList< ::QModelIndex> *sipCpp = reinterpret_cast<QList< ::QModelIndex> *>(sipCppV);

#line 32 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp2/pyqt4/sip/QtCore/qlist.sip"
    // Create the list.
    PyObject *l;

    if ((l = PyList_New(sipCpp->size())) == NULL)
        return NULL;

    // Set the list elements.
    for (int i = 0; i < sipCpp->size(); ++i)
    {
        QModelIndex *t = new QModelIndex(sipCpp->at(i));
        PyObject *tobj;

        if ((tobj = sipConvertFromNewType(t, sipType_QModelIndex, sipTransferObj)) == NULL)
        {
            Py_DECREF(l);
            delete t;

            return NULL;
        }

        PyList_SET_ITEM(l, i, tobj);
    }

    return l;
#line 157 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp2/pyqt4/QtCore/sipQtCoreQList0100QModelIndex.cpp"
}


sipMappedTypeDef sipTypeDef_QtCore_QList_0100QModelIndex = {
    {
        -1,
        SIP_NULLPTR,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_12822,     /* QList<QModelIndex> */
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
    assign_QList_0100QModelIndex,
    array_QList_0100QModelIndex,
    copy_QList_0100QModelIndex,
    release_QList_0100QModelIndex,
    convertTo_QList_0100QModelIndex,
    convertFrom_QList_0100QModelIndex
};
