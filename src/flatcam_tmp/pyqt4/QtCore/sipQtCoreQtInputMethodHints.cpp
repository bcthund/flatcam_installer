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

#line 26 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp/pyqt4/sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 29 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp/pyqt4/QtCore/sipQtCoreQtInputMethodHints.cpp"

#line 26 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp/pyqt4/sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 33 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp/pyqt4/QtCore/sipQtCoreQtInputMethodHints.cpp"


extern "C" {static int slot_Qt_InputMethodHints___bool__(PyObject *);}
static int slot_Qt_InputMethodHints___bool__(PyObject *sipSelf)
{
     ::Qt::InputMethodHints *sipCpp = reinterpret_cast< ::Qt::InputMethodHints *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_InputMethodHints));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 381 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp/pyqt4/sip/QtCore/qglobal.sip"
#if QT_VERSION >= 0x050000
        sipRes = (sipCpp->operator Qt::InputMethodHints::Int() != 0);
#else
        sipRes = (sipCpp->operator int() != 0);
#endif
#line 55 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp/pyqt4/QtCore/sipQtCoreQtInputMethodHints.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_Qt_InputMethodHints___ne__(PyObject *,PyObject *);}
static PyObject *slot_Qt_InputMethodHints___ne__(PyObject *sipSelf,PyObject *sipArg)
{
     ::Qt::InputMethodHints *sipCpp = reinterpret_cast< ::Qt::InputMethodHints *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_InputMethodHints));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::Qt::InputMethodHints* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_Qt_InputMethodHints, &a0, &a0State))
        {
            bool sipRes = 0;

#line 372 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp/pyqt4/sip/QtCore/qglobal.sip"
#if QT_VERSION >= 0x050000
        sipRes = (sipCpp->operator Qt::InputMethodHints::Int() != a0->operator Qt::InputMethodHints::Int());
#else
        sipRes = (sipCpp->operator int() != a0->operator int());
#endif
#line 89 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp/pyqt4/QtCore/sipQtCoreQtInputMethodHints.cpp"
            sipReleaseType(const_cast< ::Qt::InputMethodHints *>(a0),sipType_Qt_InputMethodHints,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtCore, ne_slot, sipType_Qt_InputMethodHints, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_Qt_InputMethodHints___eq__(PyObject *,PyObject *);}
static PyObject *slot_Qt_InputMethodHints___eq__(PyObject *sipSelf,PyObject *sipArg)
{
     ::Qt::InputMethodHints *sipCpp = reinterpret_cast< ::Qt::InputMethodHints *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_InputMethodHints));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::Qt::InputMethodHints* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_Qt_InputMethodHints, &a0, &a0State))
        {
            bool sipRes = 0;

#line 363 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp/pyqt4/sip/QtCore/qglobal.sip"
#if QT_VERSION >= 0x050000
        sipRes = (sipCpp->operator Qt::InputMethodHints::Int() == a0->operator Qt::InputMethodHints::Int());
#else
        sipRes = (sipCpp->operator int() == a0->operator int());
#endif
#line 129 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp/pyqt4/QtCore/sipQtCoreQtInputMethodHints.cpp"
            sipReleaseType(const_cast< ::Qt::InputMethodHints *>(a0),sipType_Qt_InputMethodHints,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtCore, eq_slot, sipType_Qt_InputMethodHints, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_Qt_InputMethodHints___ixor__(PyObject *,PyObject *);}
static PyObject *slot_Qt_InputMethodHints___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_Qt_InputMethodHints)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::Qt::InputMethodHints *sipCpp = reinterpret_cast< ::Qt::InputMethodHints *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_InputMethodHints));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 357 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp/pyqt4/sip/QtCore/qglobal.sip"
        *sipCpp = Qt::InputMethodHints(*sipCpp ^ a0);
#line 168 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp/pyqt4/QtCore/sipQtCoreQtInputMethodHints.cpp"

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


