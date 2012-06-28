/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class JOMAPI */

#ifndef _Included_JOMAPI
#define _Included_JOMAPI
#ifdef __cplusplus
extern "C" {
#endif
#undef JOMAPI_OM_VERSION
#define JOMAPI_OM_VERSION 103L
#undef JOMAPI_OM_DEVICE_REMOVED
#define JOMAPI_OM_DEVICE_REMOVED 0L
#undef JOMAPI_OM_DEVICE_CONNECTED
#define JOMAPI_OM_DEVICE_CONNECTED 1L
#undef JOMAPI_OM_MEMORY_HEALTH_ERROR
#define JOMAPI_OM_MEMORY_HEALTH_ERROR 1L
#undef JOMAPI_OM_MEMORY_HEALTH_WARNING
#define JOMAPI_OM_MEMORY_HEALTH_WARNING 8L
#undef JOMAPI_OM_LED_UNKNOWN
#define JOMAPI_OM_LED_UNKNOWN -2L
#undef JOMAPI_OM_LED_AUTO
#define JOMAPI_OM_LED_AUTO -1L
#undef JOMAPI_OM_LED_OFF
#define JOMAPI_OM_LED_OFF 0L
#undef JOMAPI_OM_LED_BLUE
#define JOMAPI_OM_LED_BLUE 1L
#undef JOMAPI_OM_LED_GREEN
#define JOMAPI_OM_LED_GREEN 2L
#undef JOMAPI_OM_LED_CYAN
#define JOMAPI_OM_LED_CYAN 3L
#undef JOMAPI_OM_LED_RED
#define JOMAPI_OM_LED_RED 4L
#undef JOMAPI_OM_LED_MAGENTA
#define JOMAPI_OM_LED_MAGENTA 5L
#undef JOMAPI_OM_LED_YELLOW
#define JOMAPI_OM_LED_YELLOW 6L
#undef JOMAPI_OM_LED_WHITE
#define JOMAPI_OM_LED_WHITE 7L
#undef JOMAPI_OM_METADATA_SIZE
#define JOMAPI_OM_METADATA_SIZE 448L
#undef JOMAPI_OM_ERASE_NONE
#define JOMAPI_OM_ERASE_NONE 0L
#undef JOMAPI_OM_ERASE_DELETE
#define JOMAPI_OM_ERASE_DELETE 1L
#undef JOMAPI_OM_ERASE_QUICKFORMAT
#define JOMAPI_OM_ERASE_QUICKFORMAT 2L
#undef JOMAPI_OM_ERASE_WIPE
#define JOMAPI_OM_ERASE_WIPE 3L
#undef JOMAPI_OM_ACCEL_DEFAULT_RATE
#define JOMAPI_OM_ACCEL_DEFAULT_RATE 100L
#undef JOMAPI_OM_ACCEL_DEFAULT_RANGE
#define JOMAPI_OM_ACCEL_DEFAULT_RANGE 8L
#undef JOMAPI_OM_DOWNLOAD_NONE
#define JOMAPI_OM_DOWNLOAD_NONE 0L
#undef JOMAPI_OM_DOWNLOAD_ERROR
#define JOMAPI_OM_DOWNLOAD_ERROR 1L
#undef JOMAPI_OM_DOWNLOAD_PROGRESS
#define JOMAPI_OM_DOWNLOAD_PROGRESS 2L
#undef JOMAPI_OM_DOWNLOAD_COMPLETE
#define JOMAPI_OM_DOWNLOAD_COMPLETE 3L
#undef JOMAPI_OM_DOWNLOAD_CANCELLED
#define JOMAPI_OM_DOWNLOAD_CANCELLED 4L
#undef JOMAPI_OM_TRUE
#define JOMAPI_OM_TRUE 1L
#undef JOMAPI_OM_FALSE
#define JOMAPI_OM_FALSE 0L
#undef JOMAPI_OM_OK
#define JOMAPI_OM_OK 0L
#undef JOMAPI_OM_E_FAIL
#define JOMAPI_OM_E_FAIL -1L
#undef JOMAPI_OM_E_UNEXPECTED
#define JOMAPI_OM_E_UNEXPECTED -2L
#undef JOMAPI_OM_E_NOT_VALID_STATE
#define JOMAPI_OM_E_NOT_VALID_STATE -3L
#undef JOMAPI_OM_E_OUT_OF_MEMORY
#define JOMAPI_OM_E_OUT_OF_MEMORY -4L
#undef JOMAPI_OM_E_INVALID_ARG
#define JOMAPI_OM_E_INVALID_ARG -5L
#undef JOMAPI_OM_E_POINTER
#define JOMAPI_OM_E_POINTER -6L
#undef JOMAPI_OM_E_NOT_IMPLEMENTED
#define JOMAPI_OM_E_NOT_IMPLEMENTED -7L
#undef JOMAPI_OM_E_ABORT
#define JOMAPI_OM_E_ABORT -8L
#undef JOMAPI_OM_E_ACCESS_DENIED
#define JOMAPI_OM_E_ACCESS_DENIED -9L
#undef JOMAPI_OM_E_INVALID_DEVICE
#define JOMAPI_OM_E_INVALID_DEVICE -10L
#undef JOMAPI_OM_E_UNEXPECTED_RESPONSE
#define JOMAPI_OM_E_UNEXPECTED_RESPONSE -11L
#undef JOMAPI_OM_E_LOCKED
#define JOMAPI_OM_E_LOCKED -12L
#undef JOMAPI_OM_VALUE_DEVICEID
#define JOMAPI_OM_VALUE_DEVICEID 3L
#undef JOMAPI_OM_VALUE_SESSIONID
#define JOMAPI_OM_VALUE_SESSIONID 4L
#undef JOMAPI_OM_VALUE_SEQUENCEID
#define JOMAPI_OM_VALUE_SEQUENCEID 5L
#undef JOMAPI_OM_VALUE_LIGHT
#define JOMAPI_OM_VALUE_LIGHT 7L
#undef JOMAPI_OM_VALUE_TEMPERATURE
#define JOMAPI_OM_VALUE_TEMPERATURE 8L
#undef JOMAPI_OM_VALUE_EVENTS
#define JOMAPI_OM_VALUE_EVENTS 9L
#undef JOMAPI_OM_VALUE_BATTERY
#define JOMAPI_OM_VALUE_BATTERY 10L
#undef JOMAPI_OM_VALUE_SAMPLERATE
#define JOMAPI_OM_VALUE_SAMPLERATE 11L
#undef JOMAPI_OM_VALUE_TEMPERATURE_MC
#define JOMAPI_OM_VALUE_TEMPERATURE_MC 108L
#undef JOMAPI_OM_VALUE_BATTERY_MV
#define JOMAPI_OM_VALUE_BATTERY_MV 110L
/*
 * Class:     JOMAPI
 * Method:    OmStartup
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_JOMAPI_OmStartup
  (JNIEnv *, jclass, jint);

/*
 * Class:     JOMAPI
 * Method:    OmShutdown
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_JOMAPI_OmShutdown
  (JNIEnv *, jclass);

/*
 * Class:     JOMAPI
 * Method:    OmSetLogStream
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_JOMAPI_OmSetLogStream
  (JNIEnv *, jclass, jint);

/*
 * Class:     JOMAPI
 * Method:    OmGetDeviceIds
 * Signature: ([II)I
 */
JNIEXPORT jint JNICALL Java_JOMAPI_OmGetDeviceIds
  (JNIEnv *, jclass, jintArray, jint);

/*
 * Class:     JOMAPI
 * Method:    OmGetVersion
 * Signature: (I[I[I)I
 */
JNIEXPORT jint JNICALL Java_JOMAPI_OmGetVersion
  (JNIEnv *, jclass, jint, jintArray, jintArray);

/*
 * Class:     JOMAPI
 * Method:    OmGetBatteryLevel
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_JOMAPI_OmGetBatteryLevel
  (JNIEnv *, jclass, jint);

/*
 * Class:     JOMAPI
 * Method:    OmSelfTest
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_JOMAPI_OmSelfTest
  (JNIEnv *, jclass, jint);

/*
 * Class:     JOMAPI
 * Method:    OmGetMemoryHealth
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_JOMAPI_OmGetMemoryHealth
  (JNIEnv *, jclass, jint);

/*
 * Class:     JOMAPI
 * Method:    OmGetBatteryHealth
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_JOMAPI_OmGetBatteryHealth
  (JNIEnv *, jclass, jint);

/*
 * Class:     JOMAPI
 * Method:    OmGetAccelerometer
 * Signature: (I[I)I
 */
JNIEXPORT jint JNICALL Java_JOMAPI_OmGetAccelerometer
  (JNIEnv *, jclass, jint, jintArray);

/*
 * Class:     JOMAPI
 * Method:    OmGetTime
 * Signature: (I[J)I
 */
JNIEXPORT jint JNICALL Java_JOMAPI_OmGetTime
  (JNIEnv *, jclass, jint, jlongArray);

/*
 * Class:     JOMAPI
 * Method:    OmSetTime
 * Signature: (IJ)I
 */
JNIEXPORT jint JNICALL Java_JOMAPI_OmSetTime
  (JNIEnv *, jclass, jint, jlong);

/*
 * Class:     JOMAPI
 * Method:    OmSetLed
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_JOMAPI_OmSetLed
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     JOMAPI
 * Method:    OmIsLocked
 * Signature: (I[I)I
 */
JNIEXPORT jint JNICALL Java_JOMAPI_OmIsLocked
  (JNIEnv *, jclass, jint, jintArray);

/*
 * Class:     JOMAPI
 * Method:    OmSetLock
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_JOMAPI_OmSetLock
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     JOMAPI
 * Method:    OmUnlock
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_JOMAPI_OmUnlock
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     JOMAPI
 * Method:    OmSetEcc
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_JOMAPI_OmSetEcc
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     JOMAPI
 * Method:    OmGetEcc
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_JOMAPI_OmGetEcc
  (JNIEnv *, jclass, jint);

/*
 * Class:     JOMAPI
 * Method:    OmGetDelays
 * Signature: (I[J[J)I
 */
JNIEXPORT jint JNICALL Java_JOMAPI_OmGetDelays
  (JNIEnv *, jclass, jint, jlongArray, jlongArray);

/*
 * Class:     JOMAPI
 * Method:    OmSetDelays
 * Signature: (IJJ)I
 */
JNIEXPORT jint JNICALL Java_JOMAPI_OmSetDelays
  (JNIEnv *, jclass, jint, jlong, jlong);

/*
 * Class:     JOMAPI
 * Method:    OmGetSessionId
 * Signature: (I[J)I
 */
JNIEXPORT jint JNICALL Java_JOMAPI_OmGetSessionId
  (JNIEnv *, jclass, jint, jlongArray);

/*
 * Class:     JOMAPI
 * Method:    OmSetSessionId
 * Signature: (IJ)I
 */
JNIEXPORT jint JNICALL Java_JOMAPI_OmSetSessionId
  (JNIEnv *, jclass, jint, jlong);

/*
 * Class:     JOMAPI
 * Method:    OmGetMetadata
 * Signature: (ILjava/lang/StringBuffer;)I
 */
JNIEXPORT jint JNICALL Java_JOMAPI_OmGetMetadata
  (JNIEnv *, jclass, jint, jobject);

/*
 * Class:     JOMAPI
 * Method:    OmSetMetadata
 * Signature: (ILjava/lang/String;I)I
 */
JNIEXPORT jint JNICALL Java_JOMAPI_OmSetMetadata
  (JNIEnv *, jclass, jint, jstring, jint);

/*
 * Class:     JOMAPI
 * Method:    OmGetLastConfigTime
 * Signature: (I[J)I
 */
JNIEXPORT jint JNICALL Java_JOMAPI_OmGetLastConfigTime
  (JNIEnv *, jclass, jint, jlongArray);

/*
 * Class:     JOMAPI
 * Method:    OmEraseDataAndCommit
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_JOMAPI_OmEraseDataAndCommit
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     JOMAPI
 * Method:    OmGetAccelConfig
 * Signature: (I[I[I)I
 */
JNIEXPORT jint JNICALL Java_JOMAPI_OmGetAccelConfig
  (JNIEnv *, jclass, jint, jintArray, jintArray);

/*
 * Class:     JOMAPI
 * Method:    OmSetAccelConfig
 * Signature: (III)I
 */
JNIEXPORT jint JNICALL Java_JOMAPI_OmSetAccelConfig
  (JNIEnv *, jclass, jint, jint, jint);

/*
 * Class:     JOMAPI
 * Method:    OmGetDataFilename
 * Signature: (ILjava/lang/StringBuffer;)I
 */
JNIEXPORT jint JNICALL Java_JOMAPI_OmGetDataFilename
  (JNIEnv *, jclass, jint, jobject);

/*
 * Class:     JOMAPI
 * Method:    OmGetDataRange
 * Signature: (I[I[I[I[J[J)I
 */
JNIEXPORT jint JNICALL Java_JOMAPI_OmGetDataRange
  (JNIEnv *, jclass, jint, jintArray, jintArray, jintArray, jlongArray, jlongArray);

/*
 * Class:     JOMAPI
 * Method:    OmBeginDownloading
 * Signature: (IIILjava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_JOMAPI_OmBeginDownloading
  (JNIEnv *, jclass, jint, jint, jint, jstring);

/*
 * Class:     JOMAPI
 * Method:    OmQueryDownload
 * Signature: (I[I[I)I
 */
JNIEXPORT jint JNICALL Java_JOMAPI_OmQueryDownload
  (JNIEnv *, jclass, jint, jintArray, jintArray);

/*
 * Class:     JOMAPI
 * Method:    OmWaitForDownload
 * Signature: (I[I[I)I
 */
JNIEXPORT jint JNICALL Java_JOMAPI_OmWaitForDownload
  (JNIEnv *, jclass, jint, jintArray, jintArray);

/*
 * Class:     JOMAPI
 * Method:    OmCancelDownload
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_JOMAPI_OmCancelDownload
  (JNIEnv *, jclass, jint);

/*
 * Class:     JOMAPI
 * Method:    OmErrorString
 * Signature: (I)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_JOMAPI_OmErrorString
  (JNIEnv *, jclass, jint);

/*
 * Class:     JOMAPI
 * Method:    OmReaderOpen
 * Signature: (Ljava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_JOMAPI_OmReaderOpen
  (JNIEnv *, jclass, jstring);

/*
 * Class:     JOMAPI
 * Method:    OmReaderDataRange
 * Signature: (J[I[I[I[J[J)I
 */
JNIEXPORT jint JNICALL Java_JOMAPI_OmReaderDataRange
  (JNIEnv *, jclass, jlong, jintArray, jintArray, jintArray, jlongArray, jlongArray);

/*
 * Class:     JOMAPI
 * Method:    OmReaderMetadata
 * Signature: (J[I[J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_JOMAPI_OmReaderMetadata
  (JNIEnv *, jclass, jlong, jintArray, jlongArray);

/*
 * Class:     JOMAPI
 * Method:    OmReaderDataBlockPosition
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_JOMAPI_OmReaderDataBlockPosition
  (JNIEnv *, jclass, jlong);

/*
 * Class:     JOMAPI
 * Method:    OmReaderDataBlockSeek
 * Signature: (JI)I
 */
JNIEXPORT jint JNICALL Java_JOMAPI_OmReaderDataBlockSeek
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     JOMAPI
 * Method:    OmReaderNextBlock
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_JOMAPI_OmReaderNextBlock
  (JNIEnv *, jclass, jlong);

/*
 * Class:     JOMAPI
 * Method:    OmReaderBuffer
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_JOMAPI_OmReaderBuffer
  (JNIEnv *, jclass, jlong);

/*
 * Class:     JOMAPI
 * Method:    OmReaderTimestamp
 * Signature: (JI[I)J
 */
JNIEXPORT jlong JNICALL Java_JOMAPI_OmReaderTimestamp
  (JNIEnv *, jclass, jlong, jint, jintArray);

/*
 * Class:     JOMAPI
 * Method:    OmReaderGetValue
 * Signature: (JI)I
 */
JNIEXPORT jint JNICALL Java_JOMAPI_OmReaderGetValue
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     JOMAPI
 * Method:    OmReaderClose
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_JOMAPI_OmReaderClose
  (JNIEnv *, jclass, jlong);

#ifdef __cplusplus
}
#endif
#endif
