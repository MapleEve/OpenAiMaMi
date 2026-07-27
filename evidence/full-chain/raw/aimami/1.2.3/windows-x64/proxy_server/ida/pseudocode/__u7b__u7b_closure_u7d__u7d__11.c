// module: core::relay::proxy_server, core::relay::proxy_passthrough (codexmate_lib::core::relay::proxy_server)
// source (embedded panic Location / cross-platform symbol match): src\core\relay\proxy_server.rs
// binary: AiMaMi.1.2.3 win64.exe (Windows x64, stripped, imagebase 0x140000000)
// addr: 0x140641240  size: 0xec2  tier: B  evidence: panic-location-2hop
// decompiled via IDA Hex-Rays (remote IDA MCP, host <host>)
// status: FULL — not truncated, single decompile call, no chunking needed
//
// Functional summary:
//   Cross-platform symbol match:
//   codexmate_lib::core::relay::proxy_server::forward_codex_router_images_internal::{{closure}} (module
//   core::relay::proxy_passthrough per owner-map). Async closure handling image-generation/edit requests
//   proxied through the Codex router; on router.state_poisoned/router.disabled it surfaces the Chinese
//   user-facing messages instructing the user to restart the Codex desktop app, and on
//   passthrough.no_chatgpt_auth it blocks image generation when the active account is a virtual-login
//   account lacking real ChatGPT credentials.
//
// Referenced strings/symbols:
//   0x1416c15b0  sub_1416C15B0
//   0x141ec90b8  off_141EC90B8
//   0x1416c2250  sub_1416C2250
//   0x14066b160  sub_14066B160
//   0x14176811e  aStatePoisoned   "state poisoned"
//   0x141768819  aRouterStatePoi   "router.state_poisoned"
//   0x1416c1670  WakeByAddressSingle
//   0x141768707  aCodexCodex   "Codex 智能路由已关闭，但收到了官方图片请求。请重启 Codex 桌面应用以加载原生配置。"
//   0x14176877a  aRouterDisabled   "router.disabled"
//   0x141768789  aChatgpt_1   "当前使用虚拟账号登录，无法使用需要真实 ChatGPT 登录凭证的官方图片生成或编辑功能。"
//   0x1417687fe  aPassthroughNoC   "passthrough.no_chatgpt_auth"
//   0x140017140  sub_140017140
//   0x14048ed60  sub_14048ED60
//   0x14177aa3c  aRouterImagesGe   "router-images-generations"
//   0x14177aa55  unk_14177AA55
//   0x14177a9d2  unk_14177A9D2
//   0x14177aa0a  unk_14177AA0A
//   0x14066baa0  sub_14066BAA0
//   0x1416c1680  sub_1416C1680
//   0x1416c1970  sub_1416C1970
//   0x140674430  error_response
//   0x140674de0  sub_140674DE0
//   0x140676350  sub_140676350
//   0x1405a48c0  sub_1405A48C0
//   0x141764700  unk_141764700
//   0x14103c250  sub_14103C250
//   0x1406c6630  sub_1406C6630
//   0x14103c180  sub_14103C180
//   0x14104dcf0  sub_14104DCF0
//   0x1405e6830  sub_1405E6830
//   0x141031f10  sub_141031F10
//   0x14149c0f0  sub_14149C0F0
//   0x1417691b8  unk_1417691B8
//   0x1417690e7  aPassthroughNet   "passthrough.network"
//   0x140001660  sub_140001660
//   0x1405e12d0  sub_1405E12D0
//   0x140675480  sub_140675480
//   0x141018b80  sub_141018B80
//   0x14070e300  sub_14070E300
//   0x14177c585  aXAimamiReason   "x-aimami-reason"
//   0x1416c30e3  sub_1416C30E3
//   0x141786a08  off_141786A08
//   0x140660a60  sub_140660A60
//   0x141763f70  xmmword_141763F70
//   0x141763f60  xmmword_141763F60
//   0x1416c3400  sub_1416C3400
//   0x141768830  off_141768830
//   0x1416c3420  sub_1416C3420
//   0x1417691e8  off_1417691E8
//   0x1417691a0  off_1417691A0
// win 1.2.1 | module src/core/relay/proxy_passthrough.rs | attributed via panic-Location xref (win-native)
// win 1.2.3 | = mac codexmate_lib::core::relay::proxy_server::forward_codex_router_images_internal::_$u7b$$u7b$closure$u7d$$u7d$ | 跨平台字符串签名匹配(名↔函数一致)
char __fastcall _u7b__u7b_closure_u7d__u7d__11(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  _QWORD *v6; // rax
  __int128 v7; // xmm1
  __int128 v8; // xmm2
  __int128 v9; // xmm3
  __int64 v10; // r12
  char *v11; // r14
  __int64 v12; // rcx
  __int64 *v13; // r13
  char v14; // r15
  __int64 v15; // rbx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  char v19; // al
  _BYTE *v20; // rdi
  __int128 *v21; // rax
  __int64 *v22; // r12
  __int64 v23; // r13
  void *v24; // r14
  const __m128i *v25; // rcx
  __int128 v26; // xmm0
  _BYTE *v27; // r15
  __int64 v28; // r9
  void (__fastcall *v29)(unsigned __int64 *, __int64, __int64); // rax
  __int64 v30; // rdx
  __int64 v31; // rdx
  const __m128i *v32; // rbx
  __int64 v33; // rdx
  __m128i v34; // xmm0
  __m128i v35; // xmm1
  __m128i v36; // xmm0
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rdx
  char v40; // di
  char v41; // al
  int v42; // edx
  __int64 v43; // rdi
  char *v44; // rbx
  const __m128i *v45; // r14
  __m128i v46; // xmm1
  __int64 v47; // rax
  __m128i v48; // xmm0
  __m128i v49; // xmm1
  __int64 v50; // rcx
  __int64 v51; // rax
  __int64 v52; // rdx
  __m128i v53; // xmm0
  __m128i v54; // xmm1
  __int64 v55; // rax
  char result; // al
  __m128i v57; // xmm0
  __m128i v58; // xmm1
  __int128 v59; // xmm2
  bool v60; // zf
  __int64 v61; // r8
  const char *v62; // rdx
  _QWORD *v63; // rcx
  __int64 v64; // rdi
  unsigned __int32 v65; // eax
  bool v66; // of
  signed __int32 v67; // eax
  int v68; // ett
  __int64 v69; // rt0
  __int64 v70; // r15
  __m128i v71; // xmm0
  __m128i v72; // xmm1
  __int128 v73; // xmm2
  __int128 v74; // xmm3
  __int128 v75; // xmm4
  const char *v76; // [rsp+20h] [rbp-60h]
  __int64 v77; // [rsp+28h] [rbp-58h]
  _QWORD v78[34]; // [rsp+40h] [rbp-40h] BYREF
  __m128i v79; // [rsp+150h] [rbp+D0h]
  __m128i v80; // [rsp+160h] [rbp+E0h]
  __int128 v81; // [rsp+170h] [rbp+F0h]
  __int128 v82; // [rsp+180h] [rbp+100h]
  __int128 v83; // [rsp+190h] [rbp+110h]
  __int128 v84; // [rsp+1A0h] [rbp+120h]
  __int128 v85; // [rsp+1B0h] [rbp+130h]
  __int64 v86; // [rsp+1C0h] [rbp+140h]
  _QWORD v87[2]; // [rsp+1C8h] [rbp+148h] BYREF
  __int128 v88; // [rsp+1D8h] [rbp+158h]
  __m128i v89; // [rsp+1E8h] [rbp+168h]
  __int128 v90; // [rsp+1F8h] [rbp+178h]
  __int128 v91; // [rsp+208h] [rbp+188h]
  __int128 v92; // [rsp+218h] [rbp+198h]
  __int128 v93; // [rsp+228h] [rbp+1A8h]
  __m128i v94; // [rsp+238h] [rbp+1B8h]
  __int64 v95; // [rsp+248h] [rbp+1C8h]
  __m128i v96; // [rsp+250h] [rbp+1D0h] BYREF
  __m128i v97[5]; // [rsp+260h] [rbp+1E0h] BYREF
  __int64 v98; // [rsp+2B0h] [rbp+230h] BYREF
  __m128i v99; // [rsp+2B8h] [rbp+238h]
  __m128i v100; // [rsp+2C8h] [rbp+248h]
  __int128 v101; // [rsp+2D8h] [rbp+258h]
  __int128 v102; // [rsp+2E8h] [rbp+268h]
  __int128 v103; // [rsp+2F8h] [rbp+278h]
  __int128 v104; // [rsp+308h] [rbp+288h]
  __m128i v105; // [rsp+318h] [rbp+298h] BYREF
  __int64 v106; // [rsp+328h] [rbp+2A8h]
  __int64 v107; // [rsp+330h] [rbp+2B0h] BYREF
  char *v108; // [rsp+338h] [rbp+2B8h]
  __int128 v109; // [rsp+340h] [rbp+2C0h]
  __m128i v110; // [rsp+350h] [rbp+2D0h]
  __int128 v111; // [rsp+360h] [rbp+2E0h]
  __int128 v112; // [rsp+370h] [rbp+2F0h]
  __int128 v113; // [rsp+380h] [rbp+300h]
  __int128 v114; // [rsp+390h] [rbp+310h]
  __m128i v115; // [rsp+3A0h] [rbp+320h] BYREF
  __int64 v116; // [rsp+3B0h] [rbp+330h]
  __int128 v117; // [rsp+440h] [rbp+3C0h]
  __m128i v118; // [rsp+450h] [rbp+3D0h] BYREF
  __int128 v119; // [rsp+460h] [rbp+3E0h]
  __int128 v120; // [rsp+470h] [rbp+3F0h]
  __int128 v121; // [rsp+480h] [rbp+400h]
  __int128 v122; // [rsp+490h] [rbp+410h]
  __m128i v123; // [rsp+4A0h] [rbp+420h] BYREF
  __int64 v124; // [rsp+4B0h] [rbp+430h]
  __m128i v125; // [rsp+4C0h] [rbp+440h] BYREF
  __m128i v126; // [rsp+4D0h] [rbp+450h] BYREF
  __int128 v127; // [rsp+4E0h] [rbp+460h]
  __int128 v128; // [rsp+4F0h] [rbp+470h]
  __int128 v129; // [rsp+500h] [rbp+480h]
  __int128 v130; // [rsp+510h] [rbp+490h]
  __m128i v131; // [rsp+520h] [rbp+4A0h]
  __int64 v132; // [rsp+530h] [rbp+4B0h]
  __m128i v133; // [rsp+540h] [rbp+4C0h] BYREF
  __m128i v134; // [rsp+550h] [rbp+4D0h]
  __m128i v135; // [rsp+560h] [rbp+4E0h]
  __m128i v136; // [rsp+570h] [rbp+4F0h]
  __m128i v137; // [rsp+580h] [rbp+500h]
  __m128i v138; // [rsp+590h] [rbp+510h]
  __m128i v139; // [rsp+5A0h] [rbp+520h] BYREF
  __m128i v140; // [rsp+5B0h] [rbp+530h] BYREF
  __int128 v141; // [rsp+5C0h] [rbp+540h]
  __int128 v142; // [rsp+5D0h] [rbp+550h]
  __int128 v143; // [rsp+5E0h] [rbp+560h]
  __int128 v144; // [rsp+5F0h] [rbp+570h]
  __int128 v145; // [rsp+600h] [rbp+580h]
  __int128 v146; // [rsp+610h] [rbp+590h]
  _BYTE v147[24]; // [rsp+628h] [rbp+5A8h] BYREF
  _BYTE v148[104]; // [rsp+640h] [rbp+5C0h]
  char *v149; // [rsp+6A8h] [rbp+628h]
  __m128i v150; // [rsp+6B0h] [rbp+630h] BYREF
  __m128i v151; // [rsp+6C0h] [rbp+640h] BYREF
  __m128i v152; // [rsp+6D0h] [rbp+650h]
  __m128i v153; // [rsp+6E0h] [rbp+660h] BYREF
  __int64 v154; // [rsp+6F0h] [rbp+670h]
  __int64 v155; // [rsp+6F8h] [rbp+678h]
  const __m128i *v156; // [rsp+700h] [rbp+680h]
  _BYTE *v157; // [rsp+708h] [rbp+688h]
  const __m128i *v158; // [rsp+710h] [rbp+690h]
  _BYTE *v159; // [rsp+718h] [rbp+698h]
  const __m128i *v160; // [rsp+720h] [rbp+6A0h]
  _BYTE *v161; // [rsp+728h] [rbp+6A8h]
  const __m128i *v162; // [rsp+730h] [rbp+6B0h]
  _BYTE *v163; // [rsp+738h] [rbp+6B8h]
  _BYTE *v164; // [rsp+740h] [rbp+6C0h]
  __int64 v165; // [rsp+748h] [rbp+6C8h]
  const __m128i *v166; // [rsp+750h] [rbp+6D0h]
  __int64 v167; // [rsp+758h] [rbp+6D8h]
  __int64 v168; // [rsp+760h] [rbp+6E0h]

  v168 = -2; /*0x14064125b*/
  v5 = *(unsigned __int8 *)(a2 + 425); /*0x140641269*/
  v167 = a2; /*0x14064127e*/
  switch ( v5 ) /*0x140641285*/
  {
    case 0LL: /*0x140641285*/
      v165 = a3; /*0x140641287*/
      v6 = *(_QWORD **)(a2 + 96); /*0x14064128e*/
      *(_QWORD *)(a2 + 136) = v6; /*0x140641292*/
      v7 = *(_OWORD *)(a2 + 16); /*0x14064129c*/
      v8 = *(_OWORD *)(a2 + 32); /*0x1406412a0*/
      v9 = *(_OWORD *)(a2 + 48); /*0x1406412a4*/
      *(_OWORD *)(a2 + 144) = *(_OWORD *)a2; /*0x1406412a8*/
      *(_OWORD *)(a2 + 160) = v7; /*0x1406412af*/
      *(_OWORD *)(a2 + 176) = v8; /*0x1406412b6*/
      *(_OWORD *)(a2 + 192) = v9; /*0x1406412bd*/
      *(_OWORD *)(a2 + 208) = *(_OWORD *)(a2 + 64); /*0x1406412c8*/
      *(_OWORD *)(a2 + 224) = *(_OWORD *)(a2 + 80); /*0x1406412d3*/
      *(_BYTE *)(a2 + 426) = 1; /*0x1406412da*/
      v153 = _mm_loadu_si128((const __m128i *)(a2 + 120)); /*0x1406412eb*/
      v152 = _mm_loadu_si128((const __m128i *)(a2 + 104)); /*0x1406412f3*/
      v12 = *(unsigned __int8 *)(a2 + 424); /*0x1406412fb*/
      LOBYTE(v166) = *(_BYTE *)(a2 + 424); /*0x140641302*/
      v10 = *v6; /*0x140641308*/
      v11 = (char *)(*v6 + 16LL); /*0x14064130b*/
      LOBYTE(v12) = 1; /*0x140641310*/
      if ( _InterlockedCompareExchange8(v11, 1, 0) ) /*0x140641314*/
        sub_1416C15B0(v11); /*0x140642006*/
      v13 = off_141EC90B8; /*0x140641321*/
      if ( 2 * *off_141EC90B8 ) /*0x14064132c*/
        v14 = sub_1416C2250(v12, a2) ^ 1; /*0x14064201a*/
      else
        v14 = 0; /*0x140641338*/
      v15 = v167 + 144; /*0x140641342*/
      v16 = *(unsigned __int8 *)(v10 + 17); /*0x140641349*/
      LOBYTE(v164) = v16; /*0x140641351*/
      v108 = v11; /*0x14064135c*/
      LOBYTE(v109) = v14; /*0x140641363*/
      v107 = (_BYTE)v16 != 0; /*0x14064136a*/
      if ( (_BYTE)v16 ) /*0x140641371*/
      {
        LOWORD(a2) = 500; /*0x1406413a0*/
        sub_14066B160((unsigned int)&v139, a2, (unsigned int)aStatePoisoned, 14, (__int64)aRouterStatePoi, 21); /*0x1406413a4*/
        if ( !v14 && 2 * *v13 && !(unsigned __int8)sub_1416C2250(v18, v17) ) /*0x14064203f*/
          *(_BYTE *)(v10 + 17) = 1; /*0x14064204d*/
        v19 = *v11; /*0x1406413c1*/
        *v11 = 0; /*0x1406413c1*/
        if ( v19 == 2 ) /*0x1406413c6*/
          WakeByAddressSingle(v11); /*0x1406413cf*/
        goto LABEL_51; /*0x1406413d5*/
      }
      v40 = *(_BYTE *)(v10 + 316); /*0x14064173f*/
      if ( !v14 && 2 * *v13 && !(unsigned __int8)sub_1416C2250(v16, a2) ) /*0x140642058*/
        *(_BYTE *)(v10 + 17) = 1; /*0x140642066*/
      v41 = *v11; /*0x14064175f*/
      *v11 = 0; /*0x14064175f*/
      if ( v41 == 2 ) /*0x140641764*/
        WakeByAddressSingle(v11); /*0x140642026*/
      if ( !v40 ) /*0x14064176d*/
      {
        LOWORD(a2) = 503; /*0x140641c9d*/
        sub_14066B160((unsigned int)&v139, a2, (unsigned int)aCodexCodex, 115, (__int64)aRouterDisabled, 15); /*0x140641ca1*/
        goto LABEL_51; /*0x140641ca1*/
      }
      if ( (unsigned __int8)sub_14048ED60(*(_QWORD *)(*(_QWORD *)(v167 + 136) + 16LL) + 16LL) == 1 ) /*0x140641791*/
      {
        LOWORD(v42) = 401; /*0x1406417c0*/
        sub_14066B160((unsigned int)&v139, v42, (unsigned int)aChatgpt_1, 117, (__int64)aPassthroughNoC, 27); /*0x1406417c4*/
LABEL_51:
        (*(void (__fastcall **)(__int8 *, __int64, __int64))(v152.m128i_i64[0] + 32))( /*0x140641ca7*/
          &v153.m128i_i8[8],
          v152.m128i_i64[1],
          v153.m128i_i64[0]);
        *(_BYTE *)(v167 + 426) = 0; /*0x140641cce*/
        sub_140017140(v15); /*0x140641cd8*/
        goto LABEL_52; /*0x140641cd8*/
      }
      v60 = (_BYTE)v166 == 0; /*0x140641e48*/
      v61 = 25; /*0x140641e54*/
      if ( (_BYTE)v166 ) /*0x140641e5a*/
        v61 = 19; /*0x140641e5a*/
      v62 = aRouterImagesGe; /*0x140641e65*/
      if ( (_BYTE)v166 ) /*0x140641e6c*/
        v62 = (const char *)&unk_14177AA55; /*0x140641e6c*/
      v63 = (_QWORD *)v167; /*0x140641e70*/
      *(_QWORD *)(v167 + 240) = v62; /*0x140641e77*/
      v23 = 56; /*0x140641e83*/
      if ( !v60 ) /*0x140641e89*/
        v23 = 50; /*0x140641e89*/
      v24 = &unk_14177A9D2; /*0x140641e94*/
      if ( !v60 ) /*0x140641e9b*/
        v24 = &unk_14177AA0A; /*0x140641e9b*/
      v63[31] = v61; /*0x140641e9f*/
      v63[32] = v24; /*0x140641ea6*/
      v63[33] = v23; /*0x140641ead*/
      sub_14066BAA0(v63[17], (_DWORD)v62, v61, (_DWORD)v24, v23, 0); /*0x140641eca*/
      v64 = *(_QWORD *)(*(_QWORD *)(v167 + 136) + 24LL); /*0x140641ede*/
      v65 = *(_DWORD *)(v64 + 16); /*0x140641ee6*/
      if ( v65 > 0x3FFFFFFD /*0x140641efd*/
        || (v68 = *(_DWORD *)(v64 + 16),
            v67 = _InterlockedCompareExchange((volatile signed __int32 *)(v64 + 16), v65 + 1, v65),
            v66 = __OFSUB__(v68, v67),
            v68 != v67) )
      {
        sub_1416C1680((volatile void *)(v64 + 16)); /*0x140642034*/
      }
      v69 = _InterlockedIncrement64(*(volatile signed __int64 **)(v64 + 32)); /*0x140641f0b*/
      if ( (v69 < 0) ^ v66 | (v69 == 0) ) /*0x140641f0f*/
        BUG(); /*0x140642100*/
      v70 = *(_QWORD *)(v64 + 32); /*0x140641f15*/
      if ( __OFSUB__(-(_InterlockedDecrement((volatile signed __int32 *)(v64 + 16)) & 0xBFFFFFFF), 1) ) /*0x140641f2c*/
        sub_1416C1970(v64 + 16); /*0x140642074*/
      a2 = v167; /*0x140641f34*/
      v22 = (__int64 *)(v167 + 272); /*0x140641f3b*/
      *(_QWORD *)(v167 + 272) = v70; /*0x140641f42*/
      *(_BYTE *)(a2 + 426) = 0; /*0x140641f49*/
      v71 = v152; /*0x140641f50*/
      v72 = v153; /*0x140641f57*/
      v80 = v153; /*0x140641f5e*/
      v79 = v152; /*0x140641f65*/
      v21 = (__int128 *)(a2 + 280); /*0x140641f6c*/
      *(_QWORD *)(a2 + 392) = v86; /*0x140641f7a*/
      *(_OWORD *)(a2 + 376) = v85; /*0x140641f88*/
      v73 = v81; /*0x140641f8f*/
      v74 = v82; /*0x140641f96*/
      v75 = v83; /*0x140641f9d*/
      *(_OWORD *)(a2 + 360) = v84; /*0x140641fab*/
      *(_OWORD *)(a2 + 344) = v75; /*0x140641fb2*/
      *(_OWORD *)(a2 + 328) = v74; /*0x140641fb9*/
      *(_OWORD *)(a2 + 312) = v73; /*0x140641fc0*/
      *(__m128i *)(a2 + 296) = v72; /*0x140641fc7*/
      *(__m128i *)(a2 + 280) = v71; /*0x140641fce*/
      *(_QWORD *)(a2 + 400) = v22; /*0x140641fd5*/
      *(_QWORD *)(a2 + 408) = v15; /*0x140641fdc*/
      v20 = (_BYTE *)(a2 + 416); /*0x140641fe3*/
      *(_BYTE *)(a2 + 416) = 0; /*0x140641fea*/
      *(_BYTE *)(a2 + 417) = (_BYTE)v166; /*0x140641ff8*/
LABEL_16:
      v25 = (const __m128i *)(a2 + 312); /*0x14064143c*/
      v26 = *v21; /*0x140641443*/
      *(_OWORD *)(a2 + 328) = v21[1]; /*0x14064144a*/
      *(_OWORD *)(a2 + 312) = v26; /*0x140641451*/
      *(_QWORD *)(a2 + 360) = v24; /*0x140641458*/
      *(_QWORD *)(a2 + 368) = v23; /*0x14064145f*/
      *(_QWORD *)(a2 + 376) = v22; /*0x140641466*/
      *(_QWORD *)(a2 + 384) = v15; /*0x14064146d*/
      v27 = (_BYTE *)(a2 + 394); /*0x140641474*/
      *(_BYTE *)(a2 + 394) = 0; /*0x14064147b*/
LABEL_19:
      *(_BYTE *)(a2 + 393) = 0; /*0x1406414cf*/
      *(_BYTE *)(a2 + 392) = 1; /*0x1406414d6*/
      v151 = _mm_loadu_si128(v25 + 1); /*0x1406414e6*/
      v150 = _mm_loadu_si128(v25); /*0x1406414ee*/
      v159 = v20; /*0x1406414f6*/
      v166 = v25; /*0x1406414fd*/
      v158 = v25; /*0x140641504*/
      if ( (unsigned __int8)sub_140674DE0(v15) ) /*0x14064150e*/
      {
        v159 = v20; /*0x14064151c*/
        v158 = v166; /*0x14064152a*/
        v76 = aPassthroughNoC; /*0x140641538*/
        v77 = 27; /*0x14064153d*/
        error_response((__int128 *)&v98); /*0x14064155e*/
        if ( !*(_BYTE *)(v167 + 392) ) /*0x140641572*/
        {
LABEL_22:
          v30 = v167; /*0x1406415ac*/
          goto LABEL_36; /*0x1406415b3*/
        }
LABEL_21:
        v29 = *(void (__fastcall **)(unsigned __int64 *, __int64, __int64))(v150.m128i_i64[0] + 32); /*0x140641574*/
        v157 = v20; /*0x140641594*/
        v156 = v166; /*0x1406415a2*/
        v29(&v151.m128i_u64[1], v150.m128i_i64[1], v151.m128i_i64[0]); /*0x1406415a9*/
        goto LABEL_22; /*0x1406415a9*/
      }
      v161 = v20; /*0x1406415b8*/
      v31 = v15; /*0x1406415bf*/
      v32 = v166; /*0x1406415c2*/
      v160 = v166; /*0x1406415c9*/
      sub_140676350(&v96, v31); /*0x1406415d7*/
      *(_BYTE *)(v167 + 393) = 1; /*0x1406415e4*/
      v33 = *v22; /*0x1406415eb*/
      v163 = v20; /*0x1406415ef*/
      v162 = v32; /*0x1406415f6*/
      sub_1405A48C0((unsigned int)&v107, v33, (unsigned int)&unk_141764700, (_DWORD)v24, v23); /*0x140641613*/
      *(_BYTE *)(v167 + 393) = 0; /*0x140641620*/
      v138 = v97[4]; /*0x14064162e*/
      v137 = v97[3]; /*0x14064163c*/
      v34 = _mm_loadu_si128(&v96); /*0x140641643*/
      v35 = _mm_loadu_si128(v97); /*0x14064164b*/
      v136 = v97[2]; /*0x140641661*/
      v135 = v97[1]; /*0x140641668*/
      v134 = v35; /*0x14064166f*/
      v133 = v34; /*0x140641677*/
      v163 = v20; /*0x14064167f*/
      v162 = v32; /*0x140641686*/
      sub_14103C250(v78, &v107, &v133); /*0x14064169f*/
      *(_BYTE *)(v167 + 392) = 0; /*0x1406416ac*/
      v36 = _mm_load_si128(&v150); /*0x1406416b3*/
      v134 = _mm_load_si128(&v151); /*0x1406416c3*/
      v133 = v36; /*0x1406416cb*/
      v163 = v20; /*0x1406416d3*/
      v162 = v32; /*0x1406416da*/
      sub_1406C6630(&v107, v78, &v133); /*0x1406416f3*/
      v163 = v20; /*0x1406416f9*/
      v162 = v32; /*0x140641700*/
      v37 = sub_14103C180(&v107); /*0x14064170e*/
      v164 = v20; /*0x140641714*/
      v38 = v167; /*0x14064171b*/
      *(_QWORD *)(v167 + 344) = v37; /*0x140641722*/
      *(_QWORD *)(v38 + 352) = v39; /*0x140641729*/
      a2 = v38; /*0x140641730*/
      a3 = v165; /*0x140641733*/
LABEL_32:
      v165 = a2 + 344; /*0x1406417dd*/
      sub_14104DCF0(&v107, a2 + 344, a3); /*0x1406417f2*/
      v43 = v107; /*0x1406417f8*/
      if ( v107 == -2 ) /*0x140641803*/
      {
        *v27 = 3; /*0x140641805*/
        v30 = v167; /*0x140641809*/
        v20 = v164; /*0x140641810*/
LABEL_49:
        *v20 = 3; /*0x140641c63*/
        *(_QWORD *)a1 = -1; /*0x140641c66*/
        result = 3; /*0x140641c6d*/
        goto LABEL_53; /*0x140641c6f*/
      }
      v44 = v108; /*0x14064181c*/
      v117 = v109; /*0x14064182a*/
      v118 = v110; /*0x140641838*/
      v119 = v111; /*0x140641846*/
      v120 = v112; /*0x140641854*/
      v121 = v113; /*0x140641862*/
      v122 = v114; /*0x140641870*/
      v123 = _mm_loadu_si128(&v115); /*0x14064187f*/
      v124 = v116; /*0x14064188e*/
      v163 = v164; /*0x14064189c*/
      v45 = v166; /*0x1406418a3*/
      v162 = v166; /*0x1406418aa*/
      sub_1405E6830(v165); /*0x1406418b8*/
      if ( (_DWORD)v43 == -1 ) /*0x1406418c1*/
      {
        v133.m128i_i64[0] = (__int64)v44; /*0x140641d5c*/
        v78[0] = &v133; /*0x140641d6a*/
        v78[1] = sub_141031F10; /*0x140641d75*/
        sub_14149C0F0(&v107, &unk_1417691B8, v78); /*0x140641d8b*/
        v165 = v107; /*0x140641d98*/
        v76 = aPassthroughNet; /*0x140641db4*/
        v77 = 19; /*0x140641db9*/
        v149 = v108; /*0x140641dcd*/
        error_response((__int128 *)&v98); /*0x140641dd4*/
        if ( v165 ) /*0x140641de4*/
          sub_140001660(v149, v165, 1); /*0x140641df3*/
        v20 = v164; /*0x140641df8*/
        v163 = v164; /*0x140641dff*/
        v162 = v166; /*0x140641e0d*/
        sub_1405E12D0(&v133); /*0x140641e1b*/
        *(_BYTE *)(v167 + 393) = 0; /*0x140641e28*/
        if ( !*(_BYTE *)(v167 + 392) ) /*0x140641e36*/
          goto LABEL_22; /*0x140641e3d*/
        goto LABEL_21; /*0x140641e3d*/
      }
      v87[0] = v43; /*0x1406418c7*/
      v87[1] = v44; /*0x1406418ce*/
      v46 = _mm_load_si128(&v118); /*0x1406418dc*/
      v88 = v117; /*0x1406418f2*/
      v89 = v46; /*0x1406418f9*/
      v90 = v119; /*0x140641901*/
      v91 = v120; /*0x140641908*/
      v92 = v121; /*0x140641916*/
      v93 = v122; /*0x140641924*/
      v94 = _mm_load_si128(&v123); /*0x140641933*/
      v95 = v124; /*0x140641942*/
      v20 = v164; /*0x140641949*/
      v163 = v164; /*0x140641950*/
      v162 = v45; /*0x140641957*/
      sub_140675480(&v98, v87); /*0x14064196c*/
      v30 = v167; /*0x140641972*/
      *(_BYTE *)(v167 + 393) = 0; /*0x140641979*/
LABEL_36:
      *(_BYTE *)(v30 + 392) = 0; /*0x140641980*/
      v47 = v98; /*0x140641987*/
      v125 = v99; /*0x140641995*/
      v126 = v100; /*0x1406419a3*/
      v127 = v101; /*0x1406419b1*/
      v128 = v102; /*0x1406419bf*/
      v129 = v103; /*0x1406419cd*/
      v130 = v104; /*0x1406419db*/
      v131 = _mm_loadu_si128(&v105); /*0x1406419ea*/
      v132 = v106; /*0x1406419f9*/
      *v27 = 1; /*0x140641a00*/
      if ( v47 == -1 ) /*0x140641a08*/
        goto LABEL_49; /*0x140641a08*/
      *(_BYTE *)(v30 + 416) = 1; /*0x140641a0e*/
      *(_QWORD *)&v148[96] = v132; /*0x140641a1c*/
      *(__m128i *)&v148[80] = v131; /*0x140641a2a*/
      *(_OWORD *)&v148[64] = v130; /*0x140641a38*/
      *(_OWORD *)&v148[48] = v129; /*0x140641a46*/
      v48 = _mm_load_si128(&v125); /*0x140641a4d*/
      v49 = _mm_load_si128(&v126); /*0x140641a55*/
      *(_OWORD *)&v148[32] = v128; /*0x140641a6b*/
      *(_OWORD *)&v148[16] = v127; /*0x140641a72*/
      *(__m128i *)v148 = v49; /*0x140641a79*/
      *(__m128i *)&v147[8] = v48; /*0x140641a81*/
      *(_QWORD *)v147 = v47; /*0x140641a89*/
      if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(v30 + 272)) ) /*0x140641a97*/
        sub_141018B80(v167 + 272); /*0x140641aab*/
      sub_14070E300(&v107, aXAimamiReason, 15, v147, v76, v77); /*0x140641acc*/
      if ( (_BYTE)v107 ) /*0x140641ad9*/
      {
        if ( (unsigned __int64)v109 >= *(_QWORD *)&v148[16] ) /*0x140641af0*/
          sub_1416C30E3(v109, *(_QWORD *)&v148[16], &off_141786A08); /*0x1406420fa*/
        v50 = *(_QWORD *)(*(_QWORD *)&v148[8] + 104 * v109 + 40); /*0x140641b01*/
        if ( v50 ) /*0x140641b09*/
        {
          v51 = *(_QWORD *)(*(_QWORD *)&v148[8] + 104 * v109 + 32); /*0x140641b0b*/
          v52 = 0; /*0x140641b10*/
          while ( (unsigned __int8)(*(_BYTE *)(v51 + v52) - 32) < 0x5Fu || *(_BYTE *)(v51 + v52) == 9 ) /*0x140641b3c*/
          {
            if ( v50 == ++v52 ) /*0x140641b44*/
            {
              if ( v50 == 19 /*0x140641b72*/
                && _mm_movemask_epi8(
                     _mm_and_si128(
                       _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v51), (__m128i)xmmword_141763F70),
                       _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v51 + 3)), (__m128i)xmmword_141763F60))) == 0xFFFF )
              {
                sub_140660A60(*(_QWORD *)(v167 + 136)); /*0x140641b82*/
              }
              break; /*0x140641b82*/
            }
          }
        }
      }
      sub_14066BAA0( /*0x140641b88*/
        *(_QWORD *)(v167 + 136),
        *(_QWORD *)(v167 + 240),
        *(_QWORD *)(v167 + 248),
        *(_QWORD *)(v167 + 256),
        *(_QWORD *)(v167 + 264),
        1);
      v146 = *(_OWORD *)&v148[88]; /*0x140641bd9*/
      v145 = *(_OWORD *)&v148[72]; /*0x140641be7*/
      v144 = *(_OWORD *)&v148[56]; /*0x140641bf5*/
      v143 = *(_OWORD *)&v148[40]; /*0x140641c03*/
      v53 = _mm_loadu_si128((const __m128i *)v147); /*0x140641c0a*/
      v54 = _mm_loadu_si128((const __m128i *)&v147[16]); /*0x140641c12*/
      v142 = *(_OWORD *)&v148[24]; /*0x140641c28*/
      v141 = *(_OWORD *)&v148[8]; /*0x140641c2f*/
      v140 = v54; /*0x140641c36*/
      v139 = v53; /*0x140641c3e*/
      v55 = v167; /*0x140641c46*/
      *(_BYTE *)(v167 + 426) = 0; /*0x140641c4d*/
      sub_140017140(v55 + 144); /*0x140641c5b*/
