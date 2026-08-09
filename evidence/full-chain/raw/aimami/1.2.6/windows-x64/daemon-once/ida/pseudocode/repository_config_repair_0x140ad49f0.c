// sub_140AD49F0 @ 0x140ad49f0 | windows-x64 1.2.6 | role: auto-switch daemon config read + automatic repair on
// failure. Reads via sub_140AD62B0 (primary) / sub_140AD04E0 (fallback re-read); on repeated failure attempts a
// repair via sub_140B34A70; if repair itself fails (sub_14152B3A0 returns error discriminant -1), pushes a growable
// event/log vector entry tagged literally "AUTO_SWITCH_DAEMON_REPAIR_FAILED" (32-byte qmemcpy literal) formatted
// with the exact string "-Failed to repair enabled auto-switch daemon: " (unk_14185DDC8 @ 0x14185ddc8, matches
// REVERSE-STATUS.md fake-wall positive-control literal already on record). Does NOT panic on repair failure --
// returns a degraded/fallback config value and continues (persistence/default-when-absent answer for P0).
// verbatim Hex-Rays decompile() output, IDA MCP win, 2026-08-06
__int64 __fastcall sub_140AD49F0(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm2
  __int64 v8; // rbx
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm2
  __int64 v12; // rdi
  __int64 v13; // rbx
  _QWORD *v14; // r14
  __int64 v15; // rdx
  __int64 v16; // rdx
  int v17; // edx
  int v18; // r8d
  __int128 v19; // kr00_16
  __int64 v20; // r15
  void *v21; // rax
  __int64 v22; // rdi
  __int64 v23; // rax
  __int64 v24; // rcx
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int64 v27; // rdi
  unsigned __int64 v28; // rbx
  __int64 v29; // rdx
  __int128 v31; // [rsp+28h] [rbp-58h]
  _BYTE v32[40]; // [rsp+40h] [rbp-40h] BYREF
  __int128 v33; // [rsp+68h] [rbp-18h]
  __int128 v34; // [rsp+78h] [rbp-8h]
  __int128 v35; // [rsp+88h] [rbp+8h]
  __int128 v36; // [rsp+98h] [rbp+18h]
  _BYTE v37[728]; // [rsp+A8h] [rbp+28h] BYREF
  __int128 v38; // [rsp+380h] [rbp+300h]
  unsigned __int64 v39; // [rsp+390h] [rbp+310h]
  _BYTE v40[104]; // [rsp+470h] [rbp+3F0h] BYREF
  _BYTE v41[968]; // [rsp+4D8h] [rbp+458h] BYREF
  __int128 v42; // [rsp+8A0h] [rbp+820h] BYREF
  __int64 v43; // [rsp+8B0h] [rbp+830h]
  __int128 v44; // [rsp+8B8h] [rbp+838h] BYREF
  __m256i v45; // [rsp+8C8h] [rbp+848h]
  __int64 v46; // [rsp+8E8h] [rbp+868h]
  __m256i v47; // [rsp+8F0h] [rbp+870h] BYREF
  __int128 v48; // [rsp+910h] [rbp+890h]
  __int128 v49; // [rsp+920h] [rbp+8A0h]
  __int128 v50; // [rsp+930h] [rbp+8B0h]
  __int128 v51; // [rsp+940h] [rbp+8C0h]
  __int64 v52; // [rsp+958h] [rbp+8D8h] BYREF
  __int128 v53; // [rsp+960h] [rbp+8E0h] BYREF
  __int64 v54; // [rsp+970h] [rbp+8F0h]
  void *v55; // [rsp+978h] [rbp+8F8h]
  __int64 v56; // [rsp+980h] [rbp+900h]

  v56 = -2; /*0x140ad4a07*/
  sub_140AD62B0(v40, a2); /*0x140ad4a1f*/
  v4 = *(_QWORD *)v40; /*0x140ad4a24*/
  *(_OWORD *)v32 = *(_OWORD *)&v40[8]; /*0x140ad4a32*/
  *(_QWORD *)&v32[16] = *(_QWORD *)&v40[24]; /*0x140ad4a3d*/
  if ( *(_QWORD *)v40 != -1 ) /*0x140ad4a45*/
  {
    v5 = *(_OWORD *)&v40[32]; /*0x140ad4a47*/
    v6 = *(_OWORD *)&v40[48]; /*0x140ad4a4e*/
    v7 = *(_OWORD *)&v40[64]; /*0x140ad4a55*/
    *(_OWORD *)(a1 + 88) = *(_OWORD *)&v40[80]; /*0x140ad4a63*/
    *(_OWORD *)(a1 + 72) = v7; /*0x140ad4a67*/
    *(_OWORD *)(a1 + 56) = v6; /*0x140ad4a6b*/
    *(_OWORD *)(a1 + 40) = v5; /*0x140ad4a6f*/
    *(_QWORD *)(a1 + 32) = *(_QWORD *)&v32[16]; /*0x140ad4a77*/
    *(_OWORD *)(a1 + 16) = *(_OWORD *)v32; /*0x140ad4a7f*/
    *(_QWORD *)(a1 + 8) = v4; /*0x140ad4a83*/
    *(_QWORD *)a1 = 2; /*0x140ad4a87*/
    return a1; /*0x140ad4a8e*/
  }
  v53 = *(_OWORD *)v32; /*0x140ad4a97*/
  v54 = *(_QWORD *)&v32[16]; /*0x140ad4aa2*/
  sub_140AD04E0(v40, a2); /*0x140ad4ab3*/
  v8 = *(_QWORD *)v40; /*0x140ad4ab9*/
  v47 = *(__m256i *)&v40[8]; /*0x140ad4ac7*/
  v48 = *(_OWORD *)&v40[40]; /*0x140ad4ae3*/
  v49 = *(_OWORD *)&v40[56]; /*0x140ad4af1*/
  v50 = *(_OWORD *)&v40[72]; /*0x140ad4aff*/
  v51 = *(_OWORD *)&v40[88]; /*0x140ad4b0d*/
  if ( *(_QWORD *)v40 == 2 ) /*0x140ad4b18*/
  {
    *(_OWORD *)(a1 + 88) = v51; /*0x140ad4b25*/
    *(_OWORD *)(a1 + 72) = v50; /*0x140ad4b30*/
    v9 = *(_OWORD *)v47.m256i_i8; /*0x140ad4b34*/
    v10 = *(_OWORD *)&v47.m256i_u64[2]; /*0x140ad4b3b*/
    v11 = v48; /*0x140ad4b42*/
    *(_OWORD *)(a1 + 56) = v49; /*0x140ad4b50*/
    *(_OWORD *)(a1 + 40) = v11; /*0x140ad4b54*/
    *(_OWORD *)(a1 + 24) = v10; /*0x140ad4b58*/
    *(_OWORD *)(a1 + 8) = v9; /*0x140ad4b5c*/
    *(_QWORD *)a1 = 2; /*0x140ad4b60*/
    v12 = *((_QWORD *)&v53 + 1); /*0x140ad4b67*/
    v13 = v54; /*0x140ad4b6e*/
    if ( v54 ) /*0x140ad4b78*/
    {
      v14 = (_QWORD *)(*((_QWORD *)&v53 + 1) + 32LL); /*0x140ad4b7e*/
      do /*0x140ad4b97*/
      {
        v15 = *(v14 - 4); /*0x140ad4b9d*/
        if ( v15 ) /*0x140ad4ba4*/
          sub_140001660(*(v14 - 3), v15, 1); /*0x140ad4bb0*/
        v16 = *(v14 - 1); /*0x140ad4bb5*/
        if ( v16 ) /*0x140ad4bbc*/
          sub_140001660(*v14, v16, 1); /*0x140ad4bc7*/
        v14 += 6; /*0x140ad4b90*/
        --v13; /*0x140ad4b94*/
      }
      while ( v13 ); /*0x140ad4b97*/
    }
    if ( (_QWORD)v53 ) /*0x140ad4c7f*/
      sub_140001660(v12, 48 * v53, 8); /*0x140ad4c96*/
    return a1; /*0x140ad4c9b*/
  }
  sub_14172B820(v37, v41, 968); /*0x140ad4bdf*/
  *(__m256i *)&v32[8] = v47; /*0x140ad4c00*/
  v33 = v48; /*0x140ad4c08*/
  v34 = v49; /*0x140ad4c0c*/
  v35 = v50; /*0x140ad4c17*/
  v36 = v51; /*0x140ad4c22*/
  *(_QWORD *)v32 = v8; /*0x140ad4c26*/
  if ( v37[640] == 1 ) /*0x140ad4c31*/
  {
    sub_140B34A70(v40); /*0x140ad4c3e*/  // attempt repair of auto-switch daemon config
    if ( *(_QWORD *)v40 ) /*0x140ad4c4e*/
    {
      if ( *(_DWORD *)v40 != 1 && *(_QWORD *)&v40[8] ) /*0x140ad4c5f*/
        sub_140001660(*(_QWORD *)&v40[16], *(_QWORD *)&v40[8], 1); /*0x140ad4c6e*/
LABEL_21:
      sub_14152B3A0(v40); /*0x140ad4ccd*/
      if ( *(_QWORD *)v40 == -1 ) /*0x140ad4cef*/
      {
        v52 = *(_QWORD *)&v40[8]; /*0x140ad4d52*/
        *(_QWORD *)&v44 = &v52; /*0x140ad4d60*/
        *((_QWORD *)&v44 + 1) = sub_1415380C0; /*0x140ad4d6e*/
        sub_141543AF0(&v47, &unk_14185BF0A, &v44); /*0x140ad4d8a*/
        v19 = *(_OWORD *)v47.m256i_i8; /*0x140ad4d97*/
        v20 = v47.m256i_i64[2]; /*0x140ad4d9e*/
        sub_1400478E0(&v52); /*0x140ad4dac*/
        *(_OWORD *)&v47.m256i_u64[1] = v19; /*0x140ad4db2*/
        v47.m256i_i64[3] = v20; /*0x140ad4dc0*/
        v47.m256i_i64[0] = 10; /*0x140ad4dc7*/
      }
      else
      {
        v55 = *(void **)v40; /*0x140ad4cf1*/
        v31 = *(_OWORD *)(a2 + 8); /*0x140ad4d03*/
        v46 = *(_QWORD *)&v40[8]; /*0x140ad4d14*/
        sub_140B33C40( /*0x140ad4d1b*/
          (unsigned int)&v47,
          v17,
          v18,
          *(_DWORD *)&v40[8],
          *(__int64 *)&v40[16],
          v31,
          *((__int64 *)&v31 + 1));
        if ( v55 ) /*0x140ad4d2b*/
          sub_140001660(v46, v55, 1); /*0x140ad4d3a*/
        if ( v47.m256i_i64[0] == -1 ) /*0x140ad4d47*/
          goto LABEL_31; /*0x140ad4d47*/
      }
      *(_OWORD *)&v40[80] = v51; /*0x140ad4dd9*/
      *(_OWORD *)&v40[64] = v50; /*0x140ad4de7*/
      *(_OWORD *)&v40[48] = v49; /*0x140ad4e18*/
      *(_OWORD *)&v40[32] = v48; /*0x140ad4e1f*/
      *(__m256i *)v40 = v47; /*0x140ad4e26*/
      nullsub_1(); /*0x140ad4e42*/
      v21 = (void *)sub_140001650(32, 1); /*0x140ad4e51*/
      if ( !v21 ) /*0x140ad4e59*/
        sub_14176E54B(1, 32); /*0x140ad505f*/
      v55 = v21; /*0x140ad4e71*/
      qmemcpy(v21, "AUTO_SWITCH_DAEMON_REPAIR_FAILED", 32); /*0x140ad4e78*/
      *(_QWORD *)&v44 = v40; /*0x140ad4e7b*/
      *((_QWORD *)&v44 + 1) = sub_1405060F0; /*0x140ad4e89*/
      sub_141543AF0(&v42, &unk_14185DDC8, &v44); /*0x140ad4ea5*/
      *(_QWORD *)&v44 = 32; /*0x140ad4eab*/
      *((_QWORD *)&v44 + 1) = v55; /*0x140ad4ebd*/
      v45.m256i_i64[0] = 32; /*0x140ad4ec4*/
      *(_OWORD *)&v45.m256i_u64[1] = v42; /*0x140ad4ed6*/
      v45.m256i_i64[3] = v43; /*0x140ad4ee4*/
      v22 = v54; /*0x140ad4eeb*/
      if ( v54 == (_QWORD)v53 ) /*0x140ad4ef9*/
        sub_14172C7F0(&v53); /*0x140ad4f02*/
      v23 = *((_QWORD *)&v53 + 1); /*0x140ad4f08*/
      v24 = 48 * v22; /*0x140ad4f13*/
      v25 = v44; /*0x140ad4f17*/
      v26 = *(_OWORD *)v45.m256i_i8; /*0x140ad4f1e*/
      *(_OWORD *)(*((_QWORD *)&v53 + 1) + v24 + 32) = *(_OWORD *)&v45.m256i_u64[2]; /*0x140ad4f2c*/
      *(_OWORD *)(v23 + v24 + 16) = v26; /*0x140ad4f31*/
      *(_OWORD *)(v23 + v24) = v25; /*0x140ad4f36*/
      v54 = v22 + 1; /*0x140ad4f3d*/
      sub_140A9E920(v40); /*0x140ad4f4b*/
      goto LABEL_31; /*0x140ad4f4b*/
    }
    if ( *(_QWORD *)&v40[8] == -1 ) /*0x140ad4cab*/
      goto LABEL_21; /*0x140ad4cab*/
    if ( *(_QWORD *)&v40[8] ) /*0x140ad4cb0*/
      sub_140001660(*(_QWORD *)&v40[16], *(_QWORD *)&v40[8], 1); /*0x140ad4cc3*/
  }
LABEL_31:
  v27 = *((_QWORD *)&v38 + 1); /*0x140ad4f51*/
  v28 = v39; /*0x140ad4f58*/
  v29 = v54; /*0x140ad4f66*/
  if ( v39 > (__int64)v53 - v54 ) /*0x140ad4f73*/
  {
    sub_14172C420((unsigned int)&v53, v54, v39, 8, 48); /*0x140ad5043*/
    v29 = v54; /*0x140ad5049*/
    goto LABEL_33; /*0x140ad5050*/
  }
  if ( v39 ) /*0x140ad4f7c*/
  {
LABEL_33:
    sub_14172B820(*((_QWORD *)&v53 + 1) + 48 * v29, v27, 48 * v28); /*0x140ad4f7e*/
    v29 = v54; /*0x140ad4fa0*/
  }
  v54 = v28 + v29; /*0x140ad4fa7*/
  *(_QWORD *)&v40[16] = v28 + v29; /*0x140ad4fb8*/
  *(_OWORD *)v40 = v53; /*0x140ad4fc6*/
  if ( (_QWORD)v38 ) /*0x140ad4fd7*/
    sub_140001660(v27, 48 * v38, 8); /*0x140ad4fea*/
  v39 = *(_QWORD *)&v40[16]; /*0x140ad4ff6*/
  v38 = *(_OWORD *)v40; /*0x140ad5001*/
  sub_14172B820(a1, v32, 1072); /*0x140ad5012*/
  return a1; /*0x140ad501a*/
}

// refs: sub_140AD62B0 (primary read), sub_140AD04E0 (fallback re-read), sub_140B34A70 (repair attempt),
// sub_14152B3A0 (repair result check), unk_14185BF0A, sub_140B33C40, unk_14185DDC8="-Failed to repair enabled
// auto-switch daemon: "@0x14185ddc8 (already on record in REVERSE-STATUS.md fake-wall positive-control list),
// sub_14172C7F0/sub_14172C420 (Vec growth helpers), sub_140A9E920, sub_1405060F0, sub_141543AF0, sub_1400478E0
