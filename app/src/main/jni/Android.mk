LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE := demo
LOCAL_SRC_FILES := first.c
include $(BUILD_SHARED_LIBRARY)