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
#line 29 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp2/pyqt4/QtCore/sipQtCoreQFileDevicePermissions.cpp"

#line 28 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp2/pyqt4/sip/QtCore/qfiledevice.sip"
#include <qfiledevice.h>
#line 33 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp2/pyqt4/QtCore/sipQtCoreQFileDevicePermissions.cpp"


extern "C" {static int slot_QFileDevice_Permissions___bool__(PyObject *);}
static int slot_QFileDevice_Permissions___bool__(PyObject *sipSelf)
{
     ::QFileDevice::Permissions *sipCpp = reinterpret_cast< ::QFileDevice::Permissions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QFileDevice_Permissions));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 381 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp2/pyqt4/sip/QtCore/qglobal.sip"
#if QT_VERSION >= 0x050000
        sipRes = (sipCpp->operator QFileDevice::Permissions::Int() != 0);
#else
        sipRes = (sipCpp->operator int() != 0);
#endif
#line 55 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp2/pyqt4/QtCore/sipQtCoreQFileDevicePermissions.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QFileDevice_Permissions___ne__(PyObject *,PyObject *);}
static PyObject *slot_QFileDevice_Permissions___ne__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QFileDevice::Permissions *sipCpp = reinterpret_cast< ::QFileDevice::Permissions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QFileDevice_Permissions));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QFileDevice::Permissions* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QFileDevice_Permissions, &a0, &a0State))
        {
            bool sipRes = 0;

#line 372 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp2/pyqt4/sip/QtCore/qglobal.sip"
#if QT_VERSION >= 0x050000
        sipRes = (sipCpp->operator QFileDevice::Permissions::Int() != a0->operator QFileDevice::Permissions::Int());
#else
        sipRes = (sipCpp->operator int() != a0->operator int());
#endif
#line 89 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp2/pyqt4/QtCore/sipQtCoreQFileDevicePermissions.cpp"
            sipReleaseType(const_cast< ::QFileDevice::Permissions *>(a0),sipType_QFileDevice_Permissions,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtCore, ne_slot, sipType_QFileDevice_Permissions, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QFileDevice_Permissions___eq__(PyObject *,PyObject *);}
static PyObject *slot_QFileDevice_Permissions___eq__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QFileDevice::Permissions *sipCpp = reinterpret_cast< ::QFileDevice::Permissions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QFileDevice_Permissions));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QFileDevice::Permissions* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QFileDevice_Permissions, &a0, &a0State))
        {
            bool sipRes = 0;

#line 363 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp2/pyqt4/sip/QtCore/qglobal.sip"
#if QT_VERSION >= 0x050000
        sipRes = (sipCpp->operator QFileDevice::Permissions::Int() == a0->operator QFileDevice::Permissions::Int());
#else
        sipRes = (sipCpp->operator int() == a0->operator int());
#endif
#line 129 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp2/pyqt4/QtCore/sipQtCoreQFileDevicePermissions.cpp"
            sipReleaseType(const_cast< ::QFileDevice::Permissions *>(a0),sipType_QFileDevice_Permissions,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtCore, eq_slot, sipType_QFileDevice_Permissions, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QFileDevice_Permissions___ixor__(PyObject *,PyObject *);}
static PyObject *slot_QFileDevice_Permissions___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QFileDevice_Permissions)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QFileDevice::Permissions *sipCpp = reinterpret_cast< ::QFileDevice::Permissions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QFileDevice_Permissions));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 357 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp2/pyqt4/sip/QtCore/qglobal.sip"
        *sipCpp = QFileDevice::Permissions(*sipCpp ^ a0);
#line 168 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp2/pyqt4/QtCore/sipQtCoreQFileDevicePermissions.cpp"

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


