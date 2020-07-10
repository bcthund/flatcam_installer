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

#line 28 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp2/pyqt4/sip/QtCore/qfiledevice.sip"
#include <qfiledevice.h>
#line 29 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp2/pyqt4/QtCore/sipQtCoreQFileDeviceFileHandleFlags.cpp"

#line 28 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp2/pyqt4/sip/QtCore/qfiledevice.sip"
#include <qfiledevice.h>
#line 33 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp2/pyqt4/QtCore/sipQtCoreQFileDeviceFileHandleFlags.cpp"


extern "C" {static int slot_QFileDevice_FileHandleFlags___bool__(PyObject *);}
static int slot_QFileDevice_FileHandleFlags___bool__(PyObject *sipSelf)
{
     ::QFileDevice::FileHandleFlags *sipCpp = reinterpret_cast< ::QFileDevice::FileHandleFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QFileDevice_FileHandleFlags));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 381 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp2/pyqt4/sip/QtCore/qglobal.sip"
#if QT_VERSION >= 0x050000
        sipRes = (sipCpp->operator QFileDevice::FileHandleFlags::Int() != 0);
#else
        sipRes = (sipCpp->operator int() != 0);
#endif
#line 55 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp2/pyqt4/QtCore/sipQtCoreQFileDeviceFileHandleFlags.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QFileDevice_FileHandleFlags___ne__(PyObject *,PyObject *);}
static PyObject *slot_QFileDevice_FileHandleFlags___ne__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QFileDevice::FileHandleFlags *sipCpp = reinterpret_cast< ::QFileDevice::FileHandleFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QFileDevice_FileHandleFlags));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QFileDevice::FileHandleFlags* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QFileDevice_FileHandleFlags, &a0, &a0State))
        {
            bool sipRes = 0;

#line 372 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp2/pyqt4/sip/QtCore/qglobal.sip"
#if QT_VERSION >= 0x050000
        sipRes = (sipCpp->operator QFileDevice::FileHandleFlags::Int() != a0->operator QFileDevice::FileHandleFlags::Int());
#else
        sipRes = (sipCpp->operator int() != a0->operator int());
#endif
#line 89 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp2/pyqt4/QtCore/sipQtCoreQFileDeviceFileHandleFlags.cpp"
            sipReleaseType(const_cast< ::QFileDevice::FileHandleFlags *>(a0),sipType_QFileDevice_FileHandleFlags,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtCore, ne_slot, sipType_QFileDevice_FileHandleFlags, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QFileDevice_FileHandleFlags___eq__(PyObject *,PyObject *);}
static PyObject *slot_QFileDevice_FileHandleFlags___eq__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QFileDevice::FileHandleFlags *sipCpp = reinterpret_cast< ::QFileDevice::FileHandleFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QFileDevice_FileHandleFlags));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QFileDevice::FileHandleFlags* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QFileDevice_FileHandleFlags, &a0, &a0State))
        {
            bool sipRes = 0;

#line 363 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp2/pyqt4/sip/QtCore/qglobal.sip"
#if QT_VERSION >= 0x050000
        sipRes = (sipCpp->operator QFileDevice::FileHandleFlags::Int() == a0->operator QFileDevice::FileHandleFlags::Int());
#else
        sipRes = (sipCpp->operator int() == a0->operator int());
#endif
#line 129 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp2/pyqt4/QtCore/sipQtCoreQFileDeviceFileHandleFlags.cpp"
            sipReleaseType(const_cast< ::QFileDevice::FileHandleFlags *>(a0),sipType_QFileDevice_FileHandleFlags,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtCore, eq_slot, sipType_QFileDevice_FileHandleFlags, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QFileDevice_FileHandleFlags___ixor__(PyObject *,PyObject *);}
static PyObject *slot_QFileDevice_FileHandleFlags___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QFileDevice_FileHandleFlags)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QFileDevice::FileHandleFlags *sipCpp = reinterpret_cast< ::QFileDevice::FileHandleFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QFileDevice_FileHandleFlags));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 357 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp2/pyqt4/sip/QtCore/qglobal.sip"
        *sipCpp = QFileDevice::FileHandleFlags(*sipCpp ^ a0);
#line 168 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp2/pyqt4/QtCore/sipQtCoreQFileDeviceFileHandleFlags.cpp"

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


