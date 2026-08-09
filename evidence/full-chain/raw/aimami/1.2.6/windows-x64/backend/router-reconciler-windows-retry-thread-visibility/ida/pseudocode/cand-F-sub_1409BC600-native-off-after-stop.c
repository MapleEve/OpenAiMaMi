__int64 __fastcall sub_1409BC600(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        __int128 *a4,
        __int128 *a5,
        char a6,
        char a7,
        __int64 a8,
        __int64 a9)
{
  _QWORD *v12; // rdx
  unsigned __int64 v13; // rsi
  unsigned __int64 v14; // r15
  __int128 *v15; // r12
  __int64 v16; // rax
  __int128 v17; // xmm0
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  _QWORD *v20; // rdi
  __int64 v21; // rdx
  __int128 *v22; // rcx
  __int128 *v23; // rsi
  __int128 v24; // xmm1
  _QWORD *v25; // rdi
  __int64 v26; // rdx
  __int128 *v27; // rcx
  __int128 *v28; // rsi
  __int64 result; // rax
  __int64 v30; // [rsp+38h] [rbp-48h]
  __int64 v31; // [rsp+38h] [rbp-48h]
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
  __int128 *v44; // [rsp+138h] [rbp+B8h]
  __int128 v45; // [rsp+140h] [rbp+C0h] BYREF
  __int128 v46; // [rsp+150h] [rbp+D0h]
  __int128 v47; // [rsp+160h] [rbp+E0h]
  __int64 v48; // [rsp+170h] [rbp+F0h]
  __int128 *v49; // [rsp+178h] [rbp+F8h]
  __int128 *v50; // [rsp+180h] [rbp+100h]
  __int128 *v51; // [rsp+188h] [rbp+108h]
  __int64 v52; // [rsp+190h] [rbp+110h]

  v52 = -2;
  v51 = a4;
  v50 = a5;
  sub_140453D50(&v42, *(_QWORD *)(a3 + 8), *(_QWORD *)(a3 + 8) + 232LL * *(_QWORD *)(a3 + 16));
  sub_140B4F760(&v39, a3);
  v12 = a2;
  if ( a9 )
  {
    v13 = v40;
    v14 = v41;
    v15 = v43;
    LOBYTE(v32) = a7;
    v30 = (__int64)v50;
    v50 = v44;
    sub_140B50EA0((__int64)v37, v12, v43, (__int64)v44, v40, v41, v51, v30, a6, v32, a8, (int)&unk_141850928, a9);
  }
  else
  {
    v15 = v43;
    v13 = v40;
    v14 = v41;
    LOBYTE(v32) = a7;
    v31 = (__int64)v50;
    v50 = v44;
    sub_140B50EA0((__int64)v37, v12, v43, (__int64)v44, v40, v41, v51, v31, a6, v32, a8, (int)&unk_141850928, 0);
  }
  v16 = *(_QWORD *)v37;
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
    sub_140465930(&v45, (char *)&v34 + 8);
    *(_QWORD *)&v37[48] = v36;
    v24 = v34;
    *(_OWORD *)&v37[32] = v35;
    *(_OWORD *)&v37[16] = v34;
    *(_OWORD *)v37 = v33;
    *(_QWORD *)&v37[72] = v46;
    *(_OWORD *)&v37[56] = v45;
    *(_OWORD *)(a1 + 40) = v35;
    *(_OWORD *)(a1 + 24) = v24;
    *(_OWORD *)(a1 + 8) = v33;
    *(_QWORD *)(a1 + 72) = *(_QWORD *)&v37[64];
    *(_QWORD *)(a1 + 80) = *(_QWORD *)&v37[72];
    *(_OWORD *)(a1 + 56) = *(_OWORD *)&v37[48];
    *(_QWORD *)a1 = -1;
    if ( v14 )
    {
      v25 = (_QWORD *)(v13 + 8);
      do
      {
        v26 = *(v25 - 1);
        if ( v26 )
          sub_140001660(*v25, v26, 1);
        v25 += 3;
        --v14;
      }
      while ( v14 );
    }
    if ( v39 )
      sub_140001660(v13, 24 * v39, 8);
    v51 = nullptr;
    v49 = v15;
    v27 = v15;
    while ( v50 != v51 )
    {
      v51 = (__int128 *)((char *)v51 + 1);
      v28 = (__int128 *)((char *)v27 + 232);
      sub_1402085B0();
      v27 = v28;
    }
  }
  else
  {
    v17 = *(_OWORD *)&v37[64];
    *(_OWORD *)(a1 + 80) = v38;
    *(_OWORD *)(a1 + 64) = v17;
    *(_QWORD *)(a1 + 56) = v48;
    v18 = v45;
    v19 = v46;
    *(_OWORD *)(a1 + 40) = v47;
    *(_OWORD *)(a1 + 24) = v19;
    *(_OWORD *)(a1 + 8) = v18;
    *(_QWORD *)a1 = v16;
    if ( v14 )
    {
      v20 = (_QWORD *)(v13 + 8);
      do
      {
        v21 = *(v20 - 1);
        if ( v21 )
          sub_140001660(*v20, v21, 1);
        v20 += 3;
        --v14;
      }
      while ( v14 );
    }
    if ( v39 )
      sub_140001660(v13, 24 * v39, 8);
    v51 = nullptr;
    v49 = v15;
    v22 = v15;
    while ( v50 != v51 )
    {
      v51 = (__int128 *)((char *)v51 + 1);
      v23 = (__int128 *)((char *)v22 + 232);
      sub_1402085B0();
      v22 = v23;
    }
  }
  result = v42;
  if ( v42 )
    return sub_140001660(v49, 232 * v42, 8);
  return result;
}
