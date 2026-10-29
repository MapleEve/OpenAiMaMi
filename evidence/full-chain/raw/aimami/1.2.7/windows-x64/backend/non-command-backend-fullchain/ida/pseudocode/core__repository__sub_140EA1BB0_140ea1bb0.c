// win 1.2.7 | module src/core/repository.rs | ea 0x140ea1bb0 | name sub_140EA1BB0
// win 1.2.7 | module src/core/repository.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140EA1BB0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // r14
  __int64 v6; // rcx
  __int64 v7; // rsi
  __int64 v8; // rax
  __m128i v9; // xmm0
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
  __m128i v25; // [rsp+20h] [rbp-60h] BYREF
  void (__fastcall **v26)(_QWORD); // [rsp+30h] [rbp-50h]
  __m128i v27; // [rsp+1C8h] [rbp+148h] BYREF
  __int128 v28; // [rsp+1D8h] [rbp+158h]
  __int128 v29; // [rsp+1E8h] [rbp+168h]
  __int64 v30; // [rsp+1F8h] [rbp+178h]
  const char *v31; // [rsp+200h] [rbp+180h]
  __int64 v32; // [rsp+208h] [rbp+188h]
  __int64 v33; // [rsp+210h] [rbp+190h]
  const char *v34; // [rsp+218h] [rbp+198h]
  __int64 v35; // [rsp+220h] [rbp+1A0h]
  __int64 v36; // [rsp+370h] [rbp+2F0h] BYREF
  __int128 v37; // [rsp+378h] [rbp+2F8h]
  __int64 v38; // [rsp+388h] [rbp+308h]
  __int64 v39; // [rsp+390h] [rbp+310h]
  __int64 v40; // [rsp+398h] [rbp+318h]
  __int64 v41; // [rsp+3A0h] [rbp+320h]
  __int64 v42; // [rsp+3A8h] [rbp+328h]
  _QWORD v43[2]; // [rsp+3B0h] [rbp+330h] BYREF
  __int128 v44; // [rsp+3C0h] [rbp+340h] BYREF
  __int64 v45; // [rsp+3D0h] [rbp+350h]
  __int64 v46; // [rsp+3D8h] [rbp+358h]
  __int128 v47; // [rsp+3E0h] [rbp+360h]
  __int64 v48; // [rsp+3F0h] [rbp+370h]
  void (__fastcall **v49)(_QWORD); // [rsp+400h] [rbp+380h]
  char v50; // [rsp+40Fh] [rbp+38Fh] BYREF
  __int64 v51; // [rsp+410h] [rbp+390h] BYREF
  __int64 v52; // [rsp+418h] [rbp+398h]
  char v53; // [rsp+427h] [rbp+3A7h]
  __int64 v54; // [rsp+428h] [rbp+3A8h]

  v54 = -2;
  v38 = a3;
  v5 = sub_1416964A0();
  v27.m128i_i64[0] = 1;
  v27.m128i_i64[1] = 1;
  v28 = (unsigned __int64)v5;
  LOBYTE(v29) = 0;
  nullsub_1(v6);
  v7 = 8;
  v8 = sub_140001650(40, 8);
  if ( !v8 )
  {
    v52 = v5;
    sub_141938D11(8, 40);
  }
  v39 = a1;
  *(_QWORD *)(v8 + 32) = v29;
  v9 = v27;
  *(_OWORD *)(v8 + 16) = v28;
  *(__m128i *)v8 = v9;
  v51 = v8;
  v10 = *(_QWORD *)(a2 + 40);
  v11 = *(_QWORD *)(a2 + 48);
  v12 = *(_QWORD *)(*(_QWORD *)a2 + 16LL);
  v13 = *(_OWORD *)(a2 + 8);
  v14 = *(_OWORD *)(a2 + 24);
  v27.m128i_i64[0] = *(_QWORD *)(*(_QWORD *)a2 + 8LL);
  v27.m128i_i64[1] = v27.m128i_i64[0] + 296 * v12;
  v28 = v13;
  v29 = v14;
  v30 = v10;
  v31 = (const char *)&v51;
  v32 = v11;
  if ( v12 )
  {
    nullsub_1(v10);
    v15 = sub_140001650(24 * v12, 8);
    if ( !v15 )
      sub_141938D2B(8, 24 * v12);
    v7 = v15;
  }
  v41 = v12;
  v42 = v7;
  v43[0] = 0;
  v26 = (void (__fastcall **)(_QWORD))v7;
  v25.m128i_i64[0] = (__int64)v43;
  v25.m128i_i64[1] = 0;
  sub_1402AA660(&v27, &v25);
  v16 = v41;
  *(_QWORD *)&v44 = 0;
  *((_QWORD *)&v44 + 1) = 8;
  v45 = 0;
  v17 = v42 + 24LL * v43[0];
  v41 = v42;
  v46 = v16;
  v43[0] = v16;
  v43[1] = v17;
  v40 = v42;
  for ( i = v42; i != v17; i = v19 )
  {
    v19 = i + 24;
    v42 = i + 24;
    if ( !*(_QWORD *)i )
      goto LABEL_20;
    v36 = *(_QWORD *)i;
    v37 = *(_OWORD *)(i + 8);
    sub_14016C100(&v25, &v36);
    if ( v25.m128i_i32[0] == 2 )
    {
      v52 = v25.m128i_i64[1];
      v49 = v26;
      if ( *v26 )
        (*v26)(v52);
      v20 = v49[1];
      if ( v20 )
        sub_140001660(v52, v20, v49[2]);
      if ( *(_QWORD *)off_1421E6EC0 >= 2u )
      {
        v30 = 2;
        v31 = aCodexmateLibCo_41;
        v32 = 31;
        v34 = aAimamiAccounts_1;
        v35 = 83;
        v27.m128i_i64[0] = 0;
        v27.m128i_i64[1] = (__int64)aCodexmateLibCo_41;
        v28 = 0x1Fu;
        *(_QWORD *)&v29 = aSrcCoreReposit_3;
        *((_QWORD *)&v29 + 1) = 22;
        v33 = 0x11E800000001LL;
        sub_1414D53A0(&v50, &v27);
      }
    }
    else
    {
      sub_1418F44E0(&v27, &v25, 0x1A8u);
      v21 = v45;
      if ( v45 == (_QWORD)v44 )
        sub_14190F880(&v44);
      sub_1418F44E0((__m128i *)(*((_QWORD *)&v44 + 1) + 424 * v21), &v27, 0x1A8u);
      v45 = v21 + 1;
    }
  }
  v19 = v17;
LABEL_20:
  sub_14038E140(v19, 0xAAAAAAAAAAAAAAABuLL * ((unsigned __int64)(v17 - v19) >> 3));
  if ( v46 )
    sub_140001660(v40, 24 * v46, 8);
  v47 = v44;
  v48 = v45;
  v22 = v39;
  while ( *(_QWORD *)(v51 + 24) )
  {
    v53 = 1;
    sub_14168BA00(v51 + 16);
  }
  if ( (_QWORD)v47 == -1 )
  {
    v53 = 0;
    sub_141694000(*((_QWORD *)&v47 + 1), v48);
  }
  v23 = (volatile signed __int64 *)v51;
  if ( *(_BYTE *)(v51 + 32) )
  {
    v53 = 1;
    sub_1419392A0(&unk_141A56090, 49, v38);
  }
  *(_QWORD *)(v22 + 16) = v48;
  *(_OWORD *)v22 = v47;
  if ( !_InterlockedDecrement64(v23) )
    sub_141691120(&v51);
  return v22;
}
