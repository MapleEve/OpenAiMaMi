// module: core::relay::proxy_server (codexmate_lib::core::relay::proxy_server)
// source (embedded panic Location / cross-platform symbol match): src\core\relay\proxy_server.rs
// binary: AiMaMi.1.2.3 win64.exe (Windows x64, stripped, imagebase 0x140000000)
// addr: 0x1407b46a0  size: 0xffd  tier: C  evidence: panic-location-2hop
// decompiled via IDA Hex-Rays (remote IDA MCP, host 192.168.110.94)
// status: FULL — not truncated, single decompile call, no chunking needed
//
// Functional summary:
//   Same reference set as sub_1407B2DD0 (Unfold-poll-after-None guard, unreachable-code guard,
//   char_boundary assertion); one of the four SSE/chunk-decoder state-machine instantiations for this
//   module.
//
// Referenced strings/symbols:
//   0x1416c3400  sub_1416C3400
//   0x141787f60  off_141787F60
//   0x1416c3420  sub_1416C3420
//   0x1416c32a0  sub_1416C32A0
//   0x141790658  aUnfoldMustNotB   "Unfold must not be polled after it returned `Poll::Ready(None)`"
//   0x141790710  off_141790710
//   0x1417b3efa  aInternalErrorE_128   "internal error: entered unreachable code"
//   0x1417b54a8  off_1417B54A8
//   0x141684120  sub_141684120
//   0x1406ca890  sub_1406CA890
//   0x1407b7bd0  sub_1407B7BD0
//   0x141031f10  sub_141031F10
//   0x14149c0f0  sub_14149C0F0
//   0x141787fed  unk_141787FED
//   0x140001690  nullsub_1
//   0x140001650  sub_140001650
//   0x1416c2d31  sub_1416C2D31
//   0x141475210  sub_141475210
//   0x1417a9e28  off_1417A9E28
//   0x1406cb7b0  sub_1406CB7B0
//   0x1414a3c90  sub_1414A3C90
//   0x141787e08  unk_141787E08
//   0x1414ac520  sub_1414AC520
//   0x141787fa8  unk_141787FA8
//   0x140001660  sub_140001660
//   0x1406ced30  sub_1406CED30
//   0x1405b02e0  sub_1405B02E0
//   0x1407bc790  sub_1407BC790
//   0x1416c2f60  sub_1416C2F60
//   0x141787f78  off_141787F78
//   0x1416c2d4b  sub_1416C2D4B
//   0x1416c32f0  sub_1416C32F0
//   0x1417a66a0  off_1417A66A0
//   0x14179c750  aAssertionFaile_18   "assertion failed: self.is_char_boundary(end)"
//   0x141787f90  off_141787F90
//   0x14149c460  sub_14149C460
//   0x1409cec90  sub_1409CEC90
//   0x141688d30  sub_141688D30
//   0x141447850  sub_141447850
//   0x141788f08  off_141788F08
//   0x1409cea10  sub_1409CEA10
// win 1.2.1 | module src/core/relay/proxy_server.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_1407B46A0(__int64 a1, __m128i *a2, __int64 a3, __int64 a4)
{
  __m128i *v4; // r12
  __int64 v5; // r13
  __m128i v6; // xmm6
  __m128i *v7; // r14
  __int64 v9; // rax
  bool v10; // zf
  __int64 v11; // rax
  __int64 v12; // rdi
  __int8 *v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 *v17; // r12
  unsigned __int64 v18; // rdx
  __m128i v19; // kr00_16
  __int64 v20; // rdi
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rdi
  __m128i *v25; // rax
  char v26; // r14
  __int64 (__fastcall **v27)(); // rbx
  __int64 v28; // r15
  void (__fastcall *v29)(unsigned __int64 *, __int64, __int64); // rax
  __int64 *v30; // rdi
  __int64 v31; // rax
  __int64 v32; // r8
  __int64 v33; // r14
  __int64 v34; // rbx
  __m128i *v35; // rdi
  __m128i *v36; // rdi
  __int64 *v37; // rdx
  __m128i v38; // kr10_16
  __int64 v39; // rdi
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rcx
  __int64 *v43; // rax
  __int64 v44; // rax
  __int8 *v45; // rdi
  __int64 v46; // rdx
  __m128i *v47; // rcx
  __int64 v48; // rbx
  __int64 v49; // rdi
  __int64 v50; // rdx
  _QWORD *v51; // rdi
  __int64 v52; // r14
  __int64 **v53; // r15
  __m128i *v54; // rbx
  __int64 (__fastcall *v55)(); // r12
  __m128i *v56; // rcx
  unsigned __int64 v57; // r8
  __int64 v58; // r13
  __int64 **v59; // rbx
  __int64 v60; // r15
  _QWORD *v61; // r14
  __int64 v62; // rdi
  __int64 v63; // r12
  __int64 v64; // rax
  char *v65; // rax
  __int64 v66; // rcx
  __int64 v67; // r13
  __int64 v68; // rdx
  __int64 v69; // r14
  __int64 v70; // rdx
  __int64 *v71; // rdi
  int v72; // eax
  __m128i *v73; // rdi
  __m128i v74; // xmm1
  _QWORD *v76; // rdx
  __m128i *v77; // rdi
  __int64 *v78; // rdx
  _BYTE v79[360]; // [rsp+30h] [rbp-50h] BYREF
  _BYTE v80[360]; // [rsp+198h] [rbp+118h] BYREF
  __m128i v81[23]; // [rsp+300h] [rbp+280h] BYREF
  __m128i v82; // [rsp+470h] [rbp+3F0h] BYREF
  __m128i v83; // [rsp+480h] [rbp+400h]
  __m128i si128; // [rsp+490h] [rbp+410h] BYREF
  __m128i v85; // [rsp+4A0h] [rbp+420h] BYREF
  __m128i v86; // [rsp+4B0h] [rbp+430h] BYREF
  __int64 v87; // [rsp+4C0h] [rbp+440h] BYREF
  char v88; // [rsp+4C8h] [rbp+448h]
  __int64 *v89; // [rsp+628h] [rbp+5A8h]
  char v90; // [rsp+630h] [rbp+5B0h]
  __m128i v91[2]; // [rsp+640h] [rbp+5C0h] BYREF
  __int64 v92; // [rsp+668h] [rbp+5E8h] BYREF
  __int64 v93; // [rsp+670h] [rbp+5F0h]
  __m128i v94; // [rsp+678h] [rbp+5F8h] BYREF
  __int64 *v95; // [rsp+688h] [rbp+608h] BYREF
  __int64 (__fastcall *v96)(); // [rsp+690h] [rbp+610h]
  __m128i v97; // [rsp+698h] [rbp+618h]
  __int64 v98; // [rsp+6B0h] [rbp+630h] BYREF
  __int64 v99; // [rsp+6B8h] [rbp+638h]
  __m128i *v100; // [rsp+6C0h] [rbp+640h]
  __m128i *v101; // [rsp+6C8h] [rbp+648h]
  __m128i *v102; // [rsp+6D0h] [rbp+650h]
  __int64 v103; // [rsp+6D8h] [rbp+658h]
  __int8 *v104; // [rsp+6E0h] [rbp+660h]
  __int64 m128i_i64; // [rsp+6E8h] [rbp+668h]
  __int64 v106; // [rsp+6F0h] [rbp+670h]
  __m128i *v107; // [rsp+6F8h] [rbp+678h]
  char v108; // [rsp+706h] [rbp+686h]
  char v109; // [rsp+707h] [rbp+687h]
  __int64 v110; // [rsp+708h] [rbp+688h]

  v110 = -2; /*0x1407b46c3*/
  v7 = a2; /*0x1407b46ce*/
  v9 = a2->m128i_i64[0]; /*0x1407b46d4*/
  v10 = a2->m128i_i64[0] == 0; /*0x1407b46d7*/
  v107 = a2; /*0x1407b46da*/
  if ( !v10 ) /*0x1407b46e1*/
  {
    if ( (_DWORD)v9 == 1 ) /*0x1407b47e8*/
    {
      v13 = &a2[26].m128i_i8[9]; /*0x1407b47ee*/
      v14 = v7[26].m128i_u8[9]; /*0x1407b47f5*/
      v102 = (__m128i *)&v7->m128i_u64[1]; /*0x1407b4801*/
      v104 = &v7[26].m128i_i8[9]; /*0x1407b4816*/
      switch ( v14 ) /*0x1407b481d*/
      {
        case 0LL: /*0x1407b481d*/
          goto LABEL_6;
        case 1LL: /*0x1407b481d*/
          sub_1416C3400(&off_141787F60, v13, a3, a4); /*0x1407b5663*/
        case 2LL: /*0x1407b481d*/
          sub_1416C3420(&off_141787F60, v13, a3, a4); /*0x1407b5655*/
        case 3LL: /*0x1407b481d*/
          v15 = *(_QWORD *)v7[26].m128i_i64[0]; /*0x1407b486b*/
          goto LABEL_10; /*0x1407b486b*/
      }
    }
    sub_1416C32A0(aUnfoldMustNotB, 63, &off_141790710); /*0x1407b54d6*/
  }
  v11 = a2->m128i_i64[1]; /*0x1407b46e7*/
  a2->m128i_i64[0] = 2; /*0x1407b46eb*/
  if ( v11 < 0 ) /*0x1407b46f5*/
    sub_1416C32A0(aInternalErrorE_128, 40, &off_1417B54A8); /*0x1407b5558*/
  v103 = v11; /*0x1407b46fb*/
  v12 = a3; /*0x1407b4702*/
  v101 = a2 + 1; /*0x1407b4709*/
  v106 = a2[25].m128i_i64[0]; /*0x1407b4717*/
  LOBYTE(v104) = a2[25].m128i_i8[8]; /*0x1407b4726*/
  m128i_i64 = (__int64)a2[2].m128i_i64; /*0x1407b473d*/
  sub_141684120(&v85, &a2[2], 368); /*0x1407b4744*/
  v81[0] = v7[1]; /*0x1407b474e*/
  sub_1406CA890(v7); /*0x1407b4758*/
  v7 = v107; /*0x1407b475e*/
  v107->m128i_i64[0] = 1; /*0x1407b4765*/
  v102 = (__m128i *)&v7->m128i_u64[1]; /*0x1407b4770*/
  v7->m128i_i64[1] = v103; /*0x1407b477e*/
  *v101 = _mm_load_si128(v81); /*0x1407b4791*/
  sub_141684120(m128i_i64, &v85, 368); /*0x1407b47a9*/
  v7[25].m128i_i64[0] = v106; /*0x1407b47b5*/
  v7[26].m128i_i8[8] = (char)v104; /*0x1407b47c3*/
  LODWORD(v14) = (_DWORD)v7 + 425; /*0x1407b47ca*/
  v104 = &v7[26].m128i_i8[9]; /*0x1407b47d1*/
  v7[26].m128i_i8[9] = 0; /*0x1407b47d8*/
  a3 = v12; /*0x1407b47e0*/
LABEL_6:
  v7[26].m128i_i8[12] = 1; /*0x1407b481f*/
  v7[26].m128i_i16[5] = 257; /*0x1407b4827*/
  if ( v7[26].m128i_i8[8] == 1 && v7[2].m128i_i64[0] == -1 ) /*0x1407b4840*/
  {
    v28 = -1; /*0x1407b4bde*/
    LODWORD(v106) = v14; /*0x1407b4be5*/
    goto LABEL_34; /*0x1407b4beb*/
  }
  v15 = v7[25].m128i_i64[0]; /*0x1407b4846*/
  v7[25].m128i_i64[1] = v15; /*0x1407b4854*/
  v7[26].m128i_i64[0] = (__int64)&v7[25].m128i_i64[1]; /*0x1407b485b*/
LABEL_10:
  sub_1407B7BD0(&v85, v15, a3); /*0x1407b486e*/
  if ( v85.m128i_i64[0] == 2 ) /*0x1407b4886*/
  {
    *v104 = 3; /*0x1407b488f*/
    *(_QWORD *)a1 = 2; /*0x1407b4892*/
    return a1; /*0x1407b4899*/
  }
  v16 = v86.m128i_i64[0]; /*0x1407b48a5*/
  v82 = _mm_loadu_si128((const __m128i *)&v86.m128i_u64[1]); /*0x1407b48b4*/
  if ( v85.m128i_i32[0] == 1 ) /*0x1407b48bf*/
  {
    if ( !v85.m128i_i64[1] ) /*0x1407b48c8*/
    {
      v92 = v86.m128i_i64[0]; /*0x1407b4bf0*/
      v95 = &v92; /*0x1407b4bfe*/
      v96 = sub_141031F10; /*0x1407b4c0c*/
      sub_14149C0F0(&v85, &unk_141787FED, &v95); /*0x1407b4c28*/
      v38 = v85; /*0x1407b4c35*/
      v39 = v86.m128i_i64[0]; /*0x1407b4c3c*/
      nullsub_1(v40); /*0x1407b4c43*/
      v41 = sub_140001650(24, 8); /*0x1407b4c52*/
      if ( !v41 ) /*0x1407b4c5a*/
      {
        m128i_i64 = v38.m128i_i64[1]; /*0x1407b555f*/
        v106 = v38.m128i_i64[0]; /*0x1407b5566*/
        sub_1416C2D31(8, 24); /*0x1407b5577*/
      }
      *(__m128i *)v41 = v38; /*0x1407b4c60*/
      *(_QWORD *)(v41 + 16) = v39; /*0x1407b4c67*/
      LOBYTE(v42) = 40; /*0x1407b4c72*/
      v24 = sub_141475210(v42, v41, &off_1417A9E28); /*0x1407b4c7d*/
      v43 = (__int64 *)v107; /*0x1407b4c80*/
      v4 = (__m128i *)v107[25].m128i_i64[0]; /*0x1407b4c87*/
      v107[26].m128i_i16[5] = 0; /*0x1407b4c8e*/
      v28 = v43[1]; /*0x1407b4c97*/
      v103 = v43[2]; /*0x1407b4c9f*/
      v5 = v43[3]; /*0x1407b4ca6*/
      v44 = sub_1406CB7B0(v92); /*0x1407b4cb1*/
      LOBYTE(v44) = 1; /*0x1407b4cb7*/
      LODWORD(v106) = v44; /*0x1407b4cb9*/
      m128i_i64 = -1; /*0x1407b4cbf*/
      v27 = nullptr; /*0x1407b4cca*/
      goto LABEL_31; /*0x1407b4cca*/
    }
    v94 = _mm_load_si128(&v82); /*0x1407b48d6*/
    v98 = 0; /*0x1407b48de*/
    v99 = 1; /*0x1407b48e9*/
    v100 = nullptr; /*0x1407b48f4*/
    v92 = v85.m128i_i64[1]; /*0x1407b48ff*/
    v93 = v86.m128i_i64[0]; /*0x1407b4906*/
    v109 = 1; /*0x1407b4914*/
    sub_1414A3C90(&v85, v86.m128i_i64[0], v94.m128i_i64[0]); /*0x1407b4922*/
    if ( v85.m128i_i32[0] == 1 ) /*0x1407b492f*/
    {
      v17 = (__int64 *)v107; /*0x1407b4935*/
      v18 = v107[1].m128i_u64[1]; /*0x1407b493c*/
      if ( v18 > 0x4000000 ) /*0x1407b4948*/
      {
LABEL_16:
        v95 = (__int64 *)&unk_141787E08; /*0x1407b494e*/
        v96 = sub_1414AC520; /*0x1407b4963*/
        v109 = 1; /*0x1407b496a*/
        sub_14149C0F0(&v85, &unk_141787FA8, &v95); /*0x1407b4986*/
        v19 = v85; /*0x1407b4993*/
        v20 = v86.m128i_i64[0]; /*0x1407b499a*/
        nullsub_1(v21); /*0x1407b49a1*/
        v22 = sub_140001650(24, 8); /*0x1407b49b0*/
        if ( !v22 ) /*0x1407b49b8*/
        {
          m128i_i64 = v19.m128i_i64[1]; /*0x1407b5582*/
          v106 = v19.m128i_i64[0]; /*0x1407b5589*/
          sub_1416C2D31(8, 24); /*0x1407b559a*/
        }
        *(__m128i *)v22 = v19; /*0x1407b49be*/
        *(_QWORD *)(v22 + 16) = v20; /*0x1407b49c5*/
        v109 = 1; /*0x1407b49c9*/
        LOBYTE(v23) = 40; /*0x1407b49d7*/
        v24 = sub_141475210(v23, v22, &off_1417A9E28); /*0x1407b49e2*/
        v25 = v107; /*0x1407b49e5*/
        v107[26].m128i_i8[11] = 0; /*0x1407b49ec*/
        v4 = (__m128i *)v25[25].m128i_i64[0]; /*0x1407b49f3*/
        m128i_i64 = -1; /*0x1407b49fa*/
        v26 = 1; /*0x1407b4a05*/
        v103 = 1; /*0x1407b4a0d*/
        v5 = 0; /*0x1407b4a14*/
        v27 = nullptr; /*0x1407b4a17*/
        v28 = 0; /*0x1407b4a19*/
        LODWORD(v106) = 1; /*0x1407b4a1e*/
LABEL_18:
        v29 = *(void (__fastcall **)(unsigned __int64 *, __int64, __int64))(v92 + 32); /*0x1407b4a24*/
        v108 = v26; /*0x1407b4a44*/
        v29(&v94.m128i_u64[1], v93, v94.m128i_i64[0]); /*0x1407b4a4b*/
        if ( v26 ) /*0x1407b4a51*/
        {
          v13 = (__int8 *)v98; /*0x1407b4a57*/
          if ( v98 ) /*0x1407b4a61*/
            sub_140001660(v99, v98, 1); /*0x1407b4a74*/
        }
LABEL_31:
        v7 = v107; /*0x1407b4ccc*/
        v6 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v27, (__m128i)(unsigned __int64)v24); /*0x1407b4cdd*/
        if ( v107[26].m128i_i8[12] && v107[2].m128i_i64[0] != -1 ) /*0x1407b4cf0*/
        {
          sub_1406CED30(&v107[2]); /*0x1407b4cf6*/
          v7 = v107; /*0x1407b4cfc*/
        }
LABEL_34:
        if ( v7[26].m128i_i8[11] ) /*0x1407b4d03*/
        {
          v101 = (__m128i *)v7[25].m128i_i64[0]; /*0x1407b4d14*/
          sub_1405B02E0(v101, v13); /*0x1407b4d1b*/
          sub_140001660(v101, 64, 8); /*0x1407b4d33*/
          v7 = v107; /*0x1407b4d38*/
        }
        v45 = v104; /*0x1407b4d47*/
        if ( !v7[26].m128i_i8[10] ) /*0x1407b4d3f*/
          goto LABEL_92; /*0x1407b4d3f*/
        v46 = v102->m128i_i64[0]; /*0x1407b4d5b*/
        if ( !v102->m128i_i64[0] ) /*0x1407b4d5b*/
          goto LABEL_92; /*0x1407b4d61*/
LABEL_90:
        sub_140001660(v7[1].m128i_i64[0], v46, 1); /*0x1407b5255*/
        goto LABEL_92; /*0x1407b5264*/
      }
LABEL_45:
      v51 = v17 + 4; /*0x1407b4ddc*/
      v103 = 1; /*0x1407b4de6*/
      v52 = 0xA0000000ALL; /*0x1407b4ded*/
      v53 = &v95; /*0x1407b4df7*/
      v54 = nullptr; /*0x1407b4e05*/
      while ( 1 ) /*0x1407b4e0c*/
      {
        v85.m128i_i64[0] = v17[2]; /*0x1407b4e0c*/
        v85.m128i_i64[1] = v18; /*0x1407b4e13*/
        v86.m128i_i64[0] = 0; /*0x1407b4e1a*/
        v86.m128i_i64[1] = v18; /*0x1407b4e25*/
        v88 = 1; /*0x1407b4e2c*/
        v87 = v52; /*0x1407b4e33*/
        v109 = 1; /*0x1407b4e3a*/
        sub_1407BC790(v53, &v85); /*0x1407b4e47*/
        if ( (_DWORD)v95 != 1 ) /*0x1407b4e54*/
          break; /*0x1407b4e54*/
        v55 = v96; /*0x1407b4e5a*/
        v56 = v107; /*0x1407b4e61*/
        v57 = v107[1].m128i_u64[1]; /*0x1407b4e68*/
        if ( v96 ) /*0x1407b4e6f*/
        {
          v58 = v107[1].m128i_i64[0]; /*0x1407b4e71*/
          if ( (unsigned __int64)v96 >= v57 ) /*0x1407b4e78*/
          {
            if ( v96 != (__int64 (__fastcall *)())v57 ) /*0x1407b4ea8*/
            {
LABEL_113:
              v109 = 1; /*0x1407b566a*/
              sub_1416C2F60(v58, v57, 0, (_DWORD)v96, (__int64)&off_141787F78); /*0x1407b5689*/
            }
          }
          else if ( *((char *)v96 + v58) <= -65 ) /*0x1407b4e80*/
          {
            goto LABEL_113; /*0x1407b4e80*/
          }
          if ( (__int64)v96 < 0 ) /*0x1407b4eb1*/
          {
            v63 = 0; /*0x1407b5092*/
            goto LABEL_71; /*0x1407b5092*/
          }
          v101 = v54; /*0x1407b4eb7*/
          v59 = v53; /*0x1407b4ebe*/
          v60 = v52; /*0x1407b4ec1*/
          v61 = v51; /*0x1407b4ec4*/
          nullsub_1(v107); /*0x1407b4ec7*/
          v62 = (__int64)v55; /*0x1407b4ecc*/
          v63 = 1; /*0x1407b4ecf*/
          v64 = sub_140001650(v62, 1); /*0x1407b4edd*/
          if ( !v64 ) /*0x1407b4ee5*/
          {
            v106 = v62; /*0x1407b5691*/
LABEL_71:
            v109 = 1; /*0x1407b5095*/
            sub_1416C2D4B(v63, v106); /*0x1407b50a6*/
          }
          v106 = v64; /*0x1407b4eeb*/
          sub_141684120(v64, v58, v62); /*0x1407b4efb*/
          v56 = v107; /*0x1407b4f00*/
          v57 = v107[1].m128i_u64[1]; /*0x1407b4f07*/
          v55 = (__int64 (__fastcall *)())v62; /*0x1407b4f0b*/
          v51 = v61; /*0x1407b4f0e*/
          v52 = v60; /*0x1407b4f11*/
          v53 = v59; /*0x1407b4f14*/
          v54 = v101; /*0x1407b4f17*/
          m128i_i64 = (__int64)v55; /*0x1407b4f28*/
          if ( (unsigned __int64)v55 >= v57 ) /*0x1407b4f2f*/
LABEL_109:
            sub_1416C32F0(0, v55, v57, &off_1417A66A0); /*0x1407b561f*/
        }
        else
        {
          v106 = 1; /*0x1407b4e8c*/
          m128i_i64 = 0; /*0x1407b4e96*/
          if ( !v57 ) /*0x1407b4e9d*/
            goto LABEL_109; /*0x1407b4e9d*/
        }
        v65 = (char *)v55 + 1; /*0x1407b4f35*/
        v66 = v56[1].m128i_i64[0]; /*0x1407b4f3a*/
        if ( (unsigned __int64)v55 + 1 < v57 && v65[v66] <= -65 ) /*0x1407b4f47*/
          sub_1416C32A0(aAssertionFaile_18, 44, &off_141787F90); /*0x1407b5646*/
        v86 = (__m128i)(unsigned __int64)v102; /*0x1407b4f58*/
        v87 = (__int64)v55 + 1; /*0x1407b4f6a*/
        v85.m128i_i64[0] = v66; /*0x1407b4f71*/
        v85.m128i_i64[1] = (__int64)&v65[v66]; /*0x1407b4f78*/
        sub_14149C460(&v85); /*0x1407b4f82*/
        if ( *v51 == -1 ) /*0x1407b4f8c*/
        {
          v17 = (__int64 *)v107; /*0x1407b5019*/
        }
        else
        {
          sub_1409CEC90(&v85, v51); /*0x1407b4fa6*/
          v67 = v86.m128i_i64[0]; /*0x1407b4fac*/
          if ( v86.m128i_i64[0] ) /*0x1407b4fb6*/
          {
            v68 = v85.m128i_i64[1]; /*0x1407b4fb8*/
            if ( v86.m128i_i64[0] > (unsigned __int64)(v98 - (_QWORD)v54) ) /*0x1407b4fcc*/
            {
              v101 = (__m128i *)v85.m128i_i64[1]; /*0x1407b5048*/
              sub_141688D30((unsigned int)&v98, (_DWORD)v54, v86.m128i_i32[0], 1, 1); /*0x1407b506b*/
              v103 = v99; /*0x1407b5078*/
              v54 = v100; /*0x1407b507f*/
              v68 = (__int64)v101; /*0x1407b5086*/
            }
            sub_141684120(&v54->m128i_i8[v103], v68, v67); /*0x1407b4fdc*/
            v54 = (__m128i *)((char *)v54 + v67); /*0x1407b4fe1*/
            v100 = v54; /*0x1407b4fe4*/
          }
          v17 = (__int64 *)v107; /*0x1407b4ff5*/
          if ( v85.m128i_i64[0] ) /*0x1407b5003*/
            sub_140001660(v85.m128i_i64[1], v85.m128i_i64[0], 1); /*0x1407b5012*/
        }
        if ( m128i_i64 ) /*0x1407b502a*/
          sub_140001660(v106, m128i_i64, 1); /*0x1407b5039*/
        v18 = v17[3]; /*0x1407b503e*/
      }
      v76 = v51; /*0x1407b5402*/
      v77 = v107; /*0x1407b5405*/
      v4 = (__m128i *)v107[25].m128i_i64[0]; /*0x1407b540c*/
      v107[26].m128i_i16[5] = 0; /*0x1407b5413*/
      v86.m128i_i64[0] = v102[1].m128i_i64[0]; /*0x1407b5427*/
      v85 = *v102; /*0x1407b5431*/
      v77[26].m128i_i8[12] = 0; /*0x1407b5438*/
      sub_141684120(&v86.m128i_u64[1], v76, 368); /*0x1407b544c*/
      v89 = (__int64 *)v4; /*0x1407b5451*/
      v90 = 0; /*0x1407b5458*/
      if ( v54 ) /*0x1407b5462*/
      {
        sub_141447850(&v95, &v98); /*0x1407b5472*/
        v27 = (__int64 (__fastcall **)())v95; /*0x1407b5478*/
        v24 = (__int64)v96; /*0x1407b547f*/
        v91[0] = v97; /*0x1407b548d*/
        v103 = v85.m128i_i64[1]; /*0x1407b549b*/
        m128i_i64 = v86.m128i_i64[1]; /*0x1407b54b0*/
        v5 = v86.m128i_i64[0]; /*0x1407b54b0*/
        v78 = &v87; /*0x1407b54b7*/
        v26 = 0; /*0x1407b54be*/
      }
      else
      {
        v91[0] = 0; /*0x1407b54e0*/
        v103 = v85.m128i_i64[1]; /*0x1407b54ee*/
        m128i_i64 = v86.m128i_i64[1]; /*0x1407b5503*/
        v5 = v86.m128i_i64[0]; /*0x1407b5503*/
        v78 = &v77[2].m128i_i64[1]; /*0x1407b550a*/
        v24 = 1; /*0x1407b550e*/
        v27 = off_141788F08; /*0x1407b5513*/
        v26 = 1; /*0x1407b551a*/
      }
      v28 = v85.m128i_i64[0]; /*0x1407b551d*/
      sub_141684120(v81, v78, 360); /*0x1407b5531*/
      LODWORD(v106) = 0; /*0x1407b5536*/
      goto LABEL_18; /*0x1407b5540*/
    }
    v48 = v85.m128i_i64[1]; /*0x1407b4d7f*/
    v49 = v86.m128i_i64[0]; /*0x1407b4d86*/
    v17 = (__int64 *)v107; /*0x1407b4d8d*/
    v50 = v107[1].m128i_i64[1]; /*0x1407b4d99*/
    if ( v86.m128i_i64[0] > (unsigned __int64)(v107->m128i_i64[1] - v50) ) /*0x1407b4da4*/
    {
      v109 = 1; /*0x1407b55e8*/
      sub_141688D30((_DWORD)v102, v50, v86.m128i_i32[0], 1, 1); /*0x1407b5608*/
      v17 = (__int64 *)v107; /*0x1407b560e*/
      v50 = v107[1].m128i_i64[1]; /*0x1407b5615*/
    }
    else if ( !v86.m128i_i64[0] ) /*0x1407b4dad*/
    {
      goto LABEL_44; /*0x1407b4dad*/
    }
    sub_141684120(v17[2] + v50, v48, v49); /*0x1407b4dbd*/
    v50 = v17[3]; /*0x1407b4dc2*/
LABEL_44:
    v18 = v49 + v50; /*0x1407b4dc7*/
    v17[3] = v18; /*0x1407b4dca*/
    if ( v18 > 0x4000000 ) /*0x1407b4dd6*/
      goto LABEL_16; /*0x1407b4dd6*/
    goto LABEL_45; /*0x1407b4dd6*/
  }
  v98 = 0; /*0x1407b4a7e*/
  v99 = 1; /*0x1407b4a89*/
  v100 = nullptr; /*0x1407b4a94*/
  v30 = (__int64 *)v107; /*0x1407b4a9f*/
  v31 = v107[2].m128i_i64[0]; /*0x1407b4aa6*/
  v107[2].m128i_i64[0] = -1; /*0x1407b4aaa*/
  v28 = -1; /*0x1407b4ab2*/
  if ( v31 == -1 ) /*0x1407b4abd*/
  {
    v47 = (__m128i *)(v30 + 4); /*0x1407b4d6c*/
    if ( v30[4] == -1 ) /*0x1407b4d74*/
      goto LABEL_86; /*0x1407b4d74*/
    goto LABEL_85; /*0x1407b4d74*/
  }
  v85.m128i_i64[0] = v31; /*0x1407b4ac7*/
  sub_141684120(&v85.m128i_u64[1], v30 + 5, 360); /*0x1407b4adb*/
  if ( !v30[3] ) /*0x1407b4ae7*/
  {
    v34 = 1; /*0x1407b50b1*/
    v36 = nullptr; /*0x1407b50b6*/
    goto LABEL_73; /*0x1407b50b6*/
  }
  v106 = v30[1]; /*0x1407b4af1*/
  v32 = v30[2]; /*0x1407b4af8*/
  v30[1] = 0; /*0x1407b4afc*/
  v30[2] = 1; /*0x1407b4b04*/
  v30[3] = 0; /*0x1407b4b0c*/
  m128i_i64 = v32; /*0x1407b4b22*/
  sub_1409CEC90(&v95, &v85); /*0x1407b4b29*/
  v33 = v97.m128i_i64[0]; /*0x1407b4b2f*/
  if ( v97.m128i_i64[0] ) /*0x1407b4b39*/
  {
    v103 = (__int64)v96; /*0x1407b4b46*/
    sub_141688D30((unsigned int)&v98, 0, v97.m128i_i32[0], 1, 1); /*0x1407b4b68*/
    v34 = v99; /*0x1407b4b6e*/
    v35 = v100; /*0x1407b4b75*/
    sub_141684120(&v100->m128i_i8[v99], v103, v33); /*0x1407b4b8a*/
    v36 = (__m128i *)((char *)v35 + v33); /*0x1407b4b8f*/
    v100 = v36; /*0x1407b4b92*/
    v37 = v95; /*0x1407b4b99*/
    if ( !v95 ) /*0x1407b4ba3*/
      goto LABEL_26; /*0x1407b4ba3*/
    goto LABEL_25; /*0x1407b4ba3*/
  }
  v34 = 1; /*0x1407b53e6*/
  v36 = nullptr; /*0x1407b53eb*/
  v37 = v95; /*0x1407b53ed*/
  if ( v95 ) /*0x1407b53f7*/
