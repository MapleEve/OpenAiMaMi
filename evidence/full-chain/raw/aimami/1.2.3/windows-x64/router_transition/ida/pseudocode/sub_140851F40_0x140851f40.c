// module: codexmate_lib/core/relay/router_transition
// addr: 0x140851f40
// name: sub_140851F40
// win 1.2.1 | module src/core/relay/router_transition.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140851F40(__int64 a1, __int64 a2, _QWORD *a3, __int128 *a4, __int64 a5, char a6)
{
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rbx
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm2
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rcx
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm2
  __int64 v22; // rax
  __int64 v23; // rdi
  __int64 v24; // rcx
  __int64 v25; // rdi
  __int64 v26; // rdi
  _QWORD *v27; // rbx
  __int64 v28; // rdx
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int128 v31; // xmm2
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  __int128 v34; // xmm2
  __int64 v35; // rcx
  __int64 v36; // rdi
  __int64 v37; // rdi
  _QWORD *v38; // rbx
  __int64 v39; // rdx
  char v41[8]; // [rsp+58h] [rbp-28h] BYREF
  __int64 v42; // [rsp+60h] [rbp-20h]
  __int64 v43; // [rsp+68h] [rbp-18h]
  char v44; // [rsp+17Ch] [rbp+FCh]
  char v45; // [rsp+17Dh] [rbp+FDh]
  __int128 v46; // [rsp+180h] [rbp+100h]
  __int128 v47; // [rsp+190h] [rbp+110h]
  __int128 v48; // [rsp+1A0h] [rbp+120h]
  __m256i v49; // [rsp+1B0h] [rbp+130h]
  __int128 v50; // [rsp+1D0h] [rbp+150h]
  __int128 v51; // [rsp+1E0h] [rbp+160h] BYREF
  __int128 v52; // [rsp+1F0h] [rbp+170h]
  __int64 v53; // [rsp+200h] [rbp+180h]
  __int128 v54; // [rsp+210h] [rbp+190h]
  __int128 v55; // [rsp+220h] [rbp+1A0h]
  __int128 v56; // [rsp+230h] [rbp+1B0h]
  __int64 v57; // [rsp+240h] [rbp+1C0h]
  __int128 v58; // [rsp+248h] [rbp+1C8h]
  __int64 v59; // [rsp+258h] [rbp+1D8h]
  _BYTE v60[24]; // [rsp+260h] [rbp+1E0h] BYREF
  __int128 v61; // [rsp+278h] [rbp+1F8h]
  __int128 v62; // [rsp+288h] [rbp+208h]
  __m256i v63; // [rsp+298h] [rbp+218h]
  __int64 v64; // [rsp+2B8h] [rbp+238h]
  __int128 v65; // [rsp+2C0h] [rbp+240h] BYREF
  __int128 v66; // [rsp+2D0h] [rbp+250h]
  __int128 v67; // [rsp+2E0h] [rbp+260h]
  __m256i v68; // [rsp+2F0h] [rbp+270h]
  __int64 v69; // [rsp+318h] [rbp+298h]
  __int128 v70; // [rsp+320h] [rbp+2A0h] BYREF
  __int64 v71; // [rsp+330h] [rbp+2B0h]
  __int128 v72; // [rsp+338h] [rbp+2B8h]
  __int64 v73; // [rsp+348h] [rbp+2C8h]
  char v74; // [rsp+350h] [rbp+2D0h]
  __int64 v75; // [rsp+360h] [rbp+2E0h]
  __int64 v76; // [rsp+368h] [rbp+2E8h]
  __int64 v77; // [rsp+370h] [rbp+2F0h]

  v77 = -2;
  sub_14085A1E0((__int64)v41, a2);
  if ( !v44 )
  {
    sub_140850400((__int64)v60, v10, a3, (__int64)v41, a4, a5, 0, a6, 0);
    v17 = *(_QWORD *)v60;
    v65 = *(_OWORD *)&v60[8];
    v66 = v61;
    v67 = v62;
    v68 = v63;
    if ( *(_QWORD *)v60 == -1 )
    {
      v29 = v65;
      v30 = v66;
      v31 = v67;
      v49 = v68;
      v46 = v65;
      v47 = v66;
      v48 = v67;
      *(_QWORD *)(a1 + 64) = v68.m256i_i64[0];
      *(_OWORD *)(a1 + 48) = v31;
      *(_OWORD *)(a1 + 32) = v30;
      *(_OWORD *)(a1 + 16) = v29;
      *(_OWORD *)(a1 + 72) = *(_OWORD *)&v49.m256i_u64[1];
      *(_QWORD *)(a1 + 88) = v49.m256i_i64[3];
      *(_QWORD *)(a1 + 8) = 1;
      *(_QWORD *)a1 = -1;
    }
    else
    {
      v18 = v64;
      *(_OWORD *)(a1 + 72) = *(_OWORD *)&v68.m256i_u64[2];
      v19 = v65;
      v20 = v66;
      v21 = v67;
      *(_OWORD *)(a1 + 56) = *(_OWORD *)v68.m256i_i8;
      *(_OWORD *)(a1 + 40) = v21;
      *(_OWORD *)(a1 + 24) = v20;
      *(_OWORD *)(a1 + 8) = v19;
      *(_QWORD *)a1 = v17;
      *(_QWORD *)(a1 + 88) = v18;
    }
    goto LABEL_33;
  }
  sub_140319B20(&v65, v42, v42 + 232 * v43);
  sub_140578870(v60, v41);
  v75 = v66;
  v71 = v66;
  v70 = v65;
  v72 = *(_OWORD *)v60;
  v73 = *(_QWORD *)&v60[16];
  v74 = v45;
  if ( (_QWORD)v66 && v73 )
  {
    reconcile_router_on((__int128 *)v60, (__int64)a3, a2, (__int64)&v70, a4, a5, 0);
    v11 = *(_QWORD *)v60;
    v65 = *(_OWORD *)&v60[8];
    v66 = v61;
    v67 = v62;
    v68.m256i_i64[0] = v63.m256i_i64[0];
    if ( *(_QWORD *)v60 == -1 )
    {
      v50 = v65;
      v51 = v66;
      v52 = v67;
      v53 = v68.m256i_i64[0];
      sub_14032C050(v60, (char *)&v51 + 8);
      v57 = v53;
      v32 = v50;
      v33 = v51;
      v34 = v52;
      v56 = v52;
      v55 = v51;
      v54 = v50;
      v58 = *(_OWORD *)v60;
      v59 = *(_QWORD *)&v60[16];
      *(_QWORD *)(a1 + 64) = v53;
      *(_OWORD *)(a1 + 48) = v34;
      *(_OWORD *)(a1 + 32) = v33;
      *(_OWORD *)(a1 + 16) = v32;
      *(_OWORD *)(a1 + 72) = v58;
      *(_QWORD *)(a1 + 88) = v59;
      *(_QWORD *)(a1 + 8) = 0;
      *(_QWORD *)a1 = -1;
      v76 = 0;
      v35 = *((_QWORD *)&v70 + 1);
      v69 = *((_QWORD *)&v70 + 1);
      while ( v75 != v76 )
      {
        ++v76;
        v36 = v35 + 232;
        sub_140018960(v35);
        v35 = v36;
      }
      if ( (_QWORD)v70 )
        sub_140001660(*((_QWORD *)&v70 + 1), 232 * v70, 8);
      v37 = v73;
      if ( v73 )
      {
        v38 = (_QWORD *)(*((_QWORD *)&v72 + 1) + 8LL);
        do
        {
          v39 = *(v38 - 1);
          if ( v39 )
            sub_140001660(*v38, v39, 1);
          v38 += 3;
          --v37;
        }
        while ( v37 );
      }
      goto LABEL_31;
    }
    v59 = v63.m256i_i64[3];
    v58 = *(_OWORD *)&v63.m256i_u64[1];
    v12 = v64;
    v57 = v68.m256i_i64[0];
    v13 = v65;
    v14 = v66;
    v15 = v67;
    v54 = v65;
    v55 = v66;
    v56 = v67;
    *(_QWORD *)(a1 + 72) = v63.m256i_i64[2];
    *(_QWORD *)(a1 + 80) = v59;
    *(_QWORD *)(a1 + 56) = v57;
    *(_QWORD *)(a1 + 64) = v58;
    *(_OWORD *)(a1 + 40) = v15;
    *(_OWORD *)(a1 + 24) = v14;
    *(_OWORD *)(a1 + 8) = v13;
    *(_QWORD *)a1 = v11;
    v16 = 88;
  }
  else
  {
    nullsub_1(*(_QWORD *)&v60[16]);
    v12 = 157;
    v22 = sub_140001650(157, 1);
    if ( !v22 )
      sub_1416C2D4B(1, 157);
    v23 = v22;
    sub_141684120(v22, aCodexCodexProv, 157);
    *(_QWORD *)a1 = 10;
    *(_QWORD *)(a1 + 8) = 157;
    *(_QWORD *)(a1 + 16) = v23;
    v16 = 24;
  }
  *(_QWORD *)(a1 + v16) = v12;
  v76 = 0;
  v24 = *((_QWORD *)&v70 + 1);
  v69 = *((_QWORD *)&v70 + 1);
  while ( v75 != v76 )
  {
    ++v76;
    v25 = v24 + 232;
    sub_140018960(v24);
    v24 = v25;
  }
  if ( (_QWORD)v70 )
    sub_140001660(*((_QWORD *)&v70 + 1), 232 * v70, 8);
  v26 = v73;
  if ( v73 )
  {
    v27 = (_QWORD *)(*((_QWORD *)&v72 + 1) + 8LL);
    do
    {
      v28 = *(v27 - 1);
      if ( v28 )
        sub_140001660(*v27, v28, 1);
      v27 += 3;
      --v26;
    }
    while ( v26 );
  }
LABEL_31:
  if ( (_QWORD)v72 )
    sub_140001660(*((_QWORD *)&v72 + 1), 24 * v72, 8);
LABEL_33:
  sub_140018740(v41);
  return a1;
}