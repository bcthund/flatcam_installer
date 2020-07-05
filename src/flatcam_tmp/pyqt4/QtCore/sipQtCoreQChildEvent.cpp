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

#line 368 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp/pyqt4/sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 29 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp/pyqt4/QtCore/sipQtCoreQChildEvent.cpp"

#line 26 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp/pyqt4/sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 33 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp/pyqt4/QtCore/sipQtCoreQChildEvent.cpp"
#line 29 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp/pyqt4/sip/QtCore/qobject.sip"
#include <qobject.h>
#line 36 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp/pyqt4/QtCore/sipQtCoreQChildEvent.cpp"


class sipQChildEvent : public  ::QChildEvent
{
public:
    sipQChildEvent( ::QEvent::Type, ::QObject*);
    sipQChildEvent(const  ::QChildEvent&);
    ~sipQChildEvent();

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQChildEvent(const sipQChildEvent &);
    sipQChildEvent &operator = (const sipQChildEvent &);
};

sipQChildEvent::sipQChildEvent( ::QEvent::Type a0, ::QObject*a1):  ::QChildEvent(a0,a1), sipPySelf(SIP_NULLPTR)
{
}

sipQChildEvent::sipQChildEvent(const  ::QChildEvent& a0):  ::QChildEvent(a0), sipPySelf(SIP_NULLPTR)
{
}

sipQChildEvent::~sipQChildEvent()
{
    sipInstanceDestroyedEx(&sipPySelf);
}


PyDoc_STRVAR(doc_QChildEvent_child, "child(self) -> QObject");

extern "C" {static PyObject *meth_QChildEvent_child(PyObject *, PyObject *);}
static PyObject *meth_QChildEvent_child(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QChildEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QChildEvent, &sipCpp))
        {
             ::QObject*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->child();
            Py_END_ALLOW_THREADS

            return sipConvertFromType(sipRes,sipType_QObject,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QChildEvent, sipName_child, doc_QChildEvent_child);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QChildEvent_added, "added(self) -> bool");

extern "C" {static PyObject *meth_QChildEvent_added(PyObject *, PyObject *);}
static PyObject *meth_QChildEvent_added(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QChildEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QChildEvent, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->added();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QChildEvent, sipName_added, doc_QChildEvent_added);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QChildEvent_polished, "polished(self) -> bool");

extern "C" {static PyObject *meth_QChildEvent_polished(PyObject *, PyObject *);}
static PyObject *meth_QChildEvent_polished(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QChildEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QChildEvent, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->polished();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QChildEvent, sipName_polished, doc_QChildEvent_polished);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QChildEvent_removed, "removed(self) -> bool");

extern "C" {static PyObject *meth_QChildEvent_removed(PyObject *, PyObject *);}
static PyObject *meth_QChildEvent_removed(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QChildEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QChildEvent, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->removed();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QChildEvent, sipName_removed, doc_QChildEvent_removed);

    return SIP_NULLPTR;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_QChildEvent(void *, const sipTypeDef *);}
static void *cast_QChildEvent(void *sipCppV, const sipTypeDef *targetType)
{
     ::QChildEvent *sipCpp = reinterpret_cast< ::QChildEvent *>(sipCppV);

    if (targetType == sipType_QEvent)
        return static_cast< ::QEvent *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_QChildEvent(void *, int);}
static void release_QChildEvent(void *sipCppV, int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQChildEvent *>(sipCppV);
    else
        delete reinterpret_cast< ::QChildEvent *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QChildEvent(sipSimpleWrapper *);}
static void dealloc_QChildEvent(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipQChildEvent *>(sipGetAddress(sipSelf))->sipPySelf = SIP_NULLPTR;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_QChildEvent(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_QChildEvent(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QChildEvent(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQChildEvent *sipCpp = SIP_NULLPTR;

    {
         ::QEvent::Type a0;
         ::QObject* a1;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "EJ8", sipType_QEvent_Type, &a0, sipType_QObject, &a1))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQChildEvent(a0,a1);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const  ::QChildEvent* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_QChildEvent, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQChildEvent(*a0);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QChildEvent[] = {{52, 255, 1}};


static PyMethodDef methods_QChildEvent[] = {
    {SIP_MLNAME_CAST(sipName_added), meth_QChildEvent_added, METH_VARARGS, SIP_MLDOC_CAST(doc_QChildEvent_added)},
    {SIP_MLNAME_CAST(sipName_child), meth_QChildEvent_child, METH_VARARGS, SIP_MLDOC_CAST(doc_QChildEvent_child)},
    {SIP_MLNAME_CAST(sipName_polished), meth_QChildEvent_polished, METH_VARARGS, SIP_MLDOC_CAST(doc_QChildEvent_polished)},
    {SIP_MLNAME_CAST(sipName_removed), meth_QChildEvent_removed, METH_VARARGS, SIP_MLDOC_CAST(doc_QChildEvent_removed)}
};

PyDoc_STRVAR(doc_QChildEvent, "\1QChildEvent(QEvent.Type, QObject)\n"
"QChildEvent(QChildEvent)");


static pyqt4ClassPluginDef plugin_QChildEvent = {
    SIP_NULLPTR,
    0,
    SIP_NULLPTR
};


sipClassTypeDef sipTypeDef_QtCore_QChildEvent = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_QChildEvent,
        {SIP_NULLPTR},
        &plugin_QChildEvent
    },
    {
        sipNameNr_QChildEvent,
        {0, 0, 1},
        4, methods_QChildEvent,
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_QChildEvent,
    -1,
    -1,
    supers_QChildEvent,
    SIP_NULLPTR,
    init_type_QChildEvent,
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
    dealloc_QChildEvent,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    release_QChildEvent,
    cast_QChildEvent,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};