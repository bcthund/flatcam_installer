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

#line 26 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp2/pyqt4/sip/QtCore/qmetatype.sip"
#include <qmetatype.h>
#line 29 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp2/pyqt4/QtCore/sipQtCoreQMetaType.cpp"

#line 26 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp2/pyqt4/sip/QtCore/qobjectdefs.sip"
#include <qobjectdefs.h>
#line 33 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp2/pyqt4/QtCore/sipQtCoreQMetaType.cpp"
#line 26 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp2/pyqt4/sip/QtCore/qmetatype.sip"
#include <qmetatype.h>
#line 36 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp2/pyqt4/QtCore/sipQtCoreQMetaType.cpp"


PyDoc_STRVAR(doc_QMetaType_type, "type(str) -> int");

extern "C" {static PyObject *meth_QMetaType_type(PyObject *, PyObject *);}
static PyObject *meth_QMetaType_type(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const char* a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "s", &a0))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes =  ::QMetaType::type(a0);
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QMetaType, sipName_type, doc_QMetaType_type);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QMetaType_typeName, "typeName(int) -> str");

extern "C" {static PyObject *meth_QMetaType_typeName(PyObject *, PyObject *);}
static PyObject *meth_QMetaType_typeName(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "i", &a0))
        {
            const char*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes =  ::QMetaType::typeName(a0);
            Py_END_ALLOW_THREADS

            if (sipRes == SIP_NULLPTR)
            {
                Py_INCREF(Py_None);
                return Py_None;
            }

            return SIPBytes_FromString(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QMetaType, sipName_typeName, doc_QMetaType_typeName);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QMetaType_isRegistered, "isRegistered(int) -> bool\n"
"isRegistered(self) -> bool");

extern "C" {static PyObject *meth_QMetaType_isRegistered(PyObject *, PyObject *);}
static PyObject *meth_QMetaType_isRegistered(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "i", &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes =  ::QMetaType::isRegistered(a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    {
        const  ::QMetaType *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMetaType, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isRegistered();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QMetaType, sipName_isRegistered, doc_QMetaType_isRegistered);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QMetaType_typeFlags, "typeFlags(int) -> QMetaType.TypeFlags");

extern "C" {static PyObject *meth_QMetaType_typeFlags(PyObject *, PyObject *);}
static PyObject *meth_QMetaType_typeFlags(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "i", &a0))
        {
             ::QMetaType::TypeFlags*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::QMetaType::TypeFlags( ::QMetaType::typeFlags(a0));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QMetaType_TypeFlags,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QMetaType, sipName_typeFlags, doc_QMetaType_typeFlags);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QMetaType_isValid, "isValid(self) -> bool");

extern "C" {static PyObject *meth_QMetaType_isValid(PyObject *, PyObject *);}
static PyObject *meth_QMetaType_isValid(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QMetaType *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMetaType, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isValid();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QMetaType, sipName_isValid, doc_QMetaType_isValid);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QMetaType_flags, "flags(self) -> QMetaType.TypeFlags");

extern "C" {static PyObject *meth_QMetaType_flags(PyObject *, PyObject *);}
static PyObject *meth_QMetaType_flags(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QMetaType *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMetaType, &sipCpp))
        {
             ::QMetaType::TypeFlags*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::QMetaType::TypeFlags(sipCpp->flags());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QMetaType_TypeFlags,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QMetaType, sipName_flags, doc_QMetaType_flags);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QMetaType_metaObjectForType, "metaObjectForType(int) -> QMetaObject");

extern "C" {static PyObject *meth_QMetaType_metaObjectForType(PyObject *, PyObject *);}
static PyObject *meth_QMetaType_metaObjectForType(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "i", &a0))
        {
            const  ::QMetaObject*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes =  ::QMetaType::metaObjectForType(a0);
            Py_END_ALLOW_THREADS

            return sipConvertFromType(const_cast< ::QMetaObject *>(sipRes),sipType_QMetaObject,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QMetaType, sipName_metaObjectForType, doc_QMetaType_metaObjectForType);

    return SIP_NULLPTR;
}


