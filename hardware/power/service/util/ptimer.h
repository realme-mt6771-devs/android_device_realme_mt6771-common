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

#ifndef __PTIMER_H__
#define __PTIMER_H__

#ifdef __cplusplus
extern "C" {
#endif

/*** STANDARD INCLUDES *******************************************************/


/*** PROJECT INCLUDES ********************************************************/


/*** MACROS ******************************************************************/


/*** GLOBAL TYPES DEFINITIONS ************************************************/


/*** PRIVATE TYPES DEFINITIONS ***********************************************/


/*** GLOBAL VARIABLE DECLARATIONS (EXTERN) ***********************************/


/*** PUBLIC FUNCTION PROTOTYPES **********************************************/
int ptimer_mng_create(void ** ppmng);
int ptimer_mng_delete(void * pmng);

int ptimer_mng_getnextduration(void * pmng, unsigned long * mseconds);
int ptimer_mng_getexpired(void * pmng, void ** pptimer, void ** ppdata, unsigned long * pWallSec, unsigned long * pWallNSec);

int ptimer_create(void ** pptimer);
int ptimer_start(void * pmng, void * ptimer, unsigned long mseconds, void * pdata);
int ptimer_stop(void * ptimer);
int ptimer_delete(void * ptimer);

int ptimer_util_walltimepass_ms(unsigned long OldWallSec, unsigned long OldWallNSec, unsigned long * pmseconds);

#ifdef __cplusplus
}
#endif

#endif /* End of #ifndef __PTIMER_H__ */