LABEL_25:
    sub_140001660(v96, v37, 1); /*0x1407b4ba5*/
LABEL_26:
  if ( v106 ) /*0x1407b4bc1*/
    sub_140001660(m128i_i64, v106, 1); /*0x1407b4bd4*/
LABEL_73:
  sub_1409CEA10(&v95, &v85); /*0x1407b50b8*/
  v69 = v97.m128i_i64[0]; /*0x1407b50cc*/
  if ( v97.m128i_i64[0] ) /*0x1407b50d6*/
  {
    v70 = (__int64)v96; /*0x1407b50d8*/
    if ( v97.m128i_i64[0] > (unsigned __int64)(v98 - (_QWORD)v36) ) /*0x1407b50ec*/
    {
      v106 = (__int64)v96; /*0x1407b55a5*/
      sub_141688D30((unsigned int)&v98, (_DWORD)v36, v97.m128i_i32[0], 1, 1); /*0x1407b55c8*/
      v34 = v99; /*0x1407b55ce*/
      v36 = v100; /*0x1407b55d5*/
      v70 = v106; /*0x1407b55dc*/
    }
    sub_141684120(&v36->m128i_i8[v34], v70, v69); /*0x1407b50fb*/
    v36 = (__m128i *)((char *)v36 + v69); /*0x1407b5100*/
    v100 = v36; /*0x1407b5103*/
  }
  if ( v95 ) /*0x1407b5114*/
    sub_140001660(v96, v95, 1); /*0x1407b5123*/
  v108 = 1; /*0x1407b5128*/
  v31 = sub_1406CED30(&v85); /*0x1407b5136*/
  if ( v36 ) /*0x1407b513f*/
  {
    v108 = 0; /*0x1407b5141*/
    sub_141447850(&v85, &v98); /*0x1407b5156*/
    v6 = _mm_load_si128(&v85); /*0x1407b515c*/
    v91[0] = _mm_load_si128(&v86); /*0x1407b516c*/
    v71 = (__int64 *)v107; /*0x1407b5174*/
    v4 = (__m128i *)v107[25].m128i_i64[0]; /*0x1407b517b*/
    v107[26].m128i_i16[5] = 0; /*0x1407b5182*/
    v28 = v71[1]; /*0x1407b518b*/
    v31 = v71[2]; /*0x1407b518f*/
    v103 = v31; /*0x1407b5193*/
    v5 = v71[3]; /*0x1407b519a*/
    v47 = (__m128i *)(v71 + 4); /*0x1407b519e*/
    if ( v71[4] == -1 ) /*0x1407b51a6*/
      goto LABEL_86; /*0x1407b51a6*/
LABEL_85:
    v31 = sub_1406CED30(v47); /*0x1407b51d9*/
    goto LABEL_86; /*0x1407b51d9*/
  }
  v16 = v98; /*0x1407b51aa*/
  if ( v98 ) /*0x1407b51b4*/
    v31 = sub_140001660(v99, v98, 1); /*0x1407b51c3*/
  v47 = v107 + 2; /*0x1407b51cf*/
  if ( v107[2].m128i_i64[0] != -1 ) /*0x1407b51d7*/
    goto LABEL_85; /*0x1407b51d7*/
