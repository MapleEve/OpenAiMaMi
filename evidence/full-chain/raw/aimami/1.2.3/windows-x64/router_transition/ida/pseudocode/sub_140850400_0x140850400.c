// module: codexmate_lib/core/relay/router_transition
// addr: 0x140850400
// name: sub_140850400
// win 1.2.1 | module src/core/relay/router_transition.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140850400(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        __int64 a4,
        __int128 *a5,
        __int64 a6,
        char a7,
        char a8,
        __int64 a9)
{
  __int128 *v12; // r15
  __int64 v13; // r12
  unsigned __int64 v14; // rdi
  unsigned __int64 v15; // r14
  __int64 v16; // rax
  __int128 v17; // xmm0
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  _QWORD *v20; // rbx
  __int64 v21; // rdx
  __int128 *v22; // rcx
  __int128 *v23; // rdi
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  _QWORD *v26; // rbx
  __int64 v27; // rdx
  __int128 *v28; // rcx
  __int128 *v29; // rdi
  __int64 v31; // [rsp+48h] [rbp-38h]
  _BYTE v32[80]; // [rsp+60h] [rbp-20h] BYREF
  __int128 v33; // [rsp+B0h] [rbp+30h]
  __int128 v34; // [rsp+C0h] [rbp+40h]
  __int128 v35; // [rsp+D0h] [rbp+50h] BYREF
  __int128 v36; // [rsp+E0h] [rbp+60h]
  __int64 v37; // [rsp+F0h] [rbp+70h]
  __int64 v38; // [rsp+F8h] [rbp+78h] BYREF
  unsigned __int64 v39; // [rsp+100h] [rbp+80h]
  unsigned __int64 v40; // [rsp+108h] [rbp+88h]
  __int128 v41; // [rsp+110h] [rbp+90h] BYREF
  __int128 v42; // [rsp+120h] [rbp+A0h]
  __int128 v43; // [rsp+130h] [rbp+B0h]
  __int64 v44; // [rsp+140h] [rbp+C0h]
  __int64 v45; // [rsp+148h] [rbp+C8h] BYREF
  __int128 *v46; // [rsp+150h] [rbp+D0h]
  __int64 v47; // [rsp+158h] [rbp+D8h]
  __int64 v48; // [rsp+160h] [rbp+E0h]
  __int128 *v49; // [rsp+168h] [rbp+E8h]
  __int64 v50; // [rsp+170h] [rbp+F0h]
  __int64 v51; // [rsp+178h] [rbp+F8h]

  v51 = -2;
  sub_140319B20(&v45, *(_QWORD *)(a4 + 8), *(_QWORD *)(a4 + 8) + 232LL * *(_QWORD *)(a4 + 16));
  sub_140578870(&v38, a4);
  v12 = v46;
  v13 = v47;
  v14 = v39;
  v15 = v40;
  LOBYTE(v31) = a8;
  reconcile_native_off((__int64)v32, a3, v46, v47, v39, v40, a5, a6, a7, v31, a9);
  v16 = *(_QWORD *)v32;
  v41 = *(_OWORD *)&v32[8];
  v42 = *(_OWORD *)&v32[24];
  v43 = *(_OWORD *)&v32[40];
  v44 = *(_QWORD *)&v32[56];
  v48 = v13;
  v49 = v12;
  if ( *(_QWORD *)v32 == -1 )
  {
    v34 = v41;
    v35 = v42;
    v36 = v43;
    v37 = v44;
    sub_14032C050(&v41, (char *)&v35 + 8);
    *(_QWORD *)&v32[48] = v37;
    v24 = v34;
    v25 = v35;
    *(_OWORD *)&v32[32] = v36;
    *(_OWORD *)&v32[16] = v35;
    *(_OWORD *)v32 = v34;
    *(_QWORD *)&v32[72] = v42;
    *(_OWORD *)&v32[56] = v41;
    *(_OWORD *)(a1 + 40) = v36;
    *(_OWORD *)(a1 + 24) = v25;
    *(_OWORD *)(a1 + 8) = v24;
    *(_QWORD *)(a1 + 72) = *(_QWORD *)&v32[64];
    *(_QWORD *)(a1 + 80) = *(_QWORD *)&v32[72];
    *(_OWORD *)(a1 + 56) = *(_OWORD *)&v32[48];
    *(_QWORD *)a1 = -1;
    if ( v15 )
    {
      v26 = (_QWORD *)(v14 + 8);
      do
      {
        v27 = *(v26 - 1);
        if ( v27 )
          sub_140001660(*v26, v27, 1);
        v26 += 3;
        --v15;
      }
      while ( v15 );
    }
    if ( v38 )
      sub_140001660(v14, 24 * v38, 8);
    v50 = 0;
    v28 = v12;
    while ( v48 != v50 )
    {
      ++v50;
      v29 = (__int128 *)((char *)v28 + 232);
      sub_140018960(v28);
      v28 = v29;
    }
  }
  else
  {
    v17 = *(_OWORD *)&v32[64];
    *(_OWORD *)(a1 + 80) = v33;
    *(_OWORD *)(a1 + 64) = v17;
    *(_QWORD *)(a1 + 56) = v44;
    v18 = v41;
    v19 = v42;
    *(_OWORD *)(a1 + 40) = v43;
    *(_OWORD *)(a1 + 24) = v19;
    *(_OWORD *)(a1 + 8) = v18;
    *(_QWORD *)a1 = v16;
    if ( v15 )
    {
      v20 = (_QWORD *)(v14 + 8);
      do
      {
        v21 = *(v20 - 1);
        if ( v21 )
          sub_140001660(*v20, v21, 1);
        v20 += 3;
        --v15;
      }
      while ( v15 );
    }
    if ( v38 )
      sub_140001660(v14, 24 * v38, 8);
    v50 = 0;
    v22 = v12;
    while ( v48 != v50 )
    {
      ++v50;
      v23 = (__int128 *)((char *)v22 + 232);
      sub_140018960(v22);
      v22 = v23;
    }
  }
  if ( v45 )
    sub_140001660(v49, 232 * v45, 8);
  return a1;
}