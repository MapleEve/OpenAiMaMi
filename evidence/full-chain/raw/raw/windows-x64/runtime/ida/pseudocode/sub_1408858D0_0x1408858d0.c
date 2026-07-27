// module: codexmate_lib/core/voice/runtime
// addr: 0x1408858d0
// name: sub_1408858D0
// win 1.2.1 | module src/core/voice/runtime/mod.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1408858D0(__int64 a1, volatile signed __int64 *a2)
{
  __int64 v3; // rax
  volatile signed __int64 *v4; // rdx
  __int64 v5; // rcx
  int v6; // r9d
  double v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  volatile signed __int64 *v12; // rdi
  __int128 v14; // xmm0
  __int128 v15; // [rsp+58h] [rbp-28h] BYREF
  __int64 v16; // [rsp+68h] [rbp-18h]
  __int128 v17; // [rsp+70h] [rbp-10h] BYREF
  __int64 v18; // [rsp+80h] [rbp+0h]
  __int128 v19; // [rsp+90h] [rbp+10h]
  double v20; // [rsp+A0h] [rbp+20h]
  __m256i v21; // [rsp+B0h] [rbp+30h] BYREF
  __int128 v22; // [rsp+D0h] [rbp+50h]
  int v23; // [rsp+E0h] [rbp+60h] BYREF
  int v24; // [rsp+E8h] [rbp+68h]
  __int16 v25; // [rsp+ECh] [rbp+6Ch]
  __int128 v26; // [rsp+F0h] [rbp+70h] BYREF
  double v27; // [rsp+100h] [rbp+80h]
  __int64 v28; // [rsp+108h] [rbp+88h]
  _BYTE v29[24]; // [rsp+110h] [rbp+90h] BYREF
  __int64 v30; // [rsp+128h] [rbp+A8h]
  __int128 v31; // [rsp+130h] [rbp+B0h]
  char v32; // [rsp+14Fh] [rbp+CFh] BYREF
  __int128 v33; // [rsp+150h] [rbp+D0h] BYREF
  __int64 v34; // [rsp+160h] [rbp+E0h]
  volatile signed __int64 *v35; // [rsp+170h] [rbp+F0h] BYREF
  __int64 v36; // [rsp+178h] [rbp+F8h] BYREF
  volatile signed __int64 *v37; // [rsp+180h] [rbp+100h] BYREF
  char v38; // [rsp+18Eh] [rbp+10Eh]
  char v39; // [rsp+18Fh] [rbp+10Fh]
  __int64 v40; // [rsp+190h] [rbp+110h]

  v40 = -2;
  v35 = a2;
  v39 = 1;
  nullsub_1(a1);
  v39 = 1;
  v3 = sub_140F7E760(&v32);
  if ( !v3 )
  {
    nullsub_1(v5);
    v8 = sub_140001650(36, 1);
    if ( !v8 )
    {
      v39 = 1;
      sub_1416C2D4B(1, 36);
    }
    *(_OWORD *)(v8 + 16) = xmmword_14179611B;
    *(_OWORD *)v8 = xmmword_14179610B;
    *(_DWORD *)(v8 + 32) = -2019236418;
    *(_QWORD *)(a1 + 8) = 36;
    *(_QWORD *)(a1 + 16) = v8;
    *(_QWORD *)(a1 + 24) = 36;
    *(_QWORD *)a1 = -1;
    goto LABEL_20;
  }
  v36 = v3;
  v37 = v4;
  v38 = 1;
  sub_140F7E640(v29, &v36);
  if ( *(_DWORD *)v29 == 1 )
  {
    v21.m256i_i64[2] = v30;
    *(_OWORD *)v21.m256i_i8 = *(_OWORD *)&v29[8];
    *(_QWORD *)&v33 = &v21;
    *((_QWORD *)&v33 + 1) = sub_140F7E8D0;
    sub_14149C0F0(&v26, &unk_141796198, &v33);
    if ( v21.m256i_i64[0] >= (__int64)0x8000000000000002uLL && v21.m256i_i64[0] )
      sub_140001660(v21.m256i_i64[1], v21.m256i_i64[0], 1);
    v7 = v27;
    *(_OWORD *)(a1 + 8) = v26;
    *(double *)(a1 + 24) = v7;
    goto LABEL_18;
  }
  if ( v29[22] == 1 )
  {
    v25 = *(_WORD *)&v29[20];
    v24 = *(_DWORD *)&v29[16];
    v23 = 0;
    *(_QWORD *)&v26 = v35;
    *((_QWORD *)&v26 + 1) = *(unsigned __int16 *)&v29[20];
    v27 = (double)*(int *)&v29[16];
    v28 = 0x40CF400000000000LL;
    v38 = 0;
    LOBYTE(v6) = 1;
    sub_140028A30((unsigned int)v29, (unsigned int)&v36, (unsigned int)&v23, v6, (__int64)&v26);
    v9 = *(_QWORD *)v29;
    v33 = *(_OWORD *)&v29[8];
    v34 = v30;
    if ( *(_QWORD *)v29 == -1 )
    {
      v17 = v33;
      v18 = v34;
      *(_QWORD *)&v29[16] = v34;
      *(_OWORD *)v29 = v33;
      *(_QWORD *)&v33 = v29;
      *((_QWORD *)&v33 + 1) = sub_140F7E970;
      sub_14149C0F0(&v26, &unk_141796152, &v33);
LABEL_30:
      if ( *(__int64 *)v29 >= (__int64)0x8000000000000004uLL && *(_QWORD *)v29 )
        sub_140001660(*(_QWORD *)&v29[8], *(_QWORD *)v29, 1);
      v14 = v26;
      v19 = v26;
      v20 = v27;
      *(double *)(a1 + 24) = v27;
      *(_OWORD *)(a1 + 8) = v14;
      *(_QWORD *)a1 = -1;
LABEL_34:
      sub_140F83A30(&v36);
      if ( !_InterlockedDecrement64(v37) )
      {
        v39 = 0;
        sub_140F66B60(&v37);
      }
      return a1;
    }
  }
  else
  {
    if ( v29[22] != 8 )
    {
      LOBYTE(v26) = v29[22];
      *(_QWORD *)v29 = &v26;
      *(_QWORD *)&v29[8] = sub_1408933E0;
      v38 = 1;
      sub_14149C0F0(&v15, &unk_141799229, v29);
      *(_QWORD *)(a1 + 24) = v16;
      *(_OWORD *)(a1 + 8) = v15;
LABEL_18:
      *(_QWORD *)a1 = -1;
      sub_140F83A30(&v36);
      if ( !_InterlockedDecrement64(v37) )
      {
        v39 = 1;
        sub_140F66B60(&v37);
      }
LABEL_20:
      v12 = v35;
      if ( !_InterlockedDecrement64(v35 + 62) )
      {
        _InterlockedOr64(
          (volatile signed __int64 *)(sub_1406ADF80(v12 + 16, _InterlockedExchangeAdd64(v12 + 17, 1u)) + 784),
          0x200000000uLL);
        sub_1411FE520(v12 + 32);
      }
      if ( !_InterlockedDecrement64(v35) )
        sub_1405742E0((__int64 *)&v35);
      return a1;
    }
    v25 = *(_WORD *)&v29[20];
    v24 = *(_DWORD *)&v29[16];
    v23 = 0;
    *(_QWORD *)&v26 = v35;
    *((_QWORD *)&v26 + 1) = *(unsigned __int16 *)&v29[20];
    v27 = (double)*(int *)&v29[16];
    v28 = 0x40CF400000000000LL;
    v38 = 0;
    LOBYTE(v6) = 8;
    sub_140028880((unsigned int)v29, (unsigned int)&v36, (unsigned int)&v23, v6, (__int64)&v26);
    v9 = *(_QWORD *)v29;
    v33 = *(_OWORD *)&v29[8];
    v34 = v30;
    if ( *(_QWORD *)v29 == -1 )
    {
      v17 = v33;
      v18 = v34;
      *(_QWORD *)&v29[16] = v34;
      *(_OWORD *)v29 = v33;
      *(_QWORD *)&v33 = v29;
      *((_QWORD *)&v33 + 1) = sub_140F7E970;
      sub_14149C0F0(&v26, &unk_14179612F, &v33);
      goto LABEL_30;
    }
  }
  v22 = v31;
  v19 = v33;
  v20 = *(double *)&v34;
  v21.m256i_i64[3] = v34;
  *(_OWORD *)&v21.m256i_u64[1] = v33;
  v21.m256i_i64[0] = v9;
  sub_140F7E880(&v33, &v21);
  if ( (_QWORD)v33 != -2 )
  {
    *(_QWORD *)&v29[16] = v34;
    *(_OWORD *)v29 = v33;
    *(_QWORD *)&v17 = v29;
    *((_QWORD *)&v17 + 1) = sub_140F7EA40;
    sub_14149C0F0(&v26, &unk_14179617B, &v17);
    if ( *(_QWORD *)v29 != -1 && *(_QWORD *)v29 )
      sub_140001660(*(_QWORD *)&v29[8], *(_QWORD *)v29, 1);
    *(double *)(a1 + 24) = v27;
    *(_OWORD *)(a1 + 8) = v26;
    *(_QWORD *)a1 = -1;
    v38 = 0;
    sub_1407D9860(&v21);
    goto LABEL_34;
  }
  v10 = *(_OWORD *)v21.m256i_i8;
  v11 = *(_OWORD *)&v21.m256i_u64[2];
  *(_OWORD *)(a1 + 32) = v22;
  *(_OWORD *)(a1 + 16) = v11;
  *(_OWORD *)a1 = v10;
  sub_140F83A30(&v36);
  if ( !_InterlockedDecrement64(v37) )
  {
    v39 = 0;
    sub_140F66B60(&v37);
  }
  return a1;
}