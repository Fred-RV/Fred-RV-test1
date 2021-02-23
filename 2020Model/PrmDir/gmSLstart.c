/*
;/doc/ ************************************************************************
;
; InitializeServices: Migration Services Initialization
;
; Synopsis of Service:
;
; #include "services.h"                Services information for Migration DLLs
;
; int InitializeServices               Migration services initialization
; (
;    IntegerService* isv               Array of integer services available
;    HandleService*  hsv               Array of handle services available
;    VoidService*    vsv               Array of void services available
;    DoubleService*  dsv               Array of double services available
;    StringService*  ssv               Array of string services avaiable
; )
;
; Description of Service:
;
; MicroSoft says "Warning, There are serious limits on what you can do in a DLL
; entry point. To provide more complex initialization, create an initialization
; routine for the DLL. You can require applications to call the initialization
; routine before calling any other routines. This service is that initialization
; routine. Its purpose is to save the locations of the services hosted by the
; translation service that are available for use by the migration DLLs. See
; the <b>services.h</b> file for a listing. Though when used by the migration
; DLLs these services are being called virtually, as opposed to directly, their
; names and interfaces are the same.
;
; The problem dealt with here is that the migration DLL's must deal directly
; with the information storage being managed by the translation tool. If these
; DLLs were to call the various utilities directly, they would be dealing with
; their own copies of that information which would be different. 
;
; Properties of Service:
;
; IntegerService* isv   This array contains the virtual handles to the services
;                       available that return integer values.
;
; HandleService* hsv    This array contains the virtual handles to the services
;                       that return handles to information vectors.
;
; VoidService* vsv      This array contains the virtual handles to the services
;                       that are void -- i.e. return no value.
;
; DoubleService* dsv    This array contains the virtual handles to the services
;                       that return double values.
;
; StringService* ssv    This array contains the virtual handles to the services
;                       the return character pointers.
;
; Return Value from Service:
;
; If all goes well during the initialization this service returns zero. If
; there is a problem, this service returns a non-zero error code. This
; particular implementation has no errors, so zero is always returned.
;
;/doc/ ************************************************************************
*/
#include "stdafx.h"
#define SERVICES                  /* Gives access to virtual service types */
#include "platform.h"
#include "ADSservices.h"

tAdsInfo adsInfo;
double   temp1 = 0.0;
double   temp2 = 0.0;
double   temp3 = 0.0;
double   temp4 = 0.0;
double   temp5 = 0.0;
double   temp6 = 0.0;
double   temp7 = 0.0;
double   temp8 = 0.0;
double   temp9 = 0.0;

#ifdef FPROTOTYPE
int RunLocalProcedure(int procNumber);
#else
extern int RunLocalProcedure();
#endif

DLL_EXPORT int startUpAdsDll(IntegerService* isv,
                             HandleService*  hsv,
                             VoidService*    vsv,
                             DoubleService*  dsv,
                             StringService*  ssv)
{
   iServices = isv;
   hServices = hsv;
   vServices = vsv;
   dServices = dsv;
   sServices = ssv;
   return 0;
}

DLL_EXPORT int RunProcedureAdsDll(int procNumber)
{
   getAdsInfo(&adsInfo);
   return RunLocalProcedure(procNumber);
}

