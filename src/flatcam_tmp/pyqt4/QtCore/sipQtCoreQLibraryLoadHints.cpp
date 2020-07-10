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

#line 26 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp/pyqt4/sip/QtCore/qlibrary.sip"
#include <qlibrary.h>
#line 29 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp/pyqt4/QtCore/sipQtCoreQLibraryLoadHints.cpp"

#line 26 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp/pyqt4/sip/QtCore/qlibrary.sip"
#include <qlibrary.h>
#line 33 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp/pyqt4/QtCore/sipQtCoreQLibraryLoadHints.cpp"


extern "C" {static int slot_QLibrary_LoadHints___bool__(PyObject *);}
static int slot_QLibrary_LoadHints___bool__(PyObject *sipSelf)
{
     ::QLibrary::LoadHints *sipCpp = reinterpret_cast< ::QLibrary::LoadHints *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QLibrary_LoadHints));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 381 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp/pyqt4/sip/QtCore/qglobal.sip"
#if QT_VERSION >= 0x050000
        sipRes = (sipCpp->operator QLibrary::LoadHints::Int() != 0);
#else
        sipRes = (sipCpp->operator int() != 0);
#endif
#line 55 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp/pyqt4/QtCore/sipQtCoreQLibraryLoadHints.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QLibrary_LoadHints___ne__(PyObject *,PyObject *);}
static PyObject *slot_QLibrary_LoadHints___ne__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QLibrary::LoadHints *sipCpp = reinterpret_cast< ::QLibrary::LoadHints *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QLibrary_LoadHints));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QLibrary::LoadHints* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QLibrary_LoadHints, &a0, &a0State))
        {
            bool sipRes = 0;

#line 372 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp/pyqt4/sip/QtCore/qglobal.sip"
#if QT_VERSION >= 0x050000
        sipRes = (sipCpp->operator QLibrary::LoadHints::Int() != a0->operator QLibrary::LoadHints::Int());
#else
        sipRes = (sipCpp->operator int() != a0->operator int());
#endif
#line 89 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp/pyqt4/QtCore/sipQtCoreQLibraryLoadHints.cpp"
            sipReleaseType(const_cast< ::QLibrary::LoadHints *>(a0),sipType_QLibrary_LoadHints,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtCore, ne_slot, sipType_QLibrary_LoadHints, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QLibrary_LoadHints___eq__(PyObject *,PyObject *);}
static PyObject *slot_QLibrary_LoadHints___eq__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QLibrary::LoadHints *sipCpp = reinterpret_cast< ::QLibrary::LoadHints *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QLibrary_LoadHints));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QLibrary::LoadHints* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QLibrary_LoadHints, &a0, &a0State))
        {
            bool sipRes = 0;

#line 363 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp/pyqt4/sip/QtCore/qglobal.sip"
#if QT_VERSION >= 0x050000
        sipRes = (sipCpp->operator QLibrary::LoadHints::Int() == a0->operator QLibrary::LoadHints::Int());
#else
        sipRes = (sipCpp->operator int() == a0->operator int());
#endif
#line 129 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp/pyqt4/QtCore/sipQtCoreQLibraryLoadHints.cpp"
            sipReleaseType(const_cast< ::QLibrary::LoadHints *>(a0),sipType_QLibrary_LoadHints,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtCore, eq_slot, sipType_QLibrary_LoadHints, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QLibrary_LoadHints___ixor__(PyObject *,PyObject *);}
static PyObject *slot_QLibrary_LoadHints___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QLibrary_LoadHints)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QLibrary::LoadHints *sipCpp = reinterpret_cast< ::QLibrary::LoadHints *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QLibrary_LoadHints));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 357 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp/pyqt4/sip/QtCore/qglobal.sip"
        *sipCpp = QLibrary::LoadHints(*sipCpp ^ a0);
#line 168 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp/pyqt4/QtCore/sipQtCoreQLibraryLoadHints.cpp"

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


