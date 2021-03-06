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

#line 28 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp/pyqt4/sip/QtCore/qtextboundaryfinder.sip"
#include <qtextboundaryfinder.h>
#line 29 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp/pyqt4/QtCore/sipQtCoreQTextBoundaryFinder.cpp"

#line 27 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp/pyqt4/sip/QtCore/qstring.sip"
#include <qstring.h>
#line 33 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp/pyqt4/QtCore/sipQtCoreQTextBoundaryFinder.cpp"
#line 28 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp/pyqt4/sip/QtCore/qtextboundaryfinder.sip"
#include <qtextboundaryfinder.h>
#line 36 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp/pyqt4/QtCore/sipQtCoreQTextBoundaryFinder.cpp"


PyDoc_STRVAR(doc_QTextBoundaryFinder_isValid, "isValid(self) -> bool");

extern "C" {static PyObject *meth_QTextBoundaryFinder_isValid(PyObject *, PyObject *);}
static PyObject *meth_QTextBoundaryFinder_isValid(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QTextBoundaryFinder *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextBoundaryFinder, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isValid();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextBoundaryFinder, sipName_isValid, doc_QTextBoundaryFinder_isValid);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QTextBoundaryFinder_type, "type(self) -> QTextBoundaryFinder.BoundaryType");

extern "C" {static PyObject *meth_QTextBoundaryFinder_type(PyObject *, PyObject *);}
static PyObject *meth_QTextBoundaryFinder_type(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QTextBoundaryFinder *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextBoundaryFinder, &sipCpp))
        {
             ::QTextBoundaryFinder::BoundaryType sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->type();
            Py_END_ALLOW_THREADS

            return sipConvertFromEnum(static_cast<int>(sipRes), sipType_QTextBoundaryFinder_BoundaryType);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextBoundaryFinder, sipName_type, doc_QTextBoundaryFinder_type);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QTextBoundaryFinder_string, "string(self) -> str");

extern "C" {static PyObject *meth_QTextBoundaryFinder_string(PyObject *, PyObject *);}
static PyObject *meth_QTextBoundaryFinder_string(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QTextBoundaryFinder *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextBoundaryFinder, &sipCpp))
        {
             ::QString*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::QString(sipCpp->string());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextBoundaryFinder, sipName_string, doc_QTextBoundaryFinder_string);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QTextBoundaryFinder_toStart, "toStart(self)");

extern "C" {static PyObject *meth_QTextBoundaryFinder_toStart(PyObject *, PyObject *);}
static PyObject *meth_QTextBoundaryFinder_toStart(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::QTextBoundaryFinder *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextBoundaryFinder, &sipCpp))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->toStart();
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextBoundaryFinder, sipName_toStart, doc_QTextBoundaryFinder_toStart);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QTextBoundaryFinder_toEnd, "toEnd(self)");

extern "C" {static PyObject *meth_QTextBoundaryFinder_toEnd(PyObject *, PyObject *);}
static PyObject *meth_QTextBoundaryFinder_toEnd(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::QTextBoundaryFinder *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextBoundaryFinder, &sipCpp))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->toEnd();
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextBoundaryFinder, sipName_toEnd, doc_QTextBoundaryFinder_toEnd);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QTextBoundaryFinder_position, "position(self) -> int");

extern "C" {static PyObject *meth_QTextBoundaryFinder_position(PyObject *, PyObject *);}
static PyObject *meth_QTextBoundaryFinder_position(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QTextBoundaryFinder *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextBoundaryFinder, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->position();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextBoundaryFinder, sipName_position, doc_QTextBoundaryFinder_position);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QTextBoundaryFinder_setPosition, "setPosition(self, int)");

extern "C" {static PyObject *meth_QTextBoundaryFinder_setPosition(PyObject *, PyObject *);}
static PyObject *meth_QTextBoundaryFinder_setPosition(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;
         ::QTextBoundaryFinder *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QTextBoundaryFinder, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setPosition(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextBoundaryFinder, sipName_setPosition, doc_QTextBoundaryFinder_setPosition);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QTextBoundaryFinder_toNextBoundary, "toNextBoundary(self) -> int");

