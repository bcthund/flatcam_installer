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

#line 785 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp2/pyqt4/sip/QtCore/qstring.sip"
#include <qstring.h>
#line 29 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp2/pyqt4/QtCore/sipQtCoreQStringRef_1.cpp"



extern "C" {static void assign_QStringRef_1(void *, SIP_SSIZE_T, void *);}
static void assign_QStringRef_1(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QStringRef *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QStringRef *>(sipSrc);
}


extern "C" {static void *array_QStringRef_1(SIP_SSIZE_T);}
static void *array_QStringRef_1(SIP_SSIZE_T sipNrElem)
{
    return new  ::QStringRef[sipNrElem];
}


extern "C" {static void *copy_QStringRef_1(const void *, SIP_SSIZE_T);}
static void *copy_QStringRef_1(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::QStringRef(reinterpret_cast<const  ::QStringRef *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_QStringRef_1(void *, int);}
static void release_QStringRef_1(void *ptr, int)
{
    Py_BEGIN_ALLOW_THREADS
    delete reinterpret_cast< ::QStringRef *>(ptr);
    Py_END_ALLOW_THREADS
}



extern "C" {static int convertTo_QStringRef_1(PyObject *, void **, int *, PyObject *);}
static int convertTo_QStringRef_1(PyObject *,void **,int *,PyObject *)
{
#line 789 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp2/pyqt4/sip/QtCore/qstring.sip"
    // Qt only ever returns a QStringRef so this conversion isn't needed.
    return 0;
#line 71 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp2/pyqt4/QtCore/sipQtCoreQStringRef_1.cpp"
}


extern "C" {static PyObject *convertFrom_QStringRef_1(void *, PyObject *);}
static PyObject *convertFrom_QStringRef_1(void *sipCppV, PyObject *)
{
    ::QStringRef *sipCpp = reinterpret_cast< ::QStringRef *>(sipCppV);

#line 794 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp2/pyqt4/sip/QtCore/qstring.sip"
    return qpycore_PyObject_FromQString(sipCpp->toString());
#line 82 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp2/pyqt4/QtCore/sipQtCoreQStringRef_1.cpp"
}


sipMappedTypeDef sipTypeDef_QtCore_QStringRef_1 = {
    {
        1,
        &sipTypeDef_QtCore_QStringRef_0.ctd_base,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_QStringRef,     /* QStringRef */
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
    assign_QStringRef_1,
    array_QStringRef_1,
    copy_QStringRef_1,
    release_QStringRef_1,
    convertTo_QStringRef_1,
    convertFrom_QStringRef_1
};
