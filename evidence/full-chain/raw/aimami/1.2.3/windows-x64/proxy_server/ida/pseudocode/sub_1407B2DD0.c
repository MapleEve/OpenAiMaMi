// module: core::relay::proxy_server (codexmate_lib::core::relay::proxy_server)
// source (embedded panic Location / cross-platform symbol match): src\core\relay\proxy_server.rs
// binary: AiMaMi.1.2.3 win64.exe (Windows x64, stripped, imagebase 0x140000000)
// addr: 0x1407b2dd0  size: 0xfdf  tier: C  evidence: panic-location-2hop
// decompiled via IDA Hex-Rays (remote IDA MCP, host <host>)
// status: FULL — not truncated, single decompile call, no chunking needed
//
// Functional summary:
//   References 'Unfold must not be polled after it returned Poll::Ready(None)', the Rust unreachable-
//   code guard, and 'assertion failed: self.is_char_boundary(end)' -- part of a family of four (with
//   sub_1407B46A0/sub_1407B6190/sub_1407B7BD0) implementing a futures::stream::unfold-based incremental
//   SSE/chunk decoder that slices the byte buffer at str-safe UTF-8 boundaries; this is the streaming
//   response reader used while relaying provider SSE chunks to the client.
//
// Referenced strings/symbols:
//   0x1416c3400  sub_1416C3400
//   0x141787eb8  off_141787EB8
//   0x1416c3420  sub_1416C3420
//   0x1416c32a0  sub_1416C32A0
//   0x141790658  aUnfoldMustNotB   "Unfold must not be polled after it returned `Poll::Ready(None)`"
//   0x141790710  off_141790710
//   0x1417b3efa  aInternalErrorE_128   "internal error: entered unreachable code"
//   0x1417b54a8  off_1417B54A8
//   0x141684120  sub_141684120
//   0x1406ca670  sub_1406CA670
//   0x1405b02e0  sub_1405B02E0
//   0x140001660  sub_140001660
//   0x1407b7bd0  sub_1407B7BD0
//   0x141031f10  sub_141031F10
//   0x14149c0f0  sub_14149C0F0
//   0x141787f40  unk_141787F40
//   0x140001690  nullsub_1
//   0x140001650  sub_140001650
//   0x1416c2d31  sub_1416C2D31
//   0x141475210  sub_141475210
//   0x1417a9e28  off_1417A9E28
//   0x1406cb7b0  sub_1406CB7B0
//   0x1414a3c90  sub_1414A3C90
//   0x141787e08  unk_141787E08
//   0x1414ac520  sub_1414AC520
//   0x141787f00  unk_141787F00
//   0x1407bc790  sub_1407BC790
//   0x1416c2f60  sub_1416C2F60
//   0x141787ed0  off_141787ED0
//   0x1416c2d4b  sub_1416C2D4B
//   0x1416c32f0  sub_1416C32F0
//   0x1417a66a0  off_1417A66A0
//   0x14179c750  aAssertionFaile_18   "assertion failed: self.is_char_boundary(end)"
//   0x141787ee8  off_141787EE8
//   0x14149c460  sub_14149C460
//   0x1409b6cc0  sub_1409B6CC0
//   0x141688d30  sub_141688D30
//   0x141447850  sub_141447850
//   0x141788f08  off_141788F08
//   0x1406ce8f0  sub_1406CE8F0
//   0x1409b5b30  sub_1409B5B30
// win 1.2.1 | module src/core/relay/proxy_server.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_1407B2DD0(__int64 a1, __int64 *a2, _BYTE *a3, __int64 a4)
{
  _BYTE *v4; // rdi
  __int64 v5; // r12
  __int64 v6; // r13
  __int64 *v7; // r14
  __int64 v9; // rax
  bool v10; // zf
  unsigned __int64 v11; // rax
  __int64 (__fastcall **v12)(); // rbx
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 *v17; // r12
  unsigned __int64 v18; // rdx
  __int128 v19; // kr00_16
  __int64 v20; // rdi
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 *v24; // rax
  char v25; // r14
  void (__fastcall *v26)(char *, __int64, _QWORD); // rax
  _DWORD *v27; // rcx
  _DWORD *v28; // r14
  __int64 v29; // rax
  __int64 v30; // rdx
  _QWORD *v31; // rdi
  unsigned __int64 v32; // r8
  __int64 v33; // r14
  __int64 v34; // rbx
  __int64 v35; // rdi
  __int64 v36; // rdi
  __int64 (__fastcall **v37)(); // rdx
  __int128 v38; // kr10_16
  __int64 v39; // rdi
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rcx
  _QWORD *v43; // rax
  __int64 v44; // rax
  __int64 v45; // rbx
  __int64 v46; // rdi
  __int64 v47; // rdx
  __int64 v48; // r13
  __int64 (__fastcall ***v49)(); // rbx
  __int64 v50; // rdi
  __int64 (__fastcall ***v51)(); // r14
  __int64 v52; // rbx
  __int64 (__fastcall *v53)(); // r13
  __int64 *v54; // rcx
  unsigned __int64 v55; // r8
  __int64 v56; // r12
  __int64 (__fastcall *v57)(); // rdx
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rcx
  __int64 v61; // r12
  __int64 v62; // rcx
  __int64 v63; // r15
  __int64 v64; // r14
  _QWORD *v65; // rax
  __int64 v66; // rax
  __int64 v67; // rdx
  __int64 v68; // r15
  __int64 *v69; // rdi
  __int128 v70; // xmm1
  __int64 *v72; // rbx
  _BYTE *v73; // r14
  char *v74; // rdx
  _BYTE v75[424]; // [rsp+30h] [rbp-50h] BYREF
  _BYTE v76[424]; // [rsp+1D8h] [rbp+158h] BYREF
  __int128 v77; // [rsp+380h] [rbp+300h] BYREF
  __int64 v78; // [rsp+390h] [rbp+310h]
  __int128 v79; // [rsp+530h] [rbp+4B0h]
  __int128 v80; // [rsp+540h] [rbp+4C0h]
  __int128 v81; // [rsp+550h] [rbp+4D0h]
  __int128 v82; // [rsp+568h] [rbp+4E8h] BYREF
  _BYTE v83[24]; // [rsp+578h] [rbp+4F8h]
  char v84; // [rsp+590h] [rbp+510h]
  __int128 v85; // [rsp+718h] [rbp+698h]
  __int64 v86; // [rsp+728h] [rbp+6A8h]
  _BYTE *v87; // [rsp+730h] [rbp+6B0h]
  char v88; // [rsp+738h] [rbp+6B8h]
  __int128 v89; // [rsp+740h] [rbp+6C0h]
  __int64 v90; // [rsp+758h] [rbp+6D8h] BYREF
  __int64 v91; // [rsp+760h] [rbp+6E0h]
  __int128 v92; // [rsp+768h] [rbp+6E8h] BYREF
  __int64 v93; // [rsp+780h] [rbp+700h]
  __int64 (__fastcall **v94)(); // [rsp+788h] [rbp+708h] BYREF
  __int64 (__fastcall *v95)(); // [rsp+790h] [rbp+710h]
  __int128 v96; // [rsp+798h] [rbp+718h]
  __int64 v97; // [rsp+7A8h] [rbp+728h] BYREF
  __int64 v98; // [rsp+7B0h] [rbp+730h]
  __int64 v99; // [rsp+7B8h] [rbp+738h]
  __int64 v100; // [rsp+7C0h] [rbp+740h]
  __int64 v101; // [rsp+7C8h] [rbp+748h]
  _BYTE *v102; // [rsp+7D0h] [rbp+750h]
  _DWORD *v103; // [rsp+7D8h] [rbp+758h]
  unsigned __int64 v104; // [rsp+7E0h] [rbp+760h]
  __int64 v105; // [rsp+7E8h] [rbp+768h]
  __int64 *v106; // [rsp+7F0h] [rbp+770h]
  char v107; // [rsp+7FDh] [rbp+77Dh]
  char v108; // [rsp+7FEh] [rbp+77Eh]
  char v109; // [rsp+7FFh] [rbp+77Fh]
  __int64 v110; // [rsp+800h] [rbp+780h]

  v110 = -2; /*0x1407b2deb*/
  v7 = a2; /*0x1407b2df6*/
  v9 = *a2; /*0x1407b2dfc*/
  v10 = *a2 == 0; /*0x1407b2dff*/
  v106 = a2; /*0x1407b2e02*/
  if ( !v10 ) /*0x1407b2e09*/
  {
    if ( (_DWORD)v9 == 1 ) /*0x1407b2f1b*/
    {
      v13 = (__int64)a2 + 489; /*0x1407b2f21*/
      v14 = *((unsigned __int8 *)v7 + 489); /*0x1407b2f28*/
      v12 = (__int64 (__fastcall **)())(v7 + 1); /*0x1407b2f30*/
      v102 = (char *)v7 + 489; /*0x1407b2f42*/
      switch ( v14 ) /*0x1407b2f49*/
      {
        case 0LL: /*0x1407b2f49*/
          goto LABEL_6;
        case 1LL: /*0x1407b2f49*/
          sub_1416C3400(&off_141787EB8, v13, a3, a4); /*0x1407b3d70*/
        case 2LL: /*0x1407b2f49*/
          sub_1416C3420(&off_141787EB8, v13, a3, a4); /*0x1407b3d62*/
        case 3LL: /*0x1407b2f49*/
          v103 = v7 + 1; /*0x1407b2fa7*/
          v15 = *(_QWORD *)v7[60]; /*0x1407b2fb5*/
          goto LABEL_11; /*0x1407b2fb5*/
      }
    }
    sub_1416C32A0(aUnfoldMustNotB, 63, &off_141790710); /*0x1407b3bd8*/
  }
  v11 = a2[1]; /*0x1407b2e0f*/
  *a2 = 2; /*0x1407b2e13*/
  if ( v11 >= 3 ) /*0x1407b2e1e*/
    sub_1416C32A0(aInternalErrorE_128, 40, &off_1417B54A8); /*0x1407b3c64*/
  v104 = v11; /*0x1407b2e24*/
  v4 = a3; /*0x1407b2e2b*/
  v103 = (_DWORD *)a2[58]; /*0x1407b2e39*/
  LOBYTE(v102) = *((_BYTE *)a2 + 472); /*0x1407b2e48*/
  v78 = a2[57]; /*0x1407b2e55*/
  v77 = *(_OWORD *)(a2 + 55); /*0x1407b2e64*/
  v105 = (__int64)(a2 + 2); /*0x1407b2e78*/
  sub_141684120(&v82, a2 + 2, 424); /*0x1407b2e7f*/
  sub_1406CA670(v7); /*0x1407b2e88*/
  v7 = v106; /*0x1407b2e8e*/
  *v106 = 1; /*0x1407b2e95*/
  v12 = (__int64 (__fastcall **)())(v7 + 1); /*0x1407b2e9c*/
  v7[1] = v104; /*0x1407b2ea7*/
  sub_141684120(v105, &v82, 424); /*0x1407b2ebf*/
  *(_OWORD *)(v7 + 55) = v77; /*0x1407b2ecb*/
  v7[57] = v78; /*0x1407b2eda*/
  v7[58] = (__int64)v103; /*0x1407b2ee8*/
  *((_BYTE *)v7 + 488) = (_BYTE)v102; /*0x1407b2ef6*/
  LODWORD(v14) = (_DWORD)v7 + 489; /*0x1407b2efd*/
  v102 = (char *)v7 + 489; /*0x1407b2f04*/
  *((_BYTE *)v7 + 489) = 0; /*0x1407b2f0b*/
  a3 = v4; /*0x1407b2f13*/
LABEL_6:
  *((_WORD *)v7 + 245) = 257; /*0x1407b2f4b*/
  *((_BYTE *)v7 + 492) = 1; /*0x1407b2f55*/
  if ( *((_BYTE *)v7 + 488) == 1 && *(_DWORD *)v12 == 2 ) /*0x1407b2f6a*/
  {
    v105 = -1; /*0x1407b2f6c*/
    LODWORD(v104) = v14; /*0x1407b2f77*/
LABEL_77:
    if ( *((_BYTE *)v7 + 492) ) /*0x1407b391b*/
    {
      v103 = (_DWORD *)v7[58]; /*0x1407b392c*/
      sub_1405B02E0(v103, v13); /*0x1407b3933*/
      sub_140001660(v103, 64, 8); /*0x1407b394b*/
      v7 = v106; /*0x1407b3950*/
    }
    if ( *((_BYTE *)v7 + 491) ) /*0x1407b3957*/
    {
      v67 = v7[55]; /*0x1407b3961*/
      if ( v67 ) /*0x1407b396b*/
        sub_140001660(v7[56], v67, 1); /*0x1407b397a*/
    }
    v81 = v89; /*0x1407b3986*/
    sub_141684120(v75, &v77, 424); /*0x1407b399e*/
    *v102 = 1; /*0x1407b39aa*/
    v68 = v105; /*0x1407b39ad*/
    if ( v105 == -2 ) /*0x1407b39b8*/
      goto LABEL_83; /*0x1407b39b8*/
    v80 = v81; /*0x1407b39cd*/
    sub_141684120(v76, v75, 424); /*0x1407b39e5*/
    if ( v68 != -1 ) /*0x1407b39ee*/
    {
      v93 = v6; /*0x1407b39f4*/
      v103 = (_DWORD *)v5; /*0x1407b39fb*/
      v102 = v4; /*0x1407b3a02*/
      *(_QWORD *)&v82 = v12; /*0x1407b3a09*/
      *((_QWORD *)&v82 + 1) = v101; /*0x1407b3a17*/
      *(_OWORD *)v83 = v80; /*0x1407b3a25*/
      sub_1406CA670(v7); /*0x1407b3a2f*/
      v69 = v106; /*0x1407b3a35*/
      *v106 = 0; /*0x1407b3a3c*/
      v69[1] = v105; /*0x1407b3a4a*/
      sub_141684120(v69 + 2, v76, 424); /*0x1407b3a5f*/
      v69[55] = v93; /*0x1407b3a6b*/
      v69[56] = (__int64)v103; /*0x1407b3a79*/
      v69[57] = v100; /*0x1407b3a87*/
      v69[58] = (__int64)v102; /*0x1407b3a95*/
      *((_BYTE *)v69 + 472) = v104; /*0x1407b3aa2*/
      v70 = *(_OWORD *)v83; /*0x1407b3aaf*/
      *(_OWORD *)(a1 + 8) = v82; /*0x1407b3ab6*/
      *(_OWORD *)(a1 + 24) = v70; /*0x1407b3aba*/
      *(_QWORD *)a1 = 1; /*0x1407b3abe*/
      return a1; /*0x1407b3ac5*/
    }
LABEL_86:
    sub_1406CA670(v7); /*0x1407b3ac7*/
    *v106 = 2; /*0x1407b3ad7*/
    *(_QWORD *)a1 = 0; /*0x1407b3ade*/
    return a1; /*0x1407b3ade*/
  }
  v103 = v12; /*0x1407b2f82*/
  v15 = v7[58]; /*0x1407b2f89*/
  v7[59] = v15; /*0x1407b2f97*/
  v7[60] = (__int64)(v7 + 59); /*0x1407b2f9e*/
LABEL_11:
  sub_1407B7BD0(&v82, v15, a3); /*0x1407b2fb8*/
  if ( (_QWORD)v82 != 2 ) /*0x1407b2fd0*/
  {
    v16 = *(_QWORD *)v83; /*0x1407b2fe8*/
    v79 = *(_OWORD *)&v83[8]; /*0x1407b2ff6*/
    if ( (_DWORD)v82 == 1 ) /*0x1407b3000*/
    {
      if ( !*((_QWORD *)&v82 + 1) ) /*0x1407b3009*/
      {
        v90 = *(_QWORD *)v83; /*0x1407b33b6*/
        v94 = (__int64 (__fastcall **)())&v90; /*0x1407b33c4*/
        v95 = sub_141031F10; /*0x1407b33d2*/
        sub_14149C0F0(&v82, &unk_141787F40, &v94); /*0x1407b33ee*/
        v38 = v82; /*0x1407b33fb*/
        v39 = *(_QWORD *)v83; /*0x1407b3402*/
        nullsub_1(v40); /*0x1407b3409*/
        v41 = sub_140001650(24, 8); /*0x1407b3418*/
        if ( !v41 ) /*0x1407b3420*/
        {
          v104 = *((_QWORD *)&v38 + 1); /*0x1407b3c6b*/
          v105 = v38; /*0x1407b3c72*/
          sub_1416C2D31(8, 24); /*0x1407b3c83*/
        }
        *(_OWORD *)v41 = v38; /*0x1407b3426*/
        *(_QWORD *)(v41 + 16) = v39; /*0x1407b342d*/
        LOBYTE(v42) = 40; /*0x1407b3438*/
        v101 = sub_141475210(v42, v41, &off_1417A9E28); /*0x1407b3443*/
        v43 = v106; /*0x1407b344a*/
        v4 = (_BYTE *)v106[58]; /*0x1407b3451*/
        *(_WORD *)((char *)v106 + 491) = 0; /*0x1407b3458*/
        v6 = v43[55]; /*0x1407b3461*/
        v5 = v43[56]; /*0x1407b3468*/
        v100 = v43[57]; /*0x1407b3476*/
        v44 = sub_1406CB7B0(v90); /*0x1407b3484*/
        LOBYTE(v44) = 1; /*0x1407b348a*/
        LODWORD(v104) = v44; /*0x1407b348c*/
        v105 = 2; /*0x1407b3497*/
        v12 = nullptr; /*0x1407b349e*/
        goto LABEL_74; /*0x1407b34a0*/
      }
      v92 = v79; /*0x1407b3016*/
      v97 = 0; /*0x1407b301d*/
      v98 = 1; /*0x1407b3028*/
      v99 = 0; /*0x1407b3033*/
      v90 = *((_QWORD *)&v82 + 1); /*0x1407b303e*/
      v91 = *(_QWORD *)v83; /*0x1407b3045*/
      v109 = 1; /*0x1407b3053*/
      sub_1414A3C90(&v82, *(_QWORD *)v83, v79); /*0x1407b3061*/
      if ( (_DWORD)v82 == 1 ) /*0x1407b306e*/
      {
        v17 = v106; /*0x1407b3074*/
        v18 = v106[57]; /*0x1407b307b*/
        if ( v18 > 0x4000000 ) /*0x1407b308a*/
        {
LABEL_17:
          v94 = (__int64 (__fastcall **)())&unk_141787E08; /*0x1407b3090*/
          v95 = sub_1414AC520; /*0x1407b30a5*/
          v109 = 1; /*0x1407b30ac*/
          sub_14149C0F0(&v82, &unk_141787F00, &v94); /*0x1407b30c8*/
          v19 = v82; /*0x1407b30d5*/
          v20 = *(_QWORD *)v83; /*0x1407b30dc*/
          nullsub_1(v21); /*0x1407b30e3*/
          v22 = sub_140001650(24, 8); /*0x1407b30f2*/
          if ( !v22 ) /*0x1407b30fa*/
          {
            v104 = *((_QWORD *)&v19 + 1); /*0x1407b3c8e*/
            v105 = v19; /*0x1407b3c95*/
            sub_1416C2D31(8, 24); /*0x1407b3ca6*/
          }
          *(_OWORD *)v22 = v19; /*0x1407b3100*/
          *(_QWORD *)(v22 + 16) = v20; /*0x1407b3107*/
          v109 = 1; /*0x1407b310b*/
          LOBYTE(v23) = 40; /*0x1407b3119*/
          v101 = sub_141475210(v23, v22, &off_1417A9E28); /*0x1407b3123*/
          v24 = v106; /*0x1407b312a*/
          *((_BYTE *)v106 + 492) = 0; /*0x1407b3131*/
          v4 = (_BYTE *)v24[58]; /*0x1407b3138*/
          v105 = 2; /*0x1407b3144*/
          v25 = 1; /*0x1407b314b*/
          v5 = 1; /*0x1407b314e*/
          v6 = 0; /*0x1407b3154*/
          v100 = 0; /*0x1407b3157*/
          v12 = nullptr; /*0x1407b3162*/
          LODWORD(v104) = 1; /*0x1407b3166*/
          goto LABEL_19; /*0x1407b3166*/
        }
LABEL_40:
        v101 = (__int64)(v17 + 55); /*0x1407b3511*/
        v100 = 1; /*0x1407b3525*/
        v48 = 0xA0000000ALL; /*0x1407b352c*/
        v49 = &v94; /*0x1407b3536*/
        v50 = 0; /*0x1407b3544*/
        while ( 1 ) /*0x1407b354e*/
        {
          *(_QWORD *)&v82 = v17[56]; /*0x1407b354e*/
          *((_QWORD *)&v82 + 1) = v18; /*0x1407b3555*/
          *(_QWORD *)v83 = 0; /*0x1407b355c*/
          *(_QWORD *)&v83[8] = v18; /*0x1407b3567*/
          v84 = 1; /*0x1407b356e*/
          *(_QWORD *)&v83[16] = v48; /*0x1407b3575*/
          v109 = 1; /*0x1407b357c*/
          sub_1407BC790(v49, &v82); /*0x1407b3589*/
          if ( (_DWORD)v94 != 1 ) /*0x1407b3596*/
            break; /*0x1407b3596*/
          v51 = v49; /*0x1407b359c*/
          v52 = v48; /*0x1407b359f*/
          v53 = v95; /*0x1407b35a2*/
          v54 = v106; /*0x1407b35a9*/
          v55 = v106[57]; /*0x1407b35b0*/
          if ( v95 ) /*0x1407b35ba*/
          {
            v56 = v106[56]; /*0x1407b35bc*/
            if ( (unsigned __int64)v95 >= v55 ) /*0x1407b35c6*/
            {
              if ( v95 != (__int64 (__fastcall *)())v55 ) /*0x1407b35f7*/
              {
LABEL_104:
                v109 = 1; /*0x1407b3d77*/
                sub_1416C2F60(v56, v55, 0, (_DWORD)v95, (__int64)&off_141787ED0); /*0x1407b3d96*/
              }
            }
            else if ( *((char *)v95 + v56) <= -65 ) /*0x1407b35cd*/
            {
              goto LABEL_104; /*0x1407b35cd*/
            }
            if ( (__int64)v95 < 0 ) /*0x1407b3600*/
            {
              v62 = 0; /*0x1407b37c0*/
              goto LABEL_66; /*0x1407b37c0*/
            }
            nullsub_1(v106); /*0x1407b3606*/
            v58 = sub_140001650(v53, 1); /*0x1407b3613*/
            if ( !v58 ) /*0x1407b361b*/
            {
              v105 = (__int64)v53; /*0x1407b3d9e*/
              v62 = 1; /*0x1407b3da5*/
LABEL_66:
              v109 = 1; /*0x1407b37c2*/
              sub_1416C2D4B(v62, v105); /*0x1407b37d0*/
            }
            v105 = v58; /*0x1407b3621*/
            sub_141684120(v58, v56, v53); /*0x1407b3634*/
            v54 = v106; /*0x1407b3639*/
            v55 = v106[57]; /*0x1407b3640*/
            v57 = v53; /*0x1407b3647*/
            v104 = (unsigned __int64)v53; /*0x1407b364d*/
            if ( (unsigned __int64)v53 >= v55 ) /*0x1407b3654*/
LABEL_100:
              sub_1416C32F0(0, v57, v55, &off_1417A66A0); /*0x1407b3d2f*/
          }
          else
          {
            v105 = 1; /*0x1407b35dc*/
            v57 = nullptr; /*0x1407b35e3*/
            v104 = 0; /*0x1407b35e9*/
            if ( !v55 ) /*0x1407b35f0*/
              goto LABEL_100; /*0x1407b35f0*/
          }
          v48 = v52; /*0x1407b365a*/
          v59 = (__int64)v57 + 1; /*0x1407b365d*/
          v60 = v54[56]; /*0x1407b3661*/
          if ( (unsigned __int64)v57 + 1 < v55 && *(char *)(v60 + v59) <= -65 ) /*0x1407b3671*/
            sub_1416C32A0(aAssertionFaile_18, 44, &off_141787EE8); /*0x1407b3d53*/
          *(_OWORD *)v83 = (unsigned __int64)v101; /*0x1407b3682*/
          *(_QWORD *)&v83[16] = (char *)v57 + 1; /*0x1407b3694*/
          *(_QWORD *)&v82 = v60; /*0x1407b369b*/
          *((_QWORD *)&v82 + 1) = v60 + v59; /*0x1407b36a2*/
          sub_14149C460(&v82); /*0x1407b36ac*/
          if ( *v103 == 2 ) /*0x1407b36bc*/
          {
            v17 = v106; /*0x1407b36be*/
          }
          else
          {
            sub_1409B6CC0(&v82, v103); /*0x1407b36db*/
            v61 = *(_QWORD *)v83; /*0x1407b36e1*/
            if ( *(_QWORD *)v83 ) /*0x1407b36eb*/
            {
              v93 = *((_QWORD *)&v82 + 1); /*0x1407b36f4*/
              if ( *(_QWORD *)v83 > (unsigned __int64)(v97 - v50) ) /*0x1407b3708*/
              {
                sub_141688D30((unsigned int)&v97, v50, *(_DWORD *)v83, 1, 1); /*0x1407b379d*/
                v100 = v98; /*0x1407b37aa*/
                v50 = v99; /*0x1407b37b1*/
                v48 = v52; /*0x1407b37b8*/
              }
              sub_141684120(v100 + v50, v93, v61); /*0x1407b371f*/
              v50 += v61; /*0x1407b3724*/
              v99 = v50; /*0x1407b3727*/
            }
            v17 = v106; /*0x1407b3738*/
            if ( (_QWORD)v82 ) /*0x1407b373f*/
              sub_140001660(*((_QWORD *)&v82 + 1), v82, 1); /*0x1407b374e*/
          }
          if ( v104 ) /*0x1407b375d*/
            sub_140001660(v105, v104, 1); /*0x1407b376c*/
          v18 = v17[57]; /*0x1407b3771*/
          v49 = v51; /*0x1407b3779*/
        }
        v72 = v106; /*0x1407b3b18*/
        v73 = (_BYTE *)v106[58]; /*0x1407b3b1f*/
        *(_WORD *)((char *)v106 + 491) = 0; /*0x1407b3b26*/
        v86 = *(_QWORD *)(v101 + 16); /*0x1407b3b3a*/
        v85 = *(_OWORD *)v101; /*0x1407b3b45*/
        *((_BYTE *)v72 + 490) = 0; /*0x1407b3b4c*/
        sub_141684120(&v82, v103, 432); /*0x1407b3b67*/
        v87 = v73; /*0x1407b3b6c*/
        v88 = 0; /*0x1407b3b73*/
        if ( v50 ) /*0x1407b3b7d*/
        {
          sub_141447850(&v94, &v97); /*0x1407b3b8d*/
          v4 = v73; /*0x1407b3b93*/
          v12 = v94; /*0x1407b3b96*/
          v101 = (__int64)v95; /*0x1407b3ba4*/
          v89 = v96; /*0x1407b3bb2*/
          v74 = (char *)&v82 + 8; /*0x1407b3bb9*/
          v25 = 0; /*0x1407b3bc0*/
        }
        else
        {
          v4 = v73; /*0x1407b3bdf*/
          v89 = 0; /*0x1407b3be5*/
          v74 = (char *)(v72 + 2); /*0x1407b3bec*/
          v101 = 1; /*0x1407b3bf5*/
          v12 = off_141788F08; /*0x1407b3bfc*/
          v25 = 1; /*0x1407b3c03*/
        }
        v105 = v82; /*0x1407b3c0d*/
        sub_141684120(&v77, v74, 424); /*0x1407b3c21*/
        v5 = *((_QWORD *)&v85 + 1); /*0x1407b3c2d*/
        v6 = v85; /*0x1407b3c2d*/
        v100 = v86; /*0x1407b3c3b*/
        LODWORD(v104) = 0; /*0x1407b3c42*/
LABEL_19:
        v26 = *(void (__fastcall **)(char *, __int64, _QWORD))(v90 + 32); /*0x1407b316c*/
        v108 = v25; /*0x1407b318c*/
        v26((char *)&v92 + 8, v91, v92); /*0x1407b3193*/
        if ( v25 ) /*0x1407b3199*/
        {
          v13 = v97; /*0x1407b319f*/
          v27 = v103; /*0x1407b31a9*/
          if ( v97 ) /*0x1407b31b0*/
          {
            v28 = v103; /*0x1407b31b2*/
            sub_140001660(v98, v97, 1); /*0x1407b31c2*/
            v27 = v28; /*0x1407b31c7*/
          }
          v7 = v106; /*0x1407b31ca*/
          if ( !*((_BYTE *)v106 + 490) ) /*0x1407b31d1*/
            goto LABEL_77; /*0x1407b31d9*/
          goto LABEL_75; /*0x1407b31d9*/
        }
LABEL_74:
        v7 = v106; /*0x1407b38f1*/
        v27 = v103; /*0x1407b38f8*/
        if ( !*((_BYTE *)v106 + 490) ) /*0x1407b3907*/
          goto LABEL_77; /*0x1407b3907*/
LABEL_75:
        if ( *v27 != 2 ) /*0x1407b390c*/
        {
          sub_1406CE8F0(v27); /*0x1407b390e*/
          v7 = v106; /*0x1407b3914*/
        }
        goto LABEL_77; /*0x1407b3914*/
      }
      v45 = *((_QWORD *)&v82 + 1); /*0x1407b34a5*/
      v46 = *(_QWORD *)v83; /*0x1407b34ac*/
      v17 = v106; /*0x1407b34b3*/
      v47 = v106[57]; /*0x1407b34c2*/
      if ( *(_QWORD *)v83 > (unsigned __int64)(v106[55] - v47) ) /*0x1407b34d0*/
      {
        v109 = 1; /*0x1407b3cfc*/
        sub_141688D30((_DWORD)v106 + 440, v47, *(_DWORD *)v83, 1, 1); /*0x1407b3d15*/
        v17 = v106; /*0x1407b3d1b*/
        v47 = v106[57]; /*0x1407b3d22*/
      }
      else if ( !*(_QWORD *)v83 ) /*0x1407b34d9*/
      {
        goto LABEL_39; /*0x1407b34d9*/
      }
      sub_141684120(v17[56] + v47, v45, v46); /*0x1407b34ec*/
      v47 = v17[57]; /*0x1407b34f1*/
LABEL_39:
      v18 = v46 + v47; /*0x1407b34f9*/
      v17[57] = v18; /*0x1407b34fc*/
      if ( v18 > 0x4000000 ) /*0x1407b350b*/
        goto LABEL_17; /*0x1407b350b*/
      goto LABEL_40; /*0x1407b350b*/
    }
    v97 = 0; /*0x1407b31e4*/
    v98 = 1; /*0x1407b31ef*/
    v99 = 0; /*0x1407b31fa*/
    v29 = *(_QWORD *)v103; /*0x1407b320c*/
    *(_QWORD *)v103 = 2; /*0x1407b320f*/
    if ( v29 == 2 ) /*0x1407b321a*/
    {
      v103 = (_DWORD *)v106[58]; /*0x1407b322a*/
      sub_1405B02E0(v103, v16); /*0x1407b3231*/
      sub_140001660(v103, 64, 8); /*0x1407b3249*/
      v7 = v106; /*0x1407b324e*/
      v30 = v106[55]; /*0x1407b3255*/
      if ( v30 ) /*0x1407b325f*/
        sub_140001660(v106[56], v30, 1); /*0x1407b326e*/
      *v102 = 1; /*0x1407b327a*/
      goto LABEL_86; /*0x1407b327d*/
    }
    v31 = v106; /*0x1407b3282*/
    *(_QWORD *)&v82 = v29; /*0x1407b328d*/
    sub_141684120((char *)&v82 + 8, v106 + 2, 424); /*0x1407b32a1*/
    if ( !v31[57] ) /*0x1407b32b0*/
    {
      v34 = 1; /*0x1407b37db*/
      v36 = 0; /*0x1407b37e0*/
      goto LABEL_68; /*0x1407b37e0*/
    }
    v105 = v31[55]; /*0x1407b32bd*/
    v32 = v31[56]; /*0x1407b32c4*/
    v31[55] = 0; /*0x1407b32cb*/
    v31[56] = 1; /*0x1407b32d6*/
    v31[57] = 0; /*0x1407b32e1*/
    v104 = v32; /*0x1407b32fa*/
    sub_1409B6CC0(&v94, &v82); /*0x1407b3301*/
    v33 = v96; /*0x1407b3307*/
    if ( (_QWORD)v96 ) /*0x1407b3311*/
    {
      v101 = (__int64)v95; /*0x1407b331e*/
      sub_141688D30((unsigned int)&v97, 0, v96, 1, 1); /*0x1407b3340*/
      v34 = v98; /*0x1407b3346*/
      v35 = v99; /*0x1407b334d*/
      sub_141684120(v98 + v99, v101, v33); /*0x1407b3362*/
      v36 = v33 + v35; /*0x1407b3367*/
      v99 = v36; /*0x1407b336a*/
      v37 = v94; /*0x1407b3371*/
      if ( !v94 ) /*0x1407b337b*/
        goto LABEL_32; /*0x1407b337b*/
    }
    else
    {
      v34 = 1; /*0x1407b3afc*/
      v36 = 0; /*0x1407b3b01*/
      v37 = v94; /*0x1407b3b03*/
      if ( !v94 ) /*0x1407b3b0d*/
      {
LABEL_32:
        if ( v105 ) /*0x1407b3399*/
          sub_140001660(v104, v105, 1); /*0x1407b33ac*/
LABEL_68:
        v107 = 1; /*0x1407b37e2*/
        sub_1409B5B30(&v94, &v82); /*0x1407b37f7*/
        v63 = (__int64)v95; /*0x1407b37fd*/
        v64 = v96; /*0x1407b3804*/
        if ( (unsigned __int64)v96 > v97 - v36 ) /*0x1407b3818*/
        {
          v105 = (__int64)v95; /*0x1407b3cb1*/
          sub_141688D30((unsigned int)&v97, v36, v96, 1, 1); /*0x1407b3cd4*/
          v34 = v98; /*0x1407b3cda*/
          v36 = v99; /*0x1407b3ce1*/
          v63 = v105; /*0x1407b3ce8*/
        }
        else if ( !(_QWORD)v96 ) /*0x1407b3821*/
        {
LABEL_71:
          v99 = v64 + v36; /*0x1407b3834*/
          if ( v94 ) /*0x1407b3848*/
            sub_140001660(v63, v94, 1); /*0x1407b3853*/
          v107 = 0; /*0x1407b3858*/
          sub_141447850(&v94, &v97); /*0x1407b386d*/
          v12 = v94; /*0x1407b3873*/
          v101 = (__int64)v95; /*0x1407b3881*/
          v89 = v96; /*0x1407b388f*/
          v65 = v106; /*0x1407b3896*/
          v4 = (_BYTE *)v106[58]; /*0x1407b389d*/
          *(_WORD *)((char *)v106 + 491) = 0; /*0x1407b38a4*/
          v6 = v65[55]; /*0x1407b38ad*/
          v5 = v65[56]; /*0x1407b38b4*/
          v100 = v65[57]; /*0x1407b38c2*/
          v108 = 0; /*0x1407b38c9*/
          v66 = sub_1406CE8F0(&v82); /*0x1407b38d7*/
          LOBYTE(v66) = 1; /*0x1407b38dd*/
          LODWORD(v104) = v66; /*0x1407b38df*/
          v105 = 2; /*0x1407b38ea*/
          goto LABEL_74; /*0x1407b38ea*/
        }
        sub_141684120(v36 + v34, v63, v64); /*0x1407b382f*/
        goto LABEL_71; /*0x1407b382f*/
      }
    }
    sub_140001660(v95, v37, 1); /*0x1407b338a*/
    goto LABEL_32; /*0x1407b338a*/
  }
  *v102 = 3; /*0x1407b2fd9*/
LABEL_83:
  *(_QWORD *)a1 = 2; /*0x1407b39ba*/
  return a1; /*0x1407b3ae8*/
}
