/*
 * Copyright (C) 2016 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef __PERFSERVD_CMD_H__
#define __PERFSERVD_CMD_H__

#ifdef __cplusplus
extern "C" {
#endif


/*** STANDARD INCLUDES *******************************************************/


/*** PROJECT INCLUDES ********************************************************/


/*** MACROS ******************************************************************/
#define PS_SCN_TYPE_BASE        0x0000
#define PS_SCN_TYPE_MEMORY      (PS_SCN_TYPE_BASE + 1)


#if 0
#define PS_SCN_TYPE_DURATION        (PS_SCN_TYPE_BASE + 2)
#define PS_SCN_TYPE_CORE_MIN        (PS_SCN_TYPE_BASE + 3)
#define PS_SCN_TYPE_CORE_MAX        (PS_SCN_TYPE_BASE + 4)
#define PS_SCN_TYPE_VCORE           (PS_SCN_TYPE_BASE + 5)
#define PS_SCN_TYPE_FREQ_MIN        (PS_SCN_TYPE_BASE + 6)
#define PS_SCN_TYPE_FREQ_MAX        (PS_SCN_TYPE_BASE + 7)
#define PS_SCN_TYPE_GPU_FREQ_MIN    (PS_SCN_TYPE_BASE + 8)
#define PS_SCN_TYPE_GPU_FREQ_MAX    PS_SCN_TYPE_BASE + 9)
#define PS_SCN_TYPE_END             (PS_SCN_TYPE_BASE + 10)
#endif


/*** GLOBAL TYPES DEFINITIONS ************************************************/


/*** PRIVATE TYPES DEFINITIONS ***********************************************/


/*** GLOBAL VARIABLE DECLARATIONS (EXTERN) ***********************************/


/*** PUBLIC FUNCTION PROTOTYPES **********************************************/
int powerd_cmd_create(void ** ppcmd);
int powerd_cmd_destory(void * pcmd);


#ifdef __cplusplus
}
#endif

#endif /* End of #ifndef __PERFSERVD_CMD_H__ */
