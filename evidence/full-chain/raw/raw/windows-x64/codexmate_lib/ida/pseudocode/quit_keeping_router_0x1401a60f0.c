// module: codexmate_lib
// addr: 0x1401a60f0
// name: quit_keeping_router
// win 1.2.1 | module src/lib.rs | attributed via panic-Location xref (win-native)
// win 1.2.3 | = mac codexmate_lib::commands::relay::quit_keeping_router | 跨平台字符串签名匹配(名↔函数一致)
__int64 __fastcall quit_keeping_router(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rsi
  __int64 v4; // rax
  __int64 v5; // r14
  char v6; // bl
  char v7; // r14
  __int64 v8; // rcx
  __int64 v9; // rax
  _BYTE v10[24]; // [rsp+28h] [rbp-58h] BYREF
  _QWORD v11[4]; // [rsp+40h] [rbp-40h] BYREF
  __int128 v12; // [rsp+60h] [rbp-20h]
  char v13; // [rsp+164h] [rbp+E4h]
  __int64 v14; // [rsp+170h] [rbp+F0h] BYREF
  const char *v15; // [rsp+178h] [rbp+F8h]
  __int64 v16; // [rsp+180h] [rbp+100h]
  __int64 v17; // [rsp+188h] [rbp+108h]
  const char *v18; // [rsp+190h] [rbp+110h]
  __int64 v19; // [rsp+198h] [rbp+118h]
  __int64 v20; // [rsp+1A0h] [rbp+120h]
  const char *v21; // [rsp+1A8h] [rbp+128h]
  __int64 v22; // [rsp+1B0h] [rbp+130h]
  __int64 v23; // [rsp+1B8h] [rbp+138h]
  void *v24; // [rsp+1C0h] [rbp+140h]
  _QWORD *v25; // [rsp+1C8h] [rbp+148h]
  _QWORD v26[2]; // [rsp+298h] [rbp+218h] BYREF
  unsigned __int64 v27; // [rsp+2A8h] [rbp+228h] BYREF
  __int64 v28; // [rsp+2B0h] [rbp+230h]
  __int64 v29; // [rsp+2B8h] [rbp+238h]
  __int64 v30; // [rsp+2C0h] [rbp+240h]
  __int128 v31; // [rsp+2C8h] [rbp+248h]
  char v32; // [rsp+2DEh] [rbp+25Eh] BYREF
  char v33; // [rsp+2DFh] [rbp+25Fh] BYREF
  __int64 v34; // [rsp+2E0h] [rbp+260h]

  v34 = -2;
  if ( byte_141EC930C )
    return sub_1401B4A10(a1, 0);
  v3 = *(_QWORD *)(a1 + 136);
  v4 = sub_140004B10((volatile void *)(*(_QWORD *)(v3 + 5016) + 16LL));
  if ( !v4 )
  {
    v33 = 0;
    goto LABEL_11;
  }
  v5 = v4;
  v6 = sub_14084FB80(v4);
  if ( v6 )
  {
    v33 = 2;
    goto LABEL_8;
  }
  sub_14085A1E0((__int64)&v14, v5);
  sub_1404D4A90((__int64)v11, (__int64)&v14);
  sub_140018740(&v14);
  v7 = v13;
  sub_140018740(v11);
  v33 = v7;
  if ( !v7 )
  {
LABEL_11:
    byte_141EC930C = 1;
    return sub_1401B4A10(a1, 0);
  }
LABEL_8:
  v14 = (__int64)&v33;
  v15 = (const char *)sub_1401BD760;
  sub_14149C0F0(v10, &unk_1416CE699, &v14);
  sub_1403565C0((unsigned int)aExitGuard, 10, (unsigned int)aPromptUser, 11, (__int64)v10);
  sub_140970A00(a1);
  LOBYTE(v11[0]) = v6;
  if ( (unsigned __int8)sub_14122A860(aCodexRouterExi, 23) )
  {
    v14 = -1;
    v15 = (const char *)v11;
    result = sub_14059CDA0((unsigned int)&v27, (int)v3 + 16, (unsigned int)aCodexRouterExi, 23, (__int64)&v14);
    if ( v27 == -1 )
      return result;
  }
  else
  {
    nullsub_1(v8);
    v9 = sub_140001650(23, 1);
    if ( !v9 )
      sub_1416C2D4B(1, 23);
    *(_OWORD *)v9 = *(_OWORD *)aCodexRouterExi;
    *(_QWORD *)(v9 + 15) = 0x64726175672D7469LL;
    v30 = 23;
    v27 = 0x8000000000000023uLL;
    v28 = 23;
    v29 = v9;
  }
  v12 = v31;
  v11[2] = v29;
  v11[3] = v30;
  v11[0] = v27;
  v11[1] = v28;
  if ( *(_QWORD *)off_141EC8D80 >= 2u )
  {
    v26[0] = v11;
    v26[1] = sub_141230630;
    v14 = 0;
    v15 = aCodexmateLib;
    v16 = 13;
    v17 = 0;
    v18 = aSrcLibRs_0;
    v19 = 10;
    v20 = 2;
    v21 = aCodexmateLib;
    v22 = 13;
    v23 = 0x6200000001LL;
    v24 = &unk_1416CE6F9;
    v25 = v26;
    sub_1412C36A0(&v32, &v14);
  }
  return sub_140014760(v11);
}