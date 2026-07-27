// module: codexmate_lib/core/repository
// addr: 0x1408c2710
// name: sub_1408C2710
// win 1.2.1 | module src/core/repository.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_1408C2710(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // r14
  __int64 v6; // rcx
  __int64 v7; // rsi
  __int64 v8; // rax
  __int128 v9; // xmm0
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rbx
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r13
  __int64 i; // rax
  __int64 v19; // rbx
  void (__fastcall *v20)(_QWORD); // rdx
  __int64 v21; // r12
  __int64 v22; // rsi
  volatile signed __int64 *v23; // rax
  _QWORD *v25; // [rsp+20h] [rbp-60h] BYREF
  __int64 v26; // [rsp+28h] [rbp-58h]
  void (__fastcall **v27)(_QWORD); // [rsp+30h] [rbp-50h]
  __int128 v28; // [rsp+190h] [rbp+110h] BYREF
  __int128 v29; // [rsp+1A0h] [rbp+120h]
  __int128 v30; // [rsp+1B0h] [rbp+130h]
  __int64 v31; // [rsp+1C0h] [rbp+140h]
  const char *v32; // [rsp+1C8h] [rbp+148h]
  __int64 v33; // [rsp+1D0h] [rbp+150h]
  __int64 v34; // [rsp+1D8h] [rbp+158h]
  const char *v35; // [rsp+1E0h] [rbp+160h]
  __int64 v36; // [rsp+1E8h] [rbp+168h]
  __int64 v37; // [rsp+300h] [rbp+280h] BYREF
  __int128 v38; // [rsp+308h] [rbp+288h]
  __int64 v39; // [rsp+318h] [rbp+298h]
  __int64 v40; // [rsp+320h] [rbp+2A0h]
  __int64 v41; // [rsp+328h] [rbp+2A8h]
  __int64 v42; // [rsp+330h] [rbp+2B0h]
  __int64 v43; // [rsp+338h] [rbp+2B8h]
  _QWORD v44[2]; // [rsp+340h] [rbp+2C0h] BYREF
  __int128 v45; // [rsp+350h] [rbp+2D0h] BYREF
  __int64 v46; // [rsp+360h] [rbp+2E0h]
  __int64 v47; // [rsp+368h] [rbp+2E8h]
  __int128 v48; // [rsp+370h] [rbp+2F0h]
  __int64 v49; // [rsp+380h] [rbp+300h]
  void (__fastcall **v50)(_QWORD); // [rsp+390h] [rbp+310h]
  char v51; // [rsp+39Fh] [rbp+31Fh] BYREF
  __int64 v52; // [rsp+3A0h] [rbp+320h] BYREF
  __int64 v53; // [rsp+3A8h] [rbp+328h]
  char v54; // [rsp+3B7h] [rbp+337h]
  __int64 v55; // [rsp+3B8h] [rbp+338h]

  v55 = -2;
  v39 = a3;
  v5 = sub_141487130();
  *(_QWORD *)&v28 = 1;
  *((_QWORD *)&v28 + 1) = 1;
  v29 = (unsigned __int64)v5;
  LOBYTE(v30) = 0;
  nullsub_1(v6);
  v7 = 8;
  v8 = sub_140001650(40, 8);
  if ( !v8 )
  {
    v53 = v5;
    sub_1416C2D31(8, 40);
  }
  v40 = a1;
  *(_QWORD *)(v8 + 32) = v30;
  v9 = v28;
  *(_OWORD *)(v8 + 16) = v29;
  *(_OWORD *)v8 = v9;
  v52 = v8;
  v10 = *(_QWORD *)(a2 + 40);
  v11 = *(_QWORD *)(a2 + 48);
  v12 = *(_QWORD *)(*(_QWORD *)a2 + 16LL);
  v13 = *(_OWORD *)(a2 + 8);
  v14 = *(_OWORD *)(a2 + 24);
  *(_QWORD *)&v28 = *(_QWORD *)(*(_QWORD *)a2 + 8LL);
  *((_QWORD *)&v28 + 1) = v28 + 296 * v12;
  v29 = v13;
  v30 = v14;
  v31 = v10;
  v32 = (const char *)&v52;
  v33 = v11;
  if ( v12 )
  {
    nullsub_1(v10);
    v15 = sub_140001650(24 * v12, 8);
    if ( !v15 )
      sub_1416C2D4B(8, 24 * v12);
    v7 = v15;
  }
  v42 = v12;
  v43 = v7;
  v44[0] = 0;
  v27 = (void (__fastcall **)(_QWORD))v7;
  v25 = v44;
  v26 = 0;
  sub_140995980(&v28, &v25);
  v16 = v42;
  *(_QWORD *)&v45 = 0;
  *((_QWORD *)&v45 + 1) = 8;
  v46 = 0;
  v17 = v43 + 24LL * v44[0];
  v42 = v43;
  v47 = v16;
  v44[0] = v16;
  v44[1] = v17;
  v41 = v43;
  for ( i = v43; i != v17; i = v19 )
  {
    v19 = i + 24;
    v43 = i + 24;
    if ( !*(_QWORD *)i )
      goto LABEL_20;
    v37 = *(_QWORD *)i;
    v38 = *(_OWORD *)(i + 8);
    sub_140570390(&v25, &v37);
    if ( (_DWORD)v25 == 2 )
    {
      v53 = v26;
      v50 = v27;
      if ( *v27 )
        (*v27)(v53);
      v20 = v50[1];
      if ( v20 )
        sub_140001660(v53, v20, v50[2]);
      if ( *(_QWORD *)off_141EC8D80 >= 2u )
      {
        *(_QWORD *)&v28 = 0;
        *((_QWORD *)&v28 + 1) = aCodexmateLibCo_7;
        v29 = 0x1Fu;
        *(_QWORD *)&v30 = aSrcCoreReposit_0;
        *((_QWORD *)&v30 + 1) = 22;
        v31 = 2;
        v32 = aCodexmateLibCo_7;
        v33 = 31;
        v34 = 0x10E500000001LL;
        v35 = aAimamiAccounts_1;
        v36 = 83;
        sub_1412C36A0(&v51, &v28);
      }
    }
    else
    {
      sub_141684120(&v28, &v25, 368);
      v21 = v46;
      if ( v46 == (_QWORD)v45 )
        sub_1416893B0(&v45);
      sub_141684120(*((_QWORD *)&v45 + 1) + 368 * v21, &v28, 368);
      v46 = v21 + 1;
    }
  }
  v19 = v17;
LABEL_20:
  sub_1402C8A40(v19, 0xAAAAAAAAAAAAAAABuLL * ((unsigned __int64)(v17 - v19) >> 3));
  if ( v47 )
    sub_140001660(v41, 24 * v47, 8);
  v48 = v45;
  v49 = v46;
  v22 = v40;
  while ( *(_QWORD *)(v52 + 24) )
  {
    v54 = 1;
    sub_14147C7B0(v52 + 16);
  }
  if ( (_QWORD)v48 == -1 )
  {
    v54 = 0;
    sub_141484F30(*((_QWORD *)&v48 + 1), v49);
  }
  v23 = (volatile signed __int64 *)v52;
  if ( *(_BYTE *)(v52 + 32) )
  {
    v54 = 1;
    sub_1416C32C0(&unk_14179CDD0, 49, v39);
  }
  *(_QWORD *)(v22 + 16) = v49;
  *(_OWORD *)v22 = v48;
  if ( !_InterlockedDecrement64(v23) )
    sub_141481D20(&v52);
  return v22;
}