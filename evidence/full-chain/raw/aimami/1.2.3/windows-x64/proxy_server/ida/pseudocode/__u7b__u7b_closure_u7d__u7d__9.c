// module: core::relay::proxy_server (codexmate_lib::core::relay::proxy_server)
// source (embedded panic Location / cross-platform symbol match): src\core\relay\proxy_server.rs
// binary: AiMaMi.1.2.3 win64.exe (Windows x64, stripped, imagebase 0x140000000)
// addr: 0x140642680  size: 0x1542  tier: B  evidence: panic-location-2hop
// decompiled via IDA Hex-Rays (remote IDA MCP, host <host>)
// status: FULL — not truncated, single decompile call, no chunking needed
//
// Functional summary:
//   Cross-platform symbol match:
//   codexmate_lib::core::relay::proxy_server::forward_codex_router_responses_internal::{{closure}}.
//   Async closure for the /codex/router/v1/responses path: validates the request has a 'model' field
//   (router.missing_model), and — like closure_11 — guards against router.state_poisoned/router.disabled
//   states with the same Chinese restart-app messaging.
//
// Referenced strings/symbols:
//   0x141433d50  sub_141433D50
//   0x141766c05  aModel_2   "model"
//   0x1416c2d4b  sub_1416C2D4B
//   0x140001690  nullsub_1
//   0x140001650  sub_140001650
//   0x141684120  sub_141684120
//   0x14066b010  sub_14066B010
//   0x14066b160  sub_14066B160
//   0x141768c50  aMissingModelFi   "missing `model` field in request body"
//   0x141768c75  aRouterMissingM   "router.missing_model"
//   0x140001660  sub_140001660
//   0x1400104f0  sub_1400104F0
//   0x140017140  sub_140017140
//   0x1416c15b0  sub_1416C15B0
//   0x141ec90b8  off_141EC90B8
//   0x1416c2250  sub_1416C2250
//   0x14176811e  aStatePoisoned   "state poisoned"
//   0x141768819  aRouterStatePoi   "router.state_poisoned"
//   0x1416c1670  WakeByAddressSingle
//   0x14067a4c0  sub_14067A4C0
//   0x1400015f0  sub_1400015F0
//   0x14041f680  sub_14041F680
//   0x1417681b5  aCodexmateLibCo_26   "codexmate_lib::core::relay::proxy_server"
//   0x1417688f0  off_1417688F0
//   0x140985ba0  sub_140985BA0
//   0x141768888  unk_141768888
//   0x141ec8d80  off_141EC8D80
//   0x141768908  aCodexCodexCode   "Codex 智能路由已关闭，但收到了路由请求。这通常意味着 Codex 仍在使用旧的配置文件，请重启 Codex 桌面应用。"
//   0x14176877a  aRouterDisabled   "router.disabled"
//   0x1406723c0  sub_1406723C0
//   0x140661000  sub_140661000
//   0x1406788e0  sub_1406788E0
//   0x14066fb10  sanitize_body_for_official_upstream
//   0x140644470  __u7b__u7b_closure_u7d__u7d__10
//   0x1405e6830  sub_1405E6830
//   0x14070e300  sub_14070E300
//   0x14177c585  aXAimamiReason   "x-aimami-reason"
//   0x1416c30e3  sub_1416C30E3
//   0x141786a08  off_141786A08
//   0x140660a60  sub_140660A60
//   0x141763f70  xmmword_141763F70
//   0x141763f60  xmmword_141763F60
//   0x141018b80  sub_141018B80
//   0x141768bc0  off_141768BC0
//   0x141768b7b  unk_141768B7B
//   0x141768c38  off_141768C38
//   0x141768bd8  unk_141768BD8
//   0x140667920  sub_140667920
//   0x14066c680  codex_local_compact_compat_response
//   0x1405e7ae0  sub_1405E7AE0
//   0x1406729b0  expand_aimami_compactions_for_upstream
//   0x140668970  sub_140668970
//   0x141768a50  off_141768A50
//   0x1417689f0  unk_1417689F0
//   0x1406610a0  sub_1406610A0
//   0x141768a9c  unk_141768A9C
//   0x141768b5e  aRouterRelayPro   "router.relay_provider_removed"
//   0x1417689d8  off_1417689D8
//   0x14176899a  unk_14176899A
//   0x140b93b50  sub_140B93B50
//   0x140009340  sub_140009340
//   0x1406186c0  sub_1406186C0
//   0x14149c500  sub_14149C500
//   0x14000e270  sub_14000E270
//   0x1404d4860  sub_1404D4860
//   0x1406743a0  sub_1406743A0
//   0x1406798e0  sub_1406798E0
//   0x140307860  sub_140307860
//   0x1403b9610  sub_1403B9610
//   0x1406372e0  error_hint_0
//   0x1405dd9a0  sub_1405DD9A0
//   0x1416c3400  sub_1416C3400
//   0x141768c90  off_141768C90
//   0x1416c3420  sub_1416C3420
// win 1.2.1 | module src/core/relay/proxy_server.rs | attributed via panic-Location xref (win-native)
// win 1.2.3 | = mac codexmate_lib::core::relay::proxy_server::forward_codex_router_responses_internal::_$u7b$$u7b$closure$u7d$$u7d$ | 跨平台字符串签名匹配(名↔函数一致)
char __fastcall _u7b__u7b_closure_u7d__u7d__9(__m128i *a1, __int64 a2, void *a3, __int64 a4)
{
  unsigned int v4; // r14d
  PVOID v5; // rdi
  __int64 v7; // rax
  __m128i v8; // xmm1
  __int128 v9; // xmm2
  __int128 v10; // xmm3
  const __m128i *v11; // rbx
  void *v12; // r13
  __int64 v13; // rax
  unsigned int v14; // edi
  const __m128i *v15; // r14
  void *v16; // rbx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // r12
  __int64 v20; // r15
  _OWORD *v21; // r8
  __int64 v22; // rax
  __int64 v23; // r13
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r15
  __int64 *v28; // r12
  int v29; // r8d
  int v30; // edx
  __int64 v31; // rdx
  __int64 v32; // rcx
  char v33; // al
  __int64 v34; // rdx
  __int64 v35; // rcx
  char v36; // al
  _QWORD *v37; // r10
  __int64 v38; // r12
  __int64 v39; // r13
  __m128i v40; // xmm0
  _QWORD *v41; // rbx
  _QWORD *v42; // r15
  __int64 v43; // r12
  __int64 v44; // r14
  unsigned __int64 v45; // rcx
  __int64 v46; // rax
  __int64 v47; // rcx
  __int64 v48; // r14
  __m128i v49; // xmm0
  __m128i v50; // xmm1
  __int64 v51; // rcx
  __int64 v52; // rax
  __int64 v53; // rdx
  char result; // al
  _QWORD *v55; // r10
  unsigned __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rcx
  __int64 v59; // r14
  __m128i v60; // xmm0
  __m128i v61; // xmm1
  __int64 v62; // rcx
  __int64 v63; // rax
  __int64 v64; // rdx
  __int64 v65; // rdi
  __int64 v66; // rdx
  __int64 v67; // rdx
  __int64 v68; // rax
  __int64 v69; // rcx
  __int64 v70; // r12
  __int64 v71; // rax
  _QWORD *v72; // r15
  __int64 v73; // rdx
  __int64 v74; // rbx
  __int64 v75; // rax
  __int64 v76; // r15
  __int64 v77; // r12
  __int64 v78; // r15
  __int64 v79; // rdx
  __int64 v80; // r14
  __int64 v81; // r13
  __m128i v82; // xmm0
  _OWORD *v83; // rax
  __int128 v84; // xmm2
  __int64 v85; // rdi
  __int64 v86; // rdi
  __int64 v87; // rdx
  __int64 v88; // rdx
  __int64 v89; // rax
  __m128i v90; // xmm0
  __m128i v91; // xmm1
  __m128i v92; // xmm2
  int v93; // edx
  __int64 v94; // [rsp+20h] [rbp-60h]
  __int64 v95; // [rsp+28h] [rbp-58h]
  __m128i v96; // [rsp+60h] [rbp-20h] BYREF
  __m128i v97; // [rsp+70h] [rbp-10h] BYREF
  __m128i v98; // [rsp+80h] [rbp+0h]
  __m128i v99; // [rsp+90h] [rbp+10h]
  __m128i v100; // [rsp+A0h] [rbp+20h]
  __m128i v101; // [rsp+B0h] [rbp+30h]
  __m128i v102; // [rsp+C0h] [rbp+40h]
  __m128i v103; // [rsp+D0h] [rbp+50h]
  _QWORD v104[3]; // [rsp+E8h] [rbp+68h] BYREF
  __m128i v105; // [rsp+100h] [rbp+80h] BYREF
  __m128i v106; // [rsp+110h] [rbp+90h] BYREF
  __m128i v107; // [rsp+120h] [rbp+A0h]
  __m128i v108; // [rsp+130h] [rbp+B0h]
  __m128i v109; // [rsp+140h] [rbp+C0h]
  __m128i v110; // [rsp+150h] [rbp+D0h]
  __m128i v111; // [rsp+160h] [rbp+E0h]
  __m128i v112; // [rsp+170h] [rbp+F0h]
  __int64 v113; // [rsp+188h] [rbp+108h]
  __m256i v114; // [rsp+190h] [rbp+110h] BYREF
  __m128i v115; // [rsp+1B0h] [rbp+130h]
  __m128i v116; // [rsp+1C0h] [rbp+140h]
  __m128i v117; // [rsp+1D0h] [rbp+150h]
  __m128i v118; // [rsp+1E0h] [rbp+160h]
  __m128i v119; // [rsp+1F0h] [rbp+170h]
  __m128i v120; // [rsp+200h] [rbp+180h]
  _OWORD *v121; // [rsp+218h] [rbp+198h]
  PVOID Address; // [rsp+220h] [rbp+1A0h]
  __int64 v123; // [rsp+228h] [rbp+1A8h]
  char v124; // [rsp+236h] [rbp+1B6h]
  unsigned __int8 v125; // [rsp+237h] [rbp+1B7h]
  __int64 v126; // [rsp+238h] [rbp+1B8h]
  __int64 v127; // [rsp+240h] [rbp+1C0h]

  v127 = -2; /*0x14064269b*/
  v5 = a3; /*0x1406426a6*/
  v7 = *(unsigned __int8 *)(a2 + 697); /*0x1406426ac*/
  v126 = a2; /*0x1406426c1*/
  switch ( v7 ) /*0x1406426c8*/
  {
    case 0LL: /*0x1406426c8*/
      *(_DWORD *)(a2 + 698) = 256; /*0x1406426ca*/
      *(_QWORD *)(a2 + 168) = *(_QWORD *)(a2 + 128); /*0x1406426db*/
      v8 = _mm_loadu_si128((const __m128i *)(a2 + 16)); /*0x1406426e5*/
      v9 = *(_OWORD *)(a2 + 32); /*0x1406426ea*/
      v10 = *(_OWORD *)(a2 + 48); /*0x1406426ee*/
      *(_OWORD *)(a2 + 176) = *(_OWORD *)a2; /*0x1406426f2*/
      *(__m128i *)(a2 + 192) = v8; /*0x1406426f9*/
      *(_OWORD *)(a2 + 208) = v9; /*0x140642701*/
      *(_OWORD *)(a2 + 224) = v10; /*0x140642708*/
      *(_OWORD *)(a2 + 240) = *(_OWORD *)(a2 + 64); /*0x140642713*/
      *(_OWORD *)(a2 + 256) = *(_OWORD *)(a2 + 80); /*0x14064271e*/
      v11 = (const __m128i *)(a2 + 272); /*0x140642725*/
      *(_OWORD *)(a2 + 272) = *(_OWORD *)(a2 + 96); /*0x140642730*/
      *(_OWORD *)(a2 + 288) = *(_OWORD *)(a2 + 112); /*0x14064273b*/
      *(__m128i *)(a2 + 304) = _mm_loadu_si128((const __m128i *)(a2 + 136)); /*0x14064274a*/
      LOBYTE(v4) = *(_BYTE *)(a2 + 696); /*0x140642752*/
      v123 = *(_QWORD *)(a2 + 152); /*0x140642760*/
      v12 = *(void **)(a2 + 160); /*0x140642767*/
      v13 = sub_141433D50(aModel_2, 5, a2 + 272); /*0x14064277d*/
      if ( v13 ) /*0x140642786*/
      {
        Address = v5; /*0x140642788*/
        v14 = v4; /*0x14064278f*/
        v15 = v11; /*0x140642792*/
        v16 = v12; /*0x140642795*/
        v17 = 0; /*0x140642798*/
        v18 = 1; /*0x1406427a1*/
        v19 = *(_QWORD *)(v13 + 16); /*0x1406427a6*/
        if ( *(_BYTE *)v13 != 3 ) /*0x1406427aa*/
          v19 = 1; /*0x1406427aa*/
        v20 = 0; /*0x1406427ae*/
        if ( *(_BYTE *)v13 == 3 ) /*0x1406427b4*/
          v20 = *(_QWORD *)(v13 + 24); /*0x1406427b4*/
        if ( v20 < 0 ) /*0x1406427bb*/
LABEL_8:
          sub_1416C2D4B(v17, v20); /*0x1406427bd*/
        if ( v20 ) /*0x1406427d5*/
        {
          v121 = *(_OWORD **)(v13 + 24); /*0x1406427d7*/
          nullsub_1(0); /*0x1406427de*/
          v22 = sub_140001650(v20, 1); /*0x1406427eb*/
          v17 = 1; /*0x1406427f0*/
          if ( !v22 ) /*0x1406427f8*/
            goto LABEL_8; /*0x1406427f8*/
          v23 = v22; /*0x1406427fd*/
          sub_141684120(v22, v19, v20); /*0x140642806*/
          v18 = v23; /*0x14064280b*/
          v21 = v121; /*0x14064280e*/
        }
        else
        {
          v21 = nullptr; /*0x140642817*/
        }
        v12 = v16; /*0x14064281a*/
        v11 = v15; /*0x14064281d*/
        v4 = v14; /*0x140642820*/
        v5 = Address; /*0x140642823*/
      }
      else
      {
        v18 = 1; /*0x1406427cb*/
        v21 = nullptr; /*0x1406427d0*/
      }
      v24 = v126; /*0x14064282a*/
      *(_QWORD *)(v126 + 320) = v21; /*0x140642831*/
      *(_QWORD *)(v24 + 328) = v18; /*0x140642838*/
      *(_QWORD *)(v24 + 336) = v21; /*0x14064283f*/
      *(_BYTE *)(v24 + 698) = 1; /*0x140642846*/
      sub_14066B010(v24 + 344, v18, v21, v4); /*0x140642857*/
      if ( !*(_QWORD *)(v126 + 336) ) /*0x14064286c*/
      {
        LOWORD(v25) = 400; /*0x140642984*/
        sub_14066B160((unsigned int)&v96, v25, (unsigned int)aMissingModelFi, 37, (__int64)aRouterMissingM, 20); /*0x140642988*/
LABEL_104:
        v86 = v126; /*0x1406438ae*/
        v87 = *(_QWORD *)(v126 + 344); /*0x1406438b5*/
        if ( v87 ) /*0x1406438bf*/
          sub_140001660(*(_QWORD *)(v126 + 352), v87, 1); /*0x1406438ce*/
        if ( *(_BYTE *)(v86 + 698) ) /*0x1406438d3*/
        {
          v88 = *(_QWORD *)(v86 + 320); /*0x1406438dc*/
          if ( v88 ) /*0x1406438e6*/
            sub_140001660(*(_QWORD *)(v86 + 328), v88, 1); /*0x1406438f5*/
        }
        *(_BYTE *)(v86 + 698) = 0; /*0x1406438fa*/
        if ( *(_BYTE *)(v86 + 699) ) /*0x140643901*/
          sub_1400104F0(v126 + 272); /*0x140643918*/
        v89 = v126; /*0x14064391e*/
        *(_BYTE *)(v126 + 699) = 0; /*0x140643925*/
        sub_140017140(v89 + 176); /*0x140643933*/
LABEL_112:
        a1[7] = v103; /*0x140643939*/
        a1[6] = v102; /*0x140643945*/
        a1[5] = v101; /*0x14064394d*/
        a1[4] = v100; /*0x140643955*/
        v90 = _mm_load_si128(&v96); /*0x140643959*/
        v91 = _mm_load_si128(&v97); /*0x14064395e*/
        v92 = v98; /*0x140643963*/
        a1[3] = v99; /*0x14064396b*/
        a1[2] = v92; /*0x14064396f*/
        a1[1] = v91; /*0x140643973*/
        *a1 = v90; /*0x140643978*/
        result = 1; /*0x14064397c*/
        goto LABEL_113; /*0x14064397c*/
      }
      v27 = **(_QWORD **)(v126 + 168); /*0x140642879*/
      Address = (PVOID)(v27 + 16); /*0x140642880*/
      LOBYTE(v26) = 1; /*0x140642887*/
      if ( _InterlockedCompareExchange8((volatile signed __int8 *)(v27 + 16), 1, 0) ) /*0x14064288b*/
        sub_1416C15B0((volatile void *)(v27 + 16)); /*0x140643b29*/
      v28 = off_141EC90B8; /*0x140642897*/
      if ( 2 * *off_141EC90B8 ) /*0x1406428a2*/
      {
        v29 = sub_1416C2250(v26, v25); /*0x140643b3a*/
        LOBYTE(v29) = v29 ^ 1; /*0x140643b3d*/
      }
      else
      {
        v29 = 0; /*0x1406428ae*/
      }
      v125 = *(_BYTE *)(v27 + 17); /*0x1406428bf*/
      v30 = v27 + 16; /*0x1406428ca*/
      v114.m256i_i64[1] = v27 + 16; /*0x1406428ce*/
      LODWORD(v121) = v29; /*0x1406428d5*/
      v114.m256i_i8[16] = v29; /*0x1406428dc*/
      v114.m256i_i64[0] = v125 != 0; /*0x1406428e3*/
      if ( v125 ) /*0x1406428ea*/
      {
        LOWORD(v30) = 500; /*0x140642916*/
        sub_14066B160((unsigned int)&v96, v30, (unsigned int)aStatePoisoned, 14, (__int64)aRouterStatePoi, 21); /*0x14064291a*/
        if ( !(_BYTE)v121 && 2 * *v28 && !(unsigned __int8)sub_1416C2250(v32, v31) ) /*0x140643b58*/
          *(_BYTE *)(v27 + 17) = 1; /*0x140643b66*/
        v33 = *(_BYTE *)Address; /*0x140642942*/
        *(_BYTE *)Address = 0; /*0x140642942*/
        if ( v33 == 2 ) /*0x140642946*/
          WakeByAddressSingle(Address); /*0x140642953*/
        goto LABEL_104; /*0x140642959*/
      }
      v113 = v126 + 368; /*0x14064299e*/
      sub_14067A4C0(v126 + 368, v27 + 24); /*0x1406429a5*/
      if ( !(_BYTE)v121 && 2 * *v28 && !(unsigned __int8)sub_1416C2250(v35, v34) ) /*0x140643b70*/
        *(_BYTE *)(v27 + 17) = 1; /*0x140643b7e*/
      v36 = *(_BYTE *)Address; /*0x1406429cd*/
      *(_BYTE *)Address = 0; /*0x1406429cd*/
      if ( v36 == 2 ) /*0x1406429d1*/
        WakeByAddressSingle(Address); /*0x140643b4d*/
      v37 = (_QWORD *)v126; /*0x1406429d7*/
      v38 = v126 + 320; /*0x1406429e5*/
      if ( *(_BYTE *)(v126 + 660) != 1 ) /*0x1406429f4*/
      {
        if ( *(_QWORD *)off_141EC8D80 >= 2u ) /*0x140642a42*/
        {
          v105.m128i_i64[0] = v126 + 320; /*0x140642a48*/
          v105.m128i_i64[1] = (__int64)sub_1400015F0; /*0x140642a56*/
          v106.m128i_i64[0] = v126 + 304; /*0x140642a5d*/
          v106.m128i_i64[1] = (__int64)sub_14041F680; /*0x140642a6b*/
          v114.m256i_i64[0] = (__int64)aCodexmateLibCo_26; /*0x140642a79*/
          v114.m256i_i64[1] = 40; /*0x140642a80*/
          v114.m256i_i64[2] = (__int64)aCodexmateLibCo_26; /*0x140642a8b*/
          v114.m256i_i64[3] = 40; /*0x140642a92*/
          v115.m128i_i64[0] = (__int64)&off_1417688F0; /*0x140642aa4*/
          sub_140985BA0(&unk_141768888, &v105, 2, &v114); /*0x140642ac6*/
        }
        LOWORD(v34) = 503; /*0x140642af2*/
        sub_14066B160((unsigned int)&v96, v34, (unsigned int)aCodexCodexCode, 146, (__int64)aRouterDisabled, 15); /*0x140642af6*/
        goto LABEL_103; /*0x140642afc*/
      }
      Address = v12; /*0x1406429f6*/
      v39 = v126 + 176; /*0x1406429fd*/
      if ( (_BYTE)v4 ) /*0x140642a07*/
      {
        if ( *(_QWORD *)(v126 + 360) <= 0xCu ) /*0x140642a15*/
        {
          if ( *(_QWORD *)off_141EC8D80 <= 2u ) /*0x140642a29*/
          {
LABEL_45:
            sub_1406723C0(v37[21], v37[38], v37[39], v37[41], v37[42], 0); /*0x140642cb2*/
            v46 = sub_140661000(*(_QWORD *)(v126 + 168)); /*0x140642cf5*/
            v47 = v126; /*0x140642cfb*/
            *(_QWORD *)(v126 + 704) = v46; /*0x140642d02*/
            v48 = v47 + 760; /*0x140642d09*/
            sub_1406788E0(v47 + 760, v11); /*0x140642d16*/
            sanitize_body_for_official_upstream(v48); /*0x140642d1f*/
            a2 = v126; /*0x140642d25*/
            *(_QWORD *)(v126 + 728) = v126 + 704; /*0x140642d33*/
            *(_QWORD *)(a2 + 736) = v39; /*0x140642d3a*/
            *(_QWORD *)(a2 + 744) = v48; /*0x140642d41*/
            *(_WORD *)(a2 + 753) = 256; /*0x140642d48*/
LABEL_46:
            v123 = a2 + 712; /*0x140642d51*/
            _u7b__u7b_closure_u7d__u7d__10(&v114, a2 + 712, v5); /*0x140642d69*/
            if ( v114.m256i_i32[0] == -1 ) /*0x140642d76*/
            {
              a1->m128i_i64[0] = -1; /*0x140642fd3*/
              result = 3; /*0x140642fda*/
              goto LABEL_113; /*0x140642fdc*/
            }
            v112 = v120; /*0x140642d83*/
            v111 = v119; /*0x140642d91*/
            v110 = v118; /*0x140642d9f*/
            v109 = v117; /*0x140642dad*/
            v49 = _mm_loadu_si128((const __m128i *)&v114); /*0x140642db4*/
            v50 = _mm_loadu_si128((const __m128i *)&v114.m256i_u64[2]); /*0x140642dbc*/
            v108 = v116; /*0x140642dd2*/
            v107 = v115; /*0x140642dd9*/
            v106 = v50; /*0x140642de0*/
            v105 = v49; /*0x140642de8*/
            if ( *(_BYTE *)(v126 + 753) == 3 ) /*0x140642dfe*/
            {
              sub_1405E6830(v123); /*0x140642e07*/
              *(_BYTE *)(v126 + 752) = 0; /*0x140642e14*/
            }
            sub_14070E300(&v114, aXAimamiReason, 15, &v105, v94, v95); /*0x140642e36*/
            if ( v114.m256i_i8[0] ) /*0x140642e43*/
            {
              if ( v114.m256i_i64[2] >= (unsigned __int64)v107.m128i_i64[1] ) /*0x140642e5a*/
                sub_1416C30E3(v114.m256i_i64[2], v107.m128i_i64[1], &off_141786A08); /*0x140643bab*/
              v51 = *(_QWORD *)(v107.m128i_i64[0] + 104 * v114.m256i_i64[2] + 40); /*0x140642e6b*/
              if ( v51 ) /*0x140642e73*/
              {
                v52 = *(_QWORD *)(v107.m128i_i64[0] + 104 * v114.m256i_i64[2] + 32); /*0x140642e75*/
                v53 = 0; /*0x140642e7a*/
                while ( (unsigned __int8)(*(_BYTE *)(v52 + v53) - 32) < 0x5Fu || *(_BYTE *)(v52 + v53) == 9 ) /*0x140642e9c*/
                {
                  if ( v51 == ++v53 ) /*0x140642ea4*/
                  {
                    if ( v51 == 19 /*0x140642ed2*/
                      && _mm_movemask_epi8(
                           _mm_and_si128(
                             _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v52), (__m128i)xmmword_141763F70),
                             _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v52 + 3)), (__m128i)xmmword_141763F60))) == 0xFFFF )
                    {
                      sub_140660A60(*(_QWORD *)(v126 + 168)); /*0x140642ee2*/
                    }
                    break; /*0x140642ee2*/
                  }
                }
              }
            }
            sub_1406723C0( /*0x140642ee8*/
              *(_QWORD *)(v126 + 168),
              *(_QWORD *)(v126 + 304),
              *(_QWORD *)(v126 + 312),
              *(_QWORD *)(v126 + 328),
              *(_QWORD *)(v126 + 336),
              1);
            v103 = v112; /*0x140642f39*/
            v102 = v111; /*0x140642f44*/
            v101 = v110; /*0x140642f4f*/
            v100 = v109; /*0x140642f5a*/
            v99 = v108; /*0x140642f7c*/
            v98 = v107; /*0x140642f80*/
            v97 = _mm_load_si128(&v106); /*0x140642f84*/
            v96 = _mm_load_si128(&v105); /*0x140642f89*/
            sub_1400104F0(v126 + 760); /*0x140642f9c*/
            if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(v126 + 704)) ) /*0x140642fb0*/
              sub_141018B80(v126 + 704); /*0x140642fc8*/
            goto LABEL_103; /*0x140642fce*/
          }
