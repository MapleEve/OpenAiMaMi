// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND clean_tool_schema node 0x1001d6c70 depth=5
__int64 __fastcall alloc::collections::btree::node::BalancingContext$LT$K$C$V$GT$::bulk_steal_left::hbf04d0a8bdd1aaa5(
        __int64 *a1,
        unsigned __int64 a2)
{
  unsigned __int16 *v2; // rbx
  __int64 v3; // rcx
  unsigned __int64 v4; // r13
  unsigned __int64 v5; // r12
  unsigned int v6; // r13d
  __int64 v7; // rdx
  __int64 v8; // r12
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 result; // rax
  __int64 v16; // rcx
  __int64 v17; // rsi
  __int16 v18; // di
  __int64 v19; // rsi
  __int64 v20; // rsi
  __int64 v21; // rsi
  __int64 v22; // rdx
  __int64 v23; // [rsp+40h] [rbp-C0h]
  __int64 v24; // [rsp+48h] [rbp-B8h]
  __int64 v25; // [rsp+50h] [rbp-B0h]
  __int64 v26; // [rsp+58h] [rbp-A8h]
  __int64 v27; // [rsp+60h] [rbp-A0h]
  __int64 v28; // [rsp+68h] [rbp-98h]
  __int64 v29; // [rsp+70h] [rbp-90h]
  __int64 v30; // [rsp+78h] [rbp-88h]
  __int64 v31; // [rsp+80h] [rbp-80h]
  __int64 v32; // [rsp+88h] [rbp-78h]
  __int64 v33; // [rsp+90h] [rbp-70h]
  __int64 v35; // [rsp+A0h] [rbp-60h]
  size_t v36; // [rsp+A8h] [rbp-58h]
  unsigned __int64 v37; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v39; // [rsp+C0h] [rbp-40h]
  char *__dst; // [rsp+C8h] [rbp-38h]
  __int64 v41; // [rsp+D0h] [rbp-30h]

  v2 = (unsigned __int16 *)a1[5]; /*0x1001d6c84*/
  v41 = v2[313]; /*0x1001d6c8f*/
  if ( a2 + v41 >= 0xC )
    core::panicking::panic::h286e2dd5eab048be(
      (__int64)"assertion failed: old_right_len + count <= CAPACITYassertion failed: old_left_len >= countassertion failed: old_left_len + count <= CAPACITYassertion failed: old_right_len >= countassertion failed: match track_edge_idx {\n    LeftOrRight::Left(idx) => idx <= old_left_len,\n    LeftOrRight::Right(idx) => idx <= right_len,\n}assertion failed: new_left_len <= CAPACITYXML:com.adobe.xmpRaw profile type iptcRaw profile type 8bim",
      51,
      (__int64)&off_101526670);
  v3 = a1[3]; /*0x1001d6ca0*/
  v4 = *(unsigned __int16 *)(v3 + 626); /*0x1001d6ca4*/
  v5 = v4 - a2; /*0x1001d6caf*/
  if ( v4 < a2 )
    core::panicking::panic::h286e2dd5eab048be(
      (__int64)"assertion failed: old_left_len >= countassertion failed: old_left_len + count <= CAPACITYassertion failed: old_right_len >= countassertion failed: match track_edge_idx {\n    LeftOrRight::Left(idx) => idx <= old_left_len,\n    LeftOrRight::Right(idx) => idx <= right_len,\n}assertion failed: new_left_len <= CAPACITYXML:com.adobe.xmpRaw profile type iptcRaw profile type 8bim",
      39,
      (__int64)&off_101526688);
  *(_WORD *)(v3 + 626) = v5; /*0x1001d6cbc*/
  v2[313] = a2 + v41; /*0x1001d6cc4*/
  v37 = a2 + v41; /*0x1001d6cd5*/
  v35 = v3; /*0x1001d6ce5*/
  __dst = (char *)(v2 + 180); /*0x1001d6cf9*/
  memmove(&v2[12 * a2 + 180], v2 + 180, 3LL * (unsigned int)(8 * v41)); /*0x1001d6d00*/
  memmove(&v2[16 * a2], v2, (unsigned int)(32 * v41)); /*0x1001d6d18*/
  v36 = 3LL * (unsigned int)(8 * (a2 - 1)); /*0x1001d6d55*/
  memcpy(v2 + 180, (const void *)(v35 + 24 * (v5 + 1) + 360), v36); /*0x1001d6d5d*/
  v39 = v5 + 1; /*0x1001d6d62*/
  v6 = 16 * (a2 - 1); /*0x1001d6d6f*/
  memcpy(v2, (const void *)(v35 + (unsigned int)(32 * (v5 + 1))), v6 * 2); /*0x1001d6d79*/
  v7 = 3 * v5; /*0x1001d6d7e*/
  v8 = (unsigned int)(32 * v5); /*0x1001d6d82*/
  v30 = *(_QWORD *)(v35 + v8); /*0x1001d6d8f*/
  v31 = *(_QWORD *)(v35 + v8 + 8); /*0x1001d6d96*/
  v32 = *(_QWORD *)(v35 + v8 + 16); /*0x1001d6d9f*/
  v33 = *(_QWORD *)(v35 + v8 + 24); /*0x1001d6da8*/
  v9 = *a1; /*0x1001d6db0*/
  v10 = a1[2]; /*0x1001d6db3*/
  v11 = 3 * v10; /*0x1001d6db7*/
  v10 *= 32; /*0x1001d6dbb*/
  v25 = *(_QWORD *)(*a1 + 8 * v11 + 376); /*0x1001d6dc7*/
  v24 = *(_QWORD *)(*a1 + 8 * v11 + 368); /*0x1001d6dde*/
  v23 = *(_QWORD *)(*a1 + 8 * v11 + 360); /*0x1001d6de5*/
  v12 = *(_QWORD *)(v35 + 8 * v7 + 376); /*0x1001d6dec*/
  v13 = *(_QWORD *)(v35 + 8 * v7 + 360); /*0x1001d6df4*/
  v14 = *(_QWORD *)(v35 + 8 * v7 + 368); /*0x1001d6dfc*/
  *(_QWORD *)(v9 + 8 * v11 + 360) = v13; /*0x1001d6e04*/
  *(_QWORD *)(v9 + 8 * v11 + 368) = v14; /*0x1001d6e0c*/
  *(_QWORD *)(v9 + 8 * v11 + 376) = v12; /*0x1001d6e14*/
  v29 = *(_QWORD *)(v9 + v10 + 24); /*0x1001d6e21*/
  v28 = *(_QWORD *)(v9 + v10 + 16); /*0x1001d6e2d*/
  v27 = *(_QWORD *)(v9 + v10 + 8); /*0x1001d6e3d*/
  v26 = *(_QWORD *)(v9 + v10); /*0x1001d6e44*/
  *(_QWORD *)(v9 + v10 + 24) = v33; /*0x1001d6e4f*/
  *(_QWORD *)(v9 + v10 + 16) = v32; /*0x1001d6e58*/
  *(_QWORD *)(v9 + v10 + 8) = v31; /*0x1001d6e68*/
  *(_QWORD *)(v9 + v10) = v30; /*0x1001d6e6d*/
  *(_QWORD *)&__dst[v36 + 16] = v25; /*0x1001d6edb*/
  *(_QWORD *)&__dst[v36 + 8] = v24; /*0x1001d6ee0*/
  *(_QWORD *)&__dst[v36] = v23; /*0x1001d6ee5*/
  *(_QWORD *)&v2[v6 + 12] = v29; /*0x1001d6ef0*/
  *(_QWORD *)&v2[v6 + 8] = v28; /*0x1001d6efc*/
  *(_QWORD *)&v2[v6 + 4] = v27; /*0x1001d6f0f*/
  *(_QWORD *)&v2[v6] = v26; /*0x1001d6f14*/
  result = a1[6]; /*0x1001d6f1d*/
  if ( !a1[4] ) /*0x1001d6f21*/
  {
    if ( !result ) /*0x1001d6f89*/
      return result; /*0x1001d6f89*/
LABEL_8:
    core::panicking::panic::h286e2dd5eab048be((__int64)&unk_10125C165, 40, (__int64)&off_1015266A0); /*0x1001d6f8f*/
  }
  if ( !result ) /*0x1001d6f26*/
    goto LABEL_8; /*0x1001d6f26*/
  memmove(&v2[4 * a2 + 316], v2 + 316, 8 * v41 + 8); /*0x1001d6f4d*/
  memcpy(v2 + 316, (const void *)(v35 + 8 * v39 + 632), 8 * a2); /*0x1001d6f69*/
  result = ((_BYTE)a2 + (_BYTE)v41 + 1) & 3; /*0x1001d6f75*/
  if ( v37 >= 3 ) /*0x1001d6f7d*/
  {
    v16 = 0; /*0x1001d6faa*/
    do /*0x1001d701e*/
    {
      v17 = *(_QWORD *)&v2[4 * v16 + 316]; /*0x1001d6fb0*/
      *(_QWORD *)(v17 + 352) = v2; /*0x1001d6fb8*/
      v18 = v16; /*0x1001d6fbf*/
      *(_WORD *)(v17 + 624) = v16; /*0x1001d6fc1*/
      v19 = *(_QWORD *)&v2[4 * v16 + 320]; /*0x1001d6fc8*/
      *(_QWORD *)(v19 + 352) = v2; /*0x1001d6fd0*/
      *(_WORD *)(v19 + 624) = v16 + 1; /*0x1001d6fdb*/
      v20 = *(_QWORD *)&v2[4 * v16 + 324]; /*0x1001d6fe3*/
      *(_QWORD *)(v20 + 352) = v2; /*0x1001d6feb*/
      *(_WORD *)(v20 + 624) = v16 + 2; /*0x1001d6ff6*/
      v21 = *(_QWORD *)&v2[4 * v16 + 328]; /*0x1001d6ffe*/
      v16 += 4; /*0x1001d7006*/
      *(_QWORD *)(v21 + 352) = v2; /*0x1001d700a*/
      *(_WORD *)(v21 + 624) = v18 + 3; /*0x1001d7014*/
    }
    while ( v16 != (((_BYTE)a2 + (_BYTE)v41 + 1) & 0x3C) ); /*0x1001d701e*/
  }
  else
  {
    v16 = 0; /*0x1001d6f7f*/
  }
  if ( (((_BYTE)a2 + (_BYTE)v41 + 1) & 3) != 0 ) /*0x1001d7023*/
  {
    do /*0x1001d704c*/
    {
      v22 = *(_QWORD *)&v2[4 * v16 + 316]; /*0x1001d7030*/
      *(_QWORD *)(v22 + 352) = v2; /*0x1001d7038*/
      *(_WORD *)(v22 + 624) = v16++; /*0x1001d703f*/
      --result; /*0x1001d7049*/
    }
    while ( result ); /*0x1001d704c*/
  }
  return result; /*0x1001d704e*/
}