extern "C" {static PyObject *slot_QFileDevice_Permissions___xor__(PyObject *,PyObject *);}
static PyObject *slot_QFileDevice_Permissions___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::QFileDevice::Permissions* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QFileDevice_Permissions, &a0, &a0State, &a1))
        {
             ::QFileDevice::Permissions*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::QFileDevice::Permissions((*a0 ^ a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QFileDevice_Permissions,a0State);

            return sipConvertFromNewType(sipRes,sipType_QFileDevice_Permissions,SIP_NULLPTR);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtCore, xor_slot, SIP_NULLPTR, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QFileDevice_Permissions___ior__(PyObject *,PyObject *);}
static PyObject *slot_QFileDevice_Permissions___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QFileDevice_Permissions)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QFileDevice::Permissions *sipCpp = reinterpret_cast< ::QFileDevice::Permissions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QFileDevice_Permissions));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 351 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp2/pyqt4/sip/QtCore/qglobal.sip"
        *sipCpp = QFileDevice::Permissions(*sipCpp | a0);
#line 242 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp2/pyqt4/QtCore/sipQtCoreQFileDevicePermissions.cpp"

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


extern "C" {static PyObject *slot_QFileDevice_Permissions___or__(PyObject *,PyObject *);}
static PyObject *slot_QFileDevice_Permissions___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::QFileDevice::Permissions* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QFileDevice_Permissions, &a0, &a0State, &a1))
        {
             ::QFileDevice::Permissions*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::QFileDevice::Permissions((*a0 | a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QFileDevice_Permissions,a0State);

            return sipConvertFromNewType(sipRes,sipType_QFileDevice_Permissions,SIP_NULLPTR);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtCore, or_slot, SIP_NULLPTR, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QFileDevice_Permissions___iand__(PyObject *,PyObject *);}
static PyObject *slot_QFileDevice_Permissions___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QFileDevice_Permissions)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QFileDevice::Permissions *sipCpp = reinterpret_cast< ::QFileDevice::Permissions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QFileDevice_Permissions));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp-> ::QFileDevice::Permissions::operator&=(a0);
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


extern "C" {static PyObject *slot_QFileDevice_Permissions___and__(PyObject *,PyObject *);}
static PyObject *slot_QFileDevice_Permissions___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::QFileDevice::Permissions* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QFileDevice_Permissions, &a0, &a0State, &a1))
        {
             ::QFileDevice::Permissions*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::QFileDevice::Permissions((*a0 & a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QFileDevice_Permissions,a0State);

            return sipConvertFromNewType(sipRes,sipType_QFileDevice_Permissions,SIP_NULLPTR);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtCore, and_slot, SIP_NULLPTR, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QFileDevice_Permissions___invert__(PyObject *);}
static PyObject *slot_QFileDevice_Permissions___invert__(PyObject *sipSelf)
{
     ::QFileDevice::Permissions *sipCpp = reinterpret_cast< ::QFileDevice::Permissions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QFileDevice_Permissions));

    if (!sipCpp)
        return SIP_NULLPTR;


    {
        {
             ::QFileDevice::Permissions*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::QFileDevice::Permissions(~(*sipCpp));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QFileDevice_Permissions,SIP_NULLPTR);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QFileDevice_Permissions___int__(PyObject *);}
static PyObject *slot_QFileDevice_Permissions___int__(PyObject *sipSelf)
{
     ::QFileDevice::Permissions *sipCpp = reinterpret_cast< ::QFileDevice::Permissions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QFileDevice_Permissions));

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
extern "C" {static void release_QFileDevice_Permissions(void *, int);}
static void release_QFileDevice_Permissions(void *sipCppV, int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast< ::QFileDevice::Permissions *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void *array_QFileDevice_Permissions(Py_ssize_t);}
static void *array_QFileDevice_Permissions(Py_ssize_t sipNrElem)
{
    return new  ::QFileDevice::Permissions[sipNrElem];
}


extern "C" {static void assign_QFileDevice_Permissions(void *, SIP_SSIZE_T, void *);}
static void assign_QFileDevice_Permissions(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QFileDevice::Permissions *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QFileDevice::Permissions *>(sipSrc);
}


