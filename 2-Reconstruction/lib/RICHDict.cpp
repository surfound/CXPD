// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME libdIRICHDict

/*******************************************************************/
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#define G__DICTIONARY
#include "RConfig.h"
#include "TClass.h"
#include "TDictAttributeMap.h"
#include "TInterpreter.h"
#include "TROOT.h"
#include "TBuffer.h"
#include "TMemberInspector.h"
#include "TInterpreter.h"
#include "TVirtualMutex.h"
#include "TError.h"

#ifndef G__ROOT
#define G__ROOT
#endif

#include "RtypesImp.h"
#include "TIsAProxy.h"
#include "TFileMergeInfo.h"
#include <algorithm>
#include "TCollectionProxyInfo.h"
/*******************************************************************/

#include "TDataMember.h"

// Since CINT ignores the std namespace, we need to do so in this file.
namespace std {} using namespace std;

// Header files passed as explicit arguments
#include "inc/MyRootGui.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void delete_MyRootGui(void *p);
   static void deleteArray_MyRootGui(void *p);
   static void destruct_MyRootGui(void *p);
   static void streamer_MyRootGui(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MyRootGui*)
   {
      ::MyRootGui *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::MyRootGui >(0);
      static ::ROOT::TGenericClassInfo 
         instance("MyRootGui", ::MyRootGui::Class_Version(), "inc/MyRootGui.h", 27,
                  typeid(::MyRootGui), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::MyRootGui::Dictionary, isa_proxy, 16,
                  sizeof(::MyRootGui) );
      instance.SetDelete(&delete_MyRootGui);
      instance.SetDeleteArray(&deleteArray_MyRootGui);
      instance.SetDestructor(&destruct_MyRootGui);
      instance.SetStreamerFunc(&streamer_MyRootGui);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MyRootGui*)
   {
      return GenerateInitInstanceLocal((::MyRootGui*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::MyRootGui*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr MyRootGui::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *MyRootGui::Class_Name()
{
   return "MyRootGui";
}

//______________________________________________________________________________
const char *MyRootGui::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MyRootGui*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int MyRootGui::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MyRootGui*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MyRootGui::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MyRootGui*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MyRootGui::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MyRootGui*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void MyRootGui::Streamer(TBuffer &R__b)
{
   // Stream an object of class MyRootGui.

   TGMainFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_MyRootGui(void *p) {
      delete ((::MyRootGui*)p);
   }
   static void deleteArray_MyRootGui(void *p) {
      delete [] ((::MyRootGui*)p);
   }
   static void destruct_MyRootGui(void *p) {
      typedef ::MyRootGui current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_MyRootGui(TBuffer &buf, void *obj) {
      ((::MyRootGui*)obj)->::MyRootGui::Streamer(buf);
   }
} // end of namespace ROOT for class ::MyRootGui

namespace {
  void TriggerDictionaryInitialization_RICHDict_Impl() {
    static const char* headers[] = {
"inc/MyRootGui.h",
0
    };
    static const char* includePaths[] = {
"/home/stuf/root6-build/include",
"/home/stuf/gitcxpd/CXPD/2-Reconstruction/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "RICHDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate("$clingAutoload$inc/MyRootGui.h")))  MyRootGui;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "RICHDict dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "inc/MyRootGui.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"MyRootGui", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("RICHDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_RICHDict_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_RICHDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_RICHDict() {
  TriggerDictionaryInitialization_RICHDict_Impl();
}
