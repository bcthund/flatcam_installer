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

#line 26 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp/pyqt4/sip/QtCore/qbitarray.sip"
#include <qbitarray.h>
#line 29 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp/pyqt4/QtCore/sipQtCoreQBitArray.cpp"

#line 30 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp/pyqt4/sip/QtCore/qbitarray.sip"
// This is needed by __hash__().
#include <qhash.h>
#line 34 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp/pyqt4/QtCore/sipQtCoreQBitArray.cpp"


PyDoc_STRVAR(doc_QBitArray_size, "size(self) -> int");

extern "C" {static PyObject *meth_QBitArray_size(PyObject *, PyObject *);}
static PyObject *meth_QBitArray_size(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QBitArray *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QBitArray, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->size();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QBitArray, sipName_size, doc_QBitArray_size);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QBitArray_count, "count(self) -> int\n"
"count(self, bool) -> int");

extern "C" {static PyObject *meth_QBitArray_count(PyObject *, PyObject *);}
static PyObject *meth_QBitArray_count(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QBitArray *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QBitArray, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->count();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    {
        bool a0;
        const  ::QBitArray *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bb", &sipSelf, sipType_QBitArray, &sipCpp, &a0))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->count(a0);
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QBitArray, sipName_count, doc_QBitArray_count);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QBitArray_isEmpty, "isEmpty(self) -> bool");

extern "C" {static PyObject *meth_QBitArray_isEmpty(PyObject *, PyObject *);}
static PyObject *meth_QBitArray_isEmpty(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QBitArray *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QBitArray, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isEmpty();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QBitArray, sipName_isEmpty, doc_QBitArray_isEmpty);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QBitArray_isNull, "isNull(self) -> bool");

extern "C" {static PyObject *meth_QBitArray_isNull(PyObject *, PyObject *);}
static PyObject *meth_QBitArray_isNull(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QBitArray *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QBitArray, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isNull();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QBitArray, sipName_isNull, doc_QBitArray_isNull);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QBitArray_resize, "resize(self, int)");

extern "C" {static PyObject *meth_QBitArray_resize(PyObject *, PyObject *);}
static PyObject *meth_QBitArray_resize(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;
         ::QBitArray *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QBitArray, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->resize(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QBitArray, sipName_resize, doc_QBitArray_resize);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QBitArray_detach, "detach(self)");

extern "C" {static PyObject *meth_QBitArray_detach(PyObject *, PyObject *);}
static PyObject *meth_QBitArray_detach(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::QBitArray *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QBitArray, &sipCpp))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->detach();
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QBitArray, sipName_detach, doc_QBitArray_detach);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QBitArray_isDetached, "isDetached(self) -> bool");

extern "C" {static PyObject *meth_QBitArray_isDetached(PyObject *, PyObject *);}
static PyObject *meth_QBitArray_isDetached(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QBitArray *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QBitArray, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isDetached();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QBitArray, sipName_isDetached, doc_QBitArray_isDetached);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QBitArray_clear, "clear(self)");

extern "C" {static PyObject *meth_QBitArray_clear(PyObject *, PyObject *);}
static PyObject *meth_QBitArray_clear(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::QBitArray *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QBitArray, &sipCpp))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->clear();
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QBitArray, sipName_clear, doc_QBitArray_clear);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QBitArray_fill, "fill(self, bool, int, int)\n"
"fill(self, bool, size: int = -1) -> bool");

extern "C" {static PyObject *meth_QBitArray_fill(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QBitArray_fill(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        bool a0;
        int a1;
        int a2;
         ::QBitArray *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, SIP_NULLPTR, "Bbii", &sipSelf, sipType_QBitArray, &sipCpp, &a0, &a1, &a2))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->fill(a0,a1,a2);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        bool a0;
        int a1 = -1;
         ::QBitArray *sipCpp;

        static const char *sipKwdList[] = {
            SIP_NULLPTR,
            sipName_size,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "Bb|i", &sipSelf, sipType_QBitArray, &sipCpp, &a0, &a1))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->fill(a0,a1);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QBitArray, sipName_fill, doc_QBitArray_fill);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QBitArray_truncate, "truncate(self, int)");

extern "C" {static PyObject *meth_QBitArray_truncate(PyObject *, PyObject *);}
static PyObject *meth_QBitArray_truncate(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;
         ::QBitArray *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QBitArray, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->truncate(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QBitArray, sipName_truncate, doc_QBitArray_truncate);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QBitArray_testBit, "testBit(self, int) -> bool");

