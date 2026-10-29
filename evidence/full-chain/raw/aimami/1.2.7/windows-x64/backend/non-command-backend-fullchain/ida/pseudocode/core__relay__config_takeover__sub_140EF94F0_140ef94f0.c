// win 1.2.7 | module src/core/relay/config_takeover.rs | ea 0x140ef94f0 | name sub_140EF94F0
// win 1.2.7 | module src/core/relay/config_takeover.rs | attributed via panic-Location xref (win-native)
unsigned __int64 __fastcall sub_140EF94F0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  char v8; // al
  bool v9; // r15
  bool v10; // dl
  char v11; // r12
  unsigned __int64 result; // rax
  __int64 v13; // rdx
  unsigned __int64 v14; // r13
  __int64 (__fastcall *v15)(unsigned __int64); // rax
  __int64 v16; // rcx
  __int128 v17; // [rsp+20h] [rbp-60h] BYREF
  __int64 v18; // [rsp+30h] [rbp-50h]
  _QWORD v19[10]; // [rsp+38h] [rbp-48h] BYREF
  _QWORD v20[2]; // [rsp+88h] [rbp+8h] BYREF
  _QWORD *v21; // [rsp+98h] [rbp+18h] BYREF
  const char *v22; // [rsp+A0h] [rbp+20h] BYREF
  __int64 v23; // [rsp+A8h] [rbp+28h]
  __int64 (__fastcall *v24)(_QWORD, _QWORD); // [rsp+B0h] [rbp+30h]
  const char *v25; // [rsp+B8h] [rbp+38h]
  __int64 v26; // [rsp+C0h] [rbp+40h]
  __int64 v27; // [rsp+C8h] [rbp+48h]
  const char *v28; // [rsp+D0h] [rbp+50h]
  __int64 v29; // [rsp+D8h] [rbp+58h]
  __int64 v30; // [rsp+E0h] [rbp+60h]
  void *v31; // [rsp+E8h] [rbp+68h]
  _QWORD *v32; // [rsp+F0h] [rbp+70h]
  unsigned __int64 v33; // [rsp+F8h] [rbp+78h] BYREF
  unsigned __int64 v34; // [rsp+100h] [rbp+80h]
  char v35; // [rsp+10Dh] [rbp+8Dh] BYREF
  char v36; // [rsp+10Eh] [rbp+8Eh] BYREF
  char v37; // [rsp+10Fh] [rbp+8Fh]
  __int64 v38; // [rsp+110h] [rbp+90h]

  v38 = -2;
  v20[0] = a4;
  v20[1] = a5;
  v8 = 1;
  v9 = 0;
  while ( 1 )
  {
    v10 = 1;
    if ( !v9 )
      v10 = (unsigned __int8)v8 >= 0xBu;
    if ( v10 )
      sub_1419392A0("internal error: entered unreachable code: backup cleanup loop always returns", 153, &off_141A5C0F0);
    v9 = v8 == 10;
    v11 = v8 + 1;
    if ( v8 == 10 )
      v11 = 10;
    v36 = v8;
    result = sub_141695140(a2, a3);
    if ( !result )
    {
      *(_QWORD *)a1 = -1;
      return result;
    }
    v14 = result & 3;
    v34 = result;
    switch ( result & 3 )
    {
      case 0uLL:
        LOBYTE(result) = *(_BYTE *)(result + 16);
        break;
      case 1uLL:
        LOBYTE(result) = *(_BYTE *)(result + 31);
        break;
      case 2uLL:
        v37 = 1;
        v15 = *(__int64 (__fastcall **)(unsigned __int64))(sub_1416B3F10(result, v13) + 8);
        v37 = 1;
        LOBYTE(result) = v15(HIDWORD(v34));
        break;
      case 3uLL:
        result >>= 32;
        break;
    }
    if ( !(_BYTE)result )
      break;
    v33 = v34;
    if ( (_DWORD)v14 != 2
      || (HIDWORD(v34) > 0x21 || (v16 = 0x300000020LL, !_bittest64(&v16, HIDWORD(v34)))) && HIDWORD(v34) != 1224
      || (unsigned __int8)v36 >= 0xAu )
    {
      v21 = v20;
      v22 = (const char *)sub_140186EE0;
      v23 = (__int64)&v33;
      v24 = sub_1416BB0B0;
      sub_1416ABFD0(&v17, &unk_141A5C164, &v21);
      *(_QWORD *)(a1 + 24) = v18;
      *(_OWORD *)(a1 + 8) = v17;
      *(_QWORD *)a1 = 10;
      result = v33;
      if ( (v33 & 3) - 2 >= 2 && (v33 & 3) != 0 )
      {
        v22 = (const char *)(v33 - 1);
        LOBYTE(v21) = 3;
        v37 = 0;
        return sub_1416BCB00(&v22);
      }
      return result;
    }
    if ( *(_QWORD *)off_1421E6EC0 >= 2u )
    {
      v19[0] = &v36;
      v19[1] = sub_1416B9630;
      v19[2] = asc_141A55B10;
      v19[3] = sub_1416B9630;
      v19[4] = v20;
      v19[5] = sub_140186EE0;
      v19[6] = &v33;
      v19[7] = sub_1416BB0B0;
      v19[8] = &unk_141A5C108;
      v19[9] = sub_1416BCB10;
      v27 = 2;
      v28 = aCodexmateLibCo_39;
      v29 = 43;
      v31 = &unk_141A5C110;
      v32 = v19;
      v21 = nullptr;
      v22 = aCodexmateLibCo_39;
      v23 = 43;
      v24 = nullptr;
      v25 = aSrcCoreRelayCo_2;
      v26 = 33;
      v30 = 0xB200000001LL;
      sub_1414D53A0(&v35, &v21);
    }
    sub_141696800(0, 250000000);
    if ( (v33 & 3) - 2 >= 2 && (v33 & 3) != 0 )
    {
      v22 = (const char *)(v33 - 1);
      LOBYTE(v21) = 3;
      v37 = 0;
      sub_1416BCB00(&v22);
    }
    v8 = v11;
  }
  *(_QWORD *)a1 = -1;
  result = (unsigned int)(v14 - 2);
  if ( (unsigned int)result >= 2 && v14 )
  {
    v22 = (const char *)(v34 - 1);
    LOBYTE(v21) = 3;
    v37 = 0;
    return sub_1416BCB00(&v22);
  }
  return result;
}
