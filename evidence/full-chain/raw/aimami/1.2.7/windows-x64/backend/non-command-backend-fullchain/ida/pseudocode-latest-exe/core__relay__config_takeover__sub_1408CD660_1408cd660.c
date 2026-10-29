// win 1.2.7 latest-exe | module src/core/relay/config_takeover.rs | ea 0x1408cd660 | successor of pre-update 0x140ef94f0 | session <审计会话>
// match evidence: {"body_sim": 0.947, "verdict": "CONFIRMED_STRHIT_DIFF"}
unsigned __int64 __fastcall sub_1408CD660(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  char v8; // al
  bool v9; // r12
  bool v10; // dl
  char v11; // r14
  unsigned __int64 result; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned __int64 v15; // r13
  unsigned __int64 v16; // r15
  __int64 (__fastcall *v17)(unsigned __int64); // rax
  unsigned __int64 v18; // r13
  __int64 v19; // rax
  __int128 v20; // [rsp+20h] [rbp-60h] BYREF
  __int64 v21; // [rsp+30h] [rbp-50h]
  _QWORD v22[11]; // [rsp+38h] [rbp-48h] BYREF
  _QWORD v23[2]; // [rsp+90h] [rbp+10h] BYREF
  _QWORD *v24; // [rsp+A0h] [rbp+20h] BYREF
  const char *v25; // [rsp+A8h] [rbp+28h] BYREF
  __int64 v26; // [rsp+B0h] [rbp+30h]
  __int64 (__fastcall *v27)(_QWORD, _QWORD); // [rsp+B8h] [rbp+38h]
  const char *v28; // [rsp+C0h] [rbp+40h]
  __int64 v29; // [rsp+C8h] [rbp+48h]
  __int64 v30; // [rsp+D0h] [rbp+50h]
  const char *v31; // [rsp+D8h] [rbp+58h]
  __int64 v32; // [rsp+E0h] [rbp+60h]
  __int64 v33; // [rsp+E8h] [rbp+68h]
  void *v34; // [rsp+F0h] [rbp+70h]
  _QWORD *v35; // [rsp+F8h] [rbp+78h]
  unsigned __int64 v36; // [rsp+100h] [rbp+80h] BYREF
  char v37; // [rsp+10Dh] [rbp+8Dh] BYREF
  char v38; // [rsp+10Eh] [rbp+8Eh] BYREF
  char v39; // [rsp+10Fh] [rbp+8Fh]
  __int64 v40; // [rsp+110h] [rbp+90h]

  v40 = -2;
  v23[0] = a4;
  v23[1] = a5;
  v8 = 1;
  v9 = 0;
  while ( 1 )
  {
    v10 = 1;
    if ( !v9 )
      v10 = (unsigned __int8)v8 >= 0xBu;
    if ( v10 )
      sub_14196B850("internal error: entered unreachable code: backup cleanup loop always returns", 153, &off_141A54CF0);
    v9 = v8 == 10;
    v11 = v8 + 1;
    if ( v8 == 10 )
      v11 = 10;
    v38 = v8;
    result = sub_1416C4110(a2, a3);
    v22[10] = result;
    if ( !result )
    {
      *(_QWORD *)a1 = -1;
      return result;
    }
    v15 = result;
    v16 = result & 3;
    switch ( result & 3 )
    {
      case 0uLL:
        LOBYTE(result) = *(_BYTE *)(result + 16);
        break;
      case 1uLL:
        LOBYTE(result) = *(_BYTE *)(result + 31);
        break;
      case 2uLL:
        v39 = 1;
        v17 = *(__int64 (__fastcall **)(unsigned __int64))(sub_1416E2EE0(v14, v13) + 8);
        v39 = 1;
        LOBYTE(result) = v17(HIDWORD(v15));
        break;
      case 3uLL:
        result >>= 32;
        break;
    }
    if ( !(_BYTE)result )
      break;
    v36 = v15;
    if ( (_DWORD)v16 != 2
      || ((v18 = HIDWORD(v15), v18 > 0x21) || (v19 = 0x300000020LL, !_bittest64(&v19, v18))) && (_DWORD)v18 != 1224
      || (unsigned __int8)v38 >= 0xAu )
    {
      v24 = v23;
      v25 = (const char *)sub_140191200;
      v26 = (__int64)&v36;
      v27 = sub_1416EA080;
      sub_1416DAFA0(&v20, &unk_141A54D64, &v24);
      *(_QWORD *)(a1 + 24) = v21;
      *(_OWORD *)(a1 + 8) = v20;
      *(_QWORD *)a1 = 10;
      result = v36;
      if ( (v36 & 3) - 2 >= 2 && (v36 & 3) != 0 )
      {
        v25 = (const char *)(v36 - 1);
        LOBYTE(v24) = 3;
        v39 = 0;
        return sub_1416EBAD0(&v25);
      }
      return result;
    }
    if ( *(_QWORD *)off_14223FF10 >= 2u )
    {
      v22[0] = &v38;
      v22[1] = sub_1416E8600;
      v22[2] = asc_141A51870;
      v22[3] = sub_1416E8600;
      v22[4] = v23;
      v22[5] = sub_140191200;
      v22[6] = &v36;
      v22[7] = sub_1416EA080;
      v22[8] = &unk_141A54D08;
      v22[9] = sub_1416EBAE0;
      v30 = 2;
      v31 = aCodexmateLibCo_33;
      v32 = 43;
      v34 = &unk_141A54D10;
      v35 = v22;
      v24 = nullptr;
      v25 = aCodexmateLibCo_33;
      v26 = 43;
      v27 = nullptr;
      v28 = aSrcCoreRelayCo_1;
      v29 = 33;
      v33 = 0xB200000001LL;
      sub_141503E20(&v37, &v24);
    }
    sub_1416C57D0(0, 250000000);
    if ( (v36 & 3) - 2 >= 2 && (v36 & 3) != 0 )
    {
      v25 = (const char *)(v36 - 1);
      LOBYTE(v24) = 3;
      v39 = 0;
      sub_1416EBAD0(&v25);
    }
    v8 = v11;
  }
  *(_QWORD *)a1 = -1;
  result = (unsigned int)(v16 - 2);
  if ( (unsigned int)result >= 2 && v16 )
  {
    v25 = (const char *)(v15 - 1);
    LOBYTE(v24) = 3;
    v39 = 0;
    return sub_1416EBAD0(&v25);
  }
  return result;
}
