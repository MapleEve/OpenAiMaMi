// win 1.2.1 | module src/core/relay/codex_thread_visibility.rs | attributed via panic-Location xref (win-native)
// win 1.2.3 | = mac codexmate_lib::core::relay::codex_thread_visibility::patch_relay_thread_instructions | 跨平台字符串签名匹配(名↔函数一致)
__int64 __fastcall patch_relay_thread_instructions(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 (__fastcall *v6)(); // rax
  __int64 v7; // r15
  const char *v8; // r14
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // r14
  __int64 v12; // rdx
  __int64 v13; // rdi
  unsigned __int64 v14; // rbx
  _QWORD *v15; // r14
  __int64 v16; // rdx
  __int64 (__fastcall *v17)(); // rbx
  __int64 v19; // rdx
  __int64 v20; // [rsp+28h] [rbp-58h] BYREF
  volatile signed __int64 *v21; // [rsp+30h] [rbp-50h]
  __m128i v22; // [rsp+38h] [rbp-48h] BYREF
  unsigned __int64 v23; // [rsp+48h] [rbp-38h]
  volatile signed __int64 *v24; // [rsp+50h] [rbp-30h] BYREF
  __int64 (__fastcall *v25)(); // [rsp+58h] [rbp-28h]
  __int128 *v26; // [rsp+60h] [rbp-20h]
  __int64 (__fastcall *v27)(); // [rsp+68h] [rbp-18h]
  __int64 *v28; // [rsp+70h] [rbp-10h]
  __int64 (__fastcall *v29)(); // [rsp+78h] [rbp-8h]
  __int64 v30; // [rsp+80h] [rbp+0h] BYREF
  volatile signed __int64 *v31; // [rsp+88h] [rbp+8h] BYREF
  __int128 v32; // [rsp+90h] [rbp+10h] BYREF
  __int64 v33; // [rsp+A0h] [rbp+20h] BYREF
  __int64 v34; // [rsp+A8h] [rbp+28h] BYREF
  const char *v35; // [rsp+B0h] [rbp+30h]
  __int64 v36; // [rsp+B8h] [rbp+38h]
  __int64 v37; // [rsp+C0h] [rbp+40h]
  const char *v38; // [rsp+C8h] [rbp+48h]
  __int64 v39; // [rsp+D0h] [rbp+50h]
  __int64 v40; // [rsp+D8h] [rbp+58h]
  const char *v41; // [rsp+E0h] [rbp+60h]
  __int64 v42; // [rsp+E8h] [rbp+68h]
  __int64 v43; // [rsp+F0h] [rbp+70h]
  void *v44; // [rsp+F8h] [rbp+78h]
  __int64 v45; // [rsp+100h] [rbp+80h]
  __int64 v46; // [rsp+108h] [rbp+88h]
  __int64 (__fastcall *v47)(); // [rsp+110h] [rbp+90h]
  char v48; // [rsp+11Fh] [rbp+9Fh] BYREF
  __int64 v49; // [rsp+120h] [rbp+A0h]

  v49 = -2; /*0x1404b92a7*/
  v32 = 0; /*0x1404b92bb*/
  v33 = 0; /*0x1404b92bf*/
  sub_1404A69E0(&v24, a2); /*0x1404b92ce*/
  v46 = (__int64)v24; /*0x1404b92d7*/
  if ( v24 == (volatile signed __int64 *)-1LL ) /*0x1404b92e2*/
  {
    if ( *(_QWORD *)off_141EC8D80 >= 3u ) /*0x1404b9306*/
    {
      v34 = 0; /*0x1404b9308*/
      v35 = aCodexmateLibCo_0; /*0x1404b9317*/
      v36 = 51; /*0x1404b931b*/
      v37 = 0; /*0x1404b9323*/
      v38 = aSrcCoreRelayCo_0; /*0x1404b9332*/
      v39 = 41; /*0x1404b9336*/
      v40 = 3; /*0x1404b933e*/
      v41 = aCodexmateLibCo_0; /*0x1404b9346*/
      v42 = 51; /*0x1404b934a*/
      v43 = 0x17CA00000001LL; /*0x1404b935c*/
      v44 = &unk_14175C150; /*0x1404b9367*/
      v45 = 159; /*0x1404b936b*/
      sub_1412C36A0(&v48, &v34); /*0x1404b9381*/
    }
    nullsub_1(v4); /*0x1404b9386*/
    v5 = 91; /*0x1404b938b*/
    v6 = (__int64 (__fastcall *)())sub_140001650(91, 1); /*0x1404b939a*/
    if ( !v6 ) /*0x1404b93a2*/
      sub_1416C2D4B(1, 91); /*0x1404b9745*/
    v47 = v6; /*0x1404b93e6*/
    qmemcpy(v6, "Follow the user's instructions carefully. Respond helpfully and use tools when appropriate.", 91); /*0x1404b93ed*/
    v46 = 91; /*0x1404b93f5*/
  }
  else
  {
    v47 = v25; /*0x1404b92e8*/
    v5 = (__int64)v26; /*0x1404b92ef*/
  }
  collect_active_rollout_paths(&v22, a2); /*0x1404b9403*/
  v7 = v22.m128i_i64[1]; /*0x1404b9409*/
  v8 = (const char *)v23; /*0x1404b940d*/
  *(_QWORD *)&v32 = v23; /*0x1404b9411*/
  if ( v23 <= 7 ) /*0x1404b9419*/
  {
    v9 = sub_1404C0090(v22.m128i_i64[1], v23, v47, v5); /*0x1404b9570*/
    v11 = v12; /*0x1404b9573*/
  }
  else
  {
    v34 = 0; /*0x1404b941f*/
    v36 = 4; /*0x1404b9427*/
    v37 = 0; /*0x1404b942f*/
    v39 = 1; /*0x1404b9437*/
    v40 = (__int64)&unk_1417A3700; /*0x1404b9446*/
    v41 = nullptr; /*0x1404b944a*/
    v43 = 0; /*0x1404b9452*/
    LOWORD(v45) = 0; /*0x1404b945a*/
    sub_14097BF50(&v20, &v34); /*0x1404b946b*/
    if ( v20 == -1 ) /*0x1404b9479*/
    {
      v24 = v21; /*0x1404b96e5*/
      v34 = v7; /*0x1404b96ed*/
      v35 = v8; /*0x1404b96f1*/
      v36 = (__int64)v47; /*0x1404b96fc*/
      v37 = v5; /*0x1404b9700*/
      v9 = sub_14097F320(v21 + 16, &v34); /*0x1404b970e*/
      v11 = v19; /*0x1404b9711*/
      sub_140FB2860(&v24); /*0x1404b9718*/
      if ( !_InterlockedDecrement64(v24) ) /*0x1404b9722*/
        sub_140FB1240(&v24); /*0x1404b9730*/
    }
    else
    {
      v30 = v20; /*0x1404b9483*/
      v31 = v21; /*0x1404b9487*/
      if ( *(_QWORD *)off_141EC8D80 >= 2u ) /*0x1404b9499*/
      {
        v24 = &v30; /*0x1404b94a2*/
        v25 = sub_140FB2F50; /*0x1404b94ad*/
        v34 = 0; /*0x1404b94b1*/
        v35 = aCodexmateLibCo_0; /*0x1404b94c0*/
        v36 = 51; /*0x1404b94c4*/
        v37 = 0; /*0x1404b94cc*/
        v38 = aSrcCoreRelayCo_0; /*0x1404b94db*/
        v39 = 41; /*0x1404b94df*/
        v40 = 2; /*0x1404b94e7*/
        v41 = aCodexmateLibCo_0; /*0x1404b94ef*/
        v42 = 51; /*0x1404b94f3*/
        v43 = 0x181900000001LL; /*0x1404b9505*/
        v44 = &unk_14175CBD8; /*0x1404b9510*/
        v45 = (__int64)&v24; /*0x1404b9514*/
        sub_1412C36A0(&v48, &v34); /*0x1404b9526*/
      }
      v9 = sub_1404C0090(v7, v8, v47, v5); /*0x1404b9542*/
      v11 = v10; /*0x1404b9545*/
      if ( (unsigned int)v30 >= 2 ) /*0x1404b954c*/
        sub_140018650(&v31); /*0x1404b9552*/
    }
  }
  *((_QWORD *)&v32 + 1) = v9; /*0x1404b9576*/
  v33 = v11; /*0x1404b957a*/
  if ( v9 && *(_QWORD *)off_141EC8D80 >= 3u ) /*0x1404b9595*/
  {
    v24 = (volatile signed __int64 *)&v32 + 1; /*0x1404b95a3*/
    v25 = sub_1414AC520; /*0x1404b95ae*/
    v26 = &v32; /*0x1404b95b6*/
    v27 = sub_1414AC520; /*0x1404b95ba*/
    v28 = &v33; /*0x1404b95be*/
    v29 = sub_1414AC520; /*0x1404b95c2*/
    v34 = 0; /*0x1404b95c6*/
    v35 = aCodexmateLibCo_0; /*0x1404b95d5*/
    v36 = 51; /*0x1404b95d9*/
    v37 = 0; /*0x1404b95e1*/
    v38 = aSrcCoreRelayCo_0; /*0x1404b95f0*/
    v39 = 41; /*0x1404b95f4*/
    v40 = 3; /*0x1404b95fc*/
    v41 = aCodexmateLibCo_0; /*0x1404b9604*/
    v42 = 51; /*0x1404b9608*/
    v43 = 0x17E900000001LL; /*0x1404b961a*/
    v44 = &unk_14175C1FA; /*0x1404b9625*/
    v45 = (__int64)&v24; /*0x1404b9629*/
    sub_1412C36A0(&v48, &v34); /*0x1404b963b*/
  }
  *(_QWORD *)(a1 + 16) = v33; /*0x1404b9645*/
  *(_OWORD *)a1 = v32; /*0x1404b964d*/
  v13 = v22.m128i_i64[1]; /*0x1404b9658*/
  v14 = v23; /*0x1404b965c*/
  if ( v23 ) /*0x1404b9663*/
  {
    v15 = (_QWORD *)(v22.m128i_i64[1] + 8); /*0x1404b9665*/
    do /*0x1404b9677*/
    {
      v16 = *(v15 - 1); /*0x1404b9679*/
      if ( v16 ) /*0x1404b9680*/
        sub_140001660(*v15, v16, 1); /*0x1404b968b*/
      v15 += 4; /*0x1404b9670*/
      --v14; /*0x1404b9674*/
    }
    while ( v14 ); /*0x1404b9677*/
  }
  v17 = v47; /*0x1404b9699*/
  if ( v22.m128i_i64[0] ) /*0x1404b96a0*/
    sub_140001660(v13, 32 * v22.m128i_i64[0], 8); /*0x1404b96af*/
  if ( v46 ) /*0x1404b96be*/
    sub_140001660(v17, v46, 1); /*0x1404b96c9*/
  return a1; /*0x1404b96d1*/
}