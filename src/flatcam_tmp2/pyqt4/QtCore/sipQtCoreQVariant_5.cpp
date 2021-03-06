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

#line 265 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp2/pyqt4/sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 29 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp2/pyqt4/QtCore/sipQtCoreQVariant_5.cpp"



extern "C" {static void assign_QVariant_5(void *, SIP_SSIZE_T, void *);}
static void assign_QVariant_5(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QVariant *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QVariant *>(sipSrc);
}


extern "C" {static void *array_QVariant_5(SIP_SSIZE_T);}
static void *array_QVariant_5(SIP_SSIZE_T sipNrElem)
{
    return new  ::QVariant[sipNrElem];
}


extern "C" {static void *copy_QVariant_5(const void *, SIP_SSIZE_T);}
static void *copy_QVariant_5(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::QVariant(reinterpret_cast<const  ::QVariant *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_QVariant_5(void *, int);}
static void release_QVariant_5(void *ptr, int)
{
    Py_BEGIN_ALLOW_THREADS
    delete reinterpret_cast< ::QVariant *>(ptr);
    Py_END_ALLOW_THREADS
}



extern "C" {static int convertTo_QVariant_5(PyObject *, void **, int *, PyObject *);}
static int convertTo_QVariant_5(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
     ::QVariant **sipCppPtr = reinterpret_cast< ::QVariant **>(sipCppPtrV);

#line 269 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp2/pyqt4/sip/QtCore/qvariant.sip"
    if (!sipIsErr)
        // We can always convert to a QVariant.
        return 1;

    // If it is a null QVariant then just return it.
    if (Py_TYPE(sipPy) == sipTypeAsPyTypeObject(sipType_QPyNullVariant))
    {
        *sipCppPtr = reinterpret_cast<QVariant *>(
                sipConvertToType(sipPy, sipType_QPyNullVariant, sipTransferObj,
                        SIP_NO_CONVERTORS, 0, sipIsErr));

        return 0;
    }

    QVariant var = qpycore_PyObject_AsQVariant(sipPy, sipIsErr);

    if (*sipIsErr)
        return 0;

    *sipCppPtr = new QVariant(var);

    return sipGetState(sipTransferObj);
#line 93 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp2/pyqt4/QtCore/sipQtCoreQVariant_5.cpp"
}


extern "C" {static PyObject *convertFrom_QVariant_5(void *, PyObject *);}
static PyObject *convertFrom_QVariant_5(void *sipCppV, PyObject *)
{
    ::QVariant *sipCpp = reinterpret_cast< ::QVariant *>(sipCppV);

#line 294 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp2/pyqt4/sip/QtCore/qvariant.sip"
    return qpycore_PyObject_FromQVariant(*sipCpp);
#line 104 "/home/bcthund/OneDrive/Projects/github/flatcam_installer/src/flatcam_tmp2/pyqt4/QtCore/sipQtCoreQVariant_5.cpp"
}


extern "C" {static PyObject *meth_QVariant_5_nameToType(PyObject *, PyObject *);}
static PyObject *meth_QVariant_5_nameToType(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const char* a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "s", &a0))
        {
             ::QVariant::Type sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes =  ::QVariant::nameToType(a0);
            Py_END_ALLOW_THREADS

            return sipConvertFromEnum(static_cast<int>(sipRes), sipType_QVariant_Type);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoFunction(sipParseErr, sipName_nameToType, SIP_NULLPTR);

    return SIP_NULLPTR;
}