extern "C" {static PyObject *slot_QLibrary_LoadHints___xor__(PyObject *,PyObject *);}
static PyObject *slot_QLibrary_LoadHints___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::QLibrary::LoadHints* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QLibrary_LoadHints, &a0, &a0State, &a1))
        {
             ::QLibrary::LoadHints*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::QLibrary::LoadHints((*a0 ^ a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QLibrary_LoadHints,a0State);

            return sipConvertFromNewType(sipRes,sipType_QLibrary_LoadHints,SIP_NULLPTR);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtCore, xor_slot, SIP_NULLPTR, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QLibrary_LoadHints___ior__(PyObject *,PyObject *);}
static PyObject *slot_QLibrary_LoadHints___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QLibrary_LoadHints)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QLibrary::LoadHints *sipCpp = reinterpret_cast< ::QLibrary::LoadHints *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QLibrary_LoadHints));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 351 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp/pyqt4/sip/QtCore/qglobal.sip"
        *sipCpp = QLibrary::LoadHints(*sipCpp | a0);
#line 242 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp/pyqt4/QtCore/sipQtCoreQLibraryLoadHints.cpp"

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


extern "C" {static PyObject *slot_QLibrary_LoadHints___or__(PyObject *,PyObject *);}
static PyObject *slot_QLibrary_LoadHints___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::QLibrary::LoadHints* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QLibrary_LoadHints, &a0, &a0State, &a1))
        {
             ::QLibrary::LoadHints*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::QLibrary::LoadHints((*a0 | a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QLibrary_LoadHints,a0State);

            return sipConvertFromNewType(sipRes,sipType_QLibrary_LoadHints,SIP_NULLPTR);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtCore, or_slot, SIP_NULLPTR, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QLibrary_LoadHints___iand__(PyObject *,PyObject *);}
static PyObject *slot_QLibrary_LoadHints___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QLibrary_LoadHints)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QLibrary::LoadHints *sipCpp = reinterpret_cast< ::QLibrary::LoadHints *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QLibrary_LoadHints));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp-> ::QLibrary::LoadHints::operator&=(a0);
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


extern "C" {static PyObject *slot_QLibrary_LoadHints___and__(PyObject *,PyObject *);}
static PyObject *slot_QLibrary_LoadHints___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::QLibrary::LoadHints* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QLibrary_LoadHints, &a0, &a0State, &a1))
        {
             ::QLibrary::LoadHints*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::QLibrary::LoadHints((*a0 & a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QLibrary_LoadHints,a0State);

            return sipConvertFromNewType(sipRes,sipType_QLibrary_LoadHints,SIP_NULLPTR);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtCore, and_slot, SIP_NULLPTR, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QLibrary_LoadHints___invert__(PyObject *);}
static PyObject *slot_QLibrary_LoadHints___invert__(PyObject *sipSelf)
{
     ::QLibrary::LoadHints *sipCpp = reinterpret_cast< ::QLibrary::LoadHints *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QLibrary_LoadHints));

    if (!sipCpp)
        return SIP_NULLPTR;


    {
        {
             ::QLibrary::LoadHints*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::QLibrary::LoadHints(~(*sipCpp));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QLibrary_LoadHints,SIP_NULLPTR);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QLibrary_LoadHints___int__(PyObject *);}
static PyObject *slot_QLibrary_LoadHints___int__(PyObject *sipSelf)
{
     ::QLibrary::LoadHints *sipCpp = reinterpret_cast< ::QLibrary::LoadHints *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QLibrary_LoadHints));

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
extern "C" {static void release_QLibrary_LoadHints(void *, int);}
static void release_QLibrary_LoadHints(void *sipCppV, int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast< ::QLibrary::LoadHints *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QLibrary_LoadHints(void *, SIP_SSIZE_T, void *);}
static void assign_QLibrary_LoadHints(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QLibrary::LoadHints *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QLibrary::LoadHints *>(sipSrc);
}