LABEL_86:
  v7 = v107; /*0x1407b51df*/
  if ( v107[26].m128i_i8[11] ) /*0x1407b51e6*/
  {
    v106 = v107[25].m128i_i64[0]; /*0x1407b51f7*/
    sub_1405B02E0(v106, v16); /*0x1407b51fe*/
    v31 = sub_140001660(v106, 64, 8); /*0x1407b5216*/
    v7 = v107; /*0x1407b521b*/
  }
  if ( v7[26].m128i_i8[10] ) /*0x1407b5222*/
  {
    v72 = (int)v102; /*0x1407b522c*/
    v46 = v102->m128i_i64[0]; /*0x1407b5233*/
    LOBYTE(v72) = 1; /*0x1407b5236*/
    LODWORD(v106) = v72; /*0x1407b5238*/
    m128i_i64 = -1; /*0x1407b523e*/
    v45 = v104; /*0x1407b524c*/
    if ( !v46 ) /*0x1407b5253*/
      goto LABEL_92; /*0x1407b5253*/
    goto LABEL_90; /*0x1407b5253*/
  }
  LOBYTE(v31) = 1; /*0x1407b5266*/
  LODWORD(v106) = v31; /*0x1407b5268*/
  m128i_i64 = -1; /*0x1407b526e*/
  v45 = v104; /*0x1407b5279*/
