#define PY_SSIZE_T_CLEAN
#include <Python.h>

static PyObject *UIError;
PyMODINIT_FUNC PyInit_engineui(void);
static PyObject *init(PyObject *self, PyObject *args);
static PyMethodDef UIMethods[2];
static struct PyModuleDef UIModule;