LABEL_44:
          v105.m128i_i64[0] = v126 + 320; /*0x140642c3c*/
          v105.m128i_i64[1] = (__int64)sub_1400015F0; /*0x140642c4a*/
          v114.m256i_i64[0] = (__int64)aCodexmateLibCo_26; /*0x140642c58*/
          v114.m256i_i64[1] = 40; /*0x140642c5f*/
          v114.m256i_i64[2] = (__int64)aCodexmateLibCo_26; /*0x140642c6a*/
          v114.m256i_i64[3] = 40; /*0x140642c71*/
          v115.m128i_i64[0] = (__int64)&off_141768BC0; /*0x140642c83*/
          sub_140985BA0(&unk_141768B7B, &v105, 3, &v114); /*0x140642ca5*/
          v37 = (_QWORD *)v126; /*0x140642cab*/
          goto LABEL_45; /*0x140642cab*/
        }
        v45 = *(_QWORD *)off_141EC8D80; /*0x140642c2d*/
        if ( **(_QWORD **)(v126 + 352) ^ 0x725F696D616D6961LL /*0x140642c23*/
           | *(_QWORD *)(*(_QWORD *)(v126 + 352) + 5LL) ^ 0x5F79616C65725F69LL )
        {
          if ( v45 < 3 ) /*0x140642c3a*/
            goto LABEL_45; /*0x140642c3a*/
          goto LABEL_44; /*0x140642c3a*/
        }
        if ( v45 >= 3 ) /*0x140643009*/
        {
          v105.m128i_i64[0] = v126 + 320; /*0x14064300f*/
          v105.m128i_i64[1] = (__int64)sub_1400015F0; /*0x14064301d*/
          v106.m128i_i64[0] = v126 + 304; /*0x140643024*/
          v106.m128i_i64[1] = (__int64)sub_14041F680; /*0x140643032*/
          v114.m256i_i64[0] = (__int64)aCodexmateLibCo_26; /*0x140643040*/
          v114.m256i_i64[1] = 40; /*0x140643047*/
          v114.m256i_i64[2] = (__int64)aCodexmateLibCo_26; /*0x140643052*/
          v114.m256i_i64[3] = 40; /*0x140643059*/
          v115.m128i_i64[0] = (__int64)&off_141768C38; /*0x14064306b*/
          sub_140985BA0(&unk_141768BD8, &v105, 3, &v114); /*0x14064308d*/
          v37 = (_QWORD *)v126; /*0x140643093*/
        }
        sub_140667920(v37[21], v37[38], v37[39], v37[41], v37[42], 0, 0); /*0x1406430ef*/
        codex_local_compact_compat_response(&v96, v11, *(_QWORD *)(v126 + 328), *(_QWORD *)(v126 + 336)); /*0x140643111*/
