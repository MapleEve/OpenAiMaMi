// module: codexmate_lib/commands/accounts
// addr: 0x1403df5e0
// name: finalize_committed_switch
// win 1.2.3 | tree_not_on_disk gapfill (residual census close) | win-native Hex-Rays decompile (strip) | session win-1.2.3-tree-not-on-disk-gapfill-20260726
// win 1.2.3 | = mac codexmate_lib::commands::accounts::finalize_committed_switch | 跨平台字符串签名匹配(名↔函数一致)
double __fastcall finalize_committed_switch(__int128 *a1, __int64 a2, __int64 a3, __int64 a4, __int128 a5)
{
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // r12
  const char **v10; // rbx
  __int64 v11; // rsi
  __int128 *v12; // rdi
  const char **v13; // r13
  bool v14; // zf
  const char **v15; // rsi
  __int64 v16; // r14
  const char **v17; // rax
  const char **v18; // rsi
  __int64 v19; // rdx
  const char *v20; // r8
  __int64 v21; // rdx
  const char **v22; // rcx
  __int64 v23; // r8
  unsigned __int128 v24; // rax
  __int64 v25; // r14
  _QWORD *v26; // rsi
  __int64 v27; // rdx
  __int64 v28; // rdx
  const char **v30; // [rsp+28h] [rbp-58h] BYREF
  __int128 v31; // [rsp+30h] [rbp-50h]
  const char **v32; // [rsp+40h] [rbp-40h]
  __int64 v33; // [rsp+358h] [rbp+2D8h]
  __int64 v34; // [rsp+360h] [rbp+2E0h]
  __int64 v35; // [rsp+370h] [rbp+2F0h]
  __int64 v36; // [rsp+378h] [rbp+2F8h]
  __int64 v37; // [rsp+388h] [rbp+308h]
  const char **v38; // [rsp+390h] [rbp+310h]
  __int64 v39; // [rsp+398h] [rbp+318h]
  _BYTE v40[24]; // [rsp+3A8h] [rbp+328h] BYREF
  _QWORD v41[3]; // [rsp+3C0h] [rbp+340h] BYREF
  __int128 v42; // [rsp+3D8h] [rbp+358h] BYREF
  __int64 v43; // [rsp+3E8h] [rbp+368h]
  const char *v44; // [rsp+3F0h] [rbp+370h] BYREF
  __int64 v45; // [rsp+3F8h] [rbp+378h]
  const char **v46; // [rsp+400h] [rbp+380h]
  __int64 v47; // [rsp+408h] [rbp+388h]
  __int128 v48; // [rsp+410h] [rbp+390h] BYREF
  const char **v49; // [rsp+420h] [rbp+3A0h]
  __int64 v50; // [rsp+430h] [rbp+3B0h]
  __int64 v51; // [rsp+438h] [rbp+3B8h]
  __int64 v52; // [rsp+440h] [rbp+3C0h]

  v52 = -2;
  v51 = a4;
  v42 = a5;
  sub_1403EF770(&v30);
  if ( (_DWORD)v30 == -1 )
  {
    v44 = aAccountSwitchC;
    v45 = 24;
    v48 = v31;
    v49 = v32;
    v30 = &v44;
    *(_QWORD *)&v31 = sub_14041F680;
    *((_QWORD *)&v31 + 1) = &v48;
    v32 = (const char **)sub_1400015F0;
    sub_14149C0F0(v40, &unk_1417498A5, &v30);
    sub_1403DAFB0(v51 + 456, aRuntimeRefresh_2, 35, v40);
    v21 = v48;
    if ( (_QWORD)v48 )
    {
      v22 = *((const char ***)&v48 + 1);
      v23 = 1;
LABEL_25:
      sub_140001660(v22, v21, v23);
    }
  }
  else
  {
    v7 = v35;
    v8 = v36;
    v9 = v37;
    v10 = v38;
    v11 = v39;
    if ( v33 )
      sub_140001660(v34, v33, 1);
    if ( v7 )
      sub_140001660(v8, v7, 1);
    sub_14034EBB0(&v30);
    v43 = a3;
    v12 = a1;
    v44 = aAccountSwitchC;
    v45 = 24;
    v13 = &v10[6 * v11];
    v30 = v10;
    *(_QWORD *)&v31 = v10;
    *((_QWORD *)&v31 + 1) = v9;
    v32 = v13;
    v14 = v11 == 0;
    v15 = v10;
    if ( !v14 )
    {
      v16 = v51 + 456;
      v15 = v10 + 6;
      while ( *(v15 - 6) != (const char *)-1LL )
      {
        v50 = (__int64)*(v15 - 6);
        v17 = v15;
        v18 = v15 - 6;
        v46 = v17;
        v19 = (__int64)*(v17 - 5);
        v20 = v18[2];
        v49 = (const char **)v18[5];
        v48 = *(_OWORD *)(v18 + 3);
        v47 = v19;
        sub_1403DAFB0(v16, v19, v20, &v48);
        if ( v50 )
          sub_140001660(v47, v50, 1);
        v14 = v18 + 6 == v13;
        v15 = v46 + 6;
        if ( v14 )
        {
          v15 = v13;
          break;
        }
      }
      *(_QWORD *)&v31 = v15;
    }
    v24 = 0xAAAAAAAAAAAAAAABuLL * (unsigned __int128)(unsigned __int64)((char *)v13 - (char *)v15);
    v14 = v13 == v15;
    a1 = v12;
    a3 = v43;
    if ( !v14 )
    {
      v25 = *((_QWORD *)&v24 + 1) >> 5;
      v26 = v15 + 4;
      do
      {
        v27 = *(v26 - 4);
        if ( v27 )
          sub_140001660(*(v26 - 3), v27, 1);
        v28 = *(v26 - 1);
        if ( v28 )
          sub_140001660(*v26, v28, 1);
        v26 += 6;
        --v25;
      }
      while ( v25 );
    }
    if ( v9 )
    {
      v21 = 48 * v9;
      v23 = 8;
      v22 = v10;
      goto LABEL_25;
    }
  }
  v30 = (const char **)&v42;
  *(_QWORD *)&v31 = sub_14041F680;
  sub_14149C0F0(v41, &unk_141751333, &v30);
  sub_140343D80(a3, (int)aCompleted, 9, v41);
  return sub_141684120(a1, v51, 488);
}
