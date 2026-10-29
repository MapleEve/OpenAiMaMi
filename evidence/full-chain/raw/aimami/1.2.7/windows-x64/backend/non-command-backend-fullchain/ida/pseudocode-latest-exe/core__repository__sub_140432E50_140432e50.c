// win 1.2.7 latest-exe | module src/core/repository.rs | ea 0x140432e50 | successor of pre-update 0x140ea1bb0 | session <审计会话>
// match evidence: {"conf": false, "verdict": "LIKELY_SCORE"}
__int64 __fastcall sub_140432E50(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // r14
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rsi
  __int64 v9; // rax
  __int128 v10; // xmm0
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rbx
  __int128 v14; // xmm0
  __int128 v15; // xmm1
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
  __int128 v28; // [rsp+1C8h] [rbp+148h] BYREF
  __int128 v29; // [rsp+1D8h] [rbp+158h]
  __int128 v30; // [rsp+1E8h] [rbp+168h]
  __int64 v31; // [rsp+1F8h] [rbp+178h]
  const char *v32; // [rsp+200h] [rbp+180h]
  __int64 v33; // [rsp+208h] [rbp+188h]
  __int64 v34; // [rsp+210h] [rbp+190h]
  const char *v35; // [rsp+218h] [rbp+198h]
  __int64 v36; // [rsp+220h] [rbp+1A0h]
  __int64 v37; // [rsp+370h] [rbp+2F0h] BYREF
  __int128 v38; // [rsp+378h] [rbp+2F8h]
  __int64 v39; // [rsp+388h] [rbp+308h]
  __int64 v40; // [rsp+390h] [rbp+310h]
  __int64 v41; // [rsp+398h] [rbp+318h]
  __int64 v42; // [rsp+3A0h] [rbp+320h]
  __int64 v43; // [rsp+3A8h] [rbp+328h]
  _QWORD v44[2]; // [rsp+3B0h] [rbp+330h] BYREF
  __int128 v45; // [rsp+3C0h] [rbp+340h] BYREF
  __int64 v46; // [rsp+3D0h] [rbp+350h]
  __int64 v47; // [rsp+3D8h] [rbp+358h]
  __int128 v48; // [rsp+3E0h] [rbp+360h]
  __int64 v49; // [rsp+3F0h] [rbp+370h]
  void (__fastcall **v50)(_QWORD); // [rsp+400h] [rbp+380h]
  char v51; // [rsp+40Fh] [rbp+38Fh] BYREF
  __int64 v52; // [rsp+410h] [rbp+390h] BYREF
  __int64 v53; // [rsp+418h] [rbp+398h]
  char v54; // [rsp+427h] [rbp+3A7h]
  __int64 v55; // [rsp+428h] [rbp+3A8h]

  v55 = -2;
  v39 = a3;
  v5 = sub_1416C5470();
  *(_QWORD *)&v28 = 1;
  *((_QWORD *)&v28 + 1) = 1;
  v29 = (unsigned __int64)v5;
  LOBYTE(v30) = 0;
  nullsub_1(v7, v6);
  v8 = 8;
  v9 = sub_140001650(40, 8);
  if ( !v9 )
  {
    v53 = v5;
    sub_14196B2C1(8, 40);
  }
  v40 = a1;
  *(_QWORD *)(v9 + 32) = v30;
  v10 = v28;
  *(_OWORD *)(v9 + 16) = v29;
  *(_OWORD *)v9 = v10;
  v52 = v9;
  v11 = *(_QWORD *)(a2 + 40);
  v12 = *(_QWORD *)(a2 + 48);
  v13 = *(_QWORD *)(*(_QWORD *)a2 + 16LL);
  v14 = *(_OWORD *)(a2 + 8);
  v15 = *(_OWORD *)(a2 + 24);
  *(_QWORD *)&v28 = *(_QWORD *)(*(_QWORD *)a2 + 8LL);
  *((_QWORD *)&v28 + 1) = v28 + 296 * v13;
  v29 = v14;
  v30 = v15;
  v31 = v11;
  v32 = (const char *)&v52;
  v33 = v12;
  if ( v13 )
  {
    nullsub_1(v11, v12);
    v8 = sub_140001650(24 * v13, 8);
    if ( !v8 )
      sub_14196B2DB(8, 24 * v13);
  }
  v42 = v13;
  v43 = v8;
  v44[0] = 0;
  v27 = (void (__fastcall **)(_QWORD))v8;
  v25 = v44;
  v26 = 0;
  sub_140856E10(&v28, &v25);
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
      goto LABEL_19;
    v37 = *(_QWORD *)i;
    v38 = *(_OWORD *)(i + 8);
    sub_140174DC0(&v25, &v37);
    if ( (_DWORD)v25 == 2 )
    {
      v53 = v26;
      v50 = v27;
      if ( *v27 )
        (*v27)(v53);
      v20 = v50[1];
      if ( v20 )
        sub_140001660(v53, v20, v50[2]);
      if ( *(_QWORD *)off_14223FF10 >= 2u )
      {
        v31 = 2;
        v32 = aCodexmateLibCo_24;
        v33 = 31;
        v35 = aAimamiAccounts;
        v36 = 83;
        *(_QWORD *)&v28 = 0;
        *((_QWORD *)&v28 + 1) = aCodexmateLibCo_24;
        v29 = 0x1Fu;
        *(_QWORD *)&v30 = aSrcCoreReposit_1;
        *((_QWORD *)&v30 + 1) = 22;
        v34 = 0x11E800000001LL;
        sub_141503E20(&v51, &v28);
      }
    }
    else
    {
      sub_1419234B0(&v28, &v25, 424);
      v21 = v46;
      if ( v46 == (_QWORD)v45 )
        sub_141939AC0(&v45);
      sub_1419234B0(*((_QWORD *)&v45 + 1) + 424 * v21, &v28, 424);
      v46 = v21 + 1;
    }
  }
  v19 = v17;
LABEL_19:
  sub_1401B2700(v19, 0xAAAAAAAAAAAAAAABuLL * ((unsigned __int64)(v17 - v19) >> 3));
  if ( v47 )
    sub_140001660(v41, 24 * v47, 8);
  v48 = v45;
  v49 = v46;
  v22 = v40;
  while ( *(_QWORD *)(v52 + 24) )
  {
    v54 = 1;
    sub_1416BA9D0(v52 + 16);
  }
  if ( (_QWORD)v48 == -1 )
  {
    v54 = 0;
    sub_1416C2FD0(*((_QWORD *)&v48 + 1), v49);
  }
  v23 = (volatile signed __int64 *)v52;
  if ( *(_BYTE *)(v52 + 32) )
  {
    v54 = 1;
    sub_14196B850(aAScopedThreadP, 49, v39);
  }
  *(_QWORD *)(v22 + 16) = v49;
  *(_OWORD *)v22 = v48;
  if ( !_InterlockedDecrement64(v23) )
    sub_1416C00F0(&v52);
  return v22;
}
