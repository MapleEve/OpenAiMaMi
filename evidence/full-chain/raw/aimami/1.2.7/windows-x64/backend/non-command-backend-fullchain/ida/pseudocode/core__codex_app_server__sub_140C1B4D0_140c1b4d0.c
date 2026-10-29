// win 1.2.7 | module src/core/codex_app_server.rs | ea 0x140c1b4d0 | name sub_140C1B4D0
// win 1.2.7 | module src/core/codex_app_server.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140C1B4D0(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r14
  _WORD *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  _DWORD *v13; // rax
  __int64 v14; // rcx
  _DWORD *v15; // rax
  __int64 v16; // rcx
  void *v17; // rax
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm2
  __int8 v21; // r14
  __int64 v22; // rbx
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rcx
  __int128 v26; // xmm0
  __m256i v28; // [rsp+30h] [rbp-50h] BYREF
  __int128 v29; // [rsp+50h] [rbp-30h]
  __int128 v30; // [rsp+60h] [rbp-20h]
  __int128 v31; // [rsp+70h] [rbp-10h]
  __int128 v32; // [rsp+80h] [rbp+0h]
  _QWORD v33[4]; // [rsp+90h] [rbp+10h] BYREF
  __int128 v34; // [rsp+B0h] [rbp+30h] BYREF
  __int64 v35; // [rsp+C0h] [rbp+40h]
  __int128 v36; // [rsp+C8h] [rbp+48h] BYREF
  __int64 v37; // [rsp+D8h] [rbp+58h]
  __m256i v38; // [rsp+E0h] [rbp+60h] BYREF
  __int64 v39; // [rsp+108h] [rbp+88h] BYREF
  _DWORD *v40; // [rsp+110h] [rbp+90h]
  __int64 v41; // [rsp+118h] [rbp+98h]
  __m256i v42; // [rsp+120h] [rbp+A0h] BYREF
  char v43; // [rsp+146h] [rbp+C6h]
  char v44; // [rsp+147h] [rbp+C7h]
  __int64 v45; // [rsp+148h] [rbp+C8h]

  v45 = -2;
  if ( !sub_1416419F0(aMethod, 6, a3) )
  {
    *(_BYTE *)(a1 + 8) = 0;
LABEL_36:
    *(_QWORD *)a1 = -1;
    return a1;
  }
  v6 = sub_1416419F0(aId_7, 2, a3);
  if ( !v6 )
  {
    v21 = *(_BYTE *)a3;
    switch ( *(_BYTE *)a3 )
    {
      case 0:
        goto LABEL_32;
      case 1:
        v28.m256i_i8[1] = *(_BYTE *)(a3 + 1);
        v28.m256i_i8[0] = v21;
        v22 = a2[14];
        if ( v22 != a2[12] )
          goto LABEL_34;
        goto LABEL_33;
      case 2:
        *(_OWORD *)&v28.m256i_u64[1] = *(_OWORD *)(a3 + 8);
        v28.m256i_i8[0] = v21;
        v22 = a2[14];
        if ( v22 != a2[12] )
          goto LABEL_34;
        goto LABEL_33;
      case 3:
        sub_1416AC440(&v28.m256i_u64[1], a3 + 8);
        v28.m256i_i8[0] = v21;
        v22 = a2[14];
        if ( v22 != a2[12] )
          goto LABEL_34;
        goto LABEL_33;
      case 4:
        sub_1403918C0(&v28.m256i_u64[1], *(_QWORD *)(a3 + 16), *(_QWORD *)(a3 + 24));
        v28.m256i_i8[0] = v21;
        v22 = a2[14];
        if ( v22 != a2[12] )
          goto LABEL_34;
        goto LABEL_33;
      case 5:
        if ( *(_QWORD *)(a3 + 24) )
        {
          v23 = *(_QWORD *)(a3 + 8);
          if ( !v23 )
            sub_141939020(&off_141A54900);
          sub_140E11B90(&v28.m256i_u64[1], v23, *(_QWORD *)(a3 + 16));
LABEL_32:
          v28.m256i_i8[0] = v21;
          v22 = a2[14];
          if ( v22 == a2[12] )
            goto LABEL_33;
        }
        else
        {
          v28.m256i_i64[1] = 0;
          v28.m256i_i64[3] = 0;
          v28.m256i_i8[0] = v21;
          v22 = a2[14];
          if ( v22 == a2[12] )
LABEL_33:
            sub_14190F570(a2 + 12);
        }
LABEL_34:
        v24 = a2[13];
        v25 = 32 * v22;
        v26 = *(_OWORD *)v28.m256i_i8;
        *(_OWORD *)(v24 + v25 + 16) = *(_OWORD *)&v28.m256i_u64[2];
        *(_OWORD *)(v24 + v25) = v26;
        a2[14] = v22 + 1;
LABEL_35:
        *(_BYTE *)(a1 + 8) = 1;
        goto LABEL_36;
    }
  }
  v8 = v6;
  *(_QWORD *)&v36 = 0;
  v37 = 0;
  nullsub_1(v7);
  v9 = (_WORD *)sub_140001650(2, 1);
  if ( !v9 )
    sub_141938D2B(1, 2);
  *v9 = 25705;
  v39 = 2;
  v40 = v9;
  v41 = 2;
  v44 = 1;
  sub_140412420(&v42, v8);
  if ( v42.m256i_i8[0] == -1 )
  {
    v38.m256i_i64[0] = v42.m256i_i64[1];
    sub_141939040(
      (unsigned int)aCalledResultUn_13,
      43,
      (unsigned int)&v38,
      (unsigned int)&off_141A3BB28,
      (__int64)&off_141A3C3D0);
  }
  v38 = v42;
  v44 = 0;
  sub_140E72AA0(&v42, &v36, &v39, &v38);
  if ( v42.m256i_i8[0] != -1 )
    sub_14002F9D0(&v42);
  nullsub_1(v10);
  v11 = sub_140001650(5, 1);
  if ( !v11 )
    sub_141938D2B(1, 5);
  *(_BYTE *)(v11 + 4) = 114;
  *(_DWORD *)v11 = 1869771365;
  v33[0] = 5;
  v33[1] = v11;
  v33[2] = 5;
  *(_QWORD *)&v34 = 0;
  v35 = 0;
  nullsub_1(v12);
  v13 = (_DWORD *)sub_140001650(4, 1);
  if ( !v13 )
    sub_141938D2B(1, 4);
  *v13 = 1701080931;
  v39 = 4;
  v40 = v13;
  v41 = 4;
  v42.m256i_i8[0] = 2;
  v42.m256i_i64[1] = 1;
  v42.m256i_i64[2] = -32601;
  sub_140E72AA0(&v38, &v34, &v39, &v42);
  if ( v38.m256i_i8[0] != -1 )
    sub_14002F9D0(&v38);
  nullsub_1(v14);
  v15 = (_DWORD *)sub_140001650(7, 1);
  if ( !v15 )
    sub_141938D2B(1, 7);
  *(_DWORD *)((char *)v15 + 3) = 1701273971;
  *v15 = 1936942445;
  v39 = 7;
  v40 = v15;
  v41 = 7;
  nullsub_1(v16);
  v17 = (void *)sub_140001650(56, 1);
  v33[3] = v17;
  if ( !v17 )
    sub_141938D2B(1, 56);
  qmemcpy(v17, "AiMaMi thread management does not handle server requests", 56);
  v42.m256i_i8[0] = 3;
  v42.m256i_i64[1] = 56;
  v42.m256i_i64[2] = (__int64)v17;
  v42.m256i_i64[3] = 56;
  sub_140E72AA0(&v38, &v34, &v39, &v42);
  if ( v38.m256i_i8[0] != -1 )
    sub_14002F9D0(&v38);
  *(_OWORD *)&v42.m256i_u64[1] = v34;
  v42.m256i_i64[3] = v35;
  v42.m256i_i8[0] = 5;
  v43 = 0;
  sub_140E72AA0(&v38, &v36, v33, &v42);
  if ( v38.m256i_i8[0] != -1 )
    sub_14002F9D0(&v38);
  *(_OWORD *)&v42.m256i_u64[1] = v36;
  v42.m256i_i64[3] = v37;
  v42.m256i_i8[0] = 5;
  sub_140C1C730(&v28, a2, &v42);
  if ( v28.m256i_i32[0] == -1 )
    goto LABEL_35;
  *(_OWORD *)(a1 + 80) = v32;
  *(_OWORD *)(a1 + 64) = v31;
  v18 = *(_OWORD *)v28.m256i_i8;
  v19 = *(_OWORD *)&v28.m256i_u64[2];
  v20 = v29;
  *(_OWORD *)(a1 + 48) = v30;
  *(_OWORD *)(a1 + 32) = v20;
  *(_OWORD *)(a1 + 16) = v19;
  *(_OWORD *)a1 = v18;
  return a1;
}
