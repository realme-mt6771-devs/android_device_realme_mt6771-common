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

#ifndef __PERFSERV_IPC_H__
#define __PERFSERV_IPC_H__

#ifdef __cplusplus
extern "C" {
#endif


/*** STANDARD INCLUDES *******************************************************/


/*** PROJECT INCLUDES ********************************************************/


/*** MACROS ******************************************************************/
#define PS_IPC_COM_HEADER_LEN    8

#define PS_IPC_COM_NULL  0x00
#define PS_IPC_COM_READY 0x01

#define PS_IPC_COM_TYPE_MSG    0x0001


/*** GLOBAL TYPES DEFINITIONS ************************************************/


/*** PRIVATE TYPES DEFINITIONS ***********************************************/


/*** GLOBAL VARIABLE DECLARATIONS (EXTERN) ***********************************/
typedef struct tPS_IPC_SendJob
{
//   unsigned char CmdType;

//   unsigned char Header[PS_IPC_COM_HEADER_LEN];

   char * pData;

   unsigned long DataLen;

   unsigned long CmdLen;

   unsigned long SendLen;
} tPS_IPC_SendJob;

typedef struct tPS_IPC_RecvJob
{
   unsigned long State;

   unsigned char Header[PS_IPC_COM_HEADER_LEN];

   unsigned short CAMCOMType;

   char * pContent;

   unsigned long ContentLen;

   unsigned long RecvLen;

   unsigned long StatusTime;
} tPS_IPC_RecvJob;

typedef struct tPS_CMD
{
   int CmdID;

//   unsigned long Handle;
//   int Duration;

//   tMI_DLIST ConfList;

//   struct tPowerData ScnData;

    void * pMSG;
} tPS_CMD;


/*** PUBLIC FUNCTION PROTOTYPES **********************************************/
int powerd_ipc_init_pscmd(tPS_CMD * pCmd);

int powerd_ipc_recvcmd(tPS_IPC_RecvJob * pJob, int PS_fd);
int powerd_ipc_sendcmd(tPS_IPC_SendJob * pJob, int PSDc_fd);

int powerd_cmd_unmarshall(tPS_IPC_RecvJob * pJob, tPS_CMD ** ppCmd);
int powerd_cmd_marshall(tPS_IPC_SendJob * pJob, tPS_CMD * pCmd);


int powerd_cmd_marshall_data_destory(tPS_IPC_SendJob * pJob);

int powerd_ipc_resetRecvJob(tPS_IPC_RecvJob * pJob);
int powerd_ipc_resetSendJob(tPS_IPC_SendJob * pJob);


#ifdef __cplusplus
}
#endif

#endif /* End of #ifndef __PERFSERV_IPC_H__ */