extern "C" {static PyObject *slot_Qt_InputMethodHints___xor__(PyObject *,PyObject *);}
static PyObject *slot_Qt_InputMethodHints___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::Qt::InputMethodHints* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_Qt_InputMethodHints, &a0, &a0State, &a1))
        {
             ::Qt::InputMethodHints*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::Qt::InputMethodHints((*a0 ^ a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_Qt_InputMethodHints,a0State);

            return sipConvertFromNewType(sipRes,sipType_Qt_InputMethodHints,SIP_NULLPTR);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtCore, xor_slot, SIP_NULLPTR, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_Qt_InputMethodHints___ior__(PyObject *,PyObject *);}
static PyObject *slot_Qt_InputMethodHints___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_Qt_InputMethodHints)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::Qt::InputMethodHints *sipCpp = reinterpret_cast< ::Qt::InputMethodHints *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_InputMethodHints));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 351 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp/pyqt4/sip/QtCore/qglobal.sip"
        *sipCpp = Qt::InputMethodHints(*sipCpp | a0);
#line 242 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp/pyqt4/QtCore/sipQtCoreQtInputMethodHints.cpp"

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


extern "C" {static PyObject *slot_Qt_InputMethodHints___or__(PyObject *,PyObject *);}
static PyObject *slot_Qt_InputMethodHints___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::Qt::InputMethodHints* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_Qt_InputMethodHints, &a0, &a0State, &a1))
        {
             ::Qt::InputMethodHints*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::Qt::InputMethodHints((*a0 | a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_Qt_InputMethodHints,a0State);

            return sipConvertFromNewType(sipRes,sipType_Qt_InputMethodHints,SIP_NULLPTR);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtCore, or_slot, SIP_NULLPTR, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_Qt_InputMethodHints___iand__(PyObject *,PyObject *);}
static PyObject *slot_Qt_InputMethodHints___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_Qt_InputMethodHints)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::Qt::InputMethodHints *sipCpp = reinterpret_cast< ::Qt::InputMethodHints *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_InputMethodHints));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp-> ::Qt::InputMethodHints::operator&=(a0);
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


extern "C" {static PyObject *slot_Qt_InputMethodHints___and__(PyObject *,PyObject *);}
static PyObject *slot_Qt_InputMethodHints___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::Qt::InputMethodHints* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_Qt_InputMethodHints, &a0, &a0State, &a1))
        {
             ::Qt::InputMethodHints*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::Qt::InputMethodHints((*a0 & a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_Qt_InputMethodHints,a0State);

            return sipConvertFromNewType(sipRes,sipType_Qt_InputMethodHints,SIP_NULLPTR);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtCore, and_slot, SIP_NULLPTR, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_Qt_InputMethodHints___invert__(PyObject *);}
static PyObject *slot_Qt_InputMethodHints___invert__(PyObject *sipSelf)
{
     ::Qt::InputMethodHints *sipCpp = reinterpret_cast< ::Qt::InputMethodHints *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_InputMethodHints));

    if (!sipCpp)
        return SIP_NULLPTR;


    {
        {
             ::Qt::InputMethodHints*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::Qt::InputMethodHints(~(*sipCpp));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_Qt_InputMethodHints,SIP_NULLPTR);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_Qt_InputMethodHints___int__(PyObject *);}
static PyObject *slot_Qt_InputMethodHints___int__(PyObject *sipSelf)
{
     ::Qt::InputMethodHints *sipCpp = reinterpret_cast< ::Qt::InputMethodHints *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_InputMethodHints));

    if (!sipCpp)
        return SIP_NULLPTR;


    {
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = *sipCpp;
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    return 0;
}


/* Call the instance's destructor. */
extern "C" {static void release_Qt_InputMethodHints(void *, int);}
static void release_Qt_InputMethodHints(void *sipCppV, int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast< ::Qt::InputMethodHints *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_Qt_InputMethodHints(void *, SIP_SSIZE_T, void *);}
static void assign_Qt_InputMethodHints(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::Qt::InputMethodHints *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::Qt::InputMethodHints *>(sipSrc);
}


