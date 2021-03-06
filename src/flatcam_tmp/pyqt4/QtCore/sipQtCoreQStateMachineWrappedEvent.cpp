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

#line 28 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp/pyqt4/sip/QtCore/qstatemachine.sip"
#include <qstatemachine.h>
#line 48 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp/pyqt4/sip/QtCore/qstatemachine.sip"
#include <qstatemachine.h>
#line 31 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp/pyqt4/QtCore/sipQtCoreQStateMachineWrappedEvent.cpp"

#line 26 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp/pyqt4/sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 35 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp/pyqt4/QtCore/sipQtCoreQStateMachineWrappedEvent.cpp"
#line 29 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp/pyqt4/sip/QtCore/qobject.sip"
#include <qobject.h>
#line 38 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp/pyqt4/QtCore/sipQtCoreQStateMachineWrappedEvent.cpp"


PyDoc_STRVAR(doc_QStateMachine_WrappedEvent_object, "object(self) -> QObject");

extern "C" {static PyObject *meth_QStateMachine_WrappedEvent_object(PyObject *, PyObject *);}
static PyObject *meth_QStateMachine_WrappedEvent_object(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QStateMachine::WrappedEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QStateMachine_WrappedEvent, &sipCpp))
        {
             ::QObject*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->object();
            Py_END_ALLOW_THREADS

            return sipConvertFromType(sipRes,sipType_QObject,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_WrappedEvent, sipName_object, doc_QStateMachine_WrappedEvent_object);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QStateMachine_WrappedEvent_event, "event(self) -> QEvent");

extern "C" {static PyObject *meth_QStateMachine_WrappedEvent_event(PyObject *, PyObject *);}
static PyObject *meth_QStateMachine_WrappedEvent_event(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QStateMachine::WrappedEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QStateMachine_WrappedEvent, &sipCpp))
        {
             ::QEvent*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->event();
            Py_END_ALLOW_THREADS

            return sipConvertFromType(sipRes,sipType_QEvent,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_WrappedEvent, sipName_event, doc_QStateMachine_WrappedEvent_event);

    return SIP_NULLPTR;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_QStateMachine_WrappedEvent(void *, const sipTypeDef *);}
static void *cast_QStateMachine_WrappedEvent(void *sipCppV, const sipTypeDef *targetType)
{
     ::QStateMachine::WrappedEvent *sipCpp = reinterpret_cast< ::QStateMachine::WrappedEvent *>(sipCppV);

    if (targetType == sipType_QEvent)
        return static_cast< ::QEvent *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_QStateMachine_WrappedEvent(void *, int);}
static void release_QStateMachine_WrappedEvent(void *sipCppV, int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast< ::QStateMachine::WrappedEvent *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QStateMachine_WrappedEvent(sipSimpleWrapper *);}
static void dealloc_QStateMachine_WrappedEvent(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QStateMachine_WrappedEvent(sipGetAddress(sipSelf), 0);
    }
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QStateMachine_WrappedEvent[] = {{52, 255, 1}};


static PyMethodDef methods_QStateMachine_WrappedEvent[] = {
    {SIP_MLNAME_CAST(sipName_event), meth_QStateMachine_WrappedEvent_event, METH_VARARGS, SIP_MLDOC_CAST(doc_QStateMachine_WrappedEvent_event)},
    {SIP_MLNAME_CAST(sipName_object), meth_QStateMachine_WrappedEvent_object, METH_VARARGS, SIP_MLDOC_CAST(doc_QStateMachine_WrappedEvent_object)}
};


static pyqt4ClassPluginDef plugin_QStateMachine_WrappedEvent = {
    SIP_NULLPTR,
    0,
    SIP_NULLPTR
};


sipClassTypeDef sipTypeDef_QtCore_QStateMachine_WrappedEvent = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_QStateMachine__WrappedEvent,
        {SIP_NULLPTR},
        &plugin_QStateMachine_WrappedEvent
    },
    {
        sipNameNr_WrappedEvent,
        {189, 255, 0},
        2, methods_QStateMachine_WrappedEvent,
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    SIP_NULLPTR,
    -1,
    -1,
    supers_QStateMachine_WrappedEvent,
    SIP_NULLPTR,
    SIP_NULLPTR,
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
    dealloc_QStateMachine_WrappedEvent,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    release_QStateMachine_WrappedEvent,
    cast_QStateMachine_WrappedEvent,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};
