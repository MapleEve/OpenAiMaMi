// win 1.2.7 | module src/core/relay/translator.rs | ea 0x140e4d370 | name sub_140E4D370
// win 1.2.7 | module src/core/relay/translator.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140E4D370(__int64 a1, int a2, int a3, __int64 a4)
{
  __int64 v8; // rax
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm2
  __int64 v12; // rax
  _QWORD *v13; // rcx
  __int64 v14; // rdx
  unsigned __int64 v15; // rax
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm2
  unsigned __int64 i; // rax
  __int64 v20; // rcx
  _QWORD *v21; // rdx
  __int64 v22; // rax
  _QWORD *v23; // r15
  _QWORD *v24; // r12
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm2
  _QWORD *j; // rcx
  __int64 result; // rax
  _QWORD *v30; // rsi
  unsigned __int64 v31; // [rsp+30h] [rbp-50h] BYREF
  _BYTE v32[120]; // [rsp+38h] [rbp-48h]
  _BOOL8 v33; // [rsp+B0h] [rbp+30h] BYREF
  _QWORD *v34; // [rsp+B8h] [rbp+38h]
  __int64 v35; // [rsp+C0h] [rbp+40h]
  _QWORD *v36; // [rsp+C8h] [rbp+48h]
  _BOOL8 v37; // [rsp+D0h] [rbp+50h]
  __int64 v38; // [rsp+D8h] [rbp+58h]
  __int64 v39; // [rsp+E0h] [rbp+60h]
  _QWORD *v40; // [rsp+E8h] [rbp+68h]
  __int64 v41; // [rsp+F0h] [rbp+70h]
  unsigned __int64 v42; // [rsp+F8h] [rbp+78h]
  __int64 v43; // [rsp+100h] [rbp+80h]
  _QWORD *v44; // [rsp+108h] [rbp+88h]
  __int64 v45; // [rsp+110h] [rbp+90h]
  _QWORD *v46; // [rsp+118h] [rbp+98h]
  __int64 v47; // [rsp+120h] [rbp+A0h]

  v47 = -2;
  v8 = *(_QWORD *)(a1 + 160);
  *(_QWORD *)(a1 + 160) = -1;
  if ( v8 != -1 )
  {
    *(_OWORD *)&v32[104] = *(_OWORD *)(a1 + 264);
    *(_OWORD *)&v32[88] = *(_OWORD *)(a1 + 248);
    *(_OWORD *)&v32[72] = *(_OWORD *)(a1 + 232);
    v9 = *(_OWORD *)(a1 + 168);
    v10 = *(_OWORD *)(a1 + 184);
    v11 = *(_OWORD *)(a1 + 200);
    *(_OWORD *)&v32[56] = *(_OWORD *)(a1 + 216);
    *(_OWORD *)&v32[40] = v11;
    *(_OWORD *)&v32[24] = v10;
    *(_OWORD *)&v32[8] = v9;
    *(_QWORD *)v32 = v8;
    v31 = 0x8000000000000001uLL;
    sub_140E508A0(a1, (unsigned int)&v31, a2, a3, a4);
  }
  v12 = *(_QWORD *)(a1 + 648);
  v13 = *(_QWORD **)(a1 + 656);
  *(_QWORD *)(a1 + 648) = 0;
  v14 = v12;
  if ( v12 )
    v14 = *(_QWORD *)(a1 + 664);
  *(_QWORD *)(a1 + 664) = 0;
  v33 = v12 != 0;
  v34 = nullptr;
  v35 = v12;
  v36 = v13;
  v37 = v33;
  v38 = 0;
  v39 = v12;
  v40 = v13;
  v41 = v14;
  while ( 1 )
  {
    sub_140E86230(&v31, &v33);
    if ( !v31 || *(_QWORD *)(v31 + (*(_QWORD *)&v32[8] << 7)) == -1 )
      break;
    v15 = (*(_QWORD *)&v32[8] << 7) + v31;
    v31 = *(_QWORD *)v15;
    *(_QWORD *)&v32[112] = *(_QWORD *)(v15 + 120);
    *(_OWORD *)&v32[96] = *(_OWORD *)(v15 + 104);
    *(_OWORD *)&v32[80] = *(_OWORD *)(v15 + 88);
    *(_OWORD *)&v32[64] = *(_OWORD *)(v15 + 72);
    v16 = *(_OWORD *)(v15 + 8);
    v17 = *(_OWORD *)(v15 + 24);
    v18 = *(_OWORD *)(v15 + 40);
    *(_OWORD *)&v32[48] = *(_OWORD *)(v15 + 56);
    *(_OWORD *)&v32[32] = v18;
    *(_OWORD *)&v32[16] = v17;
    *(_OWORD *)v32 = v16;
    sub_140E508A0(a1, (unsigned int)&v31, a2, a3, a4);
  }
  sub_140E86230(&v31, &v33);
  for ( i = v31; v31; i = v31 )
  {
    sub_140DF5CA0((__int64 *)(i + (*(_QWORD *)&v32[8] << 7)));
    sub_140E86230(&v31, &v33);
  }
  v20 = *(_QWORD *)(a1 + 112);
  v21 = *(_QWORD **)(a1 + 120);
  v22 = *(_QWORD *)(a1 + 128);
  *(_QWORD *)(a1 + 112) = 0;
  *(_QWORD *)(a1 + 120) = 8;
  *(_QWORD *)(a1 + 128) = 0;
  v23 = &v21[16 * v22];
  v33 = (_BOOL8)v21;
  v34 = v21;
  v45 = v20;
  v35 = v20;
  v36 = v23;
  v44 = v21;
  if ( v22 )
  {
    v21 = v44 + 16;
    while ( *(v21 - 16) != -1 )
    {
      v24 = v21 - 16;
      v31 = *(v21 - 16);
      *(_QWORD *)&v32[112] = *(v21 - 1);
      *(_OWORD *)&v32[96] = *(_OWORD *)(v21 - 3);
      *(_OWORD *)&v32[80] = *(_OWORD *)(v21 - 5);
      *(_OWORD *)&v32[64] = *(_OWORD *)(v21 - 7);
      v25 = *(_OWORD *)(v21 - 15);
      v26 = *(_OWORD *)(v21 - 13);
      v27 = *(_OWORD *)(v21 - 11);
      *(_OWORD *)&v32[48] = *(_OWORD *)(v21 - 9);
      *(_OWORD *)&v32[32] = v27;
      *(_OWORD *)&v32[16] = v26;
      *(_OWORD *)v32 = v25;
      v46 = v21;
      sub_140E566D0(a1, (unsigned int)&v31, a2, a3, a4);
      v21 = v46 + 16;
      if ( v24 + 16 == v23 )
      {
        v21 = v23;
        break;
      }
    }
    v34 = v21;
  }
  v42 = (unsigned __int64)((char *)v23 - (char *)v21) >> 7;
  v43 = 0;
  v46 = v21;
  for ( j = v21; ; j = v30 )
  {
    result = v43;
    if ( v42 == v43 )
      break;
    ++v43;
    v30 = j + 16;
    sub_14038D8C0(j);
  }
  if ( v45 )
    return sub_140001660(v44, v45 << 7, 8);
  return result;
}
