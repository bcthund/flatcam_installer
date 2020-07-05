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

#line 26 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp2/pyqt4/sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 29 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp2/pyqt4/QtCore/sipQtCoreQtItemFlags.cpp"

#line 26 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp2/pyqt4/sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 33 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp2/pyqt4/QtCore/sipQtCoreQtItemFlags.cpp"


extern "C" {static int slot_Qt_ItemFlags___bool__(PyObject *);}
static int slot_Qt_ItemFlags___bool__(PyObject *sipSelf)
{
     ::Qt::ItemFlags *sipCpp = reinterpret_cast< ::Qt::ItemFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_ItemFlags));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 381 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp2/pyqt4/sip/QtCore/qglobal.sip"
#if QT_VERSION >= 0x050000
        sipRes = (sipCpp->operator Qt::ItemFlags::Int() != 0);
#else
        sipRes = (sipCpp->operator int() != 0);
#endif
#line 55 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp2/pyqt4/QtCore/sipQtCoreQtItemFlags.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_Qt_ItemFlags___ne__(PyObject *,PyObject *);}
static PyObject *slot_Qt_ItemFlags___ne__(PyObject *sipSelf,PyObject *sipArg)
{
     ::Qt::ItemFlags *sipCpp = reinterpret_cast< ::Qt::ItemFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_ItemFlags));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::Qt::ItemFlags* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_Qt_ItemFlags, &a0, &a0State))
        {
            bool sipRes = 0;

#line 372 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp2/pyqt4/sip/QtCore/qglobal.sip"
#if QT_VERSION >= 0x050000
        sipRes = (sipCpp->operator Qt::ItemFlags::Int() != a0->operator Qt::ItemFlags::Int());
#else
        sipRes = (sipCpp->operator int() != a0->operator int());
#endif
#line 89 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp2/pyqt4/QtCore/sipQtCoreQtItemFlags.cpp"
            sipReleaseType(const_cast< ::Qt::ItemFlags *>(a0),sipType_Qt_ItemFlags,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtCore, ne_slot, sipType_Qt_ItemFlags, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_Qt_ItemFlags___eq__(PyObject *,PyObject *);}
static PyObject *slot_Qt_ItemFlags___eq__(PyObject *sipSelf,PyObject *sipArg)
{
     ::Qt::ItemFlags *sipCpp = reinterpret_cast< ::Qt::ItemFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_ItemFlags));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::Qt::ItemFlags* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_Qt_ItemFlags, &a0, &a0State))
        {
            bool sipRes = 0;

#line 363 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp2/pyqt4/sip/QtCore/qglobal.sip"
#if QT_VERSION >= 0x050000
        sipRes = (sipCpp->operator Qt::ItemFlags::Int() == a0->operator Qt::ItemFlags::Int());
#else
        sipRes = (sipCpp->operator int() == a0->operator int());
#endif
#line 129 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp2/pyqt4/QtCore/sipQtCoreQtItemFlags.cpp"
            sipReleaseType(const_cast< ::Qt::ItemFlags *>(a0),sipType_Qt_ItemFlags,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtCore, eq_slot, sipType_Qt_ItemFlags, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_Qt_ItemFlags___ixor__(PyObject *,PyObject *);}
static PyObject *slot_Qt_ItemFlags___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_Qt_ItemFlags)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::Qt::ItemFlags *sipCpp = reinterpret_cast< ::Qt::ItemFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_ItemFlags));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 357 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp2/pyqt4/sip/QtCore/qglobal.sip"
        *sipCpp = Qt::ItemFlags(*sipCpp ^ a0);
#line 168 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp2/pyqt4/QtCore/sipQtCoreQtItemFlags.cpp"

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


extern "C" {static PyObject *slot_Qt_ItemFlags___xor__(PyObject *,PyObject *);}
static PyObject *slot_Qt_ItemFlags___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::Qt::ItemFlags* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_Qt_ItemFlags, &a0, &a0State, &a1))
        {
             ::Qt::ItemFlags*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::Qt::ItemFlags((*a0 ^ a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_Qt_ItemFlags,a0State);

            return sipConvertFromNewType(sipRes,sipType_Qt_ItemFlags,SIP_NULLPTR);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtCore, xor_slot, SIP_NULLPTR, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_Qt_ItemFlags___ior__(PyObject *,PyObject *);}
static PyObject *slot_Qt_ItemFlags___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_Qt_ItemFlags)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::Qt::ItemFlags *sipCpp = reinterpret_cast< ::Qt::ItemFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_ItemFlags));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 351 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp2/pyqt4/sip/QtCore/qglobal.sip"
        *sipCpp = Qt::ItemFlags(*sipCpp | a0);
#line 242 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp2/pyqt4/QtCore/sipQtCoreQtItemFlags.cpp"

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


extern "C" {static PyObject *slot_Qt_ItemFlags___or__(PyObject *,PyObject *);}
static PyObject *slot_Qt_ItemFlags___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::Qt::ItemFlags* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_Qt_ItemFlags, &a0, &a0State, &a1))
        {
             ::Qt::ItemFlags*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::Qt::ItemFlags((*a0 | a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_Qt_ItemFlags,a0State);

            return sipConvertFromNewType(sipRes,sipType_Qt_ItemFlags,SIP_NULLPTR);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtCore, or_slot, SIP_NULLPTR, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_Qt_ItemFlags___iand__(PyObject *,PyObject *);}
static PyObject *slot_Qt_ItemFlags___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_Qt_ItemFlags)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::Qt::ItemFlags *sipCpp = reinterpret_cast< ::Qt::ItemFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_ItemFlags));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp-> ::Qt::ItemFlags::operator&=(a0);
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


