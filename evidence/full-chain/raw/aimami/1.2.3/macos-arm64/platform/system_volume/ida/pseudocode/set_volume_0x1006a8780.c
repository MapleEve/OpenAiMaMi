// __ZN13codexmate_lib8platform13system_volume10set_volume @ 0x1006a8780 | 基线 same-set
OSStatus __fastcall codexmate_lib::platform::system_volume::set_volume::ha0dfc7f035d0b8e5(
        AudioObjectID inObjectID,
        float a2)
{
  OSStatus result; // eax
  OSStatus PropertyData; // eax
  __int64 v4; // r12
  UInt32 ioDataSize; // [rsp+Ch] [rbp-44h] BYREF
  float v6; // [rsp+10h] [rbp-40h]
  AudioObjectPropertyAddress inAddress; // [rsp+14h] [rbp-3Ch] BYREF
  float inData[12]; // [rsp+20h] [rbp-30h] BYREF

  v6 = fminf(1.0, fmaxf(0.0, a2)); /*0x1006a87a6*/
  inData[0] = v6; /*0x1006a87ab*/
  *(_QWORD *)&inAddress.mSelector = 0x6F757470766D7663LL; /*0x1006a87ba*/
  inAddress.mElement = 0; /*0x1006a87be*/
  result = AudioObjectSetPropertyData(inObjectID, &inAddress, 0, nullptr, 4u, inData); /*0x1006a87d7*/
  if ( result ) /*0x1006a87de*/
  {
    *(_QWORD *)&inAddress.mSelector = 0x6F75747064636832LL; /*0x1006a87ee*/
    inAddress.mElement = 0; /*0x1006a87f2*/
    *(_QWORD *)inData = 0; /*0x1006a87f9*/
    ioDataSize = 8; /*0x1006a8801*/
    PropertyData = AudioObjectGetPropertyData(inObjectID, &inAddress, 0, nullptr, &ioDataSize, inData); /*0x1006a881a*/
    v4 = *(_QWORD *)inData; /*0x1006a882c*/
    if ( !LODWORD(inData[1]) ) /*0x1006a883b*/
      v4 = 0x200000001LL; /*0x1006a883b*/
    if ( !LODWORD(inData[0]) ) /*0x1006a8842*/
      v4 = 0x200000001LL; /*0x1006a8842*/
    if ( PropertyData ) /*0x1006a8848*/
      v4 = 0x200000001LL; /*0x1006a8848*/
    inData[0] = v6; /*0x1006a8851*/
    *(_QWORD *)&inAddress.mSelector = 0x6F757470766F6C6DLL; /*0x1006a8860*/
    inAddress.mElement = v4; /*0x1006a8864*/
    AudioObjectSetPropertyData(inObjectID, &inAddress, 0, nullptr, 4u, inData); /*0x1006a8882*/
    inData[0] = v6; /*0x1006a8890*/
    *(_QWORD *)&inAddress.mSelector = 0x6F757470766F6C6DLL; /*0x1006a8895*/
    inAddress.mElement = HIDWORD(v4); /*0x1006a8899*/
    return AudioObjectSetPropertyData(inObjectID, &inAddress, 0, nullptr, 4u, inData); /*0x1006a88af*/
  }
  return result; /*0x1006a88b4*/
}