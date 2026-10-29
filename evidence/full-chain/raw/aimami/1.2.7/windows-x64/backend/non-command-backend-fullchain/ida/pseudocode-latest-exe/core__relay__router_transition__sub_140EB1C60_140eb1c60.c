// win 1.2.7 latest-exe | module src/core/relay/router_transition.rs | ea 0x140eb1c60 | successor of pre-update 0x140d946f0 | session <审计会话>
// match evidence: {"body_sim": 0.876, "str_ov": 0, "anchor": 0.066, "conf": 0.0, "verdict": "CONFIRMED_POOL_MATCH"}
double __fastcall sub_140EB1C60(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int128 *a4,
        __int64 a5,
        char a6,
        char a7,
        __int64 a8,
        __int64 a9)
{
  __int128 *v13; // rsi
  __int64 v14; // rdi
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // r13
  __int64 v17; // rax
  __int128 v18; // xmm0
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  _QWORD *v21; // r14
  __int64 v22; // rdx
  __int128 *v23; // rbx
  __int128 v24; // xmm1
  _QWORD *v25; // r14
  __int64 v26; // rdx
  __int128 *v27; // rbx
  double result; // xmm0_8
  __int64 v29; // [rsp+48h] [rbp-38h]
  __int128 v30; // [rsp+70h] [rbp-10h]
  __int128 v31; // [rsp+80h] [rbp+0h] BYREF
  __int128 v32; // [rsp+90h] [rbp+10h]
  __int64 v33; // [rsp+A0h] [rbp+20h]
  _BYTE v34[80]; // [rsp+B0h] [rbp+30h] BYREF
  __int128 v35; // [rsp+100h] [rbp+80h]
  __int64 v36; // [rsp+110h] [rbp+90h] BYREF
  __int128 *v37; // [rsp+118h] [rbp+98h]
  __int64 v38; // [rsp+120h] [rbp+A0h]
  __int64 v39; // [rsp+128h] [rbp+A8h] BYREF
  unsigned __int64 v40; // [rsp+130h] [rbp+B0h]
  unsigned __int64 v41; // [rsp+138h] [rbp+B8h]
  __int128 v42; // [rsp+140h] [rbp+C0h] BYREF
  __int128 v43; // [rsp+150h] [rbp+D0h]
  __int128 v44; // [rsp+160h] [rbp+E0h]
  __int64 v45; // [rsp+170h] [rbp+F0h]
  __int64 v46; // [rsp+180h] [rbp+100h]

  v46 = -2;
  sub_140213810(&v36, *(_QWORD *)(a3 + 8), *(_QWORD *)(a3 + 8) + (*(_QWORD *)(a3 + 16) << 8));
  sub_1401F5A00(&v39, a3);
  v13 = v37;
  v14 = v38;
  v15 = v40;
  v16 = v41;
  LOBYTE(v29) = a7;
  if ( a9 )
    sub_1401F7FF0((__int64)v34, a2, v37, v38, v40, v41, a4, a5, a6, v29, a8, (int)&unk_141A9F038, a9);
  else
    sub_1401F7FF0((__int64)v34, a2, v37, v38, v40, v41, a4, a5, a6, v29, a8, (int)&unk_141A9F038, 0);
  v17 = *(_QWORD *)v34;
  v42 = *(_OWORD *)&v34[8];
  v43 = *(_OWORD *)&v34[24];
  v44 = *(_OWORD *)&v34[40];
  v45 = *(_QWORD *)&v34[56];
  if ( *(_QWORD *)v34 == -1 )
  {
    v30 = v42;
    v31 = v43;
    v32 = v44;
    v33 = v45;
    sub_14022C070(&v42, (char *)&v31 + 8);
    *(_QWORD *)&v34[48] = v33;
    v24 = v31;
    *(_OWORD *)&v34[32] = v32;
    *(_OWORD *)&v34[16] = v31;
    *(_OWORD *)v34 = v30;
    *(_QWORD *)&v34[72] = v43;
    *(_OWORD *)&v34[56] = v42;
    *(_OWORD *)(a1 + 40) = v32;
    *(_OWORD *)(a1 + 24) = v24;
    *(_OWORD *)(a1 + 8) = v30;
    *(_QWORD *)(a1 + 72) = *(_QWORD *)&v34[64];
    *(_QWORD *)(a1 + 80) = *(_QWORD *)&v34[72];
    *(_QWORD *)&v19 = *(_QWORD *)&v34[48];
    *(_OWORD *)(a1 + 56) = *(_OWORD *)&v34[48];
    *(_QWORD *)a1 = -1;
    if ( v16 )
    {
      v25 = (_QWORD *)(v15 + 8);
      do
      {
        v26 = *(v25 - 1);
        if ( v26 )
          *(double *)&v19 = sub_140001660(*v25, v26, 1);
        v25 += 3;
        --v16;
      }
      while ( v16 );
    }
    if ( v39 )
      *(double *)&v19 = sub_140001660(v15, 24 * v39, 8);
    if ( v14 )
    {
      v27 = v13;
      do
      {
        sub_1401B16C0(v27);
        v27 += 16;
        --v14;
      }
      while ( v14 );
    }
  }
  else
  {
    v18 = *(_OWORD *)&v34[64];
    *(_OWORD *)(a1 + 80) = v35;
    *(_OWORD *)(a1 + 64) = v18;
    *(_QWORD *)(a1 + 56) = v45;
    v19 = v42;
    v20 = v43;
    *(_OWORD *)(a1 + 40) = v44;
    *(_OWORD *)(a1 + 24) = v20;
    *(_OWORD *)(a1 + 8) = v19;
    *(_QWORD *)a1 = v17;
    if ( v16 )
    {
      v21 = (_QWORD *)(v15 + 8);
      do
      {
        v22 = *(v21 - 1);
        if ( v22 )
          *(double *)&v19 = sub_140001660(*v21, v22, 1);
        v21 += 3;
        --v16;
      }
      while ( v16 );
    }
    if ( v39 )
      *(double *)&v19 = sub_140001660(v15, 24 * v39, 8);
    if ( v14 )
    {
      v23 = v13;
      do
      {
        sub_1401B16C0(v23);
        v23 += 16;
        --v14;
      }
      while ( v14 );
    }
  }
  if ( v36 )
    *(double *)&v19 = sub_140001660(v13, v36 << 8, 8);
  *(_QWORD *)&result = v19;
  return result;
}
