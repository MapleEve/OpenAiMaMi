// win 1.2.7 | module src/core/relay/codex_catalog.rs | ea 0x141011e90 | name sub_141011E90
// win 1.2.7 | module src/core/relay/codex_catalog.rs | attributed via panic-Location xref (win-native)
unsigned __int64 __fastcall sub_141011E90(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // rdi
  unsigned int v3; // eax
  int v4; // esi
  bool v5; // bl
  unsigned __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned __int64 v9; // r13
  unsigned int v10; // r15d
  __int64 (__fastcall *v11)(unsigned __int64); // rax
  __int64 v12; // rcx
  _QWORD v14[8]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v15; // [rsp+70h] [rbp-10h] BYREF
  __int64 v16; // [rsp+78h] [rbp-8h]
  __int64 v17; // [rsp+80h] [rbp+0h]
  _QWORD v18[2]; // [rsp+90h] [rbp+10h] BYREF
  __int64 v19; // [rsp+A0h] [rbp+20h] BYREF
  _QWORD v20[12]; // [rsp+A8h] [rbp+28h] BYREF
  unsigned __int64 v21; // [rsp+108h] [rbp+88h] BYREF
  __int64 v22; // [rsp+110h] [rbp+90h]
  unsigned int v23; // [rsp+118h] [rbp+98h] BYREF
  char v24; // [rsp+11Eh] [rbp+9Eh] BYREF
  char v25; // [rsp+11Fh] [rbp+9Fh]
  __int64 v26; // [rsp+120h] [rbp+A0h]

  v26 = -2;
  sub_1416828D0((unsigned int)&v15, *(_QWORD *)(a1 + 776), *(_QWORD *)(a1 + 784), (unsigned int)&unk_141A6F681, 25);
  v1 = v16;
  v2 = v17;
  v3 = 1;
  v22 = v16;
  while ( 1 )
  {
    if ( v3 > 6 )
LABEL_24:
      sub_1419392A0(
        "internal error: entered unreachable code: catalog removal loop always returns",
        155,
        &off_141A6F530);
    v4 = v3 + 1;
    v5 = v3 == 6;
    if ( v3 == 6 )
      v4 = 6;
    v23 = v3;
    v6 = sub_141695140(v1, v2);
    v9 = v6;
    v20[11] = v6;
    if ( !v6 )
      goto LABEL_28;
    v10 = v6 & 3;
    switch ( v6 & 3 )
    {
      case 0uLL:
        LOBYTE(v6) = *(_BYTE *)(v6 + 16);
        break;
      case 1uLL:
        LOBYTE(v6) = *(_BYTE *)(v6 + 31);
        break;
      case 2uLL:
        v25 = 1;
        v11 = *(__int64 (__fastcall **)(unsigned __int64))(sub_1416B3F10(v8, v7) + 8);
        v25 = 1;
        LOBYTE(v6) = v11(HIDWORD(v9));
        break;
      case 3uLL:
        v6 >>= 32;
        break;
    }
    if ( !(_BYTE)v6 )
      break;
    if ( v10 < 2 || v10 == 3 )
      goto LABEL_29;
    if ( HIDWORD(v9) > 0x21 || (v12 = 0x300000020LL, !_bittest64(&v12, HIDWORD(v9))) )
    {
      if ( HIDWORD(v9) != 1224 )
        goto LABEL_29;
    }
    if ( v23 >= 6 )
      goto LABEL_29;
    v21 = v9;
    if ( *(_QWORD *)off_1421E6EC0 >= 2u )
    {
      v18[0] = v22;
      v18[1] = v2;
      v14[0] = &v23;
      v14[1] = sub_1416BBD00;
      v14[2] = &unk_141A6F548;
      v14[3] = sub_1416BBD00;
      v14[4] = v18;
      v14[5] = sub_14169F630;
      v14[6] = &v21;
      v14[7] = sub_1416BB0B0;
      v20[5] = 2;
      v20[6] = aCodexmateLibCo_51;
      v20[7] = 41;
      v20[9] = &unk_141A6F54C;
      v20[10] = v14;
      v19 = 0;
      v20[0] = aCodexmateLibCo_51;
      v20[1] = 41;
      v20[2] = 0;
      v20[3] = aSrcCoreRelayCo_4;
      v20[4] = 31;
      v20[8] = 0x2DD00000001LL;
      sub_1414D53A0(&v24, &v19);
    }
    sub_141696800(0, 100000000);
    if ( (v21 & 3) - 2 >= 2 && (v21 & 3) != 0 )
    {
      v20[0] = v21 - 1;
      LOBYTE(v19) = 3;
      v25 = 0;
      sub_1416BCB00(v20);
    }
    v3 = v4;
    v1 = v22;
    if ( v5 )
      goto LABEL_24;
  }
  if ( v10 - 2 >= 2 && (v9 & 3) != 0 )
  {
    v20[0] = v9 - 1;
    LOBYTE(v19) = 3;
    v25 = 0;
    sub_1416BCB00(v20);
  }
LABEL_28:
  v9 = 0;
LABEL_29:
  if ( v15 )
    sub_140001660(v22, v15, 1);
  return v9;
}
