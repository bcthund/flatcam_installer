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

#line 28 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp2/pyqt4/sip/QtCore/qvector.sip"
#include <qvector.h>
#line 29 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp2/pyqt4/QtCore/sipQtCoreQVector0100QXmlStreamNotationDeclaration.cpp"

#line 263 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp2/pyqt4/sip/QtCore/qxmlstream.sip"
#include <qxmlstream.h>
#line 33 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp2/pyqt4/QtCore/sipQtCoreQVector0100QXmlStreamNotationDeclaration.cpp"


extern "C" {static void assign_QVector_0100QXmlStreamNotationDeclaration(void *, SIP_SSIZE_T, void *);}
static void assign_QVector_0100QXmlStreamNotationDeclaration(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast<QVector< ::QXmlStreamNotationDeclaration> *>(sipDst)[sipDstIdx] = *reinterpret_cast<QVector< ::QXmlStreamNotationDeclaration> *>(sipSrc);
}


extern "C" {static void *array_QVector_0100QXmlStreamNotationDeclaration(SIP_SSIZE_T);}
static void *array_QVector_0100QXmlStreamNotationDeclaration(SIP_SSIZE_T sipNrElem)
{
    return new QVector< ::QXmlStreamNotationDeclaration>[sipNrElem];
}


extern "C" {static void *copy_QVector_0100QXmlStreamNotationDeclaration(const void *, SIP_SSIZE_T);}
static void *copy_QVector_0100QXmlStreamNotationDeclaration(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QVector< ::QXmlStreamNotationDeclaration>(reinterpret_cast<const QVector< ::QXmlStreamNotationDeclaration> *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_QVector_0100QXmlStreamNotationDeclaration(void *, int);}
static void release_QVector_0100QXmlStreamNotationDeclaration(void *ptr, int)
{
    Py_BEGIN_ALLOW_THREADS
    delete reinterpret_cast<QVector< ::QXmlStreamNotationDeclaration> *>(ptr);
    Py_END_ALLOW_THREADS
}



extern "C" {static int convertTo_QVector_0100QXmlStreamNotationDeclaration(PyObject *, void **, int *, PyObject *);}
static int convertTo_QVector_0100QXmlStreamNotationDeclaration(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QVector< ::QXmlStreamNotationDeclaration> **sipCppPtr = reinterpret_cast<QVector< ::QXmlStreamNotationDeclaration> **>(sipCppPtrV);

#line 59 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp2/pyqt4/sip/QtCore/qvector.sip"
    // Check the type if that is all that is required.
    if (sipIsErr == NULL)
    {
        if (!PyList_Check(sipPy))
            return 0;

        for (SIP_SSIZE_T i = 0; i < PyList_GET_SIZE(sipPy); ++i)
            if (!sipCanConvertToType(PyList_GET_ITEM(sipPy, i), sipType_QXmlStreamNotationDeclaration, SIP_NOT_NONE))
                return 0;

        return 1;
    }

    QVector<QXmlStreamNotationDeclaration> *qv = new QVector<QXmlStreamNotationDeclaration>;
 
    for (SIP_SSIZE_T i = 0; i < PyList_GET_SIZE(sipPy); ++i)
    {
        int state;
        QXmlStreamNotationDeclaration *t = reinterpret_cast<QXmlStreamNotationDeclaration *>(sipConvertToType(PyList_GET_ITEM(sipPy, i), sipType_QXmlStreamNotationDeclaration, sipTransferObj, SIP_NOT_NONE, &state, sipIsErr));
 
        if (*sipIsErr)
        {
            sipReleaseType(t, sipType_QXmlStreamNotationDeclaration, state);

            delete qv;
            return 0;
        }

        qv->append(*t);

        sipReleaseType(t, sipType_QXmlStreamNotationDeclaration, state);
    }
 
    *sipCppPtr = qv;
 
    return sipGetState(sipTransferObj);
#line 110 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp2/pyqt4/QtCore/sipQtCoreQVector0100QXmlStreamNotationDeclaration.cpp"
}


extern "C" {static PyObject *convertFrom_QVector_0100QXmlStreamNotationDeclaration(void *, PyObject *);}
static PyObject *convertFrom_QVector_0100QXmlStreamNotationDeclaration(void *sipCppV, PyObject *sipTransferObj)
{
   QVector< ::QXmlStreamNotationDeclaration> *sipCpp = reinterpret_cast<QVector< ::QXmlStreamNotationDeclaration> *>(sipCppV);

#line 32 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp2/pyqt4/sip/QtCore/qvector.sip"
    // Create the list.
    PyObject *l;

    if ((l = PyList_New(sipCpp->size())) == NULL)
        return NULL;

    // Set the list elements.
    for (int i = 0; i < sipCpp->size(); ++i)
    {
        QXmlStreamNotationDeclaration *t = new QXmlStreamNotationDeclaration(sipCpp->at(i));
        PyObject *tobj;

        if ((tobj = sipConvertFromNewType(t, sipType_QXmlStreamNotationDeclaration, sipTransferObj)) == NULL)
        {
            Py_DECREF(l);
            delete t;

            return NULL;
        }

        PyList_SET_ITEM(l, i, tobj);
    }

    return l;
#line 144 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp2/pyqt4/QtCore/sipQtCoreQVector0100QXmlStreamNotationDeclaration.cpp"
}


sipMappedTypeDef sipTypeDef_QtCore_QVector_0100QXmlStreamNotationDeclaration = {
    {
        -1,
        SIP_NULLPTR,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_210,     /* QVector<QXmlStreamNotationDeclaration> */
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
    assign_QVector_0100QXmlStreamNotationDeclaration,
    array_QVector_0100QXmlStreamNotationDeclaration,
    copy_QVector_0100QXmlStreamNotationDeclaration,
    release_QVector_0100QXmlStreamNotationDeclaration,
    convertTo_QVector_0100QXmlStreamNotationDeclaration,
    convertFrom_QVector_0100QXmlStreamNotationDeclaration
};