LABEL_52:
      *(_OWORD *)(a1 + 112) = v146; /*0x140641cde*/
      *(_OWORD *)(a1 + 96) = v145; /*0x140641cf0*/
      *(_OWORD *)(a1 + 80) = v144; /*0x140641cfb*/
      *(_OWORD *)(a1 + 64) = v143; /*0x140641d06*/
      v57 = _mm_load_si128(&v139); /*0x140641d0a*/
      v58 = _mm_load_si128(&v140); /*0x140641d12*/
      v59 = v141; /*0x140641d1a*/
      *(_OWORD *)(a1 + 48) = v142; /*0x140641d28*/
      *(_OWORD *)(a1 + 32) = v59; /*0x140641d2c*/
      *(__m128i *)(a1 + 16) = v58; /*0x140641d30*/
      *(__m128i *)a1 = v57; /*0x140641d35*/
      result = 1; /*0x140641d39*/
      v30 = v167; /*0x140641d3b*/
LABEL_53:
      *(_BYTE *)(v30 + 425) = result; /*0x140641d42*/
      return result;
    case 1LL: /*0x140641285*/
      sub_1416C3400(&off_141768830, a2, a3, a4); /*0x140642094*/
    case 2LL: /*0x140641285*/
      sub_1416C3420(&off_141768830, a2, a3, a4); /*0x140642086*/
    case 3LL: /*0x140641285*/
      v20 = (_BYTE *)(a2 + 416); /*0x1406413da*/
      switch ( *(_BYTE *)(a2 + 416) ) /*0x1406413f6*/
      {
        case 0: /*0x1406413f6*/
          v165 = a3; /*0x1406413f8*/
          v21 = (__int128 *)(a2 + 280); /*0x1406413ff*/
          v22 = *(__int64 **)(a2 + 400); /*0x140641406*/
          v15 = *(_QWORD *)(a2 + 408); /*0x14064140d*/
          v23 = 56; /*0x140641420*/
          if ( *(_BYTE *)(a2 + 417) ) /*0x140641414*/
            v23 = 50; /*0x140641426*/
          v24 = &unk_14177A9D2; /*0x140641431*/
          if ( *(_BYTE *)(a2 + 417) ) /*0x140641414*/
            v24 = &unk_14177AA0A; /*0x140641438*/
          break; /*0x140641438*/
        case 1: /*0x1406413f6*/
          sub_1416C3400(&off_1417691E8, a2, a3, a4); /*0x1406420b1*/
        case 2: /*0x1406413f6*/
          sub_1416C3420(&off_1417691E8, a2, a3, a4); /*0x1406420a2*/
        case 3: /*0x1406413f6*/
          v27 = (_BYTE *)(a2 + 394); /*0x140641484*/
          v28 = a2 + 312; /*0x140641492*/
          switch ( *(_BYTE *)(a2 + 394) ) /*0x1406414a7*/
          {
            case 0: /*0x1406414a7*/
              v165 = a3; /*0x1406414a9*/
              v25 = (const __m128i *)(a2 + 312); /*0x1406414b0*/
              v22 = *(__int64 **)(a2 + 376); /*0x1406414b3*/
              v15 = *(_QWORD *)(a2 + 384); /*0x1406414ba*/
              v24 = *(void **)(a2 + 360); /*0x1406414c1*/
              v23 = *(_QWORD *)(a2 + 368); /*0x1406414c8*/
              goto LABEL_19; /*0x1406414c8*/
            case 1: /*0x1406414a7*/
              v155 = a2 + 416; /*0x1406420d6*/
              v154 = a2 + 312; /*0x1406420dd*/
              sub_1416C3400(&off_1417691A0, a2, a3, v28); /*0x1406420eb*/
            case 2: /*0x1406414a7*/
              v155 = a2 + 416; /*0x1406420b9*/
              v154 = a2 + 312; /*0x1406420c0*/
              sub_1416C3420(&off_1417691A0, a2, a3, v28); /*0x1406420ce*/
            case 3: /*0x1406414a7*/
              v166 = (const __m128i *)(a2 + 312); /*0x1406417cf*/
              v164 = (_BYTE *)(a2 + 416); /*0x1406417d6*/
              goto LABEL_32; /*0x1406417d6*/
          }
      }
      goto LABEL_16; /*0x140641438*/
  }
}
