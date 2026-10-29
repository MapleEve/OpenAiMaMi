// win 1.2.7 | module src/core/voice/runtime/mod.rs | ea 0x140c7dbc0 | name sub_140C7DBC0
// win 1.2.7 | module src/core/voice/runtime/mod.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
void __fastcall sub_140C7DBC0(_QWORD *a1, _QWORD *a2, __int64 a3)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  _BYTE *v8; // rax
  __int64 v9; // rax
  __int64 v10; // r14
  unsigned __int64 v11; // rdx
  _QWORD v12[4]; // [rsp+28h] [rbp-58h] BYREF
  char v13; // [rsp+48h] [rbp-38h]
  __int64 v14; // [rsp+50h] [rbp-30h] BYREF
  _BYTE *v15; // [rsp+58h] [rbp-28h]
  __int64 v16; // [rsp+60h] [rbp-20h]
  __int64 v17; // [rsp+68h] [rbp-18h]
  __int64 v18; // [rsp+70h] [rbp-10h]
  __int16 v19; // [rsp+78h] [rbp-8h] BYREF
  _QWORD *v20; // [rsp+80h] [rbp+0h]
  __int64 v21; // [rsp+88h] [rbp+8h]

  v21 = -2;
  v6 = sub_1401B6D70(a2);
  if ( v6 )
  {
    *a1 = 2;
    a1[1] = v6;
    return;
  }
  nullsub_1(v7);
  v8 = (_BYTE *)sub_140001650(128, 1);
  if ( !v8 )
    sub_141938D2B(1, 128);
  v14 = 128;
  v15 = v8;
  v12[0] = &v14;
  v12[1] = asc_141A39010;
  v12[2] = 2;
  v12[3] = 1;
  v13 = 0;
  *v8 = 123;
  v16 = 1;
  v19 = 256;
  v20 = v12;
  sub_140BF9FA0(&v19, &qword_141A3A49B, 13, a3 + 384);
  if ( (_BYTE)v19 )
    goto LABEL_9;
  sub_140BF92D0(&v19, aEnabled_6, 7, a3 + 390);
  if ( (_BYTE)v19 )
    goto LABEL_9;
  sub_140BF62F0(&v19, aGlobalshortcut_1, 14, a3);
  if ( (_BYTE)v19 )
    goto LABEL_9;
  sub_140BFA750(&v19, aTriggerkeycode, 14, a3 + 336);
  if ( (_BYTE)v19 )
    goto LABEL_9;
  sub_140BF62F0(&v19, aTriggerkeylabe, 15, a3 + 24);
  if ( (_BYTE)v19 )
    goto LABEL_9;
  sub_140BF62F0(&v19, aTriggerkeykind, 14, a3 + 48);
  v10 = sub_140BED3E0(&v19, aTriggerstyle, 12, *(unsigned __int8 *)(a3 + 391));
  if ( v10 )
  {
LABEL_11:
    if ( v14 )
      sub_140001660(v15, v14, 1);
    goto LABEL_13;
  }
  if ( (_BYTE)v19 )
    goto LABEL_9;
  sub_140BF9D20(&v19, aTriggermodifie, 19, a3 + 344);
  if ( (_BYTE)v19 )
    goto LABEL_9;
  sub_140BFA750(&v19, aHoldtriggerkey, 18, a3 + 352);
  if ( (_BYTE)v19 )
    goto LABEL_9;
  sub_140BF62F0(&v19, aHoldtriggerkey_0, 19, a3 + 72);
  if ( (_BYTE)v19 )
    goto LABEL_9;
  sub_140BF62F0(&v19, aHoldtriggerkey_1, 18, a3 + 96);
  if ( (_BYTE)v19 )
    goto LABEL_9;
  sub_140BF9D20(&v19, aHoldtriggermod, 23, a3 + 360);
  if ( (_BYTE)v19 )
    goto LABEL_9;
  sub_140BFA750(&v19, aToggletriggerk, 20, a3 + 368);
  if ( (_BYTE)v19 )
    goto LABEL_9;
  sub_140BF62F0(&v19, aToggletriggerk_0, 21, a3 + 120);
  if ( (_BYTE)v19 )
    goto LABEL_9;
  sub_140BF62F0(&v19, aToggletriggerk_1, 20, a3 + 144);
  if ( (_BYTE)v19 )
    goto LABEL_9;
  sub_140BF9D20(&v19, aToggletriggerm, 25, a3 + 376);
  v9 = sub_140BECFB0(&v19, *(unsigned __int8 *)(a3 + 393));
  if ( v9 )
    goto LABEL_10;
  if ( (_BYTE)v19 )
    goto LABEL_9;
  sub_140BF62F0(&v19, aRecognitionlan, 19, a3 + 168);
  v9 = sub_140BED5F0(&v19, *(unsigned __int8 *)(a3 + 394));
  if ( v9 )
    goto LABEL_10;
  if ( (_BYTE)v19 )
    goto LABEL_9;
  sub_140BF62F0(&v19, aProcessingmode_4, 16, a3 + 192);
  v9 = sub_140BEC7B0(&v19, a3 + 288);
  if ( v9 )
    goto LABEL_10;
  if ( (_BYTE)v19 )
    goto LABEL_9;
  sub_140BF62F0(&v19, aMicrophonedevi, 18, a3 + 216);
  v9 = sub_140BED820(&v19, *(unsigned __int16 *)(a3 + 388));
  if ( v9 )
    goto LABEL_10;
  if ( (_BYTE)v19
    || (sub_140BF92D0(&v19, aMickeepalive, 12, a3 + 392), (_BYTE)v19)
    || (sub_140BF62F0(&v19, aPromptsound, 11, a3 + 240), (_BYTE)v19) )
  {
LABEL_9:
    v9 = sub_141934E70();
LABEL_10:
    v10 = v9;
    goto LABEL_11;
  }
  sub_140BF62F0(&v19, aPromptoutputui, 15, a3 + 264);
  v9 = sub_140BED1C0(&v19, *(unsigned __int8 *)(a3 + 395));
  if ( v9 )
    goto LABEL_10;
  sub_140288D60(&v19);
  v17 = (__int64)v15;
  v18 = v14;
  if ( v14 == -1 )
  {
    v10 = v17;
LABEL_13:
    *a1 = 3;
    a1[1] = v10;
    return;
  }
  if ( (sub_140222E10(a2[93], a2[94], v17, v16) & 1) != 0 )
  {
    *a1 = 2;
    a1[1] = v11;
  }
  else
  {
    sub_1401BD710(v11, v11);
    *a1 = -1;
  }
  if ( v18 )
    sub_140001660(v17, v18, 1);
}