LABEL_103:
        sub_1405E7AE0(v126 + 368); /*0x14064389a*/
        goto LABEL_104; /*0x1406438a8*/
      }
      *(_BYTE *)(v126 + 699) = 0; /*0x140642b01*/
      v40 = _mm_loadu_si128(v11); /*0x140642b09*/
      *(__m128i *)&v114.m256i_u64[2] = _mm_loadu_si128(v11 + 1); /*0x140642b12*/
      *(__m128i *)v114.m256i_i8 = v40; /*0x140642b1a*/
      v41 = v37 + 83; /*0x140642b22*/
      expand_aimami_compactions_for_upstream(v37 + 83, &v114); /*0x140642b33*/
      v42 = (_QWORD *)(v126 + 704); /*0x140642b4e*/
      sub_140668970(v126 + 704, v113, *(_QWORD *)(v126 + 352), *(_QWORD *)(v126 + 360)); /*0x140642b5f*/
      if ( *v42 == -1 ) /*0x140642b69*/
      {
        v55 = (_QWORD *)v126; /*0x140642fe1*/
        if ( *(_QWORD *)(v126 + 360) > 0xCu ) /*0x140642ff0*/
        {
          v56 = *(_QWORD *)off_141EC8D80; /*0x140643148*/
          if ( !(**(_QWORD **)(v126 + 352) ^ 0x725F696D616D6961LL /*0x14064314b*/
               | *(_QWORD *)(*(_QWORD *)(v126 + 352) + 5LL) ^ 0x5F79616C65725F69LL) )
          {
            if ( v56 >= 2 ) /*0x1406439ae*/
            {
              v105.m128i_i64[0] = v38; /*0x1406439b0*/
              v105.m128i_i64[1] = (__int64)sub_1400015F0; /*0x1406439be*/
              v114.m256i_i64[0] = (__int64)aCodexmateLibCo_26; /*0x1406439cc*/
              v114.m256i_i64[1] = 40; /*0x1406439d3*/
              v114.m256i_i64[2] = (__int64)aCodexmateLibCo_26; /*0x1406439de*/
              v114.m256i_i64[3] = 40; /*0x1406439e5*/
              v115.m128i_i64[0] = (__int64)&off_141768A50; /*0x1406439f7*/
              sub_140985BA0(&unk_1417689F0, &v105, 2, &v114); /*0x140643a19*/
              v55 = (_QWORD *)v126; /*0x140643a1f*/
            }
            sub_140667920(v55[21], v55[38], v55[39], v55[41], v55[42], 0, 0); /*0x140643a7b*/
            v105.m128i_i64[0] = v38; /*0x140643a81*/
            v105.m128i_i64[1] = (__int64)sub_1400015F0; /*0x140643a8f*/
            sub_1406610A0(&v114, &unk_141768A9C, &v105); /*0x140643aab*/
            v123 = v114.m256i_i64[0]; /*0x140643abf*/
            LOWORD(v93) = 404; /*0x140643ae6*/
            Address = (PVOID)v114.m256i_i64[1]; /*0x140643aea*/
            sub_14066B160((unsigned int)&v96, v93, v114.m256i_i32[2], v114.m256i_i32[4], (__int64)aRouterRelayPro, 29); /*0x140643af1*/
            v85 = v126; /*0x140643b01*/
            if ( v123 ) /*0x140643b08*/
              sub_140001660(Address, v123, 1); /*0x140643b1b*/
            goto LABEL_102; /*0x140643b20*/
          }
        }
        else
        {
          v56 = *(_QWORD *)off_141EC8D80; /*0x140642ffd*/
        }
        if ( v56 >= 3 ) /*0x140643155*/
        {
          v105.m128i_i64[0] = v38; /*0x140643157*/
          v105.m128i_i64[1] = (__int64)sub_1400015F0; /*0x140643165*/
          v114.m256i_i64[0] = (__int64)aCodexmateLibCo_26; /*0x140643173*/
          v114.m256i_i64[1] = 40; /*0x14064317a*/
          v114.m256i_i64[2] = (__int64)aCodexmateLibCo_26; /*0x140643185*/
          v114.m256i_i64[3] = 40; /*0x14064318c*/
          v115.m128i_i64[0] = (__int64)&off_1417689D8; /*0x14064319e*/
          sub_140985BA0(&unk_14176899A, &v105, 3, &v114); /*0x1406431c0*/
          v55 = (_QWORD *)v126; /*0x1406431c6*/
        }
        sub_1406723C0(v55[21], v55[38], v55[39], v55[41], v55[42], 0); /*0x1406431fc*/
        v57 = sub_140661000(*(_QWORD *)(v126 + 168)); /*0x140643210*/
        v58 = v126; /*0x140643216*/
        *(_QWORD *)(v126 + 704) = v57; /*0x14064321d*/
        v59 = v58 + 760; /*0x140643224*/
        sub_1406788E0(v58 + 760, v41); /*0x140643231*/
        sanitize_body_for_official_upstream(v59); /*0x14064323a*/
        a2 = v126; /*0x140643240*/
        *(_QWORD *)(v126 + 728) = v42; /*0x140643247*/
        *(_QWORD *)(a2 + 736) = v39; /*0x14064324e*/
        *(_QWORD *)(a2 + 744) = v59; /*0x140643255*/
        *(_WORD *)(a2 + 753) = 0; /*0x14064325c*/
LABEL_70:
        v123 = a2 + 712; /*0x140643265*/
        _u7b__u7b_closure_u7d__u7d__10(&v114, a2 + 712, v5); /*0x14064327d*/
        if ( v114.m256i_i32[0] == -1 ) /*0x14064328a*/
        {
          a1->m128i_i64[0] = -1; /*0x140643560*/
          result = 5; /*0x140643567*/
          goto LABEL_113; /*0x140643569*/
        }
        v112 = v120; /*0x140643297*/
        v111 = v119; /*0x1406432a5*/
        v110 = v118; /*0x1406432b3*/
        v109 = v117; /*0x1406432c1*/
        v60 = _mm_loadu_si128((const __m128i *)&v114); /*0x1406432c8*/
        v61 = _mm_loadu_si128((const __m128i *)&v114.m256i_u64[2]); /*0x1406432d0*/
        v108 = v116; /*0x1406432e6*/
        v107 = v115; /*0x1406432ed*/
        v106 = v61; /*0x1406432f4*/
        v105 = v60; /*0x1406432fc*/
        if ( *(_BYTE *)(v126 + 753) == 3 ) /*0x140643312*/
        {
          sub_1405E6830(v123); /*0x14064331b*/
          *(_BYTE *)(v126 + 752) = 0; /*0x140643328*/
        }
        sub_14070E300(&v114, aXAimamiReason, 15, &v105, v94, v95); /*0x14064334a*/
        if ( v114.m256i_i8[0] ) /*0x140643357*/
        {
          if ( v114.m256i_i64[2] >= (unsigned __int64)v107.m128i_i64[1] ) /*0x14064336e*/
            sub_1416C30E3(v114.m256i_i64[2], v107.m128i_i64[1], &off_141786A08); /*0x140643bba*/
          v62 = *(_QWORD *)(v107.m128i_i64[0] + 104 * v114.m256i_i64[2] + 40); /*0x14064337f*/
          if ( v62 ) /*0x140643387*/
          {
            v63 = *(_QWORD *)(v107.m128i_i64[0] + 104 * v114.m256i_i64[2] + 32); /*0x140643389*/
            v64 = 0; /*0x14064338e*/
            while ( (unsigned __int8)(*(_BYTE *)(v63 + v64) - 32) < 0x5Fu || *(_BYTE *)(v63 + v64) == 9 ) /*0x1406433ac*/
            {
              if ( v62 == ++v64 ) /*0x1406433b4*/
              {
                if ( v62 == 19 /*0x1406433e2*/
                  && _mm_movemask_epi8(
                       _mm_and_si128(
                         _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v63), (__m128i)xmmword_141763F70),
                         _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v63 + 3)), (__m128i)xmmword_141763F60))) == 0xFFFF )
                {
                  sub_140660A60(*(_QWORD *)(v126 + 168)); /*0x1406433f2*/
                }
                break; /*0x1406433f2*/
              }
            }
          }
        }
        sub_1406723C0( /*0x1406433f8*/
          *(_QWORD *)(v126 + 168),
          *(_QWORD *)(v126 + 304),
          *(_QWORD *)(v126 + 312),
          *(_QWORD *)(v126 + 328),
          *(_QWORD *)(v126 + 336),
          1);
        v103 = v112; /*0x140643449*/
        v102 = v111; /*0x140643454*/
        v101 = v110; /*0x14064345f*/
        v100 = v109; /*0x14064346a*/
        v99 = v108; /*0x14064348c*/
        v98 = v107; /*0x140643490*/
        v97 = _mm_load_si128(&v106); /*0x140643494*/
        v96 = _mm_load_si128(&v105); /*0x140643499*/
        sub_1400104F0(v126 + 760); /*0x1406434ac*/
        if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(v126 + 704)) ) /*0x1406434c0*/
          sub_141018B80(v126 + 704); /*0x1406434d4*/
        sub_1400104F0(v126 + 664); /*0x1406434e8*/
        sub_1405E7AE0(v126 + 368); /*0x1406434fc*/
        v65 = v126; /*0x140643502*/
        v66 = *(_QWORD *)(v126 + 344); /*0x140643509*/
        if ( v66 ) /*0x140643513*/
          sub_140001660(*(_QWORD *)(v126 + 352), v66, 1); /*0x140643522*/
        v67 = *(_QWORD *)(v65 + 320); /*0x140643527*/
        if ( v67 ) /*0x140643531*/
          sub_140001660(*(_QWORD *)(v65 + 328), v67, 1); /*0x140643540*/
        *(_WORD *)(v65 + 698) = 0; /*0x140643545*/
        sub_140017140(v65 + 176); /*0x140643555*/
        goto LABEL_112; /*0x14064355b*/
      }
      v121 = (_OWORD *)v38; /*0x140642b6f*/
      v43 = v126; /*0x140642b76*/
      *(_BYTE *)(v126 + 701) = 1; /*0x140642b7d*/
      v44 = v43 + 936; /*0x140642b86*/
      sub_141684120(v43 + 936, v42, 232); /*0x140642b9a*/
      if ( (unsigned __int8)sub_1404D4860(*(_QWORD *)(*(_QWORD *)(v43 + 168) + 16LL) + 16LL, v43 + 936) ) /*0x140642bb2*/
      {
        sub_140B93B50(&v105, **(_QWORD **)(v126 + 168) + 16LL); /*0x140642bdc*/
        if ( v105.m128i_i8[0] ) /*0x140642be9*/
        {
          sub_140009340(&v105); /*0x140642bf6*/
        }
        else
        {
          v125 = v106.m128i_i8[0]; /*0x14064357c*/
          v68 = *(_QWORD *)(v105.m128i_i64[1] + 16); /*0x140643582*/
          v113 = v105.m128i_i64[1]; /*0x140643586*/
          v69 = 232LL * *(_QWORD *)(v105.m128i_i64[1] + 24); /*0x14064358d*/
          v104[0] = v68; /*0x140643598*/
          v104[1] = v68 + v69; /*0x14064359c*/
          v70 = v126; /*0x1406435a0*/
          v71 = sub_1406186C0(v104, *(_QWORD *)(v126 + 944), *(_QWORD *)(v126 + 952)); /*0x1406435bb*/
          if ( v71 ) /*0x1406435c3*/
          {
            v72 = (_QWORD *)v71; /*0x1406435c5*/
            sub_14149C500(&v114, v70 + 1008); /*0x1406435d7*/
            v73 = v72[9]; /*0x1406435e4*/
            if ( v73 ) /*0x1406435eb*/
              sub_140001660(v72[10], v73, 1); /*0x1406435f7*/
            v72[11] = v114.m256i_i64[2]; /*0x140643603*/
            *(__m128i *)(v72 + 9) = _mm_loadu_si128((const __m128i *)&v114); /*0x140643610*/
          }
          sub_14000E270(v113, v125); /*0x140643624*/
        }
      }
      sub_1406788E0(&v114, v41); /*0x140643634*/
      v74 = v126 + 3336; /*0x140643641*/
      sub_1406743A0(v126 + 3336, &v114); /*0x140643652*/
      v75 = v126; /*0x140643658*/
      *(_BYTE *)(v126 + 700) = 1; /*0x14064365f*/
      if ( *(_BYTE *)(v75 + 3336) == 5 ) /*0x14064366d*/
      {
        sub_1406798E0(v104); /*0x140643677*/
        v76 = v126; /*0x14064367d*/
        v124 = 1; /*0x14064368b*/
        sub_14149C500(&v105, v126 + 1032); /*0x140643699*/
        v114.m256i_i64[3] = v106.m128i_i64[0]; /*0x1406436ad*/
        *(__m128i *)&v114.m256i_u64[1] = _mm_loadu_si128(&v105); /*0x1406436bc*/
        v114.m256i_i8[0] = 3; /*0x1406436c4*/
        v124 = 0; /*0x1406436cb*/
        sub_140307860(&v105, v76 + 3344, v104, &v114); /*0x1406436e4*/
        if ( v105.m128i_i8[0] != -1 ) /*0x1406436f1*/
          sub_1400104F0(&v105); /*0x1406436fa*/
        v75 = v126; /*0x140643700*/
      }
      v77 = *(_QWORD *)(v75 + 168); /*0x140643707*/
      v78 = sub_1403B9610(232); /*0x140643719*/
      v79 = v44; /*0x14064371c*/
      v80 = v39; /*0x14064371f*/
      v81 = v126; /*0x140643722*/
      *(_BYTE *)(v126 + 701) = 0; /*0x140643729*/
      sub_141684120(v78, v79, 232); /*0x14064373a*/
      a2 = v81; /*0x14064373f*/
      *(_BYTE *)(v81 + 700) = 0; /*0x140643742*/
      v82 = _mm_loadu_si128((const __m128i *)(v81 + 304)); /*0x14064374a*/
      *(_BYTE *)(v81 + 698) = 0; /*0x140643753*/
      *(_QWORD *)(v81 + 1168) = 1; /*0x14064375b*/
      *(_QWORD *)(v81 + 1176) = v78; /*0x140643766*/
      *(_QWORD *)(v81 + 1184) = 1; /*0x14064376d*/
      v83 = v121; /*0x140643778*/
      *(_OWORD *)(v81 + 1192) = *v121; /*0x140643782*/
      *(_QWORD *)(v81 + 1208) = *((_QWORD *)v83 + 2); /*0x14064378e*/
      v84 = *(_OWORD *)(v74 + 16); /*0x140643799*/
      *(__m128i *)(v81 + 1216) = _mm_loadu_si128((const __m128i *)v74); /*0x14064379d*/
      *(_OWORD *)(v81 + 1232) = v84; /*0x1406437a6*/
      *(_QWORD *)(v81 + 1248) = v77; /*0x1406437ae*/
      *(_QWORD *)(v81 + 1256) = v80; /*0x1406437b5*/
      *(__m128i *)(v81 + 1264) = v82; /*0x1406437bc*/
      *(_QWORD *)(v81 + 1280) = v123; /*0x1406437cc*/
      *(_QWORD *)(v81 + 1288) = Address; /*0x1406437da*/
      *(_BYTE *)(v81 + 1752) = 0; /*0x1406437e1*/