extern "C" {static PyObject *meth_QBitArray_testBit(PyObject *, PyObject *);}
static PyObject *meth_QBitArray_testBit(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;
        const  ::QBitArray *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QBitArray, &sipCpp, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->testBit(a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QBitArray, sipName_testBit, doc_QBitArray_testBit);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QBitArray_setBit, "setBit(self, int)\n"
"setBit(self, int, bool)");

extern "C" {static PyObject *meth_QBitArray_setBit(PyObject *, PyObject *);}
static PyObject *meth_QBitArray_setBit(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;
         ::QBitArray *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QBitArray, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setBit(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        int a0;
        bool a1;
         ::QBitArray *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bib", &sipSelf, sipType_QBitArray, &sipCpp, &a0, &a1))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setBit(a0,a1);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QBitArray, sipName_setBit, doc_QBitArray_setBit);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QBitArray_clearBit, "clearBit(self, int)");

extern "C" {static PyObject *meth_QBitArray_clearBit(PyObject *, PyObject *);}
static PyObject *meth_QBitArray_clearBit(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;
         ::QBitArray *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QBitArray, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->clearBit(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QBitArray, sipName_clearBit, doc_QBitArray_clearBit);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QBitArray_toggleBit, "toggleBit(self, int) -> bool");

extern "C" {static PyObject *meth_QBitArray_toggleBit(PyObject *, PyObject *);}
static PyObject *meth_QBitArray_toggleBit(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;
         ::QBitArray *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QBitArray, &sipCpp, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->toggleBit(a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QBitArray, sipName_toggleBit, doc_QBitArray_toggleBit);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QBitArray_at, "at(self, int) -> bool");

extern "C" {static PyObject *meth_QBitArray_at(PyObject *, PyObject *);}
static PyObject *meth_QBitArray_at(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;
        const  ::QBitArray *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QBitArray, &sipCpp, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->at(a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QBitArray, sipName_at, doc_QBitArray_at);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QBitArray_swap, "swap(self, QBitArray)");

extern "C" {static PyObject *meth_QBitArray_swap(PyObject *, PyObject *);}
static PyObject *meth_QBitArray_swap(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::QBitArray* a0;
         ::QBitArray *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QBitArray, &sipCpp, sipType_QBitArray, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->swap(*a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QBitArray, sipName_swap, doc_QBitArray_swap);

    return SIP_NULLPTR;
}


extern "C" {static PyObject *slot_QBitArray___or__(PyObject *,PyObject *);}
static PyObject *slot_QBitArray___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QBitArray* a0;
        const  ::QBitArray* a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J9J9", sipType_QBitArray, &a0, sipType_QBitArray, &a1))
        {
             ::QBitArray*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::QBitArray((*a0 | *a1));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QBitArray,SIP_NULLPTR);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtCore, or_slot, SIP_NULLPTR, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QBitArray___and__(PyObject *,PyObject *);}
static PyObject *slot_QBitArray___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QBitArray* a0;
        const  ::QBitArray* a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J9J9", sipType_QBitArray, &a0, sipType_QBitArray, &a1))
        {
             ::QBitArray*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::QBitArray((*a0 & *a1));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QBitArray,SIP_NULLPTR);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtCore, and_slot, SIP_NULLPTR, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QBitArray___xor__(PyObject *,PyObject *);}
static PyObject *slot_QBitArray___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QBitArray* a0;
        const  ::QBitArray* a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J9J9", sipType_QBitArray, &a0, sipType_QBitArray, &a1))
        {
             ::QBitArray*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::QBitArray((*a0 ^ *a1));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QBitArray,SIP_NULLPTR);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtCore, xor_slot, SIP_NULLPTR, sipArg0, sipArg1);
}


extern "C" {static long slot_QBitArray___hash__(PyObject *);}
static long slot_QBitArray___hash__(PyObject *sipSelf)
{
     ::QBitArray *sipCpp = reinterpret_cast< ::QBitArray *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QBitArray));

    if (!sipCpp)
        return 0L;


    {
        {
            long sipRes = 0;

#line 75 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp/pyqt4/sip/QtCore/qbitarray.sip"
        sipRes = qHash(*sipCpp);
#line 685 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp/pyqt4/QtCore/sipQtCoreQBitArray.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QBitArray___getitem__(PyObject *,PyObject *);}
static PyObject *slot_QBitArray___getitem__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QBitArray *sipCpp = reinterpret_cast< ::QBitArray *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QBitArray));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            bool sipRes = 0;
            int sipIsErr = 0;