extern "C" {static PyObject *meth_QTextBoundaryFinder_toNextBoundary(PyObject *, PyObject *);}
static PyObject *meth_QTextBoundaryFinder_toNextBoundary(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::QTextBoundaryFinder *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextBoundaryFinder, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->toNextBoundary();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextBoundaryFinder, sipName_toNextBoundary, doc_QTextBoundaryFinder_toNextBoundary);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QTextBoundaryFinder_toPreviousBoundary, "toPreviousBoundary(self) -> int");

extern "C" {static PyObject *meth_QTextBoundaryFinder_toPreviousBoundary(PyObject *, PyObject *);}
static PyObject *meth_QTextBoundaryFinder_toPreviousBoundary(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::QTextBoundaryFinder *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextBoundaryFinder, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->toPreviousBoundary();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextBoundaryFinder, sipName_toPreviousBoundary, doc_QTextBoundaryFinder_toPreviousBoundary);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QTextBoundaryFinder_isAtBoundary, "isAtBoundary(self) -> bool");

extern "C" {static PyObject *meth_QTextBoundaryFinder_isAtBoundary(PyObject *, PyObject *);}
static PyObject *meth_QTextBoundaryFinder_isAtBoundary(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QTextBoundaryFinder *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextBoundaryFinder, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isAtBoundary();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextBoundaryFinder, sipName_isAtBoundary, doc_QTextBoundaryFinder_isAtBoundary);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QTextBoundaryFinder_boundaryReasons, "boundaryReasons(self) -> QTextBoundaryFinder.BoundaryReasons");

extern "C" {static PyObject *meth_QTextBoundaryFinder_boundaryReasons(PyObject *, PyObject *);}
static PyObject *meth_QTextBoundaryFinder_boundaryReasons(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QTextBoundaryFinder *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextBoundaryFinder, &sipCpp))
        {
             ::QTextBoundaryFinder::BoundaryReasons*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::QTextBoundaryFinder::BoundaryReasons(sipCpp->boundaryReasons());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QTextBoundaryFinder_BoundaryReasons,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextBoundaryFinder, sipName_boundaryReasons, doc_QTextBoundaryFinder_boundaryReasons);

    return SIP_NULLPTR;
}


/* Call the instance's destructor. */
extern "C" {static void release_QTextBoundaryFinder(void *, int);}
static void release_QTextBoundaryFinder(void *sipCppV, int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast< ::QTextBoundaryFinder *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QTextBoundaryFinder(void *, SIP_SSIZE_T, void *);}
static void assign_QTextBoundaryFinder(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QTextBoundaryFinder *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QTextBoundaryFinder *>(sipSrc);
}


extern "C" {static void *array_QTextBoundaryFinder(SIP_SSIZE_T);}
static void *array_QTextBoundaryFinder(SIP_SSIZE_T sipNrElem)
{
    return new  ::QTextBoundaryFinder[sipNrElem];
}