extern "C" {static PyObject *slot_QFileDevice_FileHandleFlags___xor__(PyObject *,PyObject *);}
static PyObject *slot_QFileDevice_FileHandleFlags___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::QFileDevice::FileHandleFlags* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QFileDevice_FileHandleFlags, &a0, &a0State, &a1))
        {
             ::QFileDevice::FileHandleFlags*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::QFileDevice::FileHandleFlags((*a0 ^ a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QFileDevice_FileHandleFlags,a0State);

            return sipConvertFromNewType(sipRes,sipType_QFileDevice_FileHandleFlags,SIP_NULLPTR);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtCore, xor_slot, SIP_NULLPTR, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QFileDevice_FileHandleFlags___ior__(PyObject *,PyObject *);}
static PyObject *slot_QFileDevice_FileHandleFlags___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QFileDevice_FileHandleFlags)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QFileDevice::FileHandleFlags *sipCpp = reinterpret_cast< ::QFileDevice::FileHandleFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QFileDevice_FileHandleFlags));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 351 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp2/pyqt4/sip/QtCore/qglobal.sip"
        *sipCpp = QFileDevice::FileHandleFlags(*sipCpp | a0);
#line 242 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp2/pyqt4/QtCore/sipQtCoreQFileDeviceFileHandleFlags.cpp"

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


extern "C" {static PyObject *slot_QFileDevice_FileHandleFlags___or__(PyObject *,PyObject *);}
static PyObject *slot_QFileDevice_FileHandleFlags___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::QFileDevice::FileHandleFlags* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QFileDevice_FileHandleFlags, &a0, &a0State, &a1))
        {
             ::QFileDevice::FileHandleFlags*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::QFileDevice::FileHandleFlags((*a0 | a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QFileDevice_FileHandleFlags,a0State);

            return sipConvertFromNewType(sipRes,sipType_QFileDevice_FileHandleFlags,SIP_NULLPTR);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtCore, or_slot, SIP_NULLPTR, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QFileDevice_FileHandleFlags___iand__(PyObject *,PyObject *);}
static PyObject *slot_QFileDevice_FileHandleFlags___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QFileDevice_FileHandleFlags)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QFileDevice::FileHandleFlags *sipCpp = reinterpret_cast< ::QFileDevice::FileHandleFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QFileDevice_FileHandleFlags));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp-> ::QFileDevice::FileHandleFlags::operator&=(a0);
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


extern "C" {static PyObject *slot_QFileDevice_FileHandleFlags___and__(PyObject *,PyObject *);}
static PyObject *slot_QFileDevice_FileHandleFlags___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::QFileDevice::FileHandleFlags* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QFileDevice_FileHandleFlags, &a0, &a0State, &a1))
        {
             ::QFileDevice::FileHandleFlags*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::QFileDevice::FileHandleFlags((*a0 & a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QFileDevice_FileHandleFlags,a0State);

            return sipConvertFromNewType(sipRes,sipType_QFileDevice_FileHandleFlags,SIP_NULLPTR);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtCore, and_slot, SIP_NULLPTR, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QFileDevice_FileHandleFlags___invert__(PyObject *);}
static PyObject *slot_QFileDevice_FileHandleFlags___invert__(PyObject *sipSelf)
{
     ::QFileDevice::FileHandleFlags *sipCpp = reinterpret_cast< ::QFileDevice::FileHandleFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QFileDevice_FileHandleFlags));

    if (!sipCpp)
        return SIP_NULLPTR;


    {
        {
             ::QFileDevice::FileHandleFlags*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::QFileDevice::FileHandleFlags(~(*sipCpp));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QFileDevice_FileHandleFlags,SIP_NULLPTR);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QFileDevice_FileHandleFlags___int__(PyObject *);}
static PyObject *slot_QFileDevice_FileHandleFlags___int__(PyObject *sipSelf)
{
     ::QFileDevice::FileHandleFlags *sipCpp = reinterpret_cast< ::QFileDevice::FileHandleFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QFileDevice_FileHandleFlags));

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
extern "C" {static void release_QFileDevice_FileHandleFlags(void *, int);}
static void release_QFileDevice_FileHandleFlags(void *sipCppV, int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast< ::QFileDevice::FileHandleFlags *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void *array_QFileDevice_FileHandleFlags(Py_ssize_t);}
static void *array_QFileDevice_FileHandleFlags(Py_ssize_t sipNrElem)
{
    return new  ::QFileDevice::FileHandleFlags[sipNrElem];
}


extern "C" {static void assign_QFileDevice_FileHandleFlags(void *, SIP_SSIZE_T, void *);}
static void assign_QFileDevice_FileHandleFlags(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QFileDevice::FileHandleFlags *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QFileDevice::FileHandleFlags *>(sipSrc);
}


