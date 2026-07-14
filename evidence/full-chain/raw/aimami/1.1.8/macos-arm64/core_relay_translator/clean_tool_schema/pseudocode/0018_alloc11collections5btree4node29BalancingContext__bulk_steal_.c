// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND clean_tool_schema node 0x1001d7380 depth=5
__int64 __fastcall alloc::collections::btree::node::BalancingContext$LT$K$C$V$GT$::bulk_steal_right::h51c7036a3e2b14eb(
        __int64 *a1,
        unsigned __int64 a2)
{
  __int64 v2; // r14
  __int64 v3; // r10
  unsigned __int16 *v4; // rbx
  unsigned __int64 v5; // r9
  bool v6; // cf
  unsigned __int64 v7; // r9
  __int64 v8; // r11
  __int64 v9; // r13
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // r8
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v17; // r15
  __int64 result; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rsi
  __int16 v26; // di
  __int64 v27; // rsi
  __int64 v28; // rsi
  __int64 v29; // rsi
  __int64 v30; // rdx
  __int64 v31; // [rsp+38h] [rbp-B8h]
  __int64 v32; // [rsp+40h] [rbp-B0h]
  __int64 v33; // [rsp+48h] [rbp-A8h]
  __int64 v34; // [rsp+50h] [rbp-A0h]
  __int64 v35; // [rsp+58h] [rbp-98h]
  __int64 v36; // [rsp+60h] [rbp-90h]
  __int64 v37; // [rsp+68h] [rbp-88h]
  __int64 v38; // [rsp+70h] [rbp-80h]
  __int64 v39; // [rsp+78h] [rbp-78h]
  __int64 v40; // [rsp+80h] [rbp-70h]
  __int64 v41; // [rsp+88h] [rbp-68h]
  __int64 v42; // [rsp+98h] [rbp-58h]
  __int64 v43; // [rsp+A0h] [rbp-50h]
  size_t __n; // [rsp+B0h] [rbp-40h]
  unsigned __int64 v46; // [rsp+C0h] [rbp-30h]

  v2 = a1[3]; /*0x1001d7394*/
  v3 = *(unsigned __int16 *)(v2 + 626); /*0x1001d7398*/
  if ( a2 + v3 >= 0xC )
    core::panicking::panic::h286e2dd5eab048be(
      (__int64)"assertion failed: old_left_len + count <= CAPACITYassertion failed: old_right_len >= countassertion failed: match track_edge_idx {\n    LeftOrRight::Left(idx) => idx <= old_left_len,\n    LeftOrRight::Right(idx) => idx <= right_len,\n}assertion failed: new_left_len <= CAPACITYXML:com.adobe.xmpRaw profile type iptcRaw profile type 8bim",
      50,
      (__int64)&off_1015266B8);
  v4 = (unsigned __int16 *)a1[5]; /*0x1001d73ae*/
  v5 = v4[313]; /*0x1001d73b2*/
  v6 = v5 < a2; /*0x1001d73ba*/
  v7 = v5 - a2; /*0x1001d73ba*/
  if ( v6 )
    core::panicking::panic::h286e2dd5eab048be(
      (__int64)"assertion failed: old_right_len >= countassertion failed: match track_edge_idx {\n    LeftOrRight::Left(idx) => idx <= old_left_len,\n    LeftOrRight::Right(idx) => idx <= right_len,\n}assertion failed: new_left_len <= CAPACITYXML:com.adobe.xmpRaw profile type iptcRaw profile type 8bim",
      40,
      (__int64)&off_1015266D0);
  *(_WORD *)(v2 + 626) = a2 + v3; /*0x1001d73c3*/
  v4[313] = v7; /*0x1001d73cb*/
  v8 = 8 * a2; /*0x1001d73d3*/
  v9 = 16 * a2; /*0x1001d73e2*/
  v41 = *(_QWORD *)&v4[16 * a2 - 4]; /*0x1001d73eb*/
  v40 = *(_QWORD *)&v4[16 * a2 - 8]; /*0x1001d73f4*/
  v39 = *(_QWORD *)&v4[16 * a2 - 12]; /*0x1001d7402*/
  v38 = *(_QWORD *)&v4[16 * a2 - 16]; /*0x1001d7406*/
  v10 = *a1; /*0x1001d740a*/
  v11 = a1[2]; /*0x1001d740d*/
  v12 = 3 * v11; /*0x1001d7411*/
  v33 = *(_QWORD *)(*a1 + 24 * v11 + 376); /*0x1001d741d*/
  v32 = *(_QWORD *)(*a1 + 24 * v11 + 368); /*0x1001d7438*/
  v31 = *(_QWORD *)(*a1 + 24 * v11 + 360); /*0x1001d743f*/
  v42 = 3 * v8; /*0x1001d744a*/
  v13 = *(_QWORD *)&v4[12 * a2 + 176]; /*0x1001d744e*/
  v14 = *(_QWORD *)&v4[(unsigned __int64)(3 * v8) / 2 + 172]; /*0x1001d745e*/
  *(_QWORD *)(v10 + 8 * v12 + 360) = *(_QWORD *)&v4[(unsigned __int64)(3 * v8) / 2 + 168]; /*0x1001d7466*/
  *(_QWORD *)(v10 + 8 * v12 + 368) = v14; /*0x1001d746e*/
  v11 *= 32; /*0x1001d7476*/
  *(_QWORD *)(v10 + 8 * v12 + 376) = v13; /*0x1001d747a*/
  v37 = *(_QWORD *)(v10 + v11 + 24); /*0x1001d7487*/
  v36 = *(_QWORD *)(v10 + v11 + 16); /*0x1001d7493*/
  v35 = *(_QWORD *)(v10 + v11 + 8); /*0x1001d74a3*/
  v34 = *(_QWORD *)(v10 + v11); /*0x1001d74aa*/
  *(_QWORD *)(v10 + v11 + 24) = v41; /*0x1001d74b5*/
  *(_QWORD *)(v10 + v11 + 16) = v40; /*0x1001d74be*/
  *(_QWORD *)(v10 + v11 + 8) = v39; /*0x1001d74cb*/
  *(_QWORD *)(v10 + v11) = v38; /*0x1001d74d0*/
  v15 = 3 * v3; /*0x1001d7536*/
  *(_QWORD *)(v2 + 8 * v15 + 376) = v33; /*0x1001d753a*/
  *(_QWORD *)(v2 + 8 * v15 + 368) = v32; /*0x1001d7542*/
  *(_QWORD *)(v2 + 8 * v15 + 360) = v31; /*0x1001d754a*/
  v16 = (unsigned int)(32 * v3); /*0x1001d7555*/
  *(_QWORD *)(v2 + v16 + 24) = v37; /*0x1001d755f*/
  *(_QWORD *)(v2 + v16 + 16) = v36; /*0x1001d756b*/
  *(_QWORD *)(v2 + v16 + 8) = v35; /*0x1001d757e*/
  v46 = v7; /*0x1001d7583*/
  *(_QWORD *)(v2 + v16) = v34; /*0x1001d758e*/
  __n = v8; /*0x1001d7592*/
  v43 = v3; /*0x1001d759b*/
  v17 = v3 + 1; /*0x1001d759f*/
  memcpy((void *)(v2 + 24 * v3 + 384), v4 + 180, 3 * v8 - 24); /*0x1001d75ae*/
  memcpy((void *)(v2 + (unsigned int)(32 * v17)), v4, v9 * 2 - 32); /*0x1001d75c7*/
  memmove(v4 + 180, (char *)v4 + v42 + 360, 3LL * (unsigned int)(8 * v46)); /*0x1001d75ea*/
  memmove(v4, &v4[v9], (unsigned int)(32 * v46)); /*0x1001d75ff*/
  result = a1[6]; /*0x1001d760d*/
  if ( !a1[4] ) /*0x1001d7611*/
  {
    if ( !result ) /*0x1001d7712*/
      return result; /*0x1001d7712*/
LABEL_13:
    core::panicking::panic::h286e2dd5eab048be((__int64)&unk_10125C165, 40, (__int64)&off_1015266E8); /*0x1001d7718*/
  }
  if ( !result ) /*0x1001d761a*/
    goto LABEL_13; /*0x1001d761a*/
  memcpy((void *)(v2 + 8 * v17 + 632), v4 + 316, __n); /*0x1001d763a*/
  memmove(v4 + 316, &v4[4 * a2 + 316], 8 * v46 + 8); /*0x1001d765a*/
  v19 = *(_QWORD *)(v2 + 8 * v43 + 640); /*0x1001d7663*/
  *(_QWORD *)(v19 + 352) = v2; /*0x1001d766b*/
  *(_WORD *)(v19 + 624) = v17; /*0x1001d7672*/
  if ( a2 != 1 ) /*0x1001d767e*/
  {
    v20 = *(_QWORD *)(v2 + 8 * v43 + 648); /*0x1001d7680*/
    *(_QWORD *)(v20 + 352) = v2; /*0x1001d7688*/
    *(_WORD *)(v20 + 624) = v43 + 2; /*0x1001d7692*/
    if ( a2 != 2 ) /*0x1001d769d*/
    {
      v21 = *(_QWORD *)(v2 + 8 * v43 + 656); /*0x1001d769f*/
      *(_QWORD *)(v21 + 352) = v2; /*0x1001d76a7*/
      *(_WORD *)(v21 + 624) = v43 + 3; /*0x1001d76b1*/
      if ( a2 != 3 ) /*0x1001d76bc*/
      {
        v22 = *(_QWORD *)(v2 + 8 * v43 + 664); /*0x1001d76be*/
        *(_QWORD *)(v22 + 352) = v2; /*0x1001d76c6*/
        *(_WORD *)(v22 + 624) = v43 + 4; /*0x1001d76d0*/
        if ( a2 != 4 ) /*0x1001d76db*/
        {
          v23 = *(_QWORD *)(v2 + 8 * v43 + 672); /*0x1001d76dd*/
          *(_QWORD *)(v23 + 352) = v2; /*0x1001d76e5*/
          *(_WORD *)(v23 + 624) = v43 + 5; /*0x1001d76ef*/
        }
      }
    }
  }
  result = ((_BYTE)v46 + 1) & 3; /*0x1001d7700*/
  if ( (unsigned int)v46 >= 3 ) /*0x1001d7706*/
  {
    v24 = 0; /*0x1001d7734*/
    do /*0x1001d77ae*/
    {
      v25 = *(_QWORD *)&v4[4 * v24 + 316]; /*0x1001d7740*/
      *(_QWORD *)(v25 + 352) = v4; /*0x1001d7748*/
      v26 = v24; /*0x1001d774f*/
      *(_WORD *)(v25 + 624) = v24; /*0x1001d7751*/
      v27 = *(_QWORD *)&v4[4 * v24 + 320]; /*0x1001d7758*/
      *(_QWORD *)(v27 + 352) = v4; /*0x1001d7760*/
      *(_WORD *)(v27 + 624) = v24 + 1; /*0x1001d776b*/
      v28 = *(_QWORD *)&v4[4 * v24 + 324]; /*0x1001d7773*/
      *(_QWORD *)(v28 + 352) = v4; /*0x1001d777b*/
      *(_WORD *)(v28 + 624) = v24 + 2; /*0x1001d7786*/
      v29 = *(_QWORD *)&v4[4 * v24 + 328]; /*0x1001d778e*/
      v24 += 4; /*0x1001d7796*/
      *(_QWORD *)(v29 + 352) = v4; /*0x1001d779a*/
      *(_WORD *)(v29 + 624) = v26 + 3; /*0x1001d77a4*/
    }
    while ( v24 != ((v46 + 1) & 0xFFFFFFFFFFFFFFFCLL) ); /*0x1001d77ae*/
  }
  else
  {
    v24 = 0; /*0x1001d7708*/
  }
  if ( (((_BYTE)v46 + 1) & 3) != 0 ) /*0x1001d77b3*/
  {
    do /*0x1001d77dc*/
    {
      v30 = *(_QWORD *)&v4[4 * v24 + 316]; /*0x1001d77c0*/
      *(_QWORD *)(v30 + 352) = v4; /*0x1001d77c8*/
      *(_WORD *)(v30 + 624) = v24++; /*0x1001d77cf*/
      --result; /*0x1001d77d9*/
    }
    while ( result ); /*0x1001d77dc*/
  }
  return result; /*0x1001d77de*/
}