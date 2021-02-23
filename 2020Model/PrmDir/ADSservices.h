/*
;/hdr/ ************************************************************************
;
; ADSservices.h: Services information for ADS DLLs
;
;/hdr/ ************************************************************************
*/
#ifdef SERVICES
extern IntegerService* iServices;
extern HandleService*  hServices;
extern VoidService*    vServices;
extern DoubleService*  dServices;
extern StringService*  sServices;
#endif

extern double  temp1;
extern double  temp2;
extern double  temp3;
extern double  temp4;
extern double  temp5;
extern double  temp6;
extern double  temp7;
extern double  temp8;
extern double  temp9;

typedef struct
{
   int* valueStore;
   int* defStore;
   int* ier;
   int* iSelect;
}
tAdsInfo;

extern tAdsInfo adsInfo;

#define errorCode            *(adsInfo.ier) 
#define defn                 adsInfo.defStore
#define valu                 adsInfo.valueStore
#define isel                 adsInfo.iSelect

#define PutString            vServices[0]
#define openfile             vServices[1]
#define DoFile               vServices[2]
#define RunExecutiveCommand  vServices[3]
#define AddSet               vServices[4]
#define StoreDouble          vServices[5]
#define InitializeSet        vServices[6]
#define SetValue             vServices[7]
#define SetClear             vServices[8]
#define getAdsInfo           vServices[9]
#define DoSet                vServices[10]
#define RemoveSetEntry       vServices[11]
#define dataman              vServices[12]
#define selectIndirect       vServices[13]
#define printLine            vServices[14]
#define shwset               vServices[15]
#define StoreString          vServices[16]

#define CnvDoubleToString    sServices[0]
#define GetString            sServices[1]
#define Concat               sServices[2]
#define ReadString           sServices[3]
#define fioitos              sServices[4]

#define fileExist            iServices[0]
#define IncrementSet         iServices[1]
#define NextRecord           iServices[2]
#define SetRange             iServices[3]
#define ContinueSet          iServices[4]
#define ReadVar              iServices[5]
#define CnvStringToCode      iServices[6]
#define ChrCompareStrings    iServices[7]
#define askuser              iServices[8]
#define cmpdbl               iServices[9]
#define checkIndirect        iServices[10]

#define minvalue             dServices[0]
#define maxvalue             dServices[1]
#define pifpow               dServices[2]
#define fifdnint             dServices[3]
#define ReadDouble           dServices[4]
#define divdbl               dServices[5]
#define logedbl              dServices[6]
#define graphv               dServices[7]
#define Random               dServices[8]