LABEL_100:
      v123 = a2 + 1168; /*0x1406437e9*/
      error_hint_0((__m128i *)&v114, a2 + 1168, (volatile signed __int64 *)v5, a4); /*0x140643801*/
      if ( v114.m256i_i32[0] != -1 ) /*0x14064380e*/
      {
        v103 = v120; /*0x14064381b*/
        v102 = v119; /*0x140643826*/
        v101 = v118; /*0x140643831*/
        v100 = v117; /*0x14064383c*/
        v99 = v116; /*0x14064385e*/
        v98 = v115; /*0x140643862*/
        v97 = _mm_loadu_si128((const __m128i *)&v114.m256i_u64[2]); /*0x140643866*/
        v96 = _mm_loadu_si128((const __m128i *)&v114); /*0x14064386b*/
        sub_1405DD9A0(v123); /*0x140643877*/
        v85 = v126; /*0x14064387d*/
        *(_WORD *)(v126 + 700) = 0; /*0x140643884*/
LABEL_102:
        sub_1400104F0(v85 + 664); /*0x14064388d*/
        goto LABEL_103; /*0x140643894*/
      }
      a1->m128i_i64[0] = -1; /*0x14064399f*/
      result = 4; /*0x1406439a6*/
LABEL_113:
      *(_BYTE *)(v126 + 697) = result; /*0x14064397e*/
      return result;
    case 1LL: /*0x1406426c8*/
      sub_1416C3400(&off_141768C90, a2, a3, a4); /*0x140643b9d*/
    case 2LL: /*0x1406426c8*/
      sub_1416C3420(&off_141768C90, a2, a3, a4); /*0x140643b8f*/
    case 3LL: /*0x1406426c8*/
      goto LABEL_46;
    case 4LL: /*0x1406426c8*/
      goto LABEL_100;
    case 5LL: /*0x1406426c8*/
      goto LABEL_70;
  }
}
