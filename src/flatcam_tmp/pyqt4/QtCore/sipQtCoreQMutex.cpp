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

#line 26 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp/pyqt4/sip/QtCore/qmutex.sip"
#include <qmutex.h>
#line 29 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp/pyqt4/QtCore/sipQtCoreQMutex.cpp"



PyDoc_STRVAR(doc_QMutex_lock, "lock(self)");

extern "C" {static PyObject *meth_QMutex_lock(PyObject *, PyObject *);}
static PyObject *meth_QMutex_lock(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::QMutex *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMutex, &sipCpp))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->lock();
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMutex, sipName_lock, doc_QMutex_lock);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QMutex_tryLock, "tryLock(self) -> bool\n"
"tryLock(self, int) -> bool");

extern "C" {static PyObject *meth_QMutex_tryLock(PyObject *, PyObject *);}
static PyObject *meth_QMutex_tryLock(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::QMutex *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMutex, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->tryLock();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    {
        int a0;
         ::QMutex *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QMutex, &sipCpp, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->tryLock(a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMutex, sipName_tryLock, doc_QMutex_tryLock);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QMutex_unlock, "unlock(self)");

extern "C" {static PyObject *meth_QMutex_unlock(PyObject *, PyObject *);}
static PyObject *meth_QMutex_unlock(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::QMutex *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMutex, &sipCpp))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->unlock();
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMutex, sipName_unlock, doc_QMutex_unlock);

    return SIP_NULLPTR;
}


/* Call the instance's destructor. */
extern "C" {static void release_QMutex(void *, int);}
static void release_QMutex(void *sipCppV, int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast< ::QMutex *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QMutex(sipSimpleWrapper *);}
static void dealloc_QMutex(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QMutex(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QMutex(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QMutex(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QMutex *sipCpp = SIP_NULLPTR;

    {
         ::QMutex::RecursionMode a0 = QMutex::NonRecursive;

        static const char *sipKwdList[] = {
            sipName_mode,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "|E", sipType_QMutex_RecursionMode, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::QMutex(a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


static PyMethodDef methods_QMutex[] = {
    {SIP_MLNAME_CAST(sipName_lock), meth_QMutex_lock, METH_VARARGS, SIP_MLDOC_CAST(doc_QMutex_lock)},
    {SIP_MLNAME_CAST(sipName_tryLock), meth_QMutex_tryLock, METH_VARARGS, SIP_MLDOC_CAST(doc_QMutex_tryLock)},
    {SIP_MLNAME_CAST(sipName_unlock), meth_QMutex_unlock, METH_VARARGS, SIP_MLDOC_CAST(doc_QMutex_unlock)}
};

static sipEnumMemberDef enummembers_QMutex[] = {
    {sipName_NonRecursive, static_cast<int>( ::QMutex::NonRecursive), 136},
    {sipName_Recursive, static_cast<int>( ::QMutex::Recursive), 136},
};

PyDoc_STRVAR(doc_QMutex, "\1QMutex(mode: QMutex.RecursionMode = QMutex.NonRecursive)");


static pyqt4ClassPluginDef plugin_QMutex = {
    SIP_NULLPTR,
    0,
    SIP_NULLPTR
};


sipClassTypeDef sipTypeDef_QtCore_QMutex = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_CLASS,
        sipNameNr_QMutex,
        {SIP_NULLPTR},
        &plugin_QMutex
    },
    {
        sipNameNr_QMutex,
        {0, 0, 1},
        3, methods_QMutex,
        2, enummembers_QMutex,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_QMutex,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    SIP_NULLPTR,
    SIP_NULLPTR,
    init_type_QMutex,
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
    dealloc_QMutex,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    release_QMutex,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};
