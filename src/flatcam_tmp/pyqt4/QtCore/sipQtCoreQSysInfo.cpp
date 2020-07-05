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

#line 64 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp/pyqt4/sip/QtCore/qglobal.sip"
#include <qglobal.h>
#line 29 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp/pyqt4/QtCore/sipQtCoreQSysInfo.cpp"



/* Call the instance's destructor. */
extern "C" {static void release_QSysInfo(void *, int);}
static void release_QSysInfo(void *sipCppV, int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast< ::QSysInfo *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QSysInfo(void *, SIP_SSIZE_T, void *);}
static void assign_QSysInfo(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QSysInfo *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QSysInfo *>(sipSrc);
}


extern "C" {static void *array_QSysInfo(SIP_SSIZE_T);}
static void *array_QSysInfo(SIP_SSIZE_T sipNrElem)
{
    return new  ::QSysInfo[sipNrElem];
}


extern "C" {static void *copy_QSysInfo(const void *, SIP_SSIZE_T);}
static void *copy_QSysInfo(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::QSysInfo(reinterpret_cast<const  ::QSysInfo *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QSysInfo(sipSimpleWrapper *);}
static void dealloc_QSysInfo(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QSysInfo(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QSysInfo(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QSysInfo(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QSysInfo *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::QSysInfo();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const  ::QSysInfo* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_QSysInfo, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::QSysInfo(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}

static sipEnumMemberDef enummembers_QSysInfo[] = {
    {sipName_BigEndian, static_cast<int>( ::QSysInfo::BigEndian), 203},
    {sipName_ByteOrder, static_cast<int>( ::QSysInfo::ByteOrder), 203},
    {sipName_LittleEndian, static_cast<int>( ::QSysInfo::LittleEndian), 203},
    {sipName_WordSize, static_cast<int>( ::QSysInfo::WordSize), 204},
};

PyDoc_STRVAR(doc_QSysInfo, "\1QSysInfo()\n"
"QSysInfo(QSysInfo)");


static pyqt4ClassPluginDef plugin_QSysInfo = {
    SIP_NULLPTR,
    0,
    SIP_NULLPTR
};


sipClassTypeDef sipTypeDef_QtCore_QSysInfo = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_CLASS,
        sipNameNr_QSysInfo,
        {SIP_NULLPTR},
        &plugin_QSysInfo
    },
    {
        sipNameNr_QSysInfo,
        {0, 0, 1},
        0, SIP_NULLPTR,
        4, enummembers_QSysInfo,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_QSysInfo,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    SIP_NULLPTR,
    SIP_NULLPTR,
    init_type_QSysInfo,
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
    dealloc_QSysInfo,
    assign_QSysInfo,
    array_QSysInfo,
    copy_QSysInfo,
    release_QSysInfo,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};