// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND clean_tool_schema node 0x1001d7f00 depth=5
unsigned __int64 __fastcall alloc::collections::btree::node::BalancingContext$LT$K$C$V$GT$::merge_tracking_child_edge::h728fc930d2a88e1e(
        _QWORD *a1,
        _QWORD *a2,
        char a3,
        unsigned __int64 a4)
{
  __int64 v4; // r15
  unsigned __int64 v5; // r12
  unsigned __int64 v6; // rax
  __int64 v7; // r10
  __int64 v8; // rax
  unsigned __int64 v9; // r8
  __int64 v10; // r13
  unsigned __int64 v11; // r10
  __int64 v12; // rbx
  unsigned __int64 v13; // r14
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // r12
  __int64 v17; // rdx
  __int64 v18; // rsi
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  int v23; // ebx
  unsigned __int64 v24; // rax
  __int64 v25; // rbx
  __int64 i; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rcx
  unsigned __int64 v32; // rdx
  unsigned __int64 v33; // rax
  unsigned __int64 result; // rax
  unsigned __int64 v35; // [rsp+8h] [rbp-A8h]
  unsigned __int64 v36; // [rsp+10h] [rbp-A0h]
  __int64 v39; // [rsp+38h] [rbp-78h]
  unsigned __int64 v40; // [rsp+40h] [rbp-70h]
  __int64 v41; // [rsp+48h] [rbp-68h]
  __int64 v42; // [rsp+50h] [rbp-60h]
  __int64 v43; // [rsp+50h] [rbp-60h]
  __int64 v44; // [rsp+58h] [rbp-58h]
  __int64 v45; // [rsp+58h] [rbp-58h]
  __int64 v46; // [rsp+60h] [rbp-50h]
  __int64 v47; // [rsp+60h] [rbp-50h]
  __int64 v48; // [rsp+68h] [rbp-48h]
  char *__src; // [rsp+70h] [rbp-40h]
  unsigned __int64 v50; // [rsp+78h] [rbp-38h]
  __int64 v51; // [rsp+80h] [rbp-30h]

  v4 = a2[3]; /*0x1001d7f14*/
  v5 = *(unsigned __int16 *)(v4 + 626); /*0x1001d7f18*/
  v6 = v5; /*0x1001d7f20*/
  if ( (a3 & 1) != 0 ) /*0x1001d7f26*/
    v6 = *(unsigned __int16 *)(a2[5] + 626LL); /*0x1001d7f2c*/
  if ( a4 > v6 )
    core::panicking::panic::h286e2dd5eab048be(
      (__int64)"assertion failed: match track_edge_idx {\n    LeftOrRight::Left(idx) => idx <= old_left_len,\n    LeftOrRight::Right(idx) => idx <= right_len,\n}assertion failed: new_left_len <= CAPACITYXML:com.adobe.xmpRaw profile type iptcRaw profile type 8bim",
      142,
      (__int64)&off_101526700);
  v7 = a2[5]; /*0x1001d7f3c*/
  v8 = *(unsigned __int16 *)(v7 + 626); /*0x1001d7f40*/
  v9 = v5 + v8 + 1; /*0x1001d7f48*/
  if ( v9 >= 0xC )
    core::panicking::panic::h286e2dd5eab048be(
      (__int64)"assertion failed: new_left_len <= CAPACITYXML:com.adobe.xmpRaw profile type iptcRaw profile type 8bim",
      42,
      (__int64)&off_101526718);
  v51 = *(unsigned __int16 *)(v7 + 626); /*0x1001d7f69*/
  v10 = *a2; /*0x1001d7f6d*/
  v35 = a2[1]; /*0x1001d7f74*/
  __src = (char *)a2[5]; /*0x1001d7f7b*/
  v11 = *(unsigned __int16 *)(*a2 + 626LL); /*0x1001d7f7f*/
  v36 = v11; /*0x1001d7f87*/
  v39 = a2[4]; /*0x1001d7f92*/
  v50 = v5 + 1; /*0x1001d7f9b*/
  v12 = a2[2]; /*0x1001d7f9f*/
  v41 = v5 + v8 + 1; /*0x1001d7fa3*/
  *(_WORD *)(v4 + 626) = v9; /*0x1001d7fa7*/
  v46 = *(_QWORD *)(v10 + 24 * v12 + 376); /*0x1001d7fc3*/
  v44 = *(_QWORD *)(v10 + 24 * v12 + 368); /*0x1001d7fd7*/
  v42 = *(_QWORD *)(v10 + 24 * v12 + 360); /*0x1001d7fdb*/
  v13 = v11 + ~v12; /*0x1001d7fed*/
  memmove((void *)(v10 + 24 * v12 + 360), (const void *)(v10 + 24 * v12 + 384), 24 * v13); /*0x1001d8003*/
  v14 = 3 * v5; /*0x1001d8008*/
  *(_QWORD *)(v4 + 8 * v14 + 360) = v42; /*0x1001d8014*/
  *(_QWORD *)(v4 + 8 * v14 + 368) = v44; /*0x1001d801c*/
  *(_QWORD *)(v4 + 8 * v14 + 376) = v46; /*0x1001d8028*/
  memcpy((void *)(v4 + 24 * (v5 + 1) + 360), __src + 360, 3LL * (unsigned int)(8 * v51)); /*0x1001d805a*/
  v48 = *(_QWORD *)(v10 + 32 * v12 + 24); /*0x1001d8070*/
  v47 = *(_QWORD *)(v10 + 32 * v12 + 16); /*0x1001d8079*/
  v45 = *(_QWORD *)(v10 + 32 * v12 + 8); /*0x1001d8087*/
  v43 = *(_QWORD *)(v10 + 32 * v12); /*0x1001d808b*/
  memmove((void *)(v10 + 32 * v12), (const void *)(v10 + 32 * v12 + 32), 32 * v13); /*0x1001d809b*/
  v40 = v5; /*0x1001d80a0*/
  v15 = (unsigned int)(32 * v5); /*0x1001d80a7*/
  *(_QWORD *)(v4 + v15) = v43; /*0x1001d80b2*/
  *(_QWORD *)(v4 + v15 + 8) = v45; /*0x1001d80b6*/
  *(_QWORD *)(v4 + v15 + 16) = v47; /*0x1001d80bf*/
  *(_QWORD *)(v4 + v15 + 24) = v48; /*0x1001d80c8*/
  memcpy((void *)(v4 + (unsigned int)(32 * (v5 + 1))), __src, (unsigned int)(32 * v51)); /*0x1001d80e2*/
  v16 = v12 + 1; /*0x1001d80e7*/
  memmove((void *)(v10 + 8 * v12 + 640), (const void *)(v10 + 8 * v12 + 648), 8 * v13); /*0x1001d8105*/
  if ( v12 + 1 < v36 ) /*0x1001d8114*/
  {
    if ( (((_BYTE)v36 + ~(_BYTE)v12) & 3) != 0 ) /*0x1001d812f*/
    {
      v17 = 0; /*0x1001d8131*/
      do /*0x1001d815c*/
      {
        v18 = *(_QWORD *)(v10 + 8 * v12 + 640 + 8 * v17); /*0x1001d8140*/
        *(_QWORD *)(v18 + 352) = v10; /*0x1001d8144*/
        *(_WORD *)(v18 + 624) = v16 + v17++; /*0x1001d814f*/
      }
      while ( (((_BYTE)v36 + ~(_BYTE)v12) & 3) != v17 ); /*0x1001d815c*/
      v16 += v17; /*0x1001d815e*/
    }
    if ( v36 - v12 - 2 >= 3 ) /*0x1001d8165*/
    {
      do /*0x1001d81df*/
      {
        v19 = *(_QWORD *)(v10 + 8 * v16 + 632); /*0x1001d8170*/
        *(_QWORD *)(v19 + 352) = v10; /*0x1001d8178*/
        *(_WORD *)(v19 + 624) = v16; /*0x1001d817f*/
        v20 = *(_QWORD *)(v10 + 8 * v16 + 640); /*0x1001d8187*/
        *(_QWORD *)(v20 + 352) = v10; /*0x1001d818f*/
        *(_WORD *)(v20 + 624) = v16 + 1; /*0x1001d819b*/
        v21 = *(_QWORD *)(v10 + 8 * v16 + 648); /*0x1001d81a2*/
        *(_QWORD *)(v21 + 352) = v10; /*0x1001d81aa*/
        *(_WORD *)(v21 + 624) = v16 + 2; /*0x1001d81b6*/
        v22 = *(_QWORD *)(v10 + 8 * v16 + 656); /*0x1001d81bd*/
        *(_QWORD *)(v22 + 352) = v10; /*0x1001d81c5*/
        *(_WORD *)(v22 + 624) = v16 + 3; /*0x1001d81d1*/
        v16 += 4; /*0x1001d81d8*/
      }
      while ( v16 != v36 ); /*0x1001d81df*/
    }
  }
  --*(_WORD *)(v10 + 626); /*0x1001d81e1*/
  if ( v35 >= 2 )
  {
    v23 = v51 + 1; /*0x1001d8208*/
    if ( v51 + 1 != v41 - v40 )
      core::panicking::panic::h286e2dd5eab048be(
        (__int64)"assertion failed: src.len() == dst.len()assertion failed: edge.height == self.node.height - 1assertion failed: old_right_len + count <= CAPACITYassertion failed: old_left_len >= countassertion failed: old_left_len + count <= CAPACITYassertion failed: old_right_len >= countassertion failed: match track_edge_idx {\n    LeftOrRight::Left(idx) => idx <= old_left_len,\n    LeftOrRight::Right(idx) => idx <= right_len,\n}assertion failed: new_left_len <= CAPACITYXML:com.adobe.xmpRaw profile type iptcRaw profile type 8bim",
        40,
        (__int64)&off_101526610);
    memcpy((void *)(v4 + 632 + 8 * v50), __src + 632, (unsigned int)(8 * v23)); /*0x1001d8236*/
    v24 = v50; /*0x1001d823b*/
    v25 = v23 & 3; /*0x1001d823e*/
    if ( v25 ) /*0x1001d8242*/
    {
      for ( i = 0; i != v25; ++i ) /*0x1001d8250*/
      {
        v27 = *(_QWORD *)(v4 + 8 * v40 + 640 + 8 * i); /*0x1001d8260*/
        *(_QWORD *)(v27 + 352) = v4; /*0x1001d8264*/
        *(_WORD *)(v27 + 624) = v50 + i; /*0x1001d826f*/
      }
      v24 = v50 + i; /*0x1001d827e*/
    }
    if ( (unsigned __int16)v51 >= 3u ) /*0x1001d828b*/
    {
      do /*0x1001d8309*/
      {
        v28 = *(_QWORD *)(v4 + 8 * v24 + 632); /*0x1001d82a0*/
        *(_QWORD *)(v28 + 352) = v4; /*0x1001d82a8*/
        *(_WORD *)(v28 + 624) = v24; /*0x1001d82af*/
        v29 = *(_QWORD *)(v4 + 8 * v24 + 640); /*0x1001d82b6*/
        *(_QWORD *)(v29 + 352) = v4; /*0x1001d82be*/
        *(_WORD *)(v29 + 624) = v24 + 1; /*0x1001d82c8*/
        v30 = *(_QWORD *)(v4 + 8 * v24 + 648); /*0x1001d82cf*/
        *(_QWORD *)(v30 + 352) = v4; /*0x1001d82d7*/
        *(_WORD *)(v30 + 624) = v24 + 2; /*0x1001d82e1*/
        v31 = *(_QWORD *)(v4 + 8 * v24 + 656); /*0x1001d82e8*/
        *(_QWORD *)(v31 + 352) = v4; /*0x1001d82f0*/
        v32 = v24 + 3; /*0x1001d82f7*/
        *(_WORD *)(v31 + 624) = v24 + 3; /*0x1001d82fb*/
        v24 += 4LL; /*0x1001d8302*/
      }
      while ( v32 != v41 ); /*0x1001d8309*/
    }
  }
  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1001d8313*/
  v33 = 0; /*0x1001d8318*/
  if ( (a3 & 1) != 0 ) /*0x1001d831e*/
    v33 = v50; /*0x1001d831e*/
  result = a4 + v33; /*0x1001d8322*/
  *a1 = v4; /*0x1001d8330*/
  a1[1] = v39; /*0x1001d8337*/
  a1[2] = result; /*0x1001d833b*/
  return result; /*0x1001d833f*/
}