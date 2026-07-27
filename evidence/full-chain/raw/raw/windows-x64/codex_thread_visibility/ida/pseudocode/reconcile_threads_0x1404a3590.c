// module: codexmate_lib/core/relay/codex_thread_visibility
// addr: 0x1404a3590
// name: reconcile_threads
// win 1.2.3 | = mac codexmate_lib::core::relay::codex_thread_visibility::reconcile_threads | 跨平台字符串签名匹配(名↔函数一致)
__int64 __fastcall reconcile_threads(__int64 a1, __int64 a2, __int64 *a3)
{
  int v5; // edx
  unsigned __int128 v6; // xmm0
  unsigned __int128 v7; // xmm1
  unsigned __int128 v8; // xmm2
  __int64 *v9; // r15
  __int64 v10; // rax
  unsigned int v11; // edx
  __int64 v12; // r8
  int v13; // edx
  __int64 v14; // rax
  unsigned __int128 v15; // xmm0
  unsigned __int128 v16; // xmm1
  unsigned __int128 v17; // xmm2
  __int64 v18; // rdi
  __int64 v19; // rbx
  _QWORD *v20; // r14
  __int64 v21; // rdx
  __int64 v22; // rbx
  __int64 v24; // rax
  unsigned int v25; // edx
  __int64 v26; // r8
  int v27; // edx
  __int64 v28; // r14
  __int64 v29; // rax
  unsigned int v30; // edx
  __int64 v31; // r8
  int v32; // edx
  __int64 v33; // rax
  __int64 v34; // r15
  __int128 v35; // xmm0
  unsigned __int128 v36; // xmm1
  unsigned __int128 v37; // xmm2
  unsigned __int128 v38; // xmm3
  __int64 v39; // rax
  unsigned int v40; // edx
  unsigned __int128 v41; // xmm0
  unsigned __int128 v42; // xmm1
  unsigned __int128 v43; // xmm2
  unsigned __int128 v44; // xmm1
  unsigned __int128 v45; // xmm2
  unsigned __int128 v46; // xmm3
  _BYTE v47[24]; // [rsp+28h] [rbp-58h] BYREF
  __int128 v48; // [rsp+40h] [rbp-40h]
  __int64 v49; // [rsp+50h] [rbp-30h]
  __int64 v50; // [rsp+60h] [rbp-20h] BYREF
  int v51; // [rsp+68h] [rbp-18h]
  __int64 v52; // [rsp+70h] [rbp-10h] BYREF
  int v53; // [rsp+78h] [rbp-8h]
  __int64 v54; // [rsp+80h] [rbp+0h] BYREF
  int v55; // [rsp+88h] [rbp+8h]
  __int64 v56; // [rsp+90h] [rbp+10h] BYREF
  int v57; // [rsp+98h] [rbp+18h]
  unsigned __int128 v58; // [rsp+A0h] [rbp+20h] BYREF
  unsigned __int128 v59; // [rsp+B0h] [rbp+30h] BYREF
  unsigned __int128 v60; // [rsp+C0h] [rbp+40h] BYREF
  unsigned __int128 v61; // [rsp+D0h] [rbp+50h]
  unsigned __int128 v62; // [rsp+E0h] [rbp+60h]
  unsigned __int128 v63; // [rsp+F0h] [rbp+70h]
  unsigned __int128 v64; // [rsp+100h] [rbp+80h]
  unsigned __int128 v65; // [rsp+110h] [rbp+90h]
  __int128 v66; // [rsp+120h] [rbp+A0h]
  unsigned __int128 v67; // [rsp+130h] [rbp+B0h]
  unsigned __int128 v68; // [rsp+140h] [rbp+C0h] BYREF
  unsigned __int128 v69; // [rsp+150h] [rbp+D0h]
  unsigned __int128 v70; // [rsp+160h] [rbp+E0h]
  _BYTE v71[24]; // [rsp+178h] [rbp+F8h] BYREF
  unsigned __int128 v72; // [rsp+190h] [rbp+110h]
  unsigned __int128 v73; // [rsp+1A0h] [rbp+120h]
  unsigned __int128 v74; // [rsp+1B0h] [rbp+130h]
  unsigned __int128 v75; // [rsp+1C0h] [rbp+140h]
  __int128 v76; // [rsp+1D0h] [rbp+150h]
  unsigned __int128 v77; // [rsp+1E0h] [rbp+160h] BYREF
  unsigned __int128 v78; // [rsp+1F0h] [rbp+170h]
  unsigned __int128 v79; // [rsp+200h] [rbp+180h]
  unsigned __int128 v80; // [rsp+210h] [rbp+190h]
  unsigned __int128 v81; // [rsp+220h] [rbp+1A0h]
  __int128 v82; // [rsp+230h] [rbp+1B0h]
  __int64 *v83; // [rsp+248h] [rbp+1C8h]
  __int64 v84; // [rsp+250h] [rbp+1D0h]

  v84 = -2;
  v83 = a3;
  v56 = sub_141471910(a1, a2, a3);
  v57 = v5;
  repair_missing_rollouts_for_convergence((__int64)v71, a2);
  v77 = *(_OWORD *)&v71[8];
  v78 = v72;
  v79 = v73;
  v80 = v74;
  v81 = v75;
  v82 = v76;
  if ( *(_DWORD *)v71 == 1 )
  {
    *(_OWORD *)(a1 + 88) = v82;
    *(_OWORD *)(a1 + 72) = v81;
    v6 = v77;
    v7 = v78;
    v8 = v79;
    *(_OWORD *)(a1 + 56) = v80;
    *(_OWORD *)(a1 + 40) = v8;
    *(_OWORD *)(a1 + 24) = v7;
    *(_OWORD *)(a1 + 8) = v6;
    *(_QWORD *)a1 = 2;
    v9 = v83;
    goto LABEL_15;
  }
  v66 = v82;
  v65 = v81;
  v64 = v80;
  v63 = v79;
  v62 = v78;
  v61 = v77;
  v10 = sub_141471AC0(&v56);
  v60 = 0x3E8 * (unsigned __int128)(unsigned __int64)v10 + v11 / 0xF4240uLL;
  v54 = sub_141471910(v60, *((_QWORD *)&v60 + 1), v12);
  v55 = v13;
  converge_threads_to_provider((__int64)v71, a2, v83[3], v83[4]);
  v14 = *(_QWORD *)v71;
  v77 = *(_OWORD *)&v71[8];
  v78 = v72;
  v79 = v73;
  v80 = v74;
  if ( *(_QWORD *)v71 != -1 )
  {
    *(_QWORD *)(a1 + 96) = v76;
    *(_OWORD *)(a1 + 80) = v75;
    v15 = v77;
    v16 = v78;
    v17 = v79;
    *(_OWORD *)(a1 + 64) = v80;
    *(_OWORD *)(a1 + 48) = v17;
    *(_OWORD *)(a1 + 32) = v16;
    *(_OWORD *)(a1 + 16) = v15;
    *(_QWORD *)(a1 + 8) = v14;
    *(_QWORD *)a1 = 2;
LABEL_5:
    if ( *((_QWORD *)&v62 + 1) != -1 && *((_QWORD *)&v62 + 1) )
      sub_140001660(v63, *((_QWORD *)&v62 + 1), 1);
    v18 = *((_QWORD *)&v61 + 1);
    v19 = v62;
    v9 = v83;
    if ( (_QWORD)v62 )
    {
      v20 = (_QWORD *)(*((_QWORD *)&v61 + 1) + 8LL);
      do
      {
        v21 = *(v20 - 1);
        if ( v21 )
          sub_140001660(*v20, v21, 1);
        v20 += 3;
        --v19;
      }
      while ( v19 );
    }
    if ( (_QWORD)v61 )
      sub_140001660(v18, 24 * v61, 8);
LABEL_15:
    v22 = *v9;
    if ( *v9 == -1 )
      return a1;
    goto LABEL_16;
  }
  v67 = v77;
  v68 = v78;
  v69 = v79;
  v70 = v80;
  v24 = sub_141471AC0(&v54);
  v59 = 0x3E8 * (unsigned __int128)(unsigned __int64)v24 + v25 / 0xF4240uLL;
  v52 = sub_141471910(v59, *((_QWORD *)&v59 + 1), v26);
  v53 = v27;
  if ( *((_BYTE *)v83 + 40) == 1 )
  {
    patch_relay_thread_instructions((__int64)v71, a2);
    v49 = *(_QWORD *)&v71[16];
    v48 = *(_OWORD *)v71;
    v28 = 1;
  }
  else
  {
    v28 = 0;
  }
  v29 = sub_141471AC0(&v52);
  v58 = 0x3E8 * (unsigned __int128)(unsigned __int64)v29 + v30 / 0xF4240uLL;
  v50 = sub_141471910(v58, *((_QWORD *)&v58 + 1), v31);
  v51 = v32;
  v22 = *v83;
  if ( *v83 == -1 )
  {
    v34 = 0;
  }
  else
  {
    fallback_relay_model_threads((__int64 *)v71, a2, (const char *)v83[1], v83[2]);
    v34 = *(_QWORD *)&v71[8];
    v33 = *(_QWORD *)v71;
    v35 = *(_OWORD *)&v71[8];
    v77 = v72;
    v78 = v73;
    v79 = v74;
    v80 = v75;
    *(_QWORD *)&v81 = v76;
    if ( *(_QWORD *)v71 != -1 )
    {
      *(_QWORD *)(a1 + 96) = v81;
      v36 = v77;
      v37 = v78;
      v38 = v79;
      *(_OWORD *)(a1 + 80) = v80;
      *(_OWORD *)(a1 + 64) = v38;
      *(_OWORD *)(a1 + 48) = v37;
      *(_OWORD *)(a1 + 32) = v36;
      *(_QWORD *)(a1 + 8) = v33;
      *(_OWORD *)(a1 + 16) = v35;
      *(_QWORD *)a1 = 2;
      if ( (_QWORD)v67 )
        sub_140001660(*((_QWORD *)&v67 + 1), v67, 1);
      goto LABEL_5;
    }
  }
  v39 = sub_141471AC0(&v50);
  v77 = 0x3E8 * (unsigned __int128)(unsigned __int64)v39 + v40 / 0xF4240uLL;
  *(_QWORD *)v71 = &v60;
  *(_QWORD *)&v71[8] = sub_1414A9600;
  *(_QWORD *)&v71[16] = &v59;
  *(_QWORD *)&v72 = sub_1414A9600;
  *((_QWORD *)&v72 + 1) = &v58;
  *(_QWORD *)&v73 = sub_1414A9600;
  *((_QWORD *)&v73 + 1) = &v77;
  *(_QWORD *)&v74 = sub_1414A9600;
  *((_QWORD *)&v74 + 1) = (char *)&v68 + 8;
  *(_QWORD *)&v75 = sub_1414AC520;
  sub_14149C0F0(v47, &unk_14175B08F, v71);
  sub_1403565C0((unsigned int)aThreadReconcil, 16, (unsigned int)aPhaseSplit, 11, (__int64)v47);
  *(_OWORD *)(a1 + 112) = v66;
  *(_OWORD *)(a1 + 96) = v65;
  v41 = v61;
  v42 = v62;
  v43 = v63;
  *(_OWORD *)(a1 + 80) = v64;
  *(_OWORD *)(a1 + 64) = v43;
  *(_OWORD *)(a1 + 48) = v42;
  *(_OWORD *)(a1 + 32) = v41;
  v44 = v68;
  v45 = v69;
  v46 = v70;
  *(_OWORD *)(a1 + 128) = v67;
  *(_OWORD *)(a1 + 144) = v44;
  *(_OWORD *)(a1 + 160) = v45;
  *(_OWORD *)(a1 + 176) = v46;
  *(_OWORD *)(a1 + 8) = v48;
  *(_QWORD *)(a1 + 24) = v49;
  *(_QWORD *)a1 = v28;
  *(_QWORD *)(a1 + 192) = v34;
  v9 = v83;
  if ( v22 == -1 )
    return a1;
LABEL_16:
  if ( v22 )
    sub_140001660(v9[1], v22, 1);
  return a1;
}