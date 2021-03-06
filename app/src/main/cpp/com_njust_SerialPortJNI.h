  #include <jni.h>
#include <string>

#ifndef _Included_com_njust_SerialPortJNI
#define _Included_com_njust_SerialPortJNI
#ifdef __cplusplus
extern "C" {
#endif


JNIEXPORT jint JNICALL Java_com_njust_SerialPortJNI_open
  (JNIEnv *, jobject, jint, jint, jint, jchar, jint);
//
//
// * Class:     com_njust_SerialPortJNI
// * Method:    close
// * Signature: (I)I
//

JNIEXPORT jint JNICALL Java_com_njust_SerialPortJNI_close
  (JNIEnv *, jobject, jint);
//
//
// * Class:     com_njust_SerialPortJNI
// * Method:    read
// * Signature: (I)[B
//

JNIEXPORT jbyteArray JNICALL Java_com_njust_SerialPortJNI_read
  (JNIEnv *, jobject, jint);
//
//
// * Class:     com_njust_SerialPortJNI
// * Method:    write
// * Signature: (I[BI)I
//

JNIEXPORT jint JNICALL Java_com_njust_SerialPortJNI_write
  (JNIEnv *, jobject, jint, jbyteArray, jint);
//
#ifdef __cplusplus
}
#endif
#endif