#line 62 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp/pyqt4/sip/QtCore/qbitarray.sip"
        SIP_SSIZE_T idx = sipConvertFromSequenceIndex(a0, sipCpp->count());
        
        if (idx < 0)
            sipIsErr = 1;
        else
            sipRes = sipCpp->operator[]((int)idx);
#line 720 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp/pyqt4/QtCore/sipQtCoreQBitArray.cpp"

            if (sipIsErr)
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QBitArray, sipName___getitem__, SIP_NULLPTR);

    return SIP_NULLPTR;
}


extern "C" {static PyObject *slot_QBitArray___ne__(PyObject *,PyObject *);}
static PyObject *slot_QBitArray___ne__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QBitArray *sipCpp = reinterpret_cast< ::QBitArray *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QBitArray));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QBitArray* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QBitArray, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp-> ::QBitArray::operator!=(*a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtCore, ne_slot, sipType_QBitArray, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QBitArray___eq__(PyObject *,PyObject *);}
static PyObject *slot_QBitArray___eq__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QBitArray *sipCpp = reinterpret_cast< ::QBitArray *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QBitArray));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QBitArray* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QBitArray, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp-> ::QBitArray::operator==(*a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtCore, eq_slot, sipType_QBitArray, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QBitArray___invert__(PyObject *);}
static PyObject *slot_QBitArray___invert__(PyObject *sipSelf)
{
     ::QBitArray *sipCpp = reinterpret_cast< ::QBitArray *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QBitArray));

    if (!sipCpp)
        return SIP_NULLPTR;


    {
        {
             ::QBitArray*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::QBitArray(~(*sipCpp));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QBitArray,SIP_NULLPTR);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QBitArray___ixor__(PyObject *,PyObject *);}
static PyObject *slot_QBitArray___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QBitArray)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QBitArray *sipCpp = reinterpret_cast< ::QBitArray *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QBitArray));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QBitArray* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QBitArray, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp-> ::QBitArray::operator^=(*a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_QBitArray___ior__(PyObject *,PyObject *);}
static PyObject *slot_QBitArray___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QBitArray)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QBitArray *sipCpp = reinterpret_cast< ::QBitArray *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QBitArray));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QBitArray* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QBitArray, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp-> ::QBitArray::operator|=(*a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_QBitArray___iand__(PyObject *,PyObject *);}
static PyObject *slot_QBitArray___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QBitArray)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QBitArray *sipCpp = reinterpret_cast< ::QBitArray *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QBitArray));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QBitArray* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QBitArray, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp-> ::QBitArray::operator&=(*a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static SIP_SSIZE_T slot_QBitArray___len__(PyObject *);}
static SIP_SSIZE_T slot_QBitArray___len__(PyObject *sipSelf)
{
     ::QBitArray *sipCpp = reinterpret_cast< ::QBitArray *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QBitArray));

    if (!sipCpp)
        return 0;


    {
        {
            SIP_SSIZE_T sipRes = 0;

#line 1 "Auto-generated"
            sipRes = (SIP_SSIZE_T)sipCpp->count();
#line 970 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp/pyqt4/QtCore/sipQtCoreQBitArray.cpp"

            return sipRes;
        }
    }

    return 0;
}


/* Call the instance's destructor. */
extern "C" {static void release_QBitArray(void *, int);}
static void release_QBitArray(void *sipCppV, int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast< ::QBitArray *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QBitArray(void *, SIP_SSIZE_T, void *);}
static void assign_QBitArray(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QBitArray *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QBitArray *>(sipSrc);
}


extern "C" {static void *array_QBitArray(SIP_SSIZE_T);}
static void *array_QBitArray(SIP_SSIZE_T sipNrElem)
{
    return new  ::QBitArray[sipNrElem];
}


