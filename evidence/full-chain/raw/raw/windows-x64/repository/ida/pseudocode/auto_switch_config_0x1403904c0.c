// module: codexmate_lib/core/repository
// addr: 0x1403904c0
// name: auto_switch_config
// win 1.2.1 | module src/core/repository.rs | attributed via panic-Location xref (win-native)
// win 1.2.3 | = mac codexmate_lib::core::repository::Repository::auto_switch_config | 跨平台字符串签名匹配(名↔函数一致)
__int64 __fastcall auto_switch_config(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  char v9; // di
  int v10; // edx
  __int64 v11; // rax
  int v12; // ecx
  __int128 v14; // [rsp+20h] [rbp-60h] BYREF
  __int128 v15; // [rsp+30h] [rbp-50h]
  __int128 v16; // [rsp+40h] [rbp-40h]
  __int128 v17; // [rsp+50h] [rbp-30h]
  __int128 v18; // [rsp+60h] [rbp-20h]
  __int128 v19; // [rsp+70h] [rbp-10h]
  __int128 v20; // [rsp+80h] [rbp+0h] BYREF
  __int128 v21; // [rsp+90h] [rbp+10h]
  __int128 v22; // [rsp+A0h] [rbp+20h]
  __int128 v23; // [rsp+B0h] [rbp+30h]
  __int128 v24; // [rsp+C0h] [rbp+40h]
  void *v25; // [rsp+D0h] [rbp+50h]
  _BYTE v26[96]; // [rsp+E0h] [rbp+60h] BYREF
  __int128 v27; // [rsp+140h] [rbp+C0h] BYREF
  __int128 v28; // [rsp+150h] [rbp+D0h]
  __int128 v29; // [rsp+160h] [rbp+E0h]
  __int128 v30; // [rsp+170h] [rbp+F0h]
  __int128 v31; // [rsp+180h] [rbp+100h]
  void *v32; // [rsp+190h] [rbp+110h]
  __int128 *v33; // [rsp+198h] [rbp+118h]
  char v34; // [rsp+1AFh] [rbp+12Fh] BYREF
  __int64 v35; // [rsp+1B0h] [rbp+130h]

  v35 = -2;
  v3 = *(_QWORD *)(a2 + 296);
  v4 = *(_QWORD *)(a2 + 304);
  sub_140388C10((__int64)v26, v3, v4);
  if ( *(_DWORD *)v26 != -1 )
  {
    v19 = *(_OWORD *)&v26[80];
    v18 = *(_OWORD *)&v26[64];
    v17 = *(_OWORD *)&v26[48];
    v16 = *(_OWORD *)&v26[32];
    v15 = *(_OWORD *)&v26[16];
    v14 = *(_OWORD *)v26;
    sub_141486710(&v27, v3, v4);
    if ( (_DWORD)v27 == 2 )
    {
      *((_QWORD *)&v20 + 1) = *((_QWORD *)&v27 + 1);
      *(_QWORD *)&v20 = 2;
    }
    else
    {
      v20 = v27;
      v25 = v32;
      v24 = v31;
      v23 = v30;
      v22 = v29;
      v21 = v28;
      if ( (_QWORD)v27 != 2 )
      {
        if ( *(_QWORD *)off_141EC8D80 >= 2u )
        {
          *(_QWORD *)&v20 = &v14;
          *((_QWORD *)&v20 + 1) = sub_140B036A0;
          *(_QWORD *)&v27 = 0;
          *((_QWORD *)&v27 + 1) = aCodexmateLibCo_16;
          v28 = 0x1Fu;
          *(_QWORD *)&v29 = aSrcCoreReposit;
          *((_QWORD *)&v29 + 1) = 22;
          *(_QWORD *)&v30 = 2;
          *((_QWORD *)&v30 + 1) = aCodexmateLibCo_16;
          *(_QWORD *)&v31 = 31;
          *((_QWORD *)&v31 + 1) = 0x90E00000001LL;
          v32 = &unk_14174CC65;
          v33 = &v20;
          sub_1412C36A0(&v34, &v27);
        }
        goto LABEL_8;
      }
    }
    sub_140018650((char *)&v20 + 8);
LABEL_8:
    LODWORD(v20) = sub_141475580(
                     v6,
                     v5,
                     v7,
                     v8,
                     v14,
                     *((_QWORD *)&v14 + 1),
                     v15,
                     *((_QWORD *)&v15 + 1),
                     v16,
                     *((_QWORD *)&v16 + 1),
                     v17,
                     *((_QWORD *)&v17 + 1),
                     v18,
                     *((_QWORD *)&v18 + 1),
                     v19,
                     *((_QWORD *)&v19 + 1),
                     v20,
                     *((_QWORD *)&v20 + 1),
                     v21,
                     *((_QWORD *)&v21 + 1),
                     v22,
                     *((_QWORD *)&v22 + 1),
                     v23);
    DWORD1(v20) = v10;
    sub_141475530(&v27, &v20, 3577643008LL, 27111902);
    v9 = 0;
    if ( (_BYTE)v27 )
      v11 = 0;
    else
      v11 = *((_QWORD *)&v27 + 1);
    LODWORD(v32) = 4;
    *((_QWORD *)&v31 + 1) = v11;
    *((_QWORD *)&v28 + 1) = -1;
    *(_QWORD *)&v27 = 0;
    *((_QWORD *)&v27 + 1) = 8;
    *(_QWORD *)&v28 = 0;
    *(_QWORD *)&v30 = 0;
    *((_QWORD *)&v30 + 1) = 0xA0000000FLL;
    LOBYTE(v31) = 0;
    BYTE4(v32) = 1;
    sub_14034ED40(&v14);
    v14 = v30;
    *(_DWORD *)v26 = *(_DWORD *)((char *)&v31 + 1);
    *(_DWORD *)&v26[3] = DWORD1(v31);
    goto LABEL_12;
  }
  v31 = *(_OWORD *)&v26[72];
  v32 = *(void **)&v26[88];
  v30 = *(_OWORD *)&v26[56];
  v29 = *(_OWORD *)&v26[40];
  v28 = *(_OWORD *)&v26[24];
  v27 = *(_OWORD *)&v26[8];
  v9 = v26[72];
  v14 = *(_OWORD *)&v26[56];
  *(_DWORD *)v26 = *(_QWORD *)&v26[72] >> 8;
  *(_DWORD *)&v26[3] = *(_DWORD *)&v26[76];
  if ( v26[72] != 2 )
  {
LABEL_12:
    *(_OWORD *)a1 = v14;
    v12 = *(_DWORD *)&v26[3];
    *(_DWORD *)(a1 + 17) = *(_DWORD *)v26;
    *(_DWORD *)(a1 + 20) = v12;
    goto LABEL_13;
  }
  *(_QWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0xA0000000FLL;
  v9 = 0;
LABEL_13:
  *(_BYTE *)(a1 + 16) = v9;
  sub_14034DF40(&v27);
  return a1;
}