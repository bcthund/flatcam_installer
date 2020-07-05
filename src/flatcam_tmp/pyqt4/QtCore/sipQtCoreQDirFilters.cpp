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

#line 26 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp/pyqt4/sip/QtCore/qdir.sip"
#include <qdir.h>
#line 29 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp/pyqt4/QtCore/sipQtCoreQDirFilters.cpp"

#line 26 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp/pyqt4/sip/QtCore/qdir.sip"
#include <qdir.h>
#line 33 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp/pyqt4/QtCore/sipQtCoreQDirFilters.cpp"


extern "C" {static int slot_QDir_Filters___bool__(PyObject *);}
static int slot_QDir_Filters___bool__(PyObject *sipSelf)
{
     ::QDir::Filters *sipCpp = reinterpret_cast< ::QDir::Filters *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QDir_Filters));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 381 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp/pyqt4/sip/QtCore/qglobal.sip"
#if QT_VERSION >= 0x050000
        sipRes = (sipCpp->operator QDir::Filters::Int() != 0);
#else
        sipRes = (sipCpp->operator int() != 0);
#endif
#line 55 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp/pyqt4/QtCore/sipQtCoreQDirFilters.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QDir_Filters___ne__(PyObject *,PyObject *);}
static PyObject *slot_QDir_Filters___ne__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QDir::Filters *sipCpp = reinterpret_cast< ::QDir::Filters *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QDir_Filters));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QDir::Filters* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QDir_Filters, &a0, &a0State))
        {
            bool sipRes = 0;

#line 372 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp/pyqt4/sip/QtCore/qglobal.sip"
#if QT_VERSION >= 0x050000
        sipRes = (sipCpp->operator QDir::Filters::Int() != a0->operator QDir::Filters::Int());
#else
        sipRes = (sipCpp->operator int() != a0->operator int());
#endif
#line 89 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp/pyqt4/QtCore/sipQtCoreQDirFilters.cpp"
            sipReleaseType(const_cast< ::QDir::Filters *>(a0),sipType_QDir_Filters,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtCore, ne_slot, sipType_QDir_Filters, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QDir_Filters___eq__(PyObject *,PyObject *);}
static PyObject *slot_QDir_Filters___eq__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QDir::Filters *sipCpp = reinterpret_cast< ::QDir::Filters *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QDir_Filters));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QDir::Filters* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QDir_Filters, &a0, &a0State))
        {
            bool sipRes = 0;

#line 363 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp/pyqt4/sip/QtCore/qglobal.sip"
#if QT_VERSION >= 0x050000
        sipRes = (sipCpp->operator QDir::Filters::Int() == a0->operator QDir::Filters::Int());
#else
        sipRes = (sipCpp->operator int() == a0->operator int());
#endif
#line 129 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp/pyqt4/QtCore/sipQtCoreQDirFilters.cpp"
            sipReleaseType(const_cast< ::QDir::Filters *>(a0),sipType_QDir_Filters,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtCore, eq_slot, sipType_QDir_Filters, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QDir_Filters___ixor__(PyObject *,PyObject *);}
static PyObject *slot_QDir_Filters___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QDir_Filters)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QDir::Filters *sipCpp = reinterpret_cast< ::QDir::Filters *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QDir_Filters));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 357 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp/pyqt4/sip/QtCore/qglobal.sip"
        *sipCpp = QDir::Filters(*sipCpp ^ a0);
#line 168 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp/pyqt4/QtCore/sipQtCoreQDirFilters.cpp"

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


extern "C" {static PyObject *slot_QDir_Filters___xor__(PyObject *,PyObject *);}
static PyObject *slot_QDir_Filters___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::QDir::Filters* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QDir_Filters, &a0, &a0State, &a1))
        {
             ::QDir::Filters*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::QDir::Filters((*a0 ^ a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QDir_Filters,a0State);

            return sipConvertFromNewType(sipRes,sipType_QDir_Filters,SIP_NULLPTR);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtCore, xor_slot, SIP_NULLPTR, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QDir_Filters___ior__(PyObject *,PyObject *);}
static PyObject *slot_QDir_Filters___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QDir_Filters)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QDir::Filters *sipCpp = reinterpret_cast< ::QDir::Filters *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QDir_Filters));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 351 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp/pyqt4/sip/QtCore/qglobal.sip"
        *sipCpp = QDir::Filters(*sipCpp | a0);
#line 242 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp/pyqt4/QtCore/sipQtCoreQDirFilters.cpp"

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


extern "C" {static PyObject *slot_QDir_Filters___or__(PyObject *,PyObject *);}
static PyObject *slot_QDir_Filters___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::QDir::Filters* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QDir_Filters, &a0, &a0State, &a1))
        {
             ::QDir::Filters*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::QDir::Filters((*a0 | a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QDir_Filters,a0State);

            return sipConvertFromNewType(sipRes,sipType_QDir_Filters,SIP_NULLPTR);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtCore, or_slot, SIP_NULLPTR, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QDir_Filters___iand__(PyObject *,PyObject *);}
static PyObject *slot_QDir_Filters___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QDir_Filters)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QDir::Filters *sipCpp = reinterpret_cast< ::QDir::Filters *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QDir_Filters));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp-> ::QDir::Filters::operator&=(a0);
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