extern "C" {static PyObject *meth_QVariant_5_typeToName(PyObject *, PyObject *);}
static PyObject *meth_QVariant_5_typeToName(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "i", &a0))
        {
            const char*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes =  ::QVariant::typeToName(a0);
            Py_END_ALLOW_THREADS

            if (sipRes == SIP_NULLPTR)
            {
                Py_INCREF(Py_None);
                return Py_None;
            }

            return SIPBytes_FromString(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoFunction(sipParseErr, sipName_typeToName, SIP_NULLPTR);

    return SIP_NULLPTR;
}


static PyMethodDef methods_QVariant_5[] = {
    {SIP_MLNAME_CAST(sipName_nameToType), meth_QVariant_5_nameToType, METH_VARARGS, SIP_NULLPTR},
    {SIP_MLNAME_CAST(sipName_typeToName), meth_QVariant_5_typeToName, METH_VARARGS, SIP_NULLPTR}
};

static sipEnumMemberDef enummembers_QVariant_5[] = {
    {sipName_BitArray, static_cast<int>( ::QVariant::BitArray), 248},
    {sipName_Bitmap, static_cast<int>( ::QVariant::Bitmap), 248},
    {sipName_Bool, static_cast<int>( ::QVariant::Bool), 248},
    {sipName_Brush, static_cast<int>( ::QVariant::Brush), 248},
    {sipName_ByteArray, static_cast<int>( ::QVariant::ByteArray), 248},
    {sipName_Char, static_cast<int>( ::QVariant::Char), 248},
    {sipName_Color, static_cast<int>( ::QVariant::Color), 248},
    {sipName_Cursor, static_cast<int>( ::QVariant::Cursor), 248},
    {sipName_Date, static_cast<int>( ::QVariant::Date), 248},
    {sipName_DateTime, static_cast<int>( ::QVariant::DateTime), 248},
    {sipName_Double, static_cast<int>( ::QVariant::Double), 248},
    {sipName_EasingCurve, static_cast<int>( ::QVariant::EasingCurve), 248},
    {sipName_Font, static_cast<int>( ::QVariant::Font), 248},
    {sipName_Hash, static_cast<int>( ::QVariant::Hash), 248},
    {sipName_Icon, static_cast<int>( ::QVariant::Icon), 248},
    {sipName_Image, static_cast<int>( ::QVariant::Image), 248},
    {sipName_Int, static_cast<int>( ::QVariant::Int), 248},
    {sipName_Invalid, static_cast<int>( ::QVariant::Invalid), 248},
    {sipName_KeySequence, static_cast<int>( ::QVariant::KeySequence), 248},
    {sipName_Line, static_cast<int>( ::QVariant::Line), 248},
    {sipName_LineF, static_cast<int>( ::QVariant::LineF), 248},
    {sipName_List, static_cast<int>( ::QVariant::List), 248},
    {sipName_Locale, static_cast<int>( ::QVariant::Locale), 248},
    {sipName_LongLong, static_cast<int>( ::QVariant::LongLong), 248},
    {sipName_Map, static_cast<int>( ::QVariant::Map), 248},
    {sipName_Matrix, static_cast<int>( ::QVariant::Matrix), 248},
    {sipName_Matrix4x4, static_cast<int>( ::QVariant::Matrix4x4), 248},
    {sipName_ModelIndex, static_cast<int>( ::QVariant::ModelIndex), 248},
    {sipName_Palette, static_cast<int>( ::QVariant::Palette), 248},
    {sipName_Pen, static_cast<int>( ::QVariant::Pen), 248},
    {sipName_Pixmap, static_cast<int>( ::QVariant::Pixmap), 248},
    {sipName_Point, static_cast<int>( ::QVariant::Point), 248},
    {sipName_PointF, static_cast<int>( ::QVariant::PointF), 248},
    {sipName_Polygon, static_cast<int>( ::QVariant::Polygon), 248},
    {sipName_PolygonF, static_cast<int>( ::QVariant::PolygonF), 248},
    {sipName_Quaternion, static_cast<int>( ::QVariant::Quaternion), 248},
    {sipName_Rect, static_cast<int>( ::QVariant::Rect), 248},
    {sipName_RectF, static_cast<int>( ::QVariant::RectF), 248},
    {sipName_RegExp, static_cast<int>( ::QVariant::RegExp), 248},
    {sipName_Region, static_cast<int>( ::QVariant::Region), 248},
    {sipName_RegularExpression, static_cast<int>( ::QVariant::RegularExpression), 248},
    {sipName_Size, static_cast<int>( ::QVariant::Size), 248},
    {sipName_SizeF, static_cast<int>( ::QVariant::SizeF), 248},
    {sipName_SizePolicy, static_cast<int>( ::QVariant::SizePolicy), 248},
    {sipName_String, static_cast<int>( ::QVariant::String), 248},
    {sipName_StringList, static_cast<int>( ::QVariant::StringList), 248},
    {sipName_TextFormat, static_cast<int>( ::QVariant::TextFormat), 248},
    {sipName_TextLength, static_cast<int>( ::QVariant::TextLength), 248},
    {sipName_Time, static_cast<int>( ::QVariant::Time), 248},
    {sipName_Transform, static_cast<int>( ::QVariant::Transform), 248},
    {sipName_UInt, static_cast<int>( ::QVariant::UInt), 248},
    {sipName_ULongLong, static_cast<int>( ::QVariant::ULongLong), 248},
    {sipName_Url, static_cast<int>( ::QVariant::Url), 248},
    {sipName_UserType, static_cast<int>( ::QVariant::UserType), 248},
    {sipName_Uuid, static_cast<int>( ::QVariant::Uuid), 248},
    {sipName_Vector2D, static_cast<int>( ::QVariant::Vector2D), 248},
    {sipName_Vector3D, static_cast<int>( ::QVariant::Vector3D), 248},
    {sipName_Vector4D, static_cast<int>( ::QVariant::Vector4D), 248},
};


sipMappedTypeDef sipTypeDef_QtCore_QVariant_5 = {
    {
        5,
        SIP_NULLPTR,
        0,
        SIP_TYPE_ALLOW_NONE|SIP_TYPE_MAPPED,
        sipNameNr_QVariant,     /* QVariant */
        {0},
        0
    },
    {
        sipNameNr_QVariant,
        {0, 0, 1},
        2, methods_QVariant_5,
        58, enummembers_QVariant_5,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
    },
    assign_QVariant_5,
    array_QVariant_5,
    copy_QVariant_5,
    release_QVariant_5,
    convertTo_QVariant_5,
    convertFrom_QVariant_5
};
