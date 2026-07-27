// module: codexmate_lib/core/relay/codex_thread_visibility
// addr: 0x1404bcd80
// name: sub_1404BCD80
// win 1.2.1 | module src/core/relay/codex_thread_visibility.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1404BCD80(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rbx
  __int64 v6; // r14
  __int64 v9; // r15
  unsigned __int64 v10; // rsi
  __int64 v11; // rax
  unsigned __int64 v12; // rcx
  __int64 v13; // r14
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rcx
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm2
  __int64 v20; // rsi
  _QWORD *v21; // rcx
  __int64 result; // rax
  _QWORD *v23; // rsi
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // [rsp+28h] [rbp-58h] BYREF
  __int128 v27; // [rsp+30h] [rbp-50h]
  __int128 v28; // [rsp+40h] [rbp-40h]
  __int128 v29; // [rsp+50h] [rbp-30h]
  __int128 v30; // [rsp+60h] [rbp-20h]
  __int128 v31; // [rsp+70h] [rbp-10h]
  __int128 v32; // [rsp+80h] [rbp+0h]
  _OWORD v33[8]; // [rsp+F0h] [rbp+70h] BYREF
  __int128 v34; // [rsp+170h] [rbp+F0h] BYREF
  __int64 v35; // [rsp+180h] [rbp+100h]
  _BYTE v36[96]; // [rsp+188h] [rbp+108h] BYREF
  __int128 v37; // [rsp+240h] [rbp+1C0h]
  __int128 v38; // [rsp+250h] [rbp+1D0h]
  __int128 v39; // [rsp+260h] [rbp+1E0h]
  __int128 v40; // [rsp+270h] [rbp+1F0h]
  __int128 v41; // [rsp+280h] [rbp+200h]
  __int128 v42; // [rsp+290h] [rbp+210h]
  __int128 v43; // [rsp+2A0h] [rbp+220h]
  __int128 v44; // [rsp+2B0h] [rbp+230h]
  __int64 v45; // [rsp+2C0h] [rbp+240h]
  __int64 v46; // [rsp+2C8h] [rbp+248h]
  unsigned __int64 v47; // [rsp+2D0h] [rbp+250h]
  __int64 v48; // [rsp+2D8h] [rbp+258h]
  __int64 v49; // [rsp+2E0h] [rbp+260h]
  __int128 v50; // [rsp+2E8h] [rbp+268h] BYREF
  __int64 v51; // [rsp+2F8h] [rbp+278h]
  __int128 v52; // [rsp+300h] [rbp+280h] BYREF
  __int64 v53; // [rsp+310h] [rbp+290h]
  char v54; // [rsp+31Fh] [rbp+29Fh]
  __int64 v55; // [rsp+320h] [rbp+2A0h]

  v55 = -2;
  v5 = 200 * a3;
  if ( a3 > 0xA3D70A3D70A3D7LL )
  {
    v6 = 0;
    goto LABEL_3;
  }
  if ( v5 )
  {
    v9 = a2;
    v10 = a3;
    nullsub_1(a1);
    v6 = 8;
    v11 = sub_140001650(v5, 8);
    if ( !v11 )
LABEL_3:
      sub_1416C2D4B(v6, v5);
    a3 = v10;
    v12 = v10;
    a2 = v9;
  }
  else
  {
    v11 = 8;
    v12 = 0;
  }
  *(_QWORD *)&v50 = v12;
  *((_QWORD *)&v50 + 1) = v11;
  v51 = 0;
  *(_QWORD *)&v52 = 0;
  *((_QWORD *)&v52 + 1) = 8;
  v53 = 0;
  v47 = a2 + 80 * a3;
  while ( 1 )
  {
    v46 = a2;
    if ( a2 == v47 )
      break;
    patch_convergence_rollout_target((__int64)&v26, a2, a4, a5);
    if ( v26 == -1 )
    {
      *(_OWORD *)&v36[80] = v32;
      *(_OWORD *)&v36[64] = v31;
      *(_OWORD *)&v36[48] = v30;
      *(_OWORD *)&v36[32] = v29;
      *(_OWORD *)&v36[16] = v28;
      *(_OWORD *)v36 = v27;
      v35 = v53;
      v34 = v52;
      *(_OWORD *)a1 = v52;
      *(_QWORD *)(a1 + 112) = *(_QWORD *)&v36[88];
      *(_OWORD *)(a1 + 32) = *(_OWORD *)&v36[8];
      *(_QWORD *)(a1 + 16) = v35;
      *(_QWORD *)(a1 + 24) = *(_QWORD *)v36;
      *(_OWORD *)(a1 + 96) = *(_OWORD *)&v36[72];
      *(_OWORD *)(a1 + 80) = *(_OWORD *)&v36[56];
      *(_OWORD *)(a1 + 48) = *(_OWORD *)&v36[24];
      *(_OWORD *)(a1 + 64) = *(_OWORD *)&v36[40];
      sub_140335300((__int64)&v50);
      result = v50;
      if ( !(_QWORD)v50 )
        return result;
      v24 = *((_QWORD *)&v50 + 1);
      v25 = 200 * v50;
      return sub_140001660(v24, v25, 8);
    }
    sub_141684120(&v34, &v26, 200);
    if ( *(_QWORD *)&v36[48] != -1 )
    {
      v54 = 1;
      sub_1404DDDC0(v33, &v36[48]);
      v44 = v33[7];
      v43 = v33[6];
      v42 = v33[5];
      v41 = v33[4];
      v40 = v33[3];
      v39 = v33[2];
      v38 = v33[1];
      v37 = v33[0];
      v14 = v53;
      if ( v53 == (_QWORD)v52 )
        sub_1416898F0(&v52);
      v15 = *((_QWORD *)&v52 + 1);
      v16 = v14 << 7;
      *(_OWORD *)(*((_QWORD *)&v52 + 1) + v16 + 112) = v44;
      *(_OWORD *)(v15 + v16 + 96) = v43;
      *(_OWORD *)(v15 + v16 + 80) = v42;
      *(_OWORD *)(v15 + v16 + 64) = v41;
      v17 = v37;
      v18 = v38;
      v19 = v39;
      *(_OWORD *)(v15 + v16 + 48) = v40;
      *(_OWORD *)(v15 + v16 + 32) = v19;
      *(_OWORD *)(v15 + v16 + 16) = v18;
      *(_OWORD *)(v15 + v16) = v17;
      v53 = v14 + 1;
    }
    v20 = v51;
    if ( v51 == (_QWORD)v50 )
      sub_141689880(&v50);
    v13 = v46 + 80;
    sub_141684120(*((_QWORD *)&v50 + 1) + 200 * v20, &v34, 200);
    v51 = v20 + 1;
    a2 = v13;
  }
  *(_QWORD *)(a1 + 16) = v51;
  *(_OWORD *)a1 = v50;
  *(_QWORD *)(a1 + 24) = -1;
  v21 = *((_QWORD **)&v52 + 1);
  v48 = v53;
  v49 = 0;
  v45 = *((_QWORD *)&v52 + 1);
  while ( 1 )
  {
    result = v49;
    if ( v48 == v49 )
      break;
    ++v49;
    v23 = v21 + 16;
    sub_1402C7EE0(v21);
    v21 = v23;
  }
  if ( (_QWORD)v52 )
  {
    v24 = *((_QWORD *)&v52 + 1);
    v25 = (_QWORD)v52 << 7;
    return sub_140001660(v24, v25, 8);
  }
  return result;
}