extern "C" {static void *copy_QTextBoundaryFinder(const void *, SIP_SSIZE_T);}
static void *copy_QTextBoundaryFinder(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::QTextBoundaryFinder(reinterpret_cast<const  ::QTextBoundaryFinder *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QTextBoundaryFinder(sipSimpleWrapper *);}
static void dealloc_QTextBoundaryFinder(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QTextBoundaryFinder(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QTextBoundaryFinder(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QTextBoundaryFinder(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QTextBoundaryFinder *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::QTextBoundaryFinder();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const  ::QTextBoundaryFinder* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_QTextBoundaryFinder, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::QTextBoundaryFinder(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
         ::QTextBoundaryFinder::BoundaryType a0;
        const  ::QString* a1;
        int a1State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "EJ1", sipType_QTextBoundaryFinder_BoundaryType, &a0, sipType_QString,&a1, &a1State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::QTextBoundaryFinder(a0,*a1);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::QString *>(a1),sipType_QString,a1State);

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


static PyMethodDef methods_QTextBoundaryFinder[] = {
    {SIP_MLNAME_CAST(sipName_boundaryReasons), meth_QTextBoundaryFinder_boundaryReasons, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextBoundaryFinder_boundaryReasons)},
    {SIP_MLNAME_CAST(sipName_isAtBoundary), meth_QTextBoundaryFinder_isAtBoundary, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextBoundaryFinder_isAtBoundary)},
    {SIP_MLNAME_CAST(sipName_isValid), meth_QTextBoundaryFinder_isValid, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextBoundaryFinder_isValid)},
    {SIP_MLNAME_CAST(sipName_position), meth_QTextBoundaryFinder_position, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextBoundaryFinder_position)},
    {SIP_MLNAME_CAST(sipName_setPosition), meth_QTextBoundaryFinder_setPosition, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextBoundaryFinder_setPosition)},
    {SIP_MLNAME_CAST(sipName_string), meth_QTextBoundaryFinder_string, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextBoundaryFinder_string)},
    {SIP_MLNAME_CAST(sipName_toEnd), meth_QTextBoundaryFinder_toEnd, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextBoundaryFinder_toEnd)},
    {SIP_MLNAME_CAST(sipName_toNextBoundary), meth_QTextBoundaryFinder_toNextBoundary, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextBoundaryFinder_toNextBoundary)},
    {SIP_MLNAME_CAST(sipName_toPreviousBoundary), meth_QTextBoundaryFinder_toPreviousBoundary, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextBoundaryFinder_toPreviousBoundary)},
    {SIP_MLNAME_CAST(sipName_toStart), meth_QTextBoundaryFinder_toStart, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextBoundaryFinder_toStart)},
    {SIP_MLNAME_CAST(sipName_type), meth_QTextBoundaryFinder_type, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextBoundaryFinder_type)}
};

static sipEnumMemberDef enummembers_QTextBoundaryFinder[] = {
    {sipName_BreakOpportunity, static_cast<int>( ::QTextBoundaryFinder::BreakOpportunity), 210},
    {sipName_EndOfItem, static_cast<int>( ::QTextBoundaryFinder::EndOfItem), 210},
    {sipName_Grapheme, static_cast<int>( ::QTextBoundaryFinder::Grapheme), 212},
    {sipName_Line, static_cast<int>( ::QTextBoundaryFinder::Line), 212},
    {sipName_MandatoryBreak, static_cast<int>( ::QTextBoundaryFinder::MandatoryBreak), 210},
    {sipName_NotAtBoundary, static_cast<int>( ::QTextBoundaryFinder::NotAtBoundary), 210},
    {sipName_Sentence, static_cast<int>( ::QTextBoundaryFinder::Sentence), 212},
    {sipName_SoftHyphen, static_cast<int>( ::QTextBoundaryFinder::SoftHyphen), 210},
    {sipName_StartOfItem, static_cast<int>( ::QTextBoundaryFinder::StartOfItem), 210},
    {sipName_Word, static_cast<int>( ::QTextBoundaryFinder::Word), 212},
};

PyDoc_STRVAR(doc_QTextBoundaryFinder, "\1QTextBoundaryFinder()\n"
"QTextBoundaryFinder(QTextBoundaryFinder)\n"
"QTextBoundaryFinder(QTextBoundaryFinder.BoundaryType, str)");


static pyqt4ClassPluginDef plugin_QTextBoundaryFinder = {
    SIP_NULLPTR,
    0,
    SIP_NULLPTR
};


sipClassTypeDef sipTypeDef_QtCore_QTextBoundaryFinder = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_CLASS,
        sipNameNr_QTextBoundaryFinder,
        {SIP_NULLPTR},
        &plugin_QTextBoundaryFinder
    },
    {
        sipNameNr_QTextBoundaryFinder,
        {0, 0, 1},
        11, methods_QTextBoundaryFinder,
        10, enummembers_QTextBoundaryFinder,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_QTextBoundaryFinder,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    SIP_NULLPTR,
    SIP_NULLPTR,
    init_type_QTextBoundaryFinder,
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
    dealloc_QTextBoundaryFinder,
    assign_QTextBoundaryFinder,
    array_QTextBoundaryFinder,
    copy_QTextBoundaryFinder,
    release_QTextBoundaryFinder,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};
