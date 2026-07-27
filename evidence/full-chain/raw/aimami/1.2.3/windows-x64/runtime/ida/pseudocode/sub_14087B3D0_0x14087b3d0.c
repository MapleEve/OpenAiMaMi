// module: codexmate_lib/core/voice/runtime
// addr: 0x14087b3d0
// name: sub_14087B3D0
// win 1.2.1 | module src/core/voice/runtime/mod.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_14087B3D0(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v7; // rcx
  _BYTE *v8; // rax
  __int64 v9; // r14
  __int128 v10; // [rsp+20h] [rbp-60h] BYREF
  _QWORD v11[4]; // [rsp+38h] [rbp-48h] BYREF
  char v12; // [rsp+58h] [rbp-28h]
  __int64 v13; // [rsp+60h] [rbp-20h] BYREF
  __int64 v14; // [rsp+68h] [rbp-18h]
  unsigned __int64 v15; // [rsp+70h] [rbp-10h]
  __int64 v16; // [rsp+78h] [rbp-8h]
  __int64 v17; // [rsp+80h] [rbp+0h]
  __int128 v18; // [rsp+88h] [rbp+8h] BYREF
  __int64 v19; // [rsp+98h] [rbp+18h]

  v19 = -2;
  result = sub_140712590(a2);
  if ( result )
  {
    *a1 = 2;
    a1[1] = result;
    return result;
  }
  nullsub_1(v7);
  v8 = (_BYTE *)sub_140001650(128, 1);
  if ( !v8 )
    sub_1416C2D4B(1, 128);
  v13 = 128;
  v14 = (__int64)v8;
  v11[0] = &v13;
  v11[1] = "  Compression method not supportedZipFileReader was in an invalid state";
  v11[2] = 2;
  v11[3] = 1;
  v12 = 0;
  *v8 = 123;
  v15 = 1;
  LOWORD(v18) = 256;
  *((_QWORD *)&v18 + 1) = v11;
  result = sub_1404563F0(&v18, aSchemaversion_3, 13, a3 + 384);
  v9 = result;
  if ( result )
    goto LABEL_9;
  if ( (_BYTE)v18 )
    goto LABEL_6;
  result = sub_140455BB0(&v18, aEnabled_3, 7, a3 + 390);
  v9 = result;
  if ( result )
  {
LABEL_9:
    if ( v13 )
      result = sub_140001660(v14, v13, 1);
    goto LABEL_11;
  }
  if ( (_BYTE)v18 )
    goto LABEL_6;
  result = sub_140452760(&v18, aGlobalshortcut_1, 14, a3);
  v9 = result;
  if ( result )
    goto LABEL_9;
  if ( (_BYTE)v18 )
    goto LABEL_6;
  result = sub_140456E50(&v18, aTriggerkeycode, 14, a3 + 336);
  v9 = result;
  if ( result )
    goto LABEL_9;
  if ( (_BYTE)v18 )
    goto LABEL_6;
  result = sub_140452760(&v18, aTriggerkeylabe, 15, a3 + 24);
  v9 = result;
  if ( result )
    goto LABEL_9;
  if ( (_BYTE)v18 )
    goto LABEL_6;
  result = sub_140452760(&v18, aTriggerkeykind, 14, a3 + 48);
  v9 = result;
  if ( result )
    goto LABEL_9;
  if ( (_BYTE)v18 )
    goto LABEL_6;
  result = sub_140453C40(&v18, aTriggerstyle, 12, a3 + 391);
  if ( result )
    goto LABEL_7;
  if ( (_BYTE)v18 )
    goto LABEL_6;
  result = sub_140457100(&v18, aTriggermodifie, 19, a3 + 344);
  if ( result )
    goto LABEL_7;
  if ( (_BYTE)v18 )
    goto LABEL_6;
  result = sub_140456E50(&v18, aHoldtriggerkey, 18, a3 + 352);
  if ( result )
    goto LABEL_7;
  if ( (_BYTE)v18 )
    goto LABEL_6;
  result = sub_140452760(&v18, aHoldtriggerkey_0, 19, a3 + 72);
  if ( result )
    goto LABEL_7;
  if ( (_BYTE)v18 )
    goto LABEL_6;
  result = sub_140452760(&v18, aHoldtriggerkey_1, 18, a3 + 96);
  if ( result )
    goto LABEL_7;
  if ( (_BYTE)v18 )
    goto LABEL_6;
  result = sub_140457100(&v18, aHoldtriggermod, 23, a3 + 360);
  if ( result )
    goto LABEL_7;
  if ( (_BYTE)v18 )
    goto LABEL_6;
  result = sub_140456E50(&v18, aToggletriggerk, 20, a3 + 368);
  if ( result )
    goto LABEL_7;
  if ( (_BYTE)v18 )
    goto LABEL_6;
  result = sub_140452760(&v18, aToggletriggerk_0, 21, a3 + 120);
  if ( result )
    goto LABEL_7;
  if ( (_BYTE)v18 )
    goto LABEL_6;
  result = sub_140452760(&v18, aToggletriggerk_1, 20, a3 + 144);
  if ( result )
    goto LABEL_7;
  if ( (_BYTE)v18 )
    goto LABEL_6;
  result = sub_140457100(&v18, aToggletriggerm, 25, a3 + 376);
  if ( result )
    goto LABEL_7;
  result = sub_1407E6240(&v18, a3 + 393);
  if ( result )
    goto LABEL_7;
  if ( (_BYTE)v18 )
    goto LABEL_6;
  result = sub_140452760(&v18, aRecognitionlan, 19, a3 + 168);
  if ( result )
    goto LABEL_7;
  result = sub_1407E6280(&v18, a3 + 394);
  if ( result )
    goto LABEL_7;
  if ( (_BYTE)v18 )
    goto LABEL_6;
  result = sub_140452760(&v18, aProcessingmode_3, 16, a3 + 192);
  if ( result )
    goto LABEL_7;
  result = sub_1407E6200(&v18, a3 + 288);
  if ( result )
    goto LABEL_7;
  if ( (_BYTE)v18 )
    goto LABEL_6;
  result = sub_140452760(&v18, aMicrophonedevi, 18, a3 + 216);
  if ( result )
    goto LABEL_7;
  result = sub_1407E62A0(&v18, a3 + 388);
  if ( result )
    goto LABEL_7;
  if ( (_BYTE)v18 )
    goto LABEL_6;
  result = sub_140455BB0(&v18, aMickeepalive, 12, a3 + 392);
  if ( result )
    goto LABEL_7;
  if ( (_BYTE)v18 )
    goto LABEL_6;
  result = sub_140452760(&v18, aPromptsound, 11, a3 + 240);
  if ( result )
    goto LABEL_7;
  if ( (_BYTE)v18 )
  {
LABEL_6:
    result = sub_1416BF0E0();
LABEL_7:
    v9 = result;
    goto LABEL_9;
  }
  result = sub_140452760(&v18, aPromptoutputui, 15, a3 + 264);
  if ( result )
    goto LABEL_7;
  result = sub_1407E6260(&v18, a3 + 395);
  if ( result )
    goto LABEL_7;
  v10 = v18;
  sub_1407BB0F0(&v10);
  result = v14;
  v16 = v14;
  v17 = v13;
  if ( v13 == -1 )
  {
    v9 = v16;
LABEL_11:
    *a1 = 3;
    a1[1] = v9;
    return result;
  }
  result = sub_1408726C0(*(_QWORD *)(a2 + 744), *(_QWORD *)(a2 + 752), v16, v15);
  if ( result )
  {
    *a1 = 2;
    a1[1] = result;
  }
  else
  {
    *a1 = -1;
  }
  if ( v17 )
    return sub_140001660(v16, v17, 1);
  return result;
}