#ifndef STDC_UTIL_STRING_STRING
#define STDC_UTIL_STRING_STRING

#include "stdc/lib.h"

typedef struct StringObject StringObject;

typedef struct {

    // Construction/destruction
    Ptr             (*new)          ();
    void            (*init)         (StringObject*);
    void            (*del)          (Ptr);
    
    // Methods
    void            (*set)          (StringObject*, CStr);
    StringObject*   (*copy)         (StringObject*);
    bool            (*equals)       (StringObject*, StringObject*);

    // Getters
    long            (*size)         (StringObject*);
    CStr            (*cstr)         (StringObject*);

    // Useful methods
    StringObject*   (*format)       (StringObject*, ...);
    
    // TODO: implement
//    String*     (*rstrip)       (String*);
//    String*     (*lstrip)       (String*);
//    String*     (*strip)        (String*);
//    List*       (*split)        (String*, char);
//    List*       (*splitstr)     (String*, String*);
//    bool        (*beginswith)   (String*, String*);
//    bool        (*endswith)     (String*, String*);
//    bool        (*contains)     (String*, String*);
//    String*     (*substr)       (String*, long, long);
//    long        (*hash)         (String*);
    
} StringVtable;

extern StringVtable String;

#endif
