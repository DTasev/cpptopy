/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.19.7
 */

#include "sipAPIpng_reader.h"

#line 6 "png_reader.sip"
  #include <../src/png_reader.h>
#line 12 "./sippng_readerWorld.cpp"

#line 27 "/usr/share/sip/PyQt5//QtCore/qstring.sip"
#include <qstring.h>
#line 16 "./sippng_readerWorld.cpp"


extern "C" {static PyObject *meth_World_set(PyObject *, PyObject *);}
static PyObject *meth_World_set(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const char* a0;
         ::World *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bs", &sipSelf, sipType_World, &sipCpp, &a0))
        {
            sipCpp->set(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_World, sipName_set, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_World_get(PyObject *, PyObject *);}
static PyObject *meth_World_get(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::World *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_World, &sipCpp))
        {
             ::QString*sipRes;

            sipRes = new  ::QString(sipCpp->get());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_World, sipName_get, NULL);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_World(void *, int);}
static void release_World(void *sipCppV, int)
{
    delete reinterpret_cast< ::World *>(sipCppV);
}


extern "C" {static void assign_World(void *, SIP_SSIZE_T, void *);}
static void assign_World(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::World *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::World *>(sipSrc);
}


extern "C" {static void *array_World(SIP_SSIZE_T);}
static void *array_World(SIP_SSIZE_T sipNrElem)
{
    return new  ::World[sipNrElem];
}


extern "C" {static void *copy_World(const void *, SIP_SSIZE_T);}
static void *copy_World(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::World(reinterpret_cast<const  ::World *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_World(sipSimpleWrapper *);}
static void dealloc_World(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_World(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_World(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_World(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::World *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new  ::World();

            return sipCpp;
        }
    }

    {
        const  ::World* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_World, &a0))
        {
            sipCpp = new  ::World(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_World[] = {
    {SIP_MLNAME_CAST(sipName_get), meth_World_get, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_set), meth_World_set, METH_VARARGS, NULL}
};


static pyqt5ClassPluginDef plugin_World = {
    0,
    0,
    0,
    0
};


sipClassTypeDef sipTypeDef_png_reader_World = {
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_World,
        {0},
        &plugin_World
    },
    {
        sipNameNr_World,
        {0, 0, 1},
        2, methods_World,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    -1,
    -1,
    0,
    0,
    init_type_World,
    0,
    0,
#if PY_MAJOR_VERSION >= 3
    0,
    0,
#else
    0,
    0,
    0,
    0,
#endif
    dealloc_World,
    assign_World,
    array_World,
    copy_World,
    release_World,
    0,
    0,
    0,
    0,
    0,
    0,
    0
};