extern "C" {static void *copy_QBitArray(const void *, SIP_SSIZE_T);}
static void *copy_QBitArray(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::QBitArray(reinterpret_cast<const  ::QBitArray *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QBitArray(sipSimpleWrapper *);}
static void dealloc_QBitArray(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QBitArray(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QBitArray(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QBitArray(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QBitArray *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::QBitArray();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        int a0;
        bool a1 = 0;

        static const char *sipKwdList[] = {
            SIP_NULLPTR,
            sipName_value,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "i|b", &a0, &a1))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::QBitArray(a0,a1);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const  ::QBitArray* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_QBitArray, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::QBitArray(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QBitArray[] = {
    {(void *)slot_QBitArray___or__, or_slot},
    {(void *)slot_QBitArray___and__, and_slot},
    {(void *)slot_QBitArray___xor__, xor_slot},
    {(void *)slot_QBitArray___hash__, hash_slot},
    {(void *)slot_QBitArray___getitem__, getitem_slot},
    {(void *)slot_QBitArray___ne__, ne_slot},
    {(void *)slot_QBitArray___eq__, eq_slot},
    {(void *)slot_QBitArray___invert__, invert_slot},
    {(void *)slot_QBitArray___ixor__, ixor_slot},
    {(void *)slot_QBitArray___ior__, ior_slot},
    {(void *)slot_QBitArray___iand__, iand_slot},
    {(void *)slot_QBitArray___len__, len_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QBitArray[] = {
    {SIP_MLNAME_CAST(sipName_at), meth_QBitArray_at, METH_VARARGS, SIP_MLDOC_CAST(doc_QBitArray_at)},
    {SIP_MLNAME_CAST(sipName_clear), meth_QBitArray_clear, METH_VARARGS, SIP_MLDOC_CAST(doc_QBitArray_clear)},
    {SIP_MLNAME_CAST(sipName_clearBit), meth_QBitArray_clearBit, METH_VARARGS, SIP_MLDOC_CAST(doc_QBitArray_clearBit)},
    {SIP_MLNAME_CAST(sipName_count), meth_QBitArray_count, METH_VARARGS, SIP_MLDOC_CAST(doc_QBitArray_count)},
    {SIP_MLNAME_CAST(sipName_detach), meth_QBitArray_detach, METH_VARARGS, SIP_MLDOC_CAST(doc_QBitArray_detach)},
    {SIP_MLNAME_CAST(sipName_fill), SIP_MLMETH_CAST(meth_QBitArray_fill), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QBitArray_fill)},
    {SIP_MLNAME_CAST(sipName_isDetached), meth_QBitArray_isDetached, METH_VARARGS, SIP_MLDOC_CAST(doc_QBitArray_isDetached)},
    {SIP_MLNAME_CAST(sipName_isEmpty), meth_QBitArray_isEmpty, METH_VARARGS, SIP_MLDOC_CAST(doc_QBitArray_isEmpty)},
    {SIP_MLNAME_CAST(sipName_isNull), meth_QBitArray_isNull, METH_VARARGS, SIP_MLDOC_CAST(doc_QBitArray_isNull)},
    {SIP_MLNAME_CAST(sipName_resize), meth_QBitArray_resize, METH_VARARGS, SIP_MLDOC_CAST(doc_QBitArray_resize)},
    {SIP_MLNAME_CAST(sipName_setBit), meth_QBitArray_setBit, METH_VARARGS, SIP_MLDOC_CAST(doc_QBitArray_setBit)},
    {SIP_MLNAME_CAST(sipName_size), meth_QBitArray_size, METH_VARARGS, SIP_MLDOC_CAST(doc_QBitArray_size)},
    {SIP_MLNAME_CAST(sipName_swap), meth_QBitArray_swap, METH_VARARGS, SIP_MLDOC_CAST(doc_QBitArray_swap)},
    {SIP_MLNAME_CAST(sipName_testBit), meth_QBitArray_testBit, METH_VARARGS, SIP_MLDOC_CAST(doc_QBitArray_testBit)},
    {SIP_MLNAME_CAST(sipName_toggleBit), meth_QBitArray_toggleBit, METH_VARARGS, SIP_MLDOC_CAST(doc_QBitArray_toggleBit)},
    {SIP_MLNAME_CAST(sipName_truncate), meth_QBitArray_truncate, METH_VARARGS, SIP_MLDOC_CAST(doc_QBitArray_truncate)}
};

PyDoc_STRVAR(doc_QBitArray, "\1QBitArray()\n"
"QBitArray(int, value: bool = False)\n"
"QBitArray(QBitArray)");


static pyqt4ClassPluginDef plugin_QBitArray = {
    SIP_NULLPTR,
    0,
    SIP_NULLPTR
};


sipClassTypeDef sipTypeDef_QtCore_QBitArray = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_CLASS,
        sipNameNr_QBitArray,
        {SIP_NULLPTR},
        &plugin_QBitArray
    },
    {
        sipNameNr_QBitArray,
        {0, 0, 1},
        16, methods_QBitArray,
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_QBitArray,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    SIP_NULLPTR,
    slots_QBitArray,
    init_type_QBitArray,
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
    dealloc_QBitArray,
    assign_QBitArray,
    array_QBitArray,
    copy_QBitArray,
    release_QBitArray,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};
