// module: codexmate_lib/core/sessions
// addr: 0x140748e40
// name: sub_140748E40
// win 1.2.1 | module src/core/sessions.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140748E40(__int64 a1, __int64 a2, __int64 a3, unsigned __int8 a4)
{
  __int64 result; // rax
  __int128 v6; // xmm0
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm2
  __m256i v10; // [rsp+20h] [rbp-60h] BYREF
  __int128 v11; // [rsp+40h] [rbp-40h]
  __int128 v12; // [rsp+50h] [rbp-30h]
  _QWORD v13[2]; // [rsp+60h] [rbp-20h] BYREF
  __m256i v14; // [rsp+70h] [rbp-10h] BYREF
  __int128 v15; // [rsp+90h] [rbp+10h]
  __int128 v16; // [rsp+A0h] [rbp+20h]
  __int128 v17; // [rsp+B0h] [rbp+30h]
  __int128 v18; // [rsp+C0h] [rbp+40h]
  __int128 v19; // [rsp+D0h] [rbp+50h]
  __m256i v20; // [rsp+E0h] [rbp+60h] BYREF
  __int128 v21; // [rsp+100h] [rbp+80h]
  __int128 v22; // [rsp+110h] [rbp+90h]
  __int128 v23; // [rsp+120h] [rbp+A0h]
  __int128 v24; // [rsp+130h] [rbp+B0h]
  __int128 v25; // [rsp+140h] [rbp+C0h]
  __int128 v26; // [rsp+150h] [rbp+D0h] BYREF
  __int64 v27; // [rsp+160h] [rbp+E0h]
  __int128 v28; // [rsp+170h] [rbp+F0h] BYREF
  __int64 v29; // [rsp+180h] [rbp+100h]
  __int64 v30; // [rsp+188h] [rbp+108h]

  v30 = -2;
  sub_1406C1800((__int64)&v14, a2, a3, 32770 - a4);
  if ( BYTE8(v19) == 0xFF )
  {
    v22 = v16;
    v21 = v15;
    v20 = v14;
    v13[0] = &v20;
    v13[1] = sub_140FB8910;
    sub_14149C0F0(&v10, &unk_141788688, v13);
    v28 = *(_OWORD *)v10.m256i_i8;
    v29 = v10.m256i_i64[2];
    sub_1406CBAD0(&v20);
    result = v29;
    v27 = v29;
    v6 = v28;
    v26 = v28;
    *(_QWORD *)(a1 + 24) = v29;
    *(_OWORD *)(a1 + 8) = v6;
    *(_QWORD *)a1 = 10;
    *(_BYTE *)(a1 + 104) = -1;
  }
  else
  {
    v28 = *(_OWORD *)&v14.m256i_u64[1];
    v29 = v14.m256i_i64[3];
    v21 = v15;
    v22 = v16;
    v23 = v17;
    v24 = v18;
    v25 = v19;
    v20 = v14;
    result = sub_140FB95D0(&v10, &v20, 5, 0);
    if ( v10.m256i_i64[0] == -1 )
    {
      *(_OWORD *)(a1 + 96) = v25;
      *(_OWORD *)(a1 + 80) = v24;
      *(_OWORD *)(a1 + 64) = v23;
      v7 = *(_OWORD *)v20.m256i_i8;
      v8 = *(_OWORD *)&v20.m256i_u64[2];
      v9 = v21;
      *(_OWORD *)(a1 + 48) = v22;
      *(_OWORD *)(a1 + 32) = v9;
      *(_OWORD *)(a1 + 16) = v8;
      *(_OWORD *)a1 = v7;
    }
    else
    {
      v16 = v12;
      v15 = v11;
      v14 = v10;
      *(_QWORD *)&v26 = &v14;
      *((_QWORD *)&v26 + 1) = sub_140FB8910;
      sub_14149C0F0(&v28, &unk_141788698, &v26);
      v26 = v28;
      v27 = v29;
      sub_1406CBAD0(&v14);
      *(_QWORD *)(a1 + 24) = v27;
      *(_OWORD *)(a1 + 8) = v26;
      *(_QWORD *)a1 = 10;
      *(_BYTE *)(a1 + 104) = -1;
      return sub_1406CB500(&v20);
    }
  }
  return result;
}