LABEL_92:
  si128 = _mm_load_si128(v91); /*0x1407b5280*/
  sub_141684120(v79, v81, 360); /*0x1407b52a1*/
  *v45 = 1; /*0x1407b52a6*/
  if ( v28 == -2 ) /*0x1407b52ad*/
  {
    *(_QWORD *)a1 = 2; /*0x1407b52af*/
  }
  else
  {
    v83 = _mm_load_si128(&si128); /*0x1407b52c3*/
    sub_141684120(v80, v79, 360); /*0x1407b52dc*/
    if ( v28 == -1 ) /*0x1407b52e5*/
    {
      sub_1406CA890(v7); /*0x1407b53ad*/
      v107->m128i_i64[0] = 2; /*0x1407b53ba*/
      *(_QWORD *)a1 = 0; /*0x1407b53c1*/
    }
    else
    {
      v101 = (__m128i *)v5; /*0x1407b52eb*/
      v102 = v4; /*0x1407b52f2*/
      v104 = (__int8 *)v28; /*0x1407b52f9*/
      v85 = v6; /*0x1407b5300*/
      v86 = v83; /*0x1407b530f*/
      sub_1406CA890(v7); /*0x1407b5319*/
      v73 = v107; /*0x1407b531f*/
      v107->m128i_i64[0] = 0; /*0x1407b5326*/
      v73->m128i_i64[1] = (__int64)v104; /*0x1407b5334*/
      v73[1].m128i_i64[0] = v103; /*0x1407b533f*/
      v73[1].m128i_i64[1] = (__int64)v101; /*0x1407b534a*/
      v73[2].m128i_i64[0] = m128i_i64; /*0x1407b5355*/
      sub_141684120(&v73[2].m128i_u64[1], v80, 360); /*0x1407b536a*/
      v73[25].m128i_i64[0] = (__int64)v102; /*0x1407b5376*/
      v73[25].m128i_i8[8] = v106; /*0x1407b5383*/
      v74 = v86; /*0x1407b5391*/
      *(__m128i *)(a1 + 8) = _mm_load_si128(&v85); /*0x1407b5398*/
      *(__m128i *)(a1 + 24) = v74; /*0x1407b539d*/
      *(_QWORD *)a1 = 1; /*0x1407b53a1*/
    }
  }
  return a1; /*0x1407b53cb*/
}
