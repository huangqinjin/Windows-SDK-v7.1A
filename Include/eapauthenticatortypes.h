

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 7.00.0555 */
/* Compiler settings for eapauthenticatortypes.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 7.00.0555 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

/* verify that the <rpcsal.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCSAL_H_VERSION__
#define __REQUIRED_RPCSAL_H_VERSION__ 100
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__


#ifndef __eapauthenticatortypes_h__
#define __eapauthenticatortypes_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_eapauthenticatortypes_0000_0000 */
/* [local] */ 

typedef /* [v1_enum] */ 
enum _EAP_AUTHENTICATOR_SEND_TIMEOUT
    {	EAP_AUTHENTICATOR_SEND_TIMEOUT_NONE	= 0,
	EAP_AUTHENTICATOR_SEND_TIMEOUT_BASIC	= ( EAP_AUTHENTICATOR_SEND_TIMEOUT_NONE + 1 ) ,
	EAP_AUTHENTICATOR_SEND_TIMEOUT_INTERACTIVE	= ( EAP_AUTHENTICATOR_SEND_TIMEOUT_BASIC + 1 ) 
    } 	EAP_AUTHENTICATOR_SEND_TIMEOUT;



extern RPC_IF_HANDLE __MIDL_itf_eapauthenticatortypes_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_eapauthenticatortypes_0000_0000_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif



