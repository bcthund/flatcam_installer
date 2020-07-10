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

#line 26 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp2/pyqt4/sip/QtCore/qabstracteventdispatcher.sip"
#include <qabstracteventdispatcher.h>
#line 35 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp2/pyqt4/sip/QtCore/qabstracteventdispatcher.sip"
#include <qabstracteventdispatcher.h>
#line 31 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp2/pyqt4/QtCore/sipQtCoreQAbstractEventDispatcherTimerInfo.cpp"

#line 26 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp2/pyqt4/sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 35 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp2/pyqt4/QtCore/sipQtCoreQAbstractEventDispatcherTimerInfo.cpp"


/* Call the instance's destructor. */
extern "C" {static void release_QAbstractEventDispatcher_TimerInfo(void *, int);}
static void release_QAbstractEventDispatcher_TimerInfo(void *sipCppV, int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast< ::QAbstractEventDispatcher::TimerInfo *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QAbstractEventDispatcher_TimerInfo(void *, SIP_SSIZE_T, void *);}
static void assign_QAbstractEventDispatcher_TimerInfo(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QAbstractEventDispatcher::TimerInfo *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QAbstractEventDispatcher::TimerInfo *>(sipSrc);
}


extern "C" {static void *copy_QAbstractEventDispatcher_TimerInfo(const void *, SIP_SSIZE_T);}
static void *copy_QAbstractEventDispatcher_TimerInfo(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::QAbstractEventDispatcher::TimerInfo(reinterpret_cast<const  ::QAbstractEventDispatcher::TimerInfo *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QAbstractEventDispatcher_TimerInfo(sipSimpleWrapper *);}
static void dealloc_QAbstractEventDispatcher_TimerInfo(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QAbstractEventDispatcher_TimerInfo(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QAbstractEventDispatcher_TimerInfo(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QAbstractEventDispatcher_TimerInfo(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QAbstractEventDispatcher::TimerInfo *sipCpp = SIP_NULLPTR;

    {
        int a0;
        int a1;
         ::Qt::TimerType a2;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "iiE", &a0, &a1, sipType_Qt_TimerType, &a2))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::QAbstractEventDispatcher::TimerInfo(a0,a1,a2);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const  ::QAbstractEventDispatcher::TimerInfo* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_QAbstractEventDispatcher_TimerInfo, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::QAbstractEventDispatcher::TimerInfo(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


extern "C" {static PyObject *varget_QAbstractEventDispatcher_TimerInfo_interval(void *, PyObject *, PyObject *);}
static PyObject *varget_QAbstractEventDispatcher_TimerInfo_interval(void *sipSelf, PyObject *, PyObject *)
{
    int sipVal;
     ::QAbstractEventDispatcher::TimerInfo *sipCpp = reinterpret_cast< ::QAbstractEventDispatcher::TimerInfo *>(sipSelf);

    sipVal = sipCpp->interval;

    return SIPLong_FromLong(sipVal);
}


extern "C" {static int varset_QAbstractEventDispatcher_TimerInfo_interval(void *, PyObject *, PyObject *);}
static int varset_QAbstractEventDispatcher_TimerInfo_interval(void *sipSelf, PyObject *sipPy, PyObject *)
{
    int sipVal;
     ::QAbstractEventDispatcher::TimerInfo *sipCpp = reinterpret_cast< ::QAbstractEventDispatcher::TimerInfo *>(sipSelf);

    sipVal = sipLong_AsInt(sipPy);

    if (PyErr_Occurred() != SIP_NULLPTR)
        return -1;

    sipCpp->interval = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QAbstractEventDispatcher_TimerInfo_timerId(void *, PyObject *, PyObject *);}
static PyObject *varget_QAbstractEventDispatcher_TimerInfo_timerId(void *sipSelf, PyObject *, PyObject *)
{
    int sipVal;
     ::QAbstractEventDispatcher::TimerInfo *sipCpp = reinterpret_cast< ::QAbstractEventDispatcher::TimerInfo *>(sipSelf);

    sipVal = sipCpp->timerId;

    return SIPLong_FromLong(sipVal);
}


extern "C" {static int varset_QAbstractEventDispatcher_TimerInfo_timerId(void *, PyObject *, PyObject *);}
static int varset_QAbstractEventDispatcher_TimerInfo_timerId(void *sipSelf, PyObject *sipPy, PyObject *)
{
    int sipVal;
     ::QAbstractEventDispatcher::TimerInfo *sipCpp = reinterpret_cast< ::QAbstractEventDispatcher::TimerInfo *>(sipSelf);

    sipVal = sipLong_AsInt(sipPy);

    if (PyErr_Occurred() != SIP_NULLPTR)
        return -1;

    sipCpp->timerId = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QAbstractEventDispatcher_TimerInfo_timerType(void *, PyObject *, PyObject *);}
static PyObject *varget_QAbstractEventDispatcher_TimerInfo_timerType(void *sipSelf, PyObject *, PyObject *)
{
     ::Qt::TimerType sipVal;
     ::QAbstractEventDispatcher::TimerInfo *sipCpp = reinterpret_cast< ::QAbstractEventDispatcher::TimerInfo *>(sipSelf);

    sipVal = sipCpp->timerType;

    return sipConvertFromEnum(static_cast<int>(sipVal), sipType_Qt_TimerType);
}


extern "C" {static int varset_QAbstractEventDispatcher_TimerInfo_timerType(void *, PyObject *, PyObject *);}
static int varset_QAbstractEventDispatcher_TimerInfo_timerType(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::Qt::TimerType sipVal;
     ::QAbstractEventDispatcher::TimerInfo *sipCpp = reinterpret_cast< ::QAbstractEventDispatcher::TimerInfo *>(sipSelf);

    sipVal = ( ::Qt::TimerType)sipConvertToEnum(sipPy, sipType_Qt_TimerType);

    if (PyErr_Occurred() != SIP_NULLPTR)
        return -1;

    sipCpp->timerType = sipVal;

    return 0;
}

sipVariableDef variables_QAbstractEventDispatcher_TimerInfo[] = {
    {InstanceVariable, sipName_interval, (PyMethodDef *)varget_QAbstractEventDispatcher_TimerInfo_interval, (PyMethodDef *)varset_QAbstractEventDispatcher_TimerInfo_interval, SIP_NULLPTR, SIP_NULLPTR},
    {InstanceVariable, sipName_timerId, (PyMethodDef *)varget_QAbstractEventDispatcher_TimerInfo_timerId, (PyMethodDef *)varset_QAbstractEventDispatcher_TimerInfo_timerId, SIP_NULLPTR, SIP_NULLPTR},
    {InstanceVariable, sipName_timerType, (PyMethodDef *)varget_QAbstractEventDispatcher_TimerInfo_timerType, (PyMethodDef *)varset_QAbstractEventDispatcher_TimerInfo_timerType, SIP_NULLPTR, SIP_NULLPTR},
};

PyDoc_STRVAR(doc_QAbstractEventDispatcher_TimerInfo, "\1QAbstractEventDispatcher.TimerInfo(int, int, Qt.TimerType)\n"
"QAbstractEventDispatcher.TimerInfo(QAbstractEventDispatcher.TimerInfo)");


static pyqt4ClassPluginDef plugin_QAbstractEventDispatcher_TimerInfo = {
    SIP_NULLPTR,
    0,
    SIP_NULLPTR
};


sipClassTypeDef sipTypeDef_QtCore_QAbstractEventDispatcher_TimerInfo = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_CLASS,
        sipNameNr_QAbstractEventDispatcher__TimerInfo,
        {SIP_NULLPTR},
        &plugin_QAbstractEventDispatcher_TimerInfo
    },
    {
        sipNameNr_TimerInfo,
        {4, 255, 0},
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        3, variables_QAbstractEventDispatcher_TimerInfo,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_QAbstractEventDispatcher_TimerInfo,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    SIP_NULLPTR,
    SIP_NULLPTR,
    init_type_QAbstractEventDispatcher_TimerInfo,
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
    dealloc_QAbstractEventDispatcher_TimerInfo,
    assign_QAbstractEventDispatcher_TimerInfo,
    SIP_NULLPTR,
    copy_QAbstractEventDispatcher_TimerInfo,
    release_QAbstractEventDispatcher_TimerInfo,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};
