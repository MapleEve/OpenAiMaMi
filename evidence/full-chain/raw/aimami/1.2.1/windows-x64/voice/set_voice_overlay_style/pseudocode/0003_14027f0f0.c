// win 1.2.1 NEW set_voice_overlay_style 0x14027f0f0 d=1
__int64 __fastcall sub_14027F0F0(__int64 a1, __int64 *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rbx
  __int64 v5; // r14
  __int64 v6; // r15
  _BYTE v8[31]; // [rsp+49h] [rbp-37h]
  _QWORD v9[3]; // [rsp+68h] [rbp-18h] BYREF
  _QWORD v10[6]; // [rsp+80h] [rbp+0h] BYREF
  _BYTE v11[8]; // [rsp+B0h] [rbp+30h] BYREF
  __int64 v12; // [rsp+B8h] [rbp+38h]
  __int128 v13; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v14; // [rsp+D0h] [rbp+50h]
  char v15; // [rsp+DFh] [rbp+5Fh] BYREF
  __int64 v16; // [rsp+E0h] [rbp+60h]

  v16 = -2; /*0x14027f107*/
  v3 = *a2; /*0x14027f112*/
  v4 = a2[1]; /*0x14027f115*/
  v5 = a2[2]; /*0x14027f119*/
  v6 = a2[3]; /*0x14027f11d*/
  sub_14056DF70((unsigned int)v11, (_DWORD)a2, (unsigned int)aVoiceoverlayst, 17, (__int64)&off_141675310, 4); /*0x14027f147*/
  if ( v11[0] == 1 ) /*0x14027f150*/
  {
    v10[1] = v3; /*0x14027f15a*/
    v10[2] = v4; /*0x14027f15e*/
    v10[3] = v5; /*0x14027f162*/
    v10[4] = v6; /*0x14027f166*/
    v10[5] = v12; /*0x14027f16a*/
    v10[0] = 0x8000000000000008uLL; /*0x14027f178*/
    *(_QWORD *)&v13 = 0; /*0x14027f17c*/
    *((_QWORD *)&v13 + 1) = 1; /*0x14027f184*/
    v14 = 0; /*0x14027f18c*/
    v9[2] = 1610612768; /*0x14027f194*/
    v9[0] = &v13; /*0x14027f1a0*/
    v9[1] = &off_141679270; /*0x14027f1ab*/
    if ( (unsigned __int8)sub_141170260((__int64)v10, v9) ) /*0x14027f1b6*/
      sub_1415F0BC0((__int64)aADisplayImplem_0, 55, (__int64)&v15, (__int64)&unk_141675D90, (__int64)&off_141679328); /*0x14027f22d*/
    *(_OWORD *)&v8[7] = v13; /*0x14027f1c8*/
    *(_QWORD *)&v8[23] = v14; /*0x14027f1cc*/
    sub_140204B00(v10); /*0x14027f1d3*/
    *(_BYTE *)a1 = 3; /*0x14027f1d8*/
    *(_OWORD *)(a1 + 1) = *(_OWORD *)v8; /*0x14027f1e3*/
    *(_OWORD *)(a1 + 16) = *(_OWORD *)&v8[15]; /*0x14027f1e7*/
  }
  else
  {
    *(_BYTE *)(a1 + 1) = v11[1]; /*0x14027f1f1*/
    *(_BYTE *)a1 = -1; /*0x14027f1f4*/
  }
  return a1; /*0x14027f1fa*/
}