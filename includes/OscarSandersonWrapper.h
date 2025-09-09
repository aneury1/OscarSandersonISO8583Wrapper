#ifndef OSCAR_SANDERSON_WRAPPER
#define OSCAR_SANDERSON_WRAPPER

extern "C"
{
#include "dl_base.h"
#include "dl_err.h"
#include "dl_iso8583_common.h"
#include "dl_iso8583_defs_1987.h"
#include "dl_iso8583_defs_1993.h"
#include "dl_iso8583_fields.h"
#include "dl_mem.h"
#include "dl_iso8583.h"
#include "dl_output.h"
#include "dl_str.h"
#include "dl_time.h"
#include "dl_timer.h"
}

namespace OscarSanderson{

inline void DL_ISO8583_DEFS_1993_GetHandler ( DL_ISO8583_HANDLER *oHandler ){
    ::DL_ISO8583_DEFS_1993_GetHandler(oHandler );
}


inline void DL_ISO8583_MSG_Init( DL_UINT8       *_iStaticBuf,
				                  DL_UINT16       _iStaticBufSize,
				                  DL_ISO8583_MSG *ioMsg )
{

    ::DL_ISO8583_MSG_Init(_iStaticBuf,
				          _iStaticBufSize,
				          ioMsg );
}


DL_ERR DL_ISO8583_MSG_SetField_Str ( DL_UINT16       iField,
					                 const DL_UINT8 *iDataStr,
						             DL_ISO8583_MSG *ioMsg )
{
    return ::DL_ISO8583_MSG_SetField_Str(iField,
					                 iDataStr,
						             ioMsg );
}

DL_ERR DL_ISO8583_MSG_Pack ( const DL_ISO8583_HANDLER *iHandler,
					         const DL_ISO8583_MSG     *iMsg,
		                     DL_UINT8                 *ioByteArr,
			                 DL_UINT16                *oNumBytes )
{
    return ::DL_ISO8583_MSG_Pack (iHandler,
					              iMsg,
		                          ioByteArr,
			                      oNumBytes );
}

DL_ERR DL_ISO8583_MSG_Unpack ( const DL_ISO8583_HANDLER *iHandler,
					           const DL_UINT8           *iByteArr,
			                   DL_UINT16                 iByteArrSize,
			                   DL_ISO8583_MSG           *ioMsg )
{
    return ::DL_ISO8583_MSG_Unpack (iHandler,
					           iByteArr,
			                   iByteArrSize,
			                   ioMsg );

}


void DL_ISO8583_MSG_Free ( DL_ISO8583_MSG *ioMsg )
{
    ::DL_ISO8583_MSG_Free(ioMsg );
}

void DL_ISO8583_MSG_Dump ( FILE                     *iOutFile,
					       const char               *_iEolStr,
					       const DL_ISO8583_HANDLER *iHandler,
					       const DL_ISO8583_MSG     *iMsg )
{
    ::DL_ISO8583_MSG_Dump(
        iOutFile,
        _iEolStr,
        iHandler,
        iMsg
    );
}

void DL_OUTPUT_Hex ( FILE           *iOutFile,
					 const char     *_iEolStr,
					 const DL_UINT8 *iPtr,
					 DL_UINT32       iNumBytes )
{
    ::DL_OUTPUT_Hex (iOutFile,
					  _iEolStr,
					  iPtr,
					  iNumBytes );
}

}

#endif