extern "C" {static void *copy_QFileDevice_Permissions(const void *, SIP_SSIZE_T);}
static void *copy_QFileDevice_Permissions(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::QFileDevice::Permissions(reinterpret_cast<const  ::QFileDevice::Permissions *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QFileDevice_Permissions(sipSimpleWrapper *);}
static void dealloc_QFileDevice_Permissions(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QFileDevice_Permissions(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QFileDevice_Permissions(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QFileDevice_Permissions(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QFileDevice::Permissions *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::QFileDevice::Permissions();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "i", &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::QFileDevice::Permissions(a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const  ::QFileDevice::Permissions* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J1", sipType_QFileDevice_Permissions, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::QFileDevice::Permissions(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::QFileDevice::Permissions *>(a0),sipType_QFileDevice_Permissions,a0State);

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


extern "C" {static int convertTo_QFileDevice_Permissions(PyObject *, void **, int *, PyObject *);}
static int convertTo_QFileDevice_Permissions(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
     ::QFileDevice::Permissions **sipCppPtr = reinterpret_cast< ::QFileDevice::Permissions **>(sipCppPtrV);

#line 390 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp2/pyqt4/sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QFileDevice::Permissions is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QFileDevice_Permission)) ||
            sipCanConvertToType(sipPy, sipType_QFileDevice_Permissions, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QFileDevice_Permission)))
{
    *sipCppPtr = new QFileDevice::Permissions(int(SIPLong_AsLong(sipPy)));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QFileDevice::Permissions *>(sipConvertToType(sipPy, sipType_QFileDevice_Permissions, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 530 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp2/pyqt4/QtCore/sipQtCoreQFileDevicePermissions.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QFileDevice_Permissions[] = {
    {(void *)slot_QFileDevice_Permissions___bool__, bool_slot},
    {(void *)slot_QFileDevice_Permissions___ne__, ne_slot},
    {(void *)slot_QFileDevice_Permissions___eq__, eq_slot},
    {(void *)slot_QFileDevice_Permissions___ixor__, ixor_slot},
    {(void *)slot_QFileDevice_Permissions___xor__, xor_slot},
    {(void *)slot_QFileDevice_Permissions___ior__, ior_slot},
    {(void *)slot_QFileDevice_Permissions___or__, or_slot},
    {(void *)slot_QFileDevice_Permissions___iand__, iand_slot},
    {(void *)slot_QFileDevice_Permissions___and__, and_slot},
    {(void *)slot_QFileDevice_Permissions___invert__, invert_slot},
    {(void *)slot_QFileDevice_Permissions___int__, int_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_QFileDevice_Permissions, "\1QFileDevice.Permissions()\n"
"QFileDevice.Permissions(Union[QFileDevice.Permissions, QFileDevice.Permission])\n"
"QFileDevice.Permissions(QFileDevice.Permissions)");


static pyqt4ClassPluginDef plugin_QFileDevice_Permissions = {
    SIP_NULLPTR,
    1,
    SIP_NULLPTR
};


sipClassTypeDef sipTypeDef_QtCore_QFileDevice_Permissions = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_CLASS,
        sipNameNr_QFileDevice__Permissions,
        {SIP_NULLPTR},
        &plugin_QFileDevice_Permissions
    },
    {
        sipNameNr_Permissions,
        {59, 255, 0},
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_QFileDevice_Permissions,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    SIP_NULLPTR,
    slots_QFileDevice_Permissions,
    init_type_QFileDevice_Permissions,
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
    dealloc_QFileDevice_Permissions,
    assign_QFileDevice_Permissions,
    array_QFileDevice_Permissions,
    copy_QFileDevice_Permissions,
    release_QFileDevice_Permissions,
    SIP_NULLPTR,
    convertTo_QFileDevice_Permissions,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};
