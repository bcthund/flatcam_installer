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

#line 28 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp2/pyqt4/sip/QtCore/qstatemachine.sip"
#include <qstatemachine.h>
#line 35 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp2/pyqt4/sip/QtCore/qstatemachine.sip"
#include <qstatemachine.h>
#line 31 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp2/pyqt4/QtCore/sipQtCoreQStateMachineSignalEvent.cpp"

#line 28 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp2/pyqt4/sip/QtCore/qlist.sip"
#include <qlist.h>
#line 35 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp2/pyqt4/QtCore/sipQtCoreQStateMachineSignalEvent.cpp"
#line 26 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp2/pyqt4/sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 38 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp2/pyqt4/QtCore/sipQtCoreQStateMachineSignalEvent.cpp"
#line 265 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp2/pyqt4/sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 41 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp2/pyqt4/QtCore/sipQtCoreQStateMachineSignalEvent.cpp"
#line 29 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp2/pyqt4/sip/QtCore/qobject.sip"
#include <qobject.h>
#line 44 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp2/pyqt4/QtCore/sipQtCoreQStateMachineSignalEvent.cpp"
#line 26 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp2/pyqt4/sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 47 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp2/pyqt4/QtCore/sipQtCoreQStateMachineSignalEvent.cpp"


PyDoc_STRVAR(doc_QStateMachine_SignalEvent_sender, "sender(self) -> QObject");

extern "C" {static PyObject *meth_QStateMachine_SignalEvent_sender(PyObject *, PyObject *);}
static PyObject *meth_QStateMachine_SignalEvent_sender(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QStateMachine::SignalEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QStateMachine_SignalEvent, &sipCpp))
        {
             ::QObject*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->sender();
            Py_END_ALLOW_THREADS

            return sipConvertFromType(sipRes,sipType_QObject,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_SignalEvent, sipName_sender, doc_QStateMachine_SignalEvent_sender);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QStateMachine_SignalEvent_signalIndex, "signalIndex(self) -> int");

extern "C" {static PyObject *meth_QStateMachine_SignalEvent_signalIndex(PyObject *, PyObject *);}
static PyObject *meth_QStateMachine_SignalEvent_signalIndex(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QStateMachine::SignalEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QStateMachine_SignalEvent, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->signalIndex();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_SignalEvent, sipName_signalIndex, doc_QStateMachine_SignalEvent_signalIndex);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QStateMachine_SignalEvent_arguments, "arguments(self) -> List[QVariant]");

extern "C" {static PyObject *meth_QStateMachine_SignalEvent_arguments(PyObject *, PyObject *);}
static PyObject *meth_QStateMachine_SignalEvent_arguments(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QStateMachine::SignalEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QStateMachine_SignalEvent, &sipCpp))
        {
            QList< ::QVariant>*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QList< ::QVariant>(sipCpp->arguments());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QList_0100QVariant,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_SignalEvent, sipName_arguments, doc_QStateMachine_SignalEvent_arguments);

    return SIP_NULLPTR;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_QStateMachine_SignalEvent(void *, const sipTypeDef *);}
static void *cast_QStateMachine_SignalEvent(void *sipCppV, const sipTypeDef *targetType)
{
     ::QStateMachine::SignalEvent *sipCpp = reinterpret_cast< ::QStateMachine::SignalEvent *>(sipCppV);

    if (targetType == sipType_QEvent)
        return static_cast< ::QEvent *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_QStateMachine_SignalEvent(void *, int);}
static void release_QStateMachine_SignalEvent(void *sipCppV, int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast< ::QStateMachine::SignalEvent *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QStateMachine_SignalEvent(sipSimpleWrapper *);}
static void dealloc_QStateMachine_SignalEvent(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QStateMachine_SignalEvent(sipGetAddress(sipSelf), 0);
    }
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QStateMachine_SignalEvent[] = {{52, 255, 1}};


static PyMethodDef methods_QStateMachine_SignalEvent[] = {
    {SIP_MLNAME_CAST(sipName_arguments), meth_QStateMachine_SignalEvent_arguments, METH_VARARGS, SIP_MLDOC_CAST(doc_QStateMachine_SignalEvent_arguments)},
    {SIP_MLNAME_CAST(sipName_sender), meth_QStateMachine_SignalEvent_sender, METH_VARARGS, SIP_MLDOC_CAST(doc_QStateMachine_SignalEvent_sender)},
    {SIP_MLNAME_CAST(sipName_signalIndex), meth_QStateMachine_SignalEvent_signalIndex, METH_VARARGS, SIP_MLDOC_CAST(doc_QStateMachine_SignalEvent_signalIndex)}
};


static pyqt4ClassPluginDef plugin_QStateMachine_SignalEvent = {
    SIP_NULLPTR,
    0,
    SIP_NULLPTR
};


sipClassTypeDef sipTypeDef_QtCore_QStateMachine_SignalEvent = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_QStateMachine__SignalEvent,
        {SIP_NULLPTR},
        &plugin_QStateMachine_SignalEvent
    },
    {
        sipNameNr_SignalEvent,
        {189, 255, 0},
        3, methods_QStateMachine_SignalEvent,
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    SIP_NULLPTR,
    -1,
    -1,
    supers_QStateMachine_SignalEvent,
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
    dealloc_QStateMachine_SignalEvent,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    release_QStateMachine_SignalEvent,
    cast_QStateMachine_SignalEvent,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};