extern "C" {static PyObject *slot_QDir_Filters___and__(PyObject *,PyObject *);}
static PyObject *slot_QDir_Filters___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::QDir::Filters* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QDir_Filters, &a0, &a0State, &a1))
        {
             ::QDir::Filters*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::QDir::Filters((*a0 & a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QDir_Filters,a0State);

            return sipConvertFromNewType(sipRes,sipType_QDir_Filters,SIP_NULLPTR);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtCore, and_slot, SIP_NULLPTR, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QDir_Filters___invert__(PyObject *);}
static PyObject *slot_QDir_Filters___invert__(PyObject *sipSelf)
{
     ::QDir::Filters *sipCpp = reinterpret_cast< ::QDir::Filters *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QDir_Filters));

    if (!sipCpp)
        return SIP_NULLPTR;


    {
        {
             ::QDir::Filters*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::QDir::Filters(~(*sipCpp));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QDir_Filters,SIP_NULLPTR);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QDir_Filters___int__(PyObject *);}
static PyObject *slot_QDir_Filters___int__(PyObject *sipSelf)
{
     ::QDir::Filters *sipCpp = reinterpret_cast< ::QDir::Filters *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QDir_Filters));

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
extern "C" {static void release_QDir_Filters(void *, int);}
static void release_QDir_Filters(void *sipCppV, int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast< ::QDir::Filters *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QDir_Filters(void *, SIP_SSIZE_T, void *);}
static void assign_QDir_Filters(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QDir::Filters *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QDir::Filters *>(sipSrc);
}


extern "C" {static void *array_QDir_Filters(SIP_SSIZE_T);}
static void *array_QDir_Filters(SIP_SSIZE_T sipNrElem)
{
    return new  ::QDir::Filters[sipNrElem];
}


extern "C" {static void *copy_QDir_Filters(const void *, SIP_SSIZE_T);}
static void *copy_QDir_Filters(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::QDir::Filters(reinterpret_cast<const  ::QDir::Filters *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QDir_Filters(sipSimpleWrapper *);}
static void dealloc_QDir_Filters(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QDir_Filters(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QDir_Filters(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QDir_Filters(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QDir::Filters *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::QDir::Filters();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "i", &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::QDir::Filters(a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const  ::QDir::Filters* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J1", sipType_QDir_Filters, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::QDir::Filters(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::QDir::Filters *>(a0),sipType_QDir_Filters,a0State);

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


extern "C" {static int convertTo_QDir_Filters(PyObject *, void **, int *, PyObject *);}
static int convertTo_QDir_Filters(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
     ::QDir::Filters **sipCppPtr = reinterpret_cast< ::QDir::Filters **>(sipCppPtrV);

#line 390 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp/pyqt4/sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QDir::Filters is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QDir_Filter)) ||
            sipCanConvertToType(sipPy, sipType_QDir_Filters, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QDir_Filter)))
{
    *sipCppPtr = new QDir::Filters(int(SIPLong_AsLong(sipPy)));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QDir::Filters *>(sipConvertToType(sipPy, sipType_QDir_Filters, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 530 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp/pyqt4/QtCore/sipQtCoreQDirFilters.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QDir_Filters[] = {
    {(void *)slot_QDir_Filters___bool__, bool_slot},
    {(void *)slot_QDir_Filters___ne__, ne_slot},
    {(void *)slot_QDir_Filters___eq__, eq_slot},
    {(void *)slot_QDir_Filters___ixor__, ixor_slot},
    {(void *)slot_QDir_Filters___xor__, xor_slot},
    {(void *)slot_QDir_Filters___ior__, ior_slot},
    {(void *)slot_QDir_Filters___or__, or_slot},
    {(void *)slot_QDir_Filters___iand__, iand_slot},
    {(void *)slot_QDir_Filters___and__, and_slot},
    {(void *)slot_QDir_Filters___invert__, invert_slot},
    {(void *)slot_QDir_Filters___int__, int_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_QDir_Filters, "\1QDir.Filters()\n"
"QDir.Filters(Union[QDir.Filters, QDir.Filter])\n"
"QDir.Filters(QDir.Filters)");


static pyqt4ClassPluginDef plugin_QDir_Filters = {
    SIP_NULLPTR,
    1,
    SIP_NULLPTR
};


sipClassTypeDef sipTypeDef_QtCore_QDir_Filters = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_CLASS,
        sipNameNr_QDir__Filters,
        {SIP_NULLPTR},
        &plugin_QDir_Filters
    },
    {
        sipNameNr_Filters,
        {39, 255, 0},
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_QDir_Filters,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    SIP_NULLPTR,
    slots_QDir_Filters,
    init_type_QDir_Filters,
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
    dealloc_QDir_Filters,
    assign_QDir_Filters,
    array_QDir_Filters,
    copy_QDir_Filters,
    release_QDir_Filters,
    SIP_NULLPTR,
    convertTo_QDir_Filters,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};