extern "C" {static void *copy_QFileDevice_FileHandleFlags(const void *, SIP_SSIZE_T);}
static void *copy_QFileDevice_FileHandleFlags(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::QFileDevice::FileHandleFlags(reinterpret_cast<const  ::QFileDevice::FileHandleFlags *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QFileDevice_FileHandleFlags(sipSimpleWrapper *);}
static void dealloc_QFileDevice_FileHandleFlags(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QFileDevice_FileHandleFlags(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QFileDevice_FileHandleFlags(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QFileDevice_FileHandleFlags(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QFileDevice::FileHandleFlags *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::QFileDevice::FileHandleFlags();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "i", &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::QFileDevice::FileHandleFlags(a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const  ::QFileDevice::FileHandleFlags* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J1", sipType_QFileDevice_FileHandleFlags, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::QFileDevice::FileHandleFlags(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::QFileDevice::FileHandleFlags *>(a0),sipType_QFileDevice_FileHandleFlags,a0State);

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


extern "C" {static int convertTo_QFileDevice_FileHandleFlags(PyObject *, void **, int *, PyObject *);}
static int convertTo_QFileDevice_FileHandleFlags(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
     ::QFileDevice::FileHandleFlags **sipCppPtr = reinterpret_cast< ::QFileDevice::FileHandleFlags **>(sipCppPtrV);

#line 390 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp2/pyqt4/sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QFileDevice::FileHandleFlags is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QFileDevice_FileHandleFlag)) ||
            sipCanConvertToType(sipPy, sipType_QFileDevice_FileHandleFlags, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QFileDevice_FileHandleFlag)))
{
    *sipCppPtr = new QFileDevice::FileHandleFlags(int(SIPLong_AsLong(sipPy)));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QFileDevice::FileHandleFlags *>(sipConvertToType(sipPy, sipType_QFileDevice_FileHandleFlags, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 530 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp2/pyqt4/QtCore/sipQtCoreQFileDeviceFileHandleFlags.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QFileDevice_FileHandleFlags[] = {
    {(void *)slot_QFileDevice_FileHandleFlags___bool__, bool_slot},
    {(void *)slot_QFileDevice_FileHandleFlags___ne__, ne_slot},
    {(void *)slot_QFileDevice_FileHandleFlags___eq__, eq_slot},
    {(void *)slot_QFileDevice_FileHandleFlags___ixor__, ixor_slot},
    {(void *)slot_QFileDevice_FileHandleFlags___xor__, xor_slot},
    {(void *)slot_QFileDevice_FileHandleFlags___ior__, ior_slot},
    {(void *)slot_QFileDevice_FileHandleFlags___or__, or_slot},
    {(void *)slot_QFileDevice_FileHandleFlags___iand__, iand_slot},
    {(void *)slot_QFileDevice_FileHandleFlags___and__, and_slot},
    {(void *)slot_QFileDevice_FileHandleFlags___invert__, invert_slot},
    {(void *)slot_QFileDevice_FileHandleFlags___int__, int_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_QFileDevice_FileHandleFlags, "\1QFileDevice.FileHandleFlags()\n"
"QFileDevice.FileHandleFlags(Union[QFileDevice.FileHandleFlags, QFileDevice.FileHandleFlag])\n"
"QFileDevice.FileHandleFlags(QFileDevice.FileHandleFlags)");


static pyqt4ClassPluginDef plugin_QFileDevice_FileHandleFlags = {
    SIP_NULLPTR,
    1,
    SIP_NULLPTR
};


sipClassTypeDef sipTypeDef_QtCore_QFileDevice_FileHandleFlags = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_CLASS,
        sipNameNr_QFileDevice__FileHandleFlags,
        {SIP_NULLPTR},
        &plugin_QFileDevice_FileHandleFlags
    },
    {
        sipNameNr_FileHandleFlags,
        {59, 255, 0},
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_QFileDevice_FileHandleFlags,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    SIP_NULLPTR,
    slots_QFileDevice_FileHandleFlags,
    init_type_QFileDevice_FileHandleFlags,
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
    dealloc_QFileDevice_FileHandleFlags,
    assign_QFileDevice_FileHandleFlags,
    array_QFileDevice_FileHandleFlags,
    copy_QFileDevice_FileHandleFlags,
    release_QFileDevice_FileHandleFlags,
    SIP_NULLPTR,
    convertTo_QFileDevice_FileHandleFlags,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};
