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

#ifndef __PORTS_H__
#define __PORTS_H__

#include <sys/time.h> // gettimeofday

#ifdef PERFD
#define LOG_TAG "powerd"
#else
#define LOG_TAG "powerc"
#endif

#include <log/log.h>

#ifdef __cplusplus
extern "C" {
#endif

//#define TWPCDBGP(format, args...) {printf("TCPVSDBG [%s:%d %s] ", __FILE__, __LINE__, __FUNCTION__);printf(format, ##args);}
//#define TWPCDBGP(format, args...) {struct timeval vvvvtv; gettimeofday(&vvvvtv, NULL);printf("TD%010lu:%06lu[%s:%d %s] ", vvvvtv.tv_sec, vvvvtv.tv_usec, __FILE__, __LINE__, __FUNCTION__);printf(format, ##args);}
//#define TWPCDBGP(format, args...) {ALOGD("[%s:%d %s]", __FILE__, __LINE__, __FUNCTION__); ALOGD(format, ##args);}
#define TWPCDBGP(format, args...) {ALOGD(format, ##args);}

//#define _CHECK_LEAK_

#ifdef _CHECK_LEAK_
#define pmalloc malloc
#define pfree free
#define pmemset memset
#else
void * pmalloc(unsigned int);
void pfree(void *);
#define pmemset memset
#endif

int pmutex_create(void **);
int pmutex_init(void *);
int pmutex_destroy(void *);
int pmutex_lock(void *);
int pmutex_trylock(void *);
int pmutex_unlock(void *);

int pwalltime(unsigned long * pseconds, unsigned long * pnanoseconds);

unsigned int pletoh32(unsigned char *pBuf, int BufLen);

#ifdef __cplusplus
}
#endif

#endif /* End of #ifndef __PORTS_H__ */
