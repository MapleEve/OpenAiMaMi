// module: codexmate_lib/commands/tray_menu
// addr: 0x1403f2350
// name: create_bootstrap_tray_menu
// win 1.2.3 | = mac codexmate_lib::commands::tray_menu::create_bootstrap_tray_menu | 跨平台字符串签名匹配(名↔函数一致); attributed via lookup_funcs exact-name-match(named on win binary, not stripped for this symbol)
__int64 __fastcall create_bootstrap_tray_menu(__int64 a1, __int64 a2)
{
  __int64 v4; // r8
  bool v5; // of
  __int128 v6; // kr00_16
  __int64 v7; // r14
  volatile signed __int64 *v8; // rax
  __int64 v9; // rt0
  _OWORD *v10; // rax
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int64 v13; // r8
  bool v14; // of
  __int128 v15; // kr10_16
  __int64 v16; // r14
  volatile signed __int64 **v17; // rcx
  volatile signed __int64 *v19; // rax
  __int64 v20; // rt0
  __int64 v21; // r14
  __int64 v22; // rax
  __int64 v23; // rcx
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int64 v26; // r8
  bool v27; // of
  __int128 v28; // kr20_16
  __int64 v29; // r14
  volatile signed __int64 *v30; // rax
  __int64 v31; // rt0
  __int64 v32; // rbx
  __int64 v33; // rax
  __int64 v34; // rcx
  __int128 v35; // xmm0
  __int128 v36; // xmm1
  __int64 v37; // r8
  __int64 v38; // rdi
  __int64 v39; // rbx
  __int64 v40; // r14
  __int64 v41; // rax
  __m256i v42; // [rsp+50h] [rbp-30h] BYREF
  __int128 v43; // [rsp+70h] [rbp-10h]
  __int64 v44; // [rsp+80h] [rbp+0h]
  __m256i v45; // [rsp+90h] [rbp+10h] BYREF
  __int128 v46; // [rsp+B0h] [rbp+30h]
  _QWORD v47[3]; // [rsp+C8h] [rbp+48h] BYREF
  __int64 v48; // [rsp+E0h] [rbp+60h] BYREF
  __int64 v49; // [rsp+E8h] [rbp+68h]
  __int64 v50; // [rsp+F0h] [rbp+70h]
  volatile signed __int64 *v51; // [rsp+F8h] [rbp+78h]
  __m256i v52; // [rsp+100h] [rbp+80h] BYREF
  __int128 v53; // [rsp+120h] [rbp+A0h]
  __int64 v54; // [rsp+130h] [rbp+B0h]
  __m256i v55; // [rsp+140h] [rbp+C0h] BYREF
  __int128 v56; // [rsp+160h] [rbp+E0h]
  __m256i v57; // [rsp+170h] [rbp+F0h] BYREF
  __int128 v58; // [rsp+190h] [rbp+110h]
  __m256i v59; // [rsp+1B0h] [rbp+130h] BYREF
  __int128 v60; // [rsp+1D0h] [rbp+150h]
  volatile signed __int64 *v61; // [rsp+1E0h] [rbp+160h]
  volatile signed __int64 *v62; // [rsp+1E8h] [rbp+168h]
  __m256i v63; // [rsp+1F0h] [rbp+170h] BYREF
  __int128 v64; // [rsp+210h] [rbp+190h]
  __int64 v65; // [rsp+220h] [rbp+1A0h]
  volatile signed __int64 *v66; // [rsp+228h] [rbp+1A8h] BYREF
  __m256i v67; // [rsp+230h] [rbp+1B0h] BYREF
  __int128 v68; // [rsp+250h] [rbp+1D0h]
  __int64 v69; // [rsp+260h] [rbp+1E0h]
  char v70; // [rsp+276h] [rbp+1F6h] BYREF
  char v71; // [rsp+277h] [rbp+1F7h]
  __int64 v72; // [rsp+278h] [rbp+1F8h]

  v72 = -2; /*0x1403f2365*/
  v67.m256i_i64[3] = -1; /*0x1403f2376*/
  v69 = a2; /*0x1403f2381*/
  v67.m256i_i64[0] = 0; /*0x1403f2388*/
  *(_OWORD *)&v67.m256i_u64[1] = 8u; /*0x1403f2393*/
  sub_140A7D450((unsigned int)&v45, a2, (unsigned int)aTrayBootstrapH, 21, (__int64)&unk_141751821, 12, 0, 0); /*0x1403f23e0*/
  v5 = __OFSUB__(v45.m256i_i64[0], -1); /*0x1403f23e6*/
  if ( v45.m256i_i64[0] != -1 ) /*0x1403f23eb*/
  {
    v58 = v46; /*0x1403f23fd*/
    v57 = v45; /*0x1403f2404*/
    v55.m256i_i64[0] = 0; /*0x1403f2412*/
    *(_OWORD *)&v55.m256i_u64[1] = 1u; /*0x1403f241d*/
    v59.m256i_i64[2] = 1610612768; /*0x1403f2433*/
    v59.m256i_i64[0] = (__int64)&v55; /*0x1403f2445*/
    v59.m256i_i64[1] = (__int64)&off_141754110; /*0x1403f2453*/
    if ( (unsigned __int8)sub_141230630(&v57, &v59, v4) ) /*0x1403f2468*/
      sub_1416C3060( /*0x1403f2d92*/
        (unsigned int)aADisplayImplem_1,
        55,
        (unsigned int)&v70,
        (unsigned int)&unk_14174DE40,
        (__int64)&off_1417541C8);
    v6 = *(_OWORD *)v55.m256i_i8; /*0x1403f247d*/
    v7 = v55.m256i_i64[2]; /*0x1403f2484*/
    sub_14034D070(&v57); /*0x1403f2492*/
    *(_OWORD *)a1 = v6; /*0x1403f2498*/
    *(_QWORD *)(a1 + 16) = v7; /*0x1403f249f*/
    sub_14034B800(&v67); /*0x1403f24aa*/
    return a1; /*0x1403f24af*/
  }
  v8 = (volatile signed __int64 *)v45.m256i_i64[1]; /*0x1403f24b4*/
  v47[0] = v45.m256i_i64[1]; /*0x1403f24b8*/
  v9 = _InterlockedIncrement64((volatile signed __int64 *)v45.m256i_i64[1]); /*0x1403f24bc*/
  if ( (v9 < 0) ^ v5 | (v9 == 0) ) /*0x1403f24c0*/
    goto LABEL_46; /*0x1403f24c0*/
  v61 = v8; /*0x1403f24d1*/
  v57.m256i_i64[2] = (__int64)v8; /*0x1403f24d8*/
  *(_OWORD *)v57.m256i_i8 = 0xFFFFFFFFFFFFFFFFuLL; /*0x1403f24df*/
  sub_141688FC0(&v67); /*0x1403f24f1*/
  v10 = (_OWORD *)v67.m256i_i64[1]; /*0x1403f24f7*/
  v11 = *(_OWORD *)v57.m256i_i8; /*0x1403f24fe*/
  v12 = *(_OWORD *)&v57.m256i_u64[2]; /*0x1403f2505*/
  *(_OWORD *)(v67.m256i_i64[1] + 32) = v58; /*0x1403f2513*/
  v10[1] = v12; /*0x1403f2517*/
  *v10 = v11; /*0x1403f251b*/
  v67.m256i_i64[2] = 1; /*0x1403f251e*/
  *(_OWORD *)v63.m256i_i8 = *(_OWORD *)v67.m256i_i8; /*0x1403f2537*/
  v64 = v68; /*0x1403f253e*/
  v65 = v69; /*0x1403f254c*/
  *(_OWORD *)&v63.m256i_u64[2] = __PAIR128__(v67.m256i_u64[3], 1); /*0x1403f255a*/
  sub_140A7D450((unsigned int)&v57, a2, (unsigned int)aTrayBootstrapT, 20, (__int64)&unk_14175182D, 6, 1, 0); /*0x1403f25a9*/
  v14 = __OFSUB__(v57.m256i_i64[0], -1); /*0x1403f25af*/
  if ( v57.m256i_i64[0] != -1 ) /*0x1403f25b7*/
  {
    v68 = v58; /*0x1403f25d2*/
    v67 = v57; /*0x1403f25d9*/
    v59.m256i_i64[0] = 0; /*0x1403f25e7*/
    *(_OWORD *)&v59.m256i_u64[1] = 1u; /*0x1403f25f2*/
    v45.m256i_i64[2] = 1610612768; /*0x1403f2608*/
    v45.m256i_i64[0] = (__int64)&v59; /*0x1403f2617*/
    v45.m256i_i64[1] = (__int64)&off_141754110; /*0x1403f2622*/
    if ( (unsigned __int8)sub_141230630(&v67, &v45, v13) ) /*0x1403f2631*/
      sub_1416C3060( /*0x1403f2dc3*/
        (unsigned int)aADisplayImplem_1,
        55,
        (unsigned int)&v70,
        (unsigned int)&unk_14174DE40,
        (__int64)&off_1417541C8);
    v15 = *(_OWORD *)v59.m256i_i8; /*0x1403f2646*/
    v16 = v59.m256i_i64[2]; /*0x1403f264d*/
    sub_14034D070(&v67); /*0x1403f265b*/
    *(_OWORD *)a1 = v15; /*0x1403f2661*/
    *(_QWORD *)(a1 + 16) = v16; /*0x1403f2668*/
    sub_14034B800(&v63); /*0x1403f2673*/
LABEL_8:
    if ( _InterlockedDecrement64(v61) ) /*0x1403f2680*/
      return a1; /*0x1403f2684*/
    v17 = (volatile signed __int64 **)v47; /*0x1403f2686*/
LABEL_10:
    sub_140575610(v17); /*0x1403f268a*/
    return a1; /*0x1403f268a*/
  }
  v19 = (volatile signed __int64 *)v57.m256i_i64[1]; /*0x1403f26a0*/
  v55.m256i_i64[0] = v57.m256i_i64[1]; /*0x1403f26a7*/
  v20 = _InterlockedIncrement64((volatile signed __int64 *)v57.m256i_i64[1]); /*0x1403f26ae*/
  if ( (v20 < 0) ^ v14 | (v20 == 0) ) /*0x1403f26b2*/
    goto LABEL_46; /*0x1403f26b2*/
  v62 = v19; /*0x1403f26c3*/
  v67.m256i_i64[2] = (__int64)v19; /*0x1403f26ca*/
  *(_OWORD *)v67.m256i_i8 = 0xFFFFFFFFFFFFFFFFuLL; /*0x1403f26d1*/
  v21 = v63.m256i_i64[2]; /*0x1403f26dc*/
  if ( v63.m256i_i64[2] == v63.m256i_i64[0] ) /*0x1403f26ea*/
    sub_141688FC0(&v63); /*0x1403f26f3*/
  v22 = v63.m256i_i64[1]; /*0x1403f26f9*/
  v23 = 48 * v21; /*0x1403f2704*/
  v24 = *(_OWORD *)v67.m256i_i8; /*0x1403f2708*/
  v25 = *(_OWORD *)&v67.m256i_u64[2]; /*0x1403f270f*/
  *(_OWORD *)(v63.m256i_i64[1] + v23 + 32) = v68; /*0x1403f271d*/
  *(_OWORD *)(v22 + v23 + 16) = v25; /*0x1403f2722*/
  *(_OWORD *)(v22 + v23) = v24; /*0x1403f2727*/
  v63.m256i_i64[2] = v21 + 1; /*0x1403f272e*/
  v52 = v63; /*0x1403f2743*/
  v53 = v64; /*0x1403f274a*/
  v54 = v65; /*0x1403f2758*/
  sub_140A7D450((unsigned int)&v63, a2, (unsigned int)aTrayBootstrapS, 23, (__int64)&unk_141751833, 27, 1, 0); /*0x1403f27b5*/
  v27 = __OFSUB__(v63.m256i_i64[0], -1); /*0x1403f27bb*/
  if ( v63.m256i_i64[0] != -1 ) /*0x1403f27c3*/
  {
    v68 = v64; /*0x1403f27de*/
    v67 = v63; /*0x1403f27e5*/
    v45.m256i_i64[0] = 0; /*0x1403f27f3*/
    *(_OWORD *)&v45.m256i_u64[1] = 1u; /*0x1403f27fb*/
    v57.m256i_i64[2] = 1610612768; /*0x1403f280b*/
    v57.m256i_i64[0] = (__int64)&v45; /*0x1403f2816*/
    v57.m256i_i64[1] = (__int64)&off_141754110; /*0x1403f2824*/
    if ( (unsigned __int8)sub_141230630(&v67, &v57, v26) ) /*0x1403f2839*/
      sub_1416C3060( /*0x1403f2df1*/
        (unsigned int)aADisplayImplem_1,
        55,
        (unsigned int)&v70,
        (unsigned int)&unk_14174DE40,
        (__int64)&off_1417541C8);
    v28 = *(_OWORD *)v45.m256i_i8; /*0x1403f284b*/
    v29 = v45.m256i_i64[2]; /*0x1403f284f*/
    sub_14034D070(&v67); /*0x1403f285a*/
    *(_OWORD *)a1 = v28; /*0x1403f2860*/
    *(_QWORD *)(a1 + 16) = v29; /*0x1403f2867*/
    sub_14034B800(&v52); /*0x1403f2872*/
    if ( !_InterlockedDecrement64(v62) ) /*0x1403f287f*/
      sub_140575610(&v55); /*0x1403f2890*/
    goto LABEL_8; /*0x1403f2896*/
  }
  v30 = (volatile signed __int64 *)v63.m256i_i64[1]; /*0x1403f289b*/
  v59.m256i_i64[0] = v63.m256i_i64[1]; /*0x1403f28a2*/
  v31 = _InterlockedIncrement64((volatile signed __int64 *)v63.m256i_i64[1]); /*0x1403f28a9*/
  if ( (v31 < 0) ^ v27 | (v31 == 0) ) /*0x1403f28ad*/
LABEL_46:
    BUG(); /*0x1403f2e25*/
  v51 = v30; /*0x1403f28be*/
  v67.m256i_i64[2] = (__int64)v30; /*0x1403f28c2*/
  *(_OWORD *)v67.m256i_i8 = 0xFFFFFFFFFFFFFFFFuLL; /*0x1403f28c9*/
  v32 = v52.m256i_i64[2]; /*0x1403f28d4*/
  if ( v52.m256i_i64[2] == v52.m256i_i64[0] ) /*0x1403f28e2*/
    sub_141688FC0(&v52); /*0x1403f28eb*/
  v33 = v52.m256i_i64[1]; /*0x1403f28f1*/
  v34 = 48 * v32; /*0x1403f28fc*/
  v35 = *(_OWORD *)v67.m256i_i8; /*0x1403f2900*/
  v36 = *(_OWORD *)&v67.m256i_u64[2]; /*0x1403f2907*/
  *(_OWORD *)(v52.m256i_i64[1] + v34 + 32) = v68; /*0x1403f2915*/
  *(_OWORD *)(v33 + v34 + 16) = v36; /*0x1403f291a*/
  *(_OWORD *)(v33 + v34) = v35; /*0x1403f291f*/
  v52.m256i_i64[2] = v32 + 1; /*0x1403f2926*/
  v42 = v52; /*0x1403f293b*/
  v43 = v53; /*0x1403f293f*/
  v44 = v54; /*0x1403f294a*/
  if ( !_InterlockedDecrement64(v51) ) /*0x1403f2968*/
    sub_140575610(&v59); /*0x1403f2975*/
  if ( !_InterlockedDecrement64(v62) ) /*0x1403f2982*/
    sub_140575610(&v55); /*0x1403f298f*/
  if ( !_InterlockedDecrement64(v61) ) /*0x1403f299c*/
  {
    v71 = 1; /*0x1403f29a2*/
    sub_140575610(v47); /*0x1403f29ad*/
  }
  v71 = 0; /*0x1403f29b3*/
  sub_1403F3390(&v67, a2, &v42); /*0x1403f29c8*/
  *(_OWORD *)v63.m256i_i8 = *(_OWORD *)&v67.m256i_u64[1]; /*0x1403f29dc*/
  v63.m256i_i64[2] = v67.m256i_i64[3]; /*0x1403f29ea*/
  if ( v67.m256i_i64[0] == -1 ) /*0x1403f29f5*/
  {
    *(_QWORD *)(a1 + 16) = v63.m256i_i64[2]; /*0x1403f2b80*/
    *(_OWORD *)a1 = *(_OWORD *)v63.m256i_i8; /*0x1403f2b8b*/
    return a1; /*0x1403f2b8e*/
  }
  v44 = v69; /*0x1403f2a02*/
  v43 = v68; /*0x1403f2a0d*/
  v42.m256i_i64[3] = v63.m256i_i64[2]; /*0x1403f2a18*/
  *(_OWORD *)&v42.m256i_u64[1] = *(_OWORD *)v63.m256i_i8; /*0x1403f2a23*/
  v42.m256i_i64[0] = v67.m256i_i64[0]; /*0x1403f2a27*/
  v67.m256i_i64[3] = v63.m256i_i64[2]; /*0x1403f2a48*/
  *(_OWORD *)&v67.m256i_u64[1] = *(_OWORD *)v63.m256i_i8; /*0x1403f2a5e*/
  v71 = 0; /*0x1403f2a65*/
  sub_1402097E0(&v63, &v67); /*0x1403f2a7a*/
  sub_140A7D450((unsigned int)&v59, a2, (unsigned int)aTrayOpenMain, 14, (__int64)&unk_14175184E, 13, 1, 0); /*0x1403f2aba*/
  if ( v59.m256i_i64[0] == -1 ) /*0x1403f2ac8*/
  {
    v66 = (volatile signed __int64 *)v59.m256i_i64[1]; /*0x1403f2b9a*/
    sub_1402096D0(&v52, &v63, &v66, &off_1417492B8); /*0x1403f2bbd*/
    sub_1402097E0(&v57, &v52); /*0x1403f2bd1*/
    sub_140A7D450((unsigned int)&v63, a2, (unsigned int)aTrayQuit, 9, (__int64)&unk_14175185B, 6, 1, 0); /*0x1403f2c11*/
    if ( v63.m256i_i64[0] == -1 ) /*0x1403f2c1f*/
    {
      v59.m256i_i64[0] = v63.m256i_i64[1]; /*0x1403f2c8d*/
      sub_1402096D0(&v45, &v57, &v59, &off_1417492B8); /*0x1403f2cad*/
      sub_1402080F0(&v55, &v45); /*0x1403f2cbe*/
      if ( v55.m256i_i64[0] == -1 ) /*0x1403f2ccc*/
      {
        *(_OWORD *)a1 = __PAIR128__(v55.m256i_u64[1], -1); /*0x1403f2d2e*/
      }
      else
      {
        v68 = v56; /*0x1403f2ce3*/
        v67 = v55; /*0x1403f2cea*/
        sub_14037D490(&v63, &v67); /*0x1403f2d06*/
        *(_QWORD *)(a1 + 16) = v63.m256i_i64[2]; /*0x1403f2d13*/
        *(_OWORD *)a1 = *(_OWORD *)v63.m256i_i8; /*0x1403f2d1e*/
      }
      if ( !_InterlockedDecrement64((volatile signed __int64 *)v59.m256i_i64[0]) ) /*0x1403f2d3c*/
        sub_140575610(&v59); /*0x1403f2d49*/
    }
    else
    {
      v68 = v64; /*0x1403f2c36*/
      v67 = v63; /*0x1403f2c3d*/
      sub_14037D490(&v52, &v67); /*0x1403f2c59*/
      v41 = v52.m256i_i64[2]; /*0x1403f2c66*/
      *(_OWORD *)a1 = *(_OWORD *)v52.m256i_i8; /*0x1403f2c6d*/
      *(_QWORD *)(a1 + 16) = v41; /*0x1403f2c70*/
      sub_14034B800(&v57); /*0x1403f2c7b*/
    }
    if ( !_InterlockedDecrement64(v66) ) /*0x1403f2d56*/
    {
      v17 = &v66; /*0x1403f2d60*/
      goto LABEL_10; /*0x1403f2d67*/
    }
  }
  else
  {
    v68 = v60; /*0x1403f2ae3*/
    v67 = v59; /*0x1403f2aea*/
    v48 = 0; /*0x1403f2af8*/
    v49 = 1; /*0x1403f2b00*/
    v50 = 0; /*0x1403f2b08*/
    v47[2] = 1610612768; /*0x1403f2b10*/
    v47[0] = &v48; /*0x1403f2b1c*/
    v47[1] = &off_141754110; /*0x1403f2b27*/
    if ( (unsigned __int8)sub_141230630(&v67, v47, v37) ) /*0x1403f2b36*/
      sub_1416C3060( /*0x1403f2e1f*/
        (unsigned int)aADisplayImplem_1,
        55,
        (unsigned int)&v70,
        (unsigned int)&unk_14174DE40,
        (__int64)&off_1417541C8);
    v38 = v48; /*0x1403f2b44*/
    v39 = v49; /*0x1403f2b48*/
    v40 = v50; /*0x1403f2b4c*/
    sub_14034D070(&v67); /*0x1403f2b57*/
    *(_QWORD *)a1 = v38; /*0x1403f2b5d*/
    *(_QWORD *)(a1 + 8) = v39; /*0x1403f2b60*/
    *(_QWORD *)(a1 + 16) = v40; /*0x1403f2b64*/
    sub_14034B800(&v63); /*0x1403f2b6f*/
  }
  return a1; /*0x1403f2692*/
}