extern "C" {static PyObject *slot_Qt_ItemFlags___and__(PyObject *,PyObject *);}
static PyObject *slot_Qt_ItemFlags___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::Qt::ItemFlags* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_Qt_ItemFlags, &a0, &a0State, &a1))
        {
             ::Qt::ItemFlags*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::Qt::ItemFlags((*a0 & a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_Qt_ItemFlags,a0State);

            return sipConvertFromNewType(sipRes,sipType_Qt_ItemFlags,SIP_NULLPTR);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtCore, and_slot, SIP_NULLPTR, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_Qt_ItemFlags___invert__(PyObject *);}
static PyObject *slot_Qt_ItemFlags___invert__(PyObject *sipSelf)
{
     ::Qt::ItemFlags *sipCpp = reinterpret_cast< ::Qt::ItemFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_ItemFlags));

    if (!sipCpp)
        return SIP_NULLPTR;


    {
        {
             ::Qt::ItemFlags*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::Qt::ItemFlags(~(*sipCpp));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_Qt_ItemFlags,SIP_NULLPTR);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_Qt_ItemFlags___int__(PyObject *);}
static PyObject *slot_Qt_ItemFlags___int__(PyObject *sipSelf)
{
     ::Qt::ItemFlags *sipCpp = reinterpret_cast< ::Qt::ItemFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_ItemFlags));

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
extern "C" {static void release_Qt_ItemFlags(void *, int);}
static void release_Qt_ItemFlags(void *sipCppV, int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast< ::Qt::ItemFlags *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void *array_Qt_ItemFlags(Py_ssize_t);}
static void *array_Qt_ItemFlags(Py_ssize_t sipNrElem)
{
    return new  ::Qt::ItemFlags[sipNrElem];
}


extern "C" {static void assign_Qt_ItemFlags(void *, SIP_SSIZE_T, void *);}
static void assign_Qt_ItemFlags(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::Qt::ItemFlags *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::Qt::ItemFlags *>(sipSrc);
}


extern "C" {static void *copy_Qt_ItemFlags(const void *, SIP_SSIZE_T);}
static void *copy_Qt_ItemFlags(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::Qt::ItemFlags(reinterpret_cast<const  ::Qt::ItemFlags *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_Qt_ItemFlags(sipSimpleWrapper *);}
static void dealloc_Qt_ItemFlags(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_Qt_ItemFlags(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_Qt_ItemFlags(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_Qt_ItemFlags(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::Qt::ItemFlags *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::Qt::ItemFlags();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "i", &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::Qt::ItemFlags(a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const  ::Qt::ItemFlags* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J1", sipType_Qt_ItemFlags, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::Qt::ItemFlags(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::Qt::ItemFlags *>(a0),sipType_Qt_ItemFlags,a0State);

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


extern "C" {static int convertTo_Qt_ItemFlags(PyObject *, void **, int *, PyObject *);}
static int convertTo_Qt_ItemFlags(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
     ::Qt::ItemFlags **sipCppPtr = reinterpret_cast< ::Qt::ItemFlags **>(sipCppPtrV);

#line 390 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp2/pyqt4/sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a Qt::ItemFlags is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_Qt_ItemFlag)) ||
            sipCanConvertToType(sipPy, sipType_Qt_ItemFlags, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_Qt_ItemFlag)))
{
    *sipCppPtr = new Qt::ItemFlags(int(SIPLong_AsLong(sipPy)));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<Qt::ItemFlags *>(sipConvertToType(sipPy, sipType_Qt_ItemFlags, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 530 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp2/pyqt4/QtCore/sipQtCoreQtItemFlags.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_Qt_ItemFlags[] = {
    {(void *)slot_Qt_ItemFlags___bool__, bool_slot},
    {(void *)slot_Qt_ItemFlags___ne__, ne_slot},
    {(void *)slot_Qt_ItemFlags___eq__, eq_slot},
    {(void *)slot_Qt_ItemFlags___ixor__, ixor_slot},
    {(void *)slot_Qt_ItemFlags___xor__, xor_slot},
    {(void *)slot_Qt_ItemFlags___ior__, ior_slot},
    {(void *)slot_Qt_ItemFlags___or__, or_slot},
    {(void *)slot_Qt_ItemFlags___iand__, iand_slot},
    {(void *)slot_Qt_ItemFlags___and__, and_slot},
    {(void *)slot_Qt_ItemFlags___invert__, invert_slot},
    {(void *)slot_Qt_ItemFlags___int__, int_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_Qt_ItemFlags, "\1Qt.ItemFlags()\n"
"Qt.ItemFlags(Union[Qt.ItemFlags, Qt.ItemFlag])\n"
"Qt.ItemFlags(Qt.ItemFlags)");


static pyqt4ClassPluginDef plugin_Qt_ItemFlags = {
    SIP_NULLPTR,
    1,
    SIP_NULLPTR
};


sipClassTypeDef sipTypeDef_QtCore_Qt_ItemFlags = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_CLASS,
        sipNameNr_Qt__ItemFlags,
        {SIP_NULLPTR},
        &plugin_Qt_ItemFlags
    },
    {
        sipNameNr_ItemFlags,
        {272, 255, 0},
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_Qt_ItemFlags,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    SIP_NULLPTR,
    slots_Qt_ItemFlags,
    init_type_Qt_ItemFlags,
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
    dealloc_Qt_ItemFlags,
    assign_Qt_ItemFlags,
    array_Qt_ItemFlags,
    copy_Qt_ItemFlags,
    release_Qt_ItemFlags,
    SIP_NULLPTR,
    convertTo_Qt_ItemFlags,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};