/* Call the instance's destructor. */
extern "C" {static void release_QMetaType(void *, int);}
static void release_QMetaType(void *sipCppV, int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast< ::QMetaType *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QMetaType(sipSimpleWrapper *);}
static void dealloc_QMetaType(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QMetaType(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QMetaType(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QMetaType(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QMetaType *sipCpp = SIP_NULLPTR;

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "i", &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::QMetaType(a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


static PyMethodDef methods_QMetaType[] = {
    {SIP_MLNAME_CAST(sipName_flags), meth_QMetaType_flags, METH_VARARGS, SIP_MLDOC_CAST(doc_QMetaType_flags)},
    {SIP_MLNAME_CAST(sipName_isRegistered), meth_QMetaType_isRegistered, METH_VARARGS, SIP_MLDOC_CAST(doc_QMetaType_isRegistered)},
    {SIP_MLNAME_CAST(sipName_isValid), meth_QMetaType_isValid, METH_VARARGS, SIP_MLDOC_CAST(doc_QMetaType_isValid)},
    {SIP_MLNAME_CAST(sipName_metaObjectForType), meth_QMetaType_metaObjectForType, METH_VARARGS, SIP_MLDOC_CAST(doc_QMetaType_metaObjectForType)},
    {SIP_MLNAME_CAST(sipName_type), meth_QMetaType_type, METH_VARARGS, SIP_MLDOC_CAST(doc_QMetaType_type)},
    {SIP_MLNAME_CAST(sipName_typeFlags), meth_QMetaType_typeFlags, METH_VARARGS, SIP_MLDOC_CAST(doc_QMetaType_typeFlags)},
    {SIP_MLNAME_CAST(sipName_typeName), meth_QMetaType_typeName, METH_VARARGS, SIP_MLDOC_CAST(doc_QMetaType_typeName)}
};

static sipEnumMemberDef enummembers_QMetaType[] = {
    {sipName_Bool, static_cast<int>( ::QMetaType::Bool), 130},
    {sipName_Char, static_cast<int>( ::QMetaType::Char), 130},
    {sipName_Double, static_cast<int>( ::QMetaType::Double), 130},
    {sipName_FirstGuiType, static_cast<int>( ::QMetaType::FirstGuiType), 130},
    {sipName_Float, static_cast<int>( ::QMetaType::Float), 130},
    {sipName_Int, static_cast<int>( ::QMetaType::Int), 130},
    {sipName_LastCoreType, static_cast<int>( ::QMetaType::LastCoreType), 130},
    {sipName_Long, static_cast<int>( ::QMetaType::Long), 130},
    {sipName_LongLong, static_cast<int>( ::QMetaType::LongLong), 130},
    {sipName_MovableType, static_cast<int>( ::QMetaType::MovableType), 131},
    {sipName_NeedsConstruction, static_cast<int>( ::QMetaType::NeedsConstruction), 131},
    {sipName_NeedsDestruction, static_cast<int>( ::QMetaType::NeedsDestruction), 131},
    {sipName_QBitArray, static_cast<int>( ::QMetaType::QBitArray), 130},
    {sipName_QBitmap, static_cast<int>( ::QMetaType::QBitmap), 130},
    {sipName_QBrush, static_cast<int>( ::QMetaType::QBrush), 130},
    {sipName_QByteArray, static_cast<int>( ::QMetaType::QByteArray), 130},
    {sipName_QChar, static_cast<int>( ::QMetaType::QChar), 130},
    {sipName_QColor, static_cast<int>( ::QMetaType::QColor), 130},
    {sipName_QCursor, static_cast<int>( ::QMetaType::QCursor), 130},
    {sipName_QDate, static_cast<int>( ::QMetaType::QDate), 130},
    {sipName_QDateTime, static_cast<int>( ::QMetaType::QDateTime), 130},
    {sipName_QEasingCurve, static_cast<int>( ::QMetaType::QEasingCurve), 130},
    {sipName_QFont, static_cast<int>( ::QMetaType::QFont), 130},
    {sipName_QIcon, static_cast<int>( ::QMetaType::QIcon), 130},
    {sipName_QImage, static_cast<int>( ::QMetaType::QImage), 130},
    {sipName_QJsonArray, static_cast<int>( ::QMetaType::QJsonArray), 130},
    {sipName_QJsonDocument, static_cast<int>( ::QMetaType::QJsonDocument), 130},
    {sipName_QJsonObject, static_cast<int>( ::QMetaType::QJsonObject), 130},
    {sipName_QJsonValue, static_cast<int>( ::QMetaType::QJsonValue), 130},
    {sipName_QKeySequence, static_cast<int>( ::QMetaType::QKeySequence), 130},
    {sipName_QLine, static_cast<int>( ::QMetaType::QLine), 130},
    {sipName_QLineF, static_cast<int>( ::QMetaType::QLineF), 130},
    {sipName_QLocale, static_cast<int>( ::QMetaType::QLocale), 130},
    {sipName_QMatrix, static_cast<int>( ::QMetaType::QMatrix), 130},
    {sipName_QMatrix4x4, static_cast<int>( ::QMetaType::QMatrix4x4), 130},
    {sipName_QModelIndex, static_cast<int>( ::QMetaType::QModelIndex), 130},
    {sipName_QObjectStar, static_cast<int>( ::QMetaType::QObjectStar), 130},
    {sipName_QPalette, static_cast<int>( ::QMetaType::QPalette), 130},
    {sipName_QPen, static_cast<int>( ::QMetaType::QPen), 130},
    {sipName_QPixmap, static_cast<int>( ::QMetaType::QPixmap), 130},
    {sipName_QPoint, static_cast<int>( ::QMetaType::QPoint), 130},
    {sipName_QPointF, static_cast<int>( ::QMetaType::QPointF), 130},
    {sipName_QPolygon, static_cast<int>( ::QMetaType::QPolygon), 130},
    {sipName_QPolygonF, static_cast<int>( ::QMetaType::QPolygonF), 130},
    {sipName_QQuaternion, static_cast<int>( ::QMetaType::QQuaternion), 130},
    {sipName_QRect, static_cast<int>( ::QMetaType::QRect), 130},
    {sipName_QRectF, static_cast<int>( ::QMetaType::QRectF), 130},
    {sipName_QRegExp, static_cast<int>( ::QMetaType::QRegExp), 130},
    {sipName_QRegion, static_cast<int>( ::QMetaType::QRegion), 130},
    {sipName_QRegularExpression, static_cast<int>( ::QMetaType::QRegularExpression), 130},
    {sipName_QSize, static_cast<int>( ::QMetaType::QSize), 130},
    {sipName_QSizeF, static_cast<int>( ::QMetaType::QSizeF), 130},
    {sipName_QSizePolicy, static_cast<int>( ::QMetaType::QSizePolicy), 130},
    {sipName_QString, static_cast<int>( ::QMetaType::QString), 130},
    {sipName_QStringList, static_cast<int>( ::QMetaType::QStringList), 130},
    {sipName_QTextFormat, static_cast<int>( ::QMetaType::QTextFormat), 130},
    {sipName_QTextLength, static_cast<int>( ::QMetaType::QTextLength), 130},
    {sipName_QTime, static_cast<int>( ::QMetaType::QTime), 130},
    {sipName_QTransform, static_cast<int>( ::QMetaType::QTransform), 130},
    {sipName_QUrl, static_cast<int>( ::QMetaType::QUrl), 130},
    {sipName_QUuid, static_cast<int>( ::QMetaType::QUuid), 130},
    {sipName_QVariant, static_cast<int>( ::QMetaType::QVariant), 130},
    {sipName_QVariantHash, static_cast<int>( ::QMetaType::QVariantHash), 130},
    {sipName_QVariantList, static_cast<int>( ::QMetaType::QVariantList), 130},
    {sipName_QVariantMap, static_cast<int>( ::QMetaType::QVariantMap), 130},
    {sipName_QVector2D, static_cast<int>( ::QMetaType::QVector2D), 130},
    {sipName_QVector3D, static_cast<int>( ::QMetaType::QVector3D), 130},
    {sipName_QVector4D, static_cast<int>( ::QMetaType::QVector4D), 130},
    {sipName_SChar, static_cast<int>( ::QMetaType::SChar), 130},
    {sipName_Short, static_cast<int>( ::QMetaType::Short), 130},
    {sipName_UChar, static_cast<int>( ::QMetaType::UChar), 130},
    {sipName_UInt, static_cast<int>( ::QMetaType::UInt), 130},
    {sipName_ULong, static_cast<int>( ::QMetaType::ULong), 130},
    {sipName_ULongLong, static_cast<int>( ::QMetaType::ULongLong), 130},
    {sipName_UShort, static_cast<int>( ::QMetaType::UShort), 130},
    {sipName_UnknownType, static_cast<int>( ::QMetaType::UnknownType), 130},
    {sipName_User, static_cast<int>( ::QMetaType::User), 130},
    {sipName_Void, static_cast<int>( ::QMetaType::Void), 130},
    {sipName_VoidStar, static_cast<int>( ::QMetaType::VoidStar), 130},
};

PyDoc_STRVAR(doc_QMetaType, "\1QMetaType(int)");


static pyqt4ClassPluginDef plugin_QMetaType = {
    SIP_NULLPTR,
    0,
    SIP_NULLPTR
};


sipClassTypeDef sipTypeDef_QtCore_QMetaType = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_CLASS,
        sipNameNr_QMetaType,
        {SIP_NULLPTR},
        &plugin_QMetaType
    },
    {
        sipNameNr_QMetaType,
        {0, 0, 1},
        7, methods_QMetaType,
        79, enummembers_QMetaType,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_QMetaType,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    SIP_NULLPTR,
    SIP_NULLPTR,
    init_type_QMetaType,
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
    dealloc_QMetaType,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    release_QMetaType,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};
