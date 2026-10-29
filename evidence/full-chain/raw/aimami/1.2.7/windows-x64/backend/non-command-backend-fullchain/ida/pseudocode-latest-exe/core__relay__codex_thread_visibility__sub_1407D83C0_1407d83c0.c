// win 1.2.7 latest-exe | module src/core/relay/codex_thread_visibility.rs | ea 0x1407d83c0 | successor of pre-update 0x140231840 | session <审计会话>
// match evidence: {"conf": false, "body_sim": 0.545, "str_ov": null, "verdict": "CONFIRMED_DIFF"}
__int64 __fastcall sub_1407D83C0(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v6; // rdx
  __int64 v7; // r15
  __int64 v8; // r8
  __int64 v9; // rbx
  __int64 v10; // r12
  __int64 v11; // rdi
  __int64 v12; // r13
  __int64 v13; // r14
  char v14; // r8
  __int64 v15; // rcx
  char v16; // di
  __int64 result; // rax
  __int128 v18; // xmm0
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm2
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm2
  __int128 v25; // [rsp+50h] [rbp-30h]
  __m256i v26; // [rsp+60h] [rbp-20h] BYREF
  __int128 v27; // [rsp+80h] [rbp+0h]
  __int128 v28; // [rsp+90h] [rbp+10h]
  __int64 v29; // [rsp+A0h] [rbp+20h]
  __int64 v30; // [rsp+A8h] [rbp+28h]
  __int128 v31; // [rsp+B0h] [rbp+30h]
  __int128 v32; // [rsp+C0h] [rbp+40h]
  __m256i v33; // [rsp+D0h] [rbp+50h] BYREF
  _BYTE v34[48]; // [rsp+F0h] [rbp+70h]
  __int128 v35; // [rsp+120h] [rbp+A0h]
  __int128 v36; // [rsp+130h] [rbp+B0h]
  __int128 v37; // [rsp+140h] [rbp+C0h]
  __int64 v38; // [rsp+150h] [rbp+D0h]

  v38 = -2;
  sub_141431390(&v33);
  v6 = v33.m256i_i64[1];
  v7 = v33.m256i_i64[0];
  v8 = v33.m256i_i64[2];
  if ( v33.m256i_i64[0] != -1 )
  {
    v9 = v33.m256i_i64[3];
    v10 = *(_QWORD *)v34;
    v31 = *(_OWORD *)&v34[8];
    *(_QWORD *)&v32 = *(_QWORD *)&v34[24];
LABEL_12:
    result = v32;
    v18 = v31;
    *(_QWORD *)(a1 + 56) = v32;
    *(_OWORD *)(a1 + 40) = v18;
    *(_QWORD *)a1 = v7;
    *(_QWORD *)(a1 + 8) = v6;
    *(_QWORD *)(a1 + 16) = v8;
    *(_QWORD *)(a1 + 24) = v9;
    *(_QWORD *)(a1 + 32) = v10;
    *(_BYTE *)(a1 + 104) = -1;
    return result;
  }
  v37 = *(_OWORD *)&v33.m256i_u64[1];
  sub_14142C6B0((unsigned int)&v33, v33.m256i_i32[2], v33.m256i_i32[4], a4, 0);
  v11 = v33.m256i_i64[0];
  if ( v33.m256i_i64[0] == -1 )
  {
    v26.m256i_i64[3] = v33.m256i_i64[3];
    *(_OWORD *)&v26.m256i_u64[1] = *(_OWORD *)&v33.m256i_u64[1];
    v26.m256i_i64[0] = 0;
    v30 = sub_141431AC0();
    if ( *((_BYTE *)off_142239FA0 + 48) != 2 )
      sub_1419553E0();
    v25 = 0;
    v12 = v26.m256i_i64[1];
    v7 = v26.m256i_i64[0];
    v9 = v26.m256i_i64[3];
    v13 = v26.m256i_i64[2];
    v31 = *(_OWORD *)&off_141A46B10;
    v32 = xmmword_141A46B20;
    v14 = 0;
    v10 = 0;
  }
  else
  {
    v12 = v33.m256i_i64[1];
    v9 = v33.m256i_i64[3];
    v13 = v33.m256i_i64[2];
    v10 = *(_QWORD *)v34;
    v31 = *(_OWORD *)&v34[8];
    *(_QWORD *)&v32 = *(_QWORD *)&v34[24];
    v14 = -1;
    v7 = v33.m256i_i64[0];
  }
  v15 = v37;
  *(_BYTE *)v37 = 0;
  if ( *((_QWORD *)&v37 + 1) )
  {
    v29 = v11;
    v16 = v14;
    sub_140001660(v15, *((_QWORD *)&v37 + 1), 1);
    v14 = v16;
    v11 = v29;
  }
  if ( v11 != -1 )
  {
    v6 = v12;
    v8 = v13;
    goto LABEL_12;
  }
  v35 = v25;
  *(_OWORD *)&v34[8] = v31;
  *(_OWORD *)&v34[24] = v32;
  v33.m256i_i64[0] = v7;
  v33.m256i_i64[1] = v12;
  v33.m256i_i64[2] = v13;
  v33.m256i_i64[3] = v9;
  *(_QWORD *)v34 = v10;
  *(_QWORD *)&v34[40] = v30;
  *(_QWORD *)&v36 = 16;
  BYTE8(v36) = v14;
  result = sub_141431450(&v26, &v33, 5, 0);
  if ( v26.m256i_i64[0] == -1 )
  {
    *(_OWORD *)(a1 + 96) = v36;
    *(_OWORD *)(a1 + 80) = v35;
    *(_OWORD *)(a1 + 64) = *(_OWORD *)&v34[32];
    v22 = *(_OWORD *)v33.m256i_i8;
    v23 = *(_OWORD *)&v33.m256i_u64[2];
    v24 = *(_OWORD *)v34;
    *(_OWORD *)(a1 + 48) = *(_OWORD *)&v34[16];
    *(_OWORD *)(a1 + 32) = v24;
    *(_OWORD *)(a1 + 16) = v23;
    *(_OWORD *)a1 = v22;
  }
  else
  {
    v19 = *(_OWORD *)v26.m256i_i8;
    v20 = *(_OWORD *)&v26.m256i_u64[2];
    v21 = v27;
    *(_OWORD *)(a1 + 48) = v28;
    *(_OWORD *)(a1 + 32) = v21;
    *(_OWORD *)(a1 + 16) = v20;
    *(_OWORD *)a1 = v19;
    *(_BYTE *)(a1 + 104) = -1;
    return sub_140777BC0(&v33);
  }
  return result;
}
