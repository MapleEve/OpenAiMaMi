// win 1.2.7 | module src/core/relay/router_transition.rs | ea 0x140d946f0 | name sub_140D946F0
// win 1.2.7 | module src/core/relay/router_transition.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140D946F0(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        __int64 a4,
        __int128 *a5,
        __int64 a6,
        char a7,
        char a8,
        __int64 a9,
        __int64 a10,
        __int64 a11)
{
  __int128 *v14; // r12
  __int64 v15; // r13
  unsigned __int64 v16; // rdi
  unsigned __int64 v17; // r14
  __int64 v18; // rax
  __int128 v19; // xmm0
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  _QWORD *v22; // rbx
  __int64 v23; // rdx
  __int128 *v24; // rcx
  __int128 *v25; // rdi
  __int128 v26; // xmm1
  _QWORD *v27; // rbx
  __int64 v28; // rdx
  __int128 *v29; // rcx
  __int128 *v30; // rdi
  __int64 v32; // [rsp+48h] [rbp-38h]
  __int128 v33; // [rsp+70h] [rbp-10h]
  __int128 v34; // [rsp+80h] [rbp+0h] BYREF
  __int128 v35; // [rsp+90h] [rbp+10h]
  __int64 v36; // [rsp+A0h] [rbp+20h]
  _BYTE v37[80]; // [rsp+B0h] [rbp+30h] BYREF
  __int128 v38; // [rsp+100h] [rbp+80h]
  __int64 v39; // [rsp+110h] [rbp+90h] BYREF
  unsigned __int64 v40; // [rsp+118h] [rbp+98h]
  unsigned __int64 v41; // [rsp+120h] [rbp+A0h]
  __int64 v42; // [rsp+128h] [rbp+A8h] BYREF
  __int128 *v43; // [rsp+130h] [rbp+B0h]
  __int64 v44; // [rsp+138h] [rbp+B8h]
  __int128 v45; // [rsp+140h] [rbp+C0h] BYREF
  __int128 v46; // [rsp+150h] [rbp+D0h]
  __int128 v47; // [rsp+160h] [rbp+E0h]
  __int64 v48; // [rsp+170h] [rbp+F0h]
  __int64 v49; // [rsp+178h] [rbp+F8h]
  __int128 *v50; // [rsp+180h] [rbp+100h]
  __int64 v51; // [rsp+188h] [rbp+108h]
  __int64 v52; // [rsp+190h] [rbp+110h]

  v52 = -2;
  sub_1403DCEA0(&v42, *(_QWORD *)(a4 + 8), *(_QWORD *)(a4 + 8) + (*(_QWORD *)(a4 + 16) << 8));
  sub_140229570(&v39, a4);
  v14 = v43;
  v15 = v44;
  v16 = v40;
  v17 = v41;
  LOBYTE(v32) = a8;
  if ( a11 )
    sub_14022B680((__int64)v37, a3, v43, v44, v40, v41, a5, a6, a7, v32, a9, a10, a11);
  else
    sub_14022B680((__int64)v37, a3, v43, v44, v40, v41, a5, a6, a7, v32, a9, a10, 0);
  v18 = *(_QWORD *)v37;
  v45 = *(_OWORD *)&v37[8];
  v46 = *(_OWORD *)&v37[24];
  v47 = *(_OWORD *)&v37[40];
  v48 = *(_QWORD *)&v37[56];
  if ( *(_QWORD *)v37 == -1 )
  {
    v33 = v45;
    v34 = v46;
    v35 = v47;
    v36 = v48;
    sub_1403F1200(&v45, (char *)&v34 + 8);
    *(_QWORD *)&v37[48] = v36;
    v26 = v34;
    *(_OWORD *)&v37[32] = v35;
    *(_OWORD *)&v37[16] = v34;
    *(_OWORD *)v37 = v33;
    *(_QWORD *)&v37[72] = v46;
    *(_OWORD *)&v37[56] = v45;
    *(_OWORD *)(a1 + 40) = v35;
    *(_OWORD *)(a1 + 24) = v26;
    *(_OWORD *)(a1 + 8) = v33;
    *(_QWORD *)(a1 + 72) = *(_QWORD *)&v37[64];
    *(_QWORD *)(a1 + 80) = *(_QWORD *)&v37[72];
    *(_OWORD *)(a1 + 56) = *(_OWORD *)&v37[48];
    *(_QWORD *)a1 = -1;
    if ( v17 )
    {
      v27 = (_QWORD *)(v16 + 8);
      do
      {
        v28 = *(v27 - 1);
        if ( v28 )
          sub_140001660(*v27, v28, 1);
        v27 += 3;
        --v17;
      }
      while ( v17 );
    }
    v49 = v15;
    if ( v39 )
      sub_140001660(v16, 24 * v39, 8);
    v51 = 0;
    v50 = v14;
    v29 = v14;
    while ( v49 != v51 )
    {
      ++v51;
      v30 = v29 + 16;
      sub_14038CFC0(v29);
      v29 = v30;
    }
  }
  else
  {
    v19 = *(_OWORD *)&v37[64];
    *(_OWORD *)(a1 + 80) = v38;
    *(_OWORD *)(a1 + 64) = v19;
    *(_QWORD *)(a1 + 56) = v48;
    v20 = v45;
    v21 = v46;
    *(_OWORD *)(a1 + 40) = v47;
    *(_OWORD *)(a1 + 24) = v21;
    *(_OWORD *)(a1 + 8) = v20;
    *(_QWORD *)a1 = v18;
    if ( v17 )
    {
      v22 = (_QWORD *)(v16 + 8);
      do
      {
        v23 = *(v22 - 1);
        if ( v23 )
          sub_140001660(*v22, v23, 1);
        v22 += 3;
        --v17;
      }
      while ( v17 );
    }
    v49 = v15;
    if ( v39 )
      sub_140001660(v16, 24 * v39, 8);
    v51 = 0;
    v50 = v14;
    v24 = v14;
    while ( v49 != v51 )
    {
      ++v51;
      v25 = v24 + 16;
      sub_14038CFC0(v24);
      v24 = v25;
    }
  }
  if ( v42 )
    sub_140001660(v50, v42 << 8, 8);
  return a1;
}
