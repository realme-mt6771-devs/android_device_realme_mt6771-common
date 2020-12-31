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

#ifndef __MI_TYPES_H__
#define __MI_TYPES_H__

#ifdef __cplusplus
extern "C" {
#endif

/*** STANDARD INCLUDES *******************************************************/


/*** PROJECT INCLUDES ********************************************************/


/*** MACROS ******************************************************************/


/*** GLOBAL TYPES DEFINITIONS ************************************************/
#ifndef U8
#define U8 unsigned char
#endif
#ifndef U16
#define U16 unsigned short
#endif
#ifndef U32
//#define U32 unsigned long
#define U32 unsigned int
#endif
#ifndef S8
#define S8 signed char
#endif
#ifndef S16
#define S16 signed short
#endif
#ifndef S32
//#define S32 signed long
#define S32 signed int
#endif

#ifndef NULL
#define NULL (0)
#endif


/*** PRIVATE TYPES DEFINITIONS ***********************************************/


/*** GLOBAL VARIABLE DECLARATIONS (EXTERN) ***********************************/


/*** PUBLIC FUNCTION PROTOTYPES **********************************************/


/*****************************************************************************/

#ifdef __cplusplus
}
#endif

#endif // __MI_TYPES_H__

/******************************************************************************
 *  CONFIDENTIAL
 *****************************************************************************/