extern "C" {static void *array_Qt_InputMethodHints(SIP_SSIZE_T);}
static void *array_Qt_InputMethodHints(SIP_SSIZE_T sipNrElem)
{
    return new  ::Qt::InputMethodHints[sipNrElem];
}


extern "C" {static void *copy_Qt_InputMethodHints(const void *, SIP_SSIZE_T);}
static void *copy_Qt_InputMethodHints(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::Qt::InputMethodHints(reinterpret_cast<const  ::Qt::InputMethodHints *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_Qt_InputMethodHints(sipSimpleWrapper *);}
static void dealloc_Qt_InputMethodHints(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_Qt_InputMethodHints(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_Qt_InputMethodHints(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_Qt_InputMethodHints(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::Qt::InputMethodHints *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::Qt::InputMethodHints();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "i", &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::Qt::InputMethodHints(a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const  ::Qt::InputMethodHints* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J1", sipType_Qt_InputMethodHints, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::Qt::InputMethodHints(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::Qt::InputMethodHints *>(a0),sipType_Qt_InputMethodHints,a0State);

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


extern "C" {static int convertTo_Qt_InputMethodHints(PyObject *, void **, int *, PyObject *);}
static int convertTo_Qt_InputMethodHints(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
     ::Qt::InputMethodHints **sipCppPtr = reinterpret_cast< ::Qt::InputMethodHints **>(sipCppPtrV);

#line 390 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp/pyqt4/sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a Qt::InputMethodHints is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_Qt_InputMethodHint)) ||
            sipCanConvertToType(sipPy, sipType_Qt_InputMethodHints, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_Qt_InputMethodHint)))
{
    *sipCppPtr = new Qt::InputMethodHints(int(SIPLong_AsLong(sipPy)));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<Qt::InputMethodHints *>(sipConvertToType(sipPy, sipType_Qt_InputMethodHints, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 530 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp/pyqt4/QtCore/sipQtCoreQtInputMethodHints.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_Qt_InputMethodHints[] = {
    {(void *)slot_Qt_InputMethodHints___bool__, bool_slot},
    {(void *)slot_Qt_InputMethodHints___ne__, ne_slot},
    {(void *)slot_Qt_InputMethodHints___eq__, eq_slot},
    {(void *)slot_Qt_InputMethodHints___ixor__, ixor_slot},
    {(void *)slot_Qt_InputMethodHints___xor__, xor_slot},
    {(void *)slot_Qt_InputMethodHints___ior__, ior_slot},
    {(void *)slot_Qt_InputMethodHints___or__, or_slot},
    {(void *)slot_Qt_InputMethodHints___iand__, iand_slot},
    {(void *)slot_Qt_InputMethodHints___and__, and_slot},
    {(void *)slot_Qt_InputMethodHints___invert__, invert_slot},
    {(void *)slot_Qt_InputMethodHints___int__, int_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_Qt_InputMethodHints, "\1Qt.InputMethodHints()\n"
"Qt.InputMethodHints(Union[Qt.InputMethodHints, Qt.InputMethodHint])\n"
"Qt.InputMethodHints(Qt.InputMethodHints)");


static pyqt4ClassPluginDef plugin_Qt_InputMethodHints = {
    SIP_NULLPTR,
    1,
    SIP_NULLPTR
};


sipClassTypeDef sipTypeDef_QtCore_Qt_InputMethodHints = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_CLASS,
        sipNameNr_Qt__InputMethodHints,
        {SIP_NULLPTR},
        &plugin_Qt_InputMethodHints
    },
    {
        sipNameNr_InputMethodHints,
        {272, 255, 0},
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_Qt_InputMethodHints,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    SIP_NULLPTR,
    slots_Qt_InputMethodHints,
    init_type_Qt_InputMethodHints,
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
    dealloc_Qt_InputMethodHints,
    assign_Qt_InputMethodHints,
    array_Qt_InputMethodHints,
    copy_Qt_InputMethodHints,
    release_Qt_InputMethodHints,
    SIP_NULLPTR,
    convertTo_Qt_InputMethodHints,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};
