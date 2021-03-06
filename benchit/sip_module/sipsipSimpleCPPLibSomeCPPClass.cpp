/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.19.7
 */

#include "sipAPIsipSimpleCPPLib.h"

#line 7 "sipSimpleCPPLib.sip"
  #include <../someclass.h>
#line 12 "./sipsipSimpleCPPLibSomeCPPClass.cpp"



extern "C" {static PyObject *meth_SomeCPPClass_setX(PyObject *, PyObject *);}
static PyObject *meth_SomeCPPClass_setX(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        float a0;
         ::SomeCPPClass *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bf", &sipSelf, sipType_SomeCPPClass, &sipCpp, &a0))
        {
            sipCpp->setX(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_SomeCPPClass, sipName_setX, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_SomeCPPClass_doSetX(PyObject *, PyObject *);}
static PyObject *meth_SomeCPPClass_doSetX(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
         ::SomeCPPClass *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_SomeCPPClass, &sipCpp, &a0))
        {
            sipCpp->doSetX(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_SomeCPPClass, sipName_doSetX, NULL);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_SomeCPPClass(void *, int);}
static void release_SomeCPPClass(void *sipCppV, int)
{
    delete reinterpret_cast< ::SomeCPPClass *>(sipCppV);
}


extern "C" {static void assign_SomeCPPClass(void *, SIP_SSIZE_T, void *);}
static void assign_SomeCPPClass(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::SomeCPPClass *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::SomeCPPClass *>(sipSrc);
}


extern "C" {static void *array_SomeCPPClass(SIP_SSIZE_T);}
static void *array_SomeCPPClass(SIP_SSIZE_T sipNrElem)
{
    return new  ::SomeCPPClass[sipNrElem];
}


extern "C" {static void *copy_SomeCPPClass(const void *, SIP_SSIZE_T);}
static void *copy_SomeCPPClass(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::SomeCPPClass(reinterpret_cast<const  ::SomeCPPClass *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_SomeCPPClass(sipSimpleWrapper *);}
static void dealloc_SomeCPPClass(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_SomeCPPClass(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_SomeCPPClass(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_SomeCPPClass(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::SomeCPPClass *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new  ::SomeCPPClass();

            return sipCpp;
        }
    }

    {
        const  ::SomeCPPClass* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_SomeCPPClass, &a0))
        {
            sipCpp = new  ::SomeCPPClass(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_SomeCPPClass[] = {
    {SIP_MLNAME_CAST(sipName_doSetX), meth_SomeCPPClass_doSetX, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setX), meth_SomeCPPClass_setX, METH_VARARGS, NULL}
};


static pyqt5ClassPluginDef plugin_SomeCPPClass = {
    0,
    0,
    0,
    0
};


sipClassTypeDef sipTypeDef_sipSimpleCPPLib_SomeCPPClass = {
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_SomeCPPClass,
        {0},
        &plugin_SomeCPPClass
    },
    {
        sipNameNr_SomeCPPClass,
        {0, 0, 1},
        2, methods_SomeCPPClass,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    -1,
    -1,
    0,
    0,
    init_type_SomeCPPClass,
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
    dealloc_SomeCPPClass,
    assign_SomeCPPClass,
    array_SomeCPPClass,
    copy_SomeCPPClass,
    release_SomeCPPClass,
    0,
    0,
    0,
    0,
    0,
    0,
    0
};
