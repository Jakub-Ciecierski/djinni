// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from token.djinni

#include "NativeToken.hpp"  // my header

namespace djinni_generated {

NativeToken::NativeToken() : djinni::JniInterface<::Token, NativeToken>("com/dropbox/djinni/test/Token$CppProxy") {}

NativeToken::JavaProxy::JavaProxy(jobject obj) : JavaProxyCacheEntry(obj) {}
using namespace ::djinni_generated;

CJNIEXPORT void JNICALL Java_com_dropbox_djinni_test_Token_00024CppProxy_nativeDestroy(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        delete reinterpret_cast<djinni::CppProxyHandle<::Token>*>(nativeRef);
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

}  // namespace djinni_generated
