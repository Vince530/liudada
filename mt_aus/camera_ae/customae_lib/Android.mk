# Copyright Statement:
#
# This software/firmware and related documentation ("MediaTek Software") are
# protected under relevant copyright laws. The information contained herein
# is confidential and proprietary to MediaTek Inc. and/or its licensors.
# Without the prior written permission of MediaTek inc. and/or its licensors,
# any reproduction, modification, use or disclosure of MediaTek Software,
# and information contained herein, in whole or in part, shall be strictly prohibited.

# MediaTek Inc. (C) 2010. All rights reserved.
#
# BY OPENING THIS FILE, RECEIVER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
# THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE")
# RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO RECEIVER ON
# AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES,
# EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
# MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR NONINFRINGEMENT.
# NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH RESPECT TO THE
# SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY, INCORPORATED IN, OR
# SUPPLIED WITH THE MEDIATEK SOFTWARE, AND RECEIVER AGREES TO LOOK ONLY TO SUCH
# THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO. RECEIVER EXPRESSLY ACKNOWLEDGES
# THAT IT IS RECEIVER'S SOLE RESPONSIBILITY TO OBTAIN FROM ANY THIRD PARTY ALL PROPER LICENSES
# CONTAINED IN MEDIATEK SOFTWARE. MEDIATEK SHALL ALSO NOT BE RESPONSIBLE FOR ANY MEDIATEK
# SOFTWARE RELEASES MADE TO RECEIVER'S SPECIFICATION OR TO CONFORM TO A PARTICULAR
# STANDARD OR OPEN FORUM. RECEIVER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND
# CUMULATIVE LIABILITY WITH RESPECT TO THE MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE,
# AT MEDIATEK'S OPTION, TO REVISE OR REPLACE THE MEDIATEK SOFTWARE AT ISSUE,
# OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE CHARGE PAID BY RECEIVER TO
# MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE.
#
# The following software/firmware and/or related documentation ("MediaTek Software")
# have been modified by MediaTek Inc. All revisions are subject to any receiver's
# applicable license agreements with MediaTek Inc.

LOCAL_PATH:= $(call my-dir)
##############################################
include $(CLEAR_VARS)
#------------------------------------------
LOCAL_EXPORT_C_INCLUDE_DIRS += $(TOP)/bionic
LOCAL_EXPORT_C_INCLUDE_DIRS += $(MTKCAM_C_INCLUDES)
LOCAL_EXPORT_C_INCLUDE_DIRS += $(MTK_PATH_CUSTOM_PLATFORM)/hal/inc/isp_tuning
LOCAL_EXPORT_C_INCLUDE_DIRS += $(MTK_PATH_SOURCE)/hardware/libcamera_3a/libccu_lib/lib3a.ccu.headers/$(TARGET_BOARD_PLATFORM)/include/algorithm \
    $(MTK_PATH_SOURCE)/hardware/libcamera_3a/libae_core_lib/lib3a.ae.core/$(TARGET_BOARD_PLATFORM)/include \
    $(MTK_PATH_SOURCE)/hardware/libcamera_3a/libccu_lib/lib3a.ccu.headers/$(TARGET_BOARD_PLATFORM)/include \
    $(MTK_PATH_SOURCE)/hardware/mtkcam/include/mtkcam/def \
    $(MTK_PATH_CUSTOM_PLATFORM)/hal/inc/debug_exif/aaa \
    $(MTK_PATH_CUSTOM_PLATFORM)/hal/camera_ae/customae_lib/include \
    $(MTK_PATH_CUSTOM_PLATFORM)/hal/inc/isp_tuning \
    $(MTK_PATH_CUSTOM_PLATFORM)/hal/inc/aaa \
    $(MTK_PATH_CUSTOM_PLATFORM)/hal/inc \
    $(MTK_PATH_SOURCE)/custom/common/hal/inc/custom/aaa \
    $(MTK_PATH_SOURCE)/custom
ifeq ($(BUILD_MTK_LDVT),yes)
endif
#------------------------------------------
LOCAL_MODULE := headerlib_202007021431226
LOCAL_PROPRIETARY_MODULE := true
LOCAL_MODULE_OWNER := mtk
#------------------------------------------
include $(BUILD_HEADER_LIBRARY)
##############################################

include $(CLEAR_VARS)

LOCAL_ARM_MODE := arm

LOCAL_STATIC_LIBRARIES := \

LOCAL_SRC_FILES:= \
    custom_ae_algo.cpp


LOCAL_SHARED_LIBRARIES:= libcutils liblog lib3a.log
LOCAL_STATIC_LIBRARIES := lib3a.ccu.headers
#For AE
LOCAL_SHARED_LIBRARIES += lib3a.ae.core
LOCAL_SHARED_LIBRARIES += lib3a.ae
LOCAL_LDLIBS:=-llog

ifeq ($(BUILD_MTK_LDVT),yes)
    LOCAL_CFLAGS += -DUSING_MTK_LDVT
    LOCAL_WHOLE_STATIC_LIBRARIES += libuvvf
endif

LOCAL_MODULE_TAGS := optional

#------------------------------------------
LOCAL_HEADER_LIBRARIES += headerlib_202007021431226
#------------------------------------------
LOCAL_MODULE:= lib3a.custom.ae
LOCAL_PROPRIETARY_MODULE := true
LOCAL_MODULE_OWNER := custom

include $(MTK_SHARED_LIBRARY)
