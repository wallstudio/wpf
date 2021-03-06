// Licensed to the .NET Foundation under one or more agreements.
// The .NET Foundation licenses this file to you under the MIT license.
// See the LICENSE file in the project root for more information.



/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 7.00.0499 */
/* Compiler settings for wmpdll.idl:
    Oicf, W1, Zp8, env=Win32 (32b run)
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
//@@MIDL_FILE_HEADING(  )

#pragma warning( disable: 4049 )  /* more than 64k source lines */


#ifdef __cplusplus
extern "C"{
#endif 


#include <rpc.h>
#include <rpcndr.h>

#ifdef _MIDL_USE_GUIDDEF_

#ifndef INITGUID
#define INITGUID
#include <guiddef.h>
#undef INITGUID
#else
#include <guiddef.h>
#endif

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        DEFINE_GUID(name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8)

#else // !_MIDL_USE_GUIDDEF_

#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        const type name = {l,w1,w2,{b1,b2,b3,b4,b5,b6,b7,b8}}

#endif !_MIDL_USE_GUIDDEF_

MIDL_DEFINE_GUID(IID, IID_IUPnPService_IWMPUPnPAVTransportDual,0x0ea1de14,0xe288,0x4958,0xa2,0x3c,0x94,0x26,0x34,0xa2,0x7e,0xb5);


MIDL_DEFINE_GUID(IID, IID_IUPnPService_IWMPUPnPConnectionManagerDual,0x1af41667,0x542c,0x42ea,0xbf,0x53,0xdc,0x10,0x11,0x68,0xc5,0x03);


MIDL_DEFINE_GUID(IID, IID_IUPnPService_IWMPUPnPVariableControlDual,0x5a09862e,0x47b1,0x4d17,0x94,0xea,0x2b,0xde,0x30,0x14,0xdd,0x42);


MIDL_DEFINE_GUID(IID, IID_IUPnPService_IWMPUPnPBinaryControlDual,0x7cad1d24,0xeded,0x47fa,0xa1,0xd8,0x46,0x28,0xfb,0xe5,0x63,0x8c);


MIDL_DEFINE_GUID(IID, IID_IUPnPService_IWMPUPnPSkinRetrieverDual,0xac743628,0x971d,0x4c1e,0xb0,0x19,0x50,0x54,0x3e,0xfe,0x2b,0xad);


MIDL_DEFINE_GUID(IID, LIBID_WMPLib,0x6BF52A50,0x394A,0x11d3,0xB1,0x53,0x00,0xC0,0x4F,0x79,0xFA,0xA6);


MIDL_DEFINE_GUID(IID, IID_IWMPEvents,0x19A6627B,0xDA9E,0x47c1,0xBB,0x23,0x00,0xB5,0xE6,0x68,0x23,0x6A);


MIDL_DEFINE_GUID(IID, IID_IWMPEvents2,0x1E7601FA,0x47EA,0x4107,0x9E,0xA9,0x90,0x04,0xED,0x96,0x84,0xFF);


MIDL_DEFINE_GUID(IID, IID_IWMPEvents3,0x1F504270,0xA66B,0x4223,0x8E,0x96,0x26,0xA0,0x6C,0x63,0xD6,0x9F);


MIDL_DEFINE_GUID(IID, DIID__WMPOCXEvents,0x6BF52A51,0x394A,0x11d3,0xB1,0x53,0x00,0xC0,0x4F,0x79,0xFA,0xA6);


MIDL_DEFINE_GUID(CLSID, CLSID_WindowsMediaPlayer,0x6BF52A52,0x394A,0x11d3,0xB1,0x53,0x00,0xC0,0x4F,0x79,0xFA,0xA6);


MIDL_DEFINE_GUID(IID, DIID_IWMPButtonCtrlEvents,0xBB17FFF7,0x1692,0x4555,0x91,0x8A,0x6A,0xF7,0xBF,0xAC,0xED,0xD2);


MIDL_DEFINE_GUID(CLSID, CLSID_WMPButtonCtrl,0x87291B51,0x0C8E,0x11D3,0xBB,0x2A,0x00,0xA0,0xC9,0x3C,0xA7,0x3A);


MIDL_DEFINE_GUID(CLSID, CLSID_WMPListBoxCtrl,0xFC1880CF,0x83B9,0x43A7,0xA0,0x66,0xC4,0x4C,0xE8,0xC8,0x25,0x83);


MIDL_DEFINE_GUID(IID, DIID_IWMPSliderCtrlEvents,0xCDAC14D2,0x8BE4,0x11d3,0xBB,0x48,0x00,0xA0,0xC9,0x3C,0xA7,0x3A);


MIDL_DEFINE_GUID(CLSID, CLSID_WMPSliderCtrl,0xF2BF2C90,0x405F,0x11D3,0xBB,0x39,0x00,0xA0,0xC9,0x3C,0xA7,0x3A);


MIDL_DEFINE_GUID(IID, DIID_IWMPVideoCtrlEvents,0xA85C0477,0x714C,0x4a06,0xB9,0xF6,0x7C,0x8C,0xA3,0x8B,0x45,0xDC);


MIDL_DEFINE_GUID(CLSID, CLSID_WMPVideoCtrl,0x61CECF11,0xFC3A,0x11D2,0xA1,0xCD,0x00,0x50,0x04,0x60,0x27,0x52);


MIDL_DEFINE_GUID(CLSID, CLSID_WMPEffects,0x47DEA830,0xD619,0x4154,0xB8,0xD8,0x6B,0x74,0x84,0x5D,0x6A,0x2D);


MIDL_DEFINE_GUID(CLSID, CLSID_WMPEqualizerSettingsCtrl,0x93EB32F5,0x87B1,0x45ad,0xAC,0xC6,0x0F,0x24,0x83,0xDB,0x83,0xBB);


MIDL_DEFINE_GUID(CLSID, CLSID_WMPVideoSettingsCtrl,0xAE7BFAFE,0xDCC8,0x4a73,0x92,0xC8,0xCC,0x30,0x0C,0xA8,0x88,0x59);


MIDL_DEFINE_GUID(CLSID, CLSID_WMPLibraryTreeCtrl,0xD9DE732A,0xAEE9,0x4503,0x9D,0x11,0x56,0x05,0x58,0x99,0x77,0xA8);


MIDL_DEFINE_GUID(CLSID, CLSID_WMPEditCtrl,0x6342FCED,0x25EA,0x4033,0xBD,0xDB,0xD0,0x49,0xA1,0x43,0x82,0xD3);


MIDL_DEFINE_GUID(CLSID, CLSID_WMPMenuCtrl,0xBAB3768B,0x8883,0x4AEC,0x9F,0x9B,0xE1,0x4C,0x94,0x79,0x13,0xEF);


MIDL_DEFINE_GUID(CLSID, CLSID_WMPAutoMenuCtrl,0x6B28F900,0x8D64,0x4B80,0x99,0x63,0xCC,0x52,0xDD,0xD1,0xFB,0xB4);


MIDL_DEFINE_GUID(CLSID, CLSID_WMPRegionalButtonCtrl,0xAE3B6831,0x25A9,0x11d3,0xBD,0x41,0x00,0xC0,0x4F,0x6E,0xA5,0xAE);


MIDL_DEFINE_GUID(IID, DIID_IWMPRegionalButtonEvents,0x50FC8D31,0x67AC,0x11d3,0xBD,0x4C,0x00,0xC0,0x4F,0x6E,0xA5,0xAE);


MIDL_DEFINE_GUID(CLSID, CLSID_WMPRegionalButton,0x09AEFF11,0x69EF,0x11d3,0xBD,0x4D,0x00,0xC0,0x4F,0x6E,0xA5,0xAE);


MIDL_DEFINE_GUID(IID, DIID_IWMPCustomSliderCtrlEvents,0x95F45AA4,0xED0A,0x11D2,0xBA,0x67,0x00,0x00,0xF8,0x08,0x55,0xE6);


MIDL_DEFINE_GUID(CLSID, CLSID_WMPCustomSliderCtrl,0x95F45AA3,0xED0A,0x11D2,0xBA,0x67,0x00,0x00,0xF8,0x08,0x55,0xE6);


MIDL_DEFINE_GUID(CLSID, CLSID_WMPTextCtrl,0xDDDA102E,0x0E17,0x11D3,0xA2,0xE2,0x00,0xC0,0x4F,0x79,0xF8,0x8E);


MIDL_DEFINE_GUID(CLSID, CLSID_WMPPlaylistCtrl,0x5F9CFD93,0x8CAD,0x11d3,0x9A,0x7E,0x00,0xC0,0x4F,0x8E,0xFB,0x70);


MIDL_DEFINE_GUID(IID, DIID__WMPCoreEvents,0xD84CCA96,0xCCE2,0x11d2,0x9E,0xCC,0x00,0x00,0xF8,0x08,0x59,0x81);


MIDL_DEFINE_GUID(CLSID, CLSID_WMPCore,0x09428D37,0xE0B9,0x11d2,0xB1,0x47,0x00,0xC0,0x4F,0x79,0xFA,0xA6);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



