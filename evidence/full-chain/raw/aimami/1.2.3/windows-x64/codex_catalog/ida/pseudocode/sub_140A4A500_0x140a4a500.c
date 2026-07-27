// win 1.2.1 | module src/core/relay/codex_catalog.rs | attributed via panic-Location xref (win-native)
unsigned __int64 __fastcall sub_140A4A500(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // rsi
  unsigned int v3; // eax
  __int64 v4; // r12
  int v5; // r13d
  bool v6; // r14
  __int64 v7; // rax
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rax
  _QWORD v11[8]; // [rsp+28h] [rbp-58h] BYREF
  _QWORD v12[12]; // [rsp+68h] [rbp-18h] BYREF
  __int64 v13; // [rsp+C8h] [rbp+48h] BYREF
  __int64 v14; // [rsp+D0h] [rbp+50h]
  __int64 v15; // [rsp+D8h] [rbp+58h]
  _QWORD v16[2]; // [rsp+E8h] [rbp+68h] BYREF
  unsigned __int64 v17; // [rsp+F8h] [rbp+78h] BYREF
  __int64 v18; // [rsp+100h] [rbp+80h]
  unsigned int v19; // [rsp+108h] [rbp+88h] BYREF
  char v20; // [rsp+10Fh] [rbp+8Fh] BYREF
  __int64 v21; // [rsp+110h] [rbp+90h]

  v21 = -2; /*0x140a4a51b*/
  sub_141473FA0((unsigned int)&v13, *(_QWORD *)(a1 + 776), *(_QWORD *)(a1 + 784), (unsigned int)&unk_1417A8AF0, 25); /*0x140a4a548*/
  v1 = v14; /*0x140a4a54d*/
  v2 = v15; /*0x140a4a551*/
  v3 = 1; /*0x140a4a555*/
  v4 = 0x300000020LL; /*0x140a4a568*/
  v18 = v14; /*0x140a4a572*/
  while ( 1 ) /*0x140a4a583*/
  {
    if ( v3 > 6 ) /*0x140a4a586*/
LABEL_16:
      sub_1416C32C0(&aStinternalErro[2], 155, &off_1417A8A50); /*0x140a4a717*/
    v5 = v3 + 1; /*0x140a4a58c*/
    v6 = v3 == 6; /*0x140a4a593*/
    if ( v3 == 6 ) /*0x140a4a597*/
      v5 = 6; /*0x140a4a597*/
    v19 = v3; /*0x140a4a59b*/
    v7 = sub_141485EF0(v1, v2); /*0x140a4a5a4*/
    v8 = v7; /*0x140a4a5aa*/
    if ( !v7 ) /*0x140a4a5b0*/
      break; /*0x140a4a5b0*/
    if ( !(unsigned __int8)sub_1409CEE90(v7) ) /*0x140a4a5c0*/
    {
      v12[0] = v8; /*0x140a4a732*/
      sub_140018650(v12); /*0x140a4a73a*/
      break; /*0x140a4a73a*/
    }
    v9 = v8 & 3; /*0x140a4a5c9*/
    if ( v9 < 2 /*0x140a4a604*/
      || (_DWORD)v9 != 2
      || (HIDWORD(v8) > 0x21 || !_bittest64(&v4, HIDWORD(v8))) && HIDWORD(v8) != 1224
      || v19 >= 6 )
    {
      goto LABEL_19; /*0x140a4a604*/
    }
    v17 = v8; /*0x140a4a60a*/
    if ( *(_QWORD *)off_141EC8D80 >= 2u ) /*0x140a4a61c*/
    {
      v16[0] = v18; /*0x140a4a629*/
      v16[1] = v2; /*0x140a4a62d*/
      v11[0] = &v19; /*0x140a4a638*/
      v11[1] = sub_1414AB780; /*0x140a4a643*/
      v11[2] = &unk_1417A8A68; /*0x140a4a64e*/
      v11[3] = sub_1414AB780; /*0x140a4a652*/
      v11[4] = v16; /*0x140a4a65a*/
      v11[5] = sub_14148F3A0; /*0x140a4a665*/
      v11[6] = &v17; /*0x140a4a669*/
      v11[7] = sub_141490720; /*0x140a4a674*/
      v12[0] = 0; /*0x140a4a678*/
      v12[1] = aCodexmateLibCo_8; /*0x140a4a680*/
      v12[2] = 41; /*0x140a4a684*/
      v12[3] = 0; /*0x140a4a68c*/
      v12[4] = aSrcCoreRelayCo_9; /*0x140a4a69b*/
      v12[5] = 31; /*0x140a4a69f*/
      v12[6] = 2; /*0x140a4a6a7*/
      v12[7] = aCodexmateLibCo_8; /*0x140a4a6af*/
      v12[8] = 41; /*0x140a4a6b3*/
      v12[9] = 0xD000000001LL; /*0x140a4a6c5*/
      v12[10] = &unk_1417A8A6C; /*0x140a4a6d0*/
      v12[11] = v11; /*0x140a4a6d8*/
      sub_1412C36A0(&v20, v12); /*0x140a4a6e7*/
    }
    sub_141487490(0, 100000000); /*0x140a4a6f4*/
    sub_140018650(&v17); /*0x140a4a6fd*/
    v3 = v5; /*0x140a4a703*/
    v1 = v18; /*0x140a4a706*/
    if ( v6 ) /*0x140a4a70d*/
      goto LABEL_16; /*0x140a4a711*/
  }
  v8 = 0; /*0x140a4a740*/
LABEL_19:
  if ( v13 ) /*0x140a4a74a*/
    sub_140001660(v18, v13, 1); /*0x140a4a759*/
  return v8; /*0x140a4a761*/
}