extern "C" {static void *array_QLibrary_LoadHints(SIP_SSIZE_T);}
static void *array_QLibrary_LoadHints(SIP_SSIZE_T sipNrElem)
{
    return new  ::QLibrary::LoadHints[sipNrElem];
}


extern "C" {static void *copy_QLibrary_LoadHints(const void *, SIP_SSIZE_T);}
static void *copy_QLibrary_LoadHints(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::QLibrary::LoadHints(reinterpret_cast<const  ::QLibrary::LoadHints *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QLibrary_LoadHints(sipSimpleWrapper *);}
static void dealloc_QLibrary_LoadHints(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QLibrary_LoadHints(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QLibrary_LoadHints(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QLibrary_LoadHints(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QLibrary::LoadHints *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::QLibrary::LoadHints();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "i", &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::QLibrary::LoadHints(a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const  ::QLibrary::LoadHints* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J1", sipType_QLibrary_LoadHints, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::QLibrary::LoadHints(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::QLibrary::LoadHints *>(a0),sipType_QLibrary_LoadHints,a0State);

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


extern "C" {static int convertTo_QLibrary_LoadHints(PyObject *, void **, int *, PyObject *);}
static int convertTo_QLibrary_LoadHints(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
     ::QLibrary::LoadHints **sipCppPtr = reinterpret_cast< ::QLibrary::LoadHints **>(sipCppPtrV);

#line 390 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp/pyqt4/sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QLibrary::LoadHints is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QLibrary_LoadHint)) ||
            sipCanConvertToType(sipPy, sipType_QLibrary_LoadHints, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QLibrary_LoadHint)))
{
    *sipCppPtr = new QLibrary::LoadHints(int(SIPLong_AsLong(sipPy)));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QLibrary::LoadHints *>(sipConvertToType(sipPy, sipType_QLibrary_LoadHints, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 530 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp/pyqt4/QtCore/sipQtCoreQLibraryLoadHints.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QLibrary_LoadHints[] = {
    {(void *)slot_QLibrary_LoadHints___bool__, bool_slot},
    {(void *)slot_QLibrary_LoadHints___ne__, ne_slot},
    {(void *)slot_QLibrary_LoadHints___eq__, eq_slot},
    {(void *)slot_QLibrary_LoadHints___ixor__, ixor_slot},
    {(void *)slot_QLibrary_LoadHints___xor__, xor_slot},
    {(void *)slot_QLibrary_LoadHints___ior__, ior_slot},
    {(void *)slot_QLibrary_LoadHints___or__, or_slot},
    {(void *)slot_QLibrary_LoadHints___iand__, iand_slot},
    {(void *)slot_QLibrary_LoadHints___and__, and_slot},
    {(void *)slot_QLibrary_LoadHints___invert__, invert_slot},
    {(void *)slot_QLibrary_LoadHints___int__, int_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_QLibrary_LoadHints, "\1QLibrary.LoadHints()\n"
"QLibrary.LoadHints(Union[QLibrary.LoadHints, QLibrary.LoadHint])\n"
"QLibrary.LoadHints(QLibrary.LoadHints)");


static pyqt4ClassPluginDef plugin_QLibrary_LoadHints = {
    SIP_NULLPTR,
    1,
    SIP_NULLPTR
};


sipClassTypeDef sipTypeDef_QtCore_QLibrary_LoadHints = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_CLASS,
        sipNameNr_QLibrary__LoadHints,
        {SIP_NULLPTR},
        &plugin_QLibrary_LoadHints
    },
    {
        sipNameNr_LoadHints,
        {80, 255, 0},
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_QLibrary_LoadHints,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    SIP_NULLPTR,
    slots_QLibrary_LoadHints,
    init_type_QLibrary_LoadHints,
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
    dealloc_QLibrary_LoadHints,
    assign_QLibrary_LoadHints,
    array_QLibrary_LoadHints,
    copy_QLibrary_LoadHints,
    release_QLibrary_LoadHints,
    SIP_NULLPTR,
    convertTo_QLibrary_LoadHints,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};
