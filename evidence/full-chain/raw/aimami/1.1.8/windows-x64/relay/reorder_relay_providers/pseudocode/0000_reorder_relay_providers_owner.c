// win 1.1.8 reorder_relay_providers node va=0x1403db420 depth=0
// reorder_relay_providers_owner
__int64 __fastcall sub_1403DB420(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // r14
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r14
  const __m128i *v7; // r15
  __int128 v8; // rdi
  __int64 v9; // rbx
  __m128i *v10; // rax
  _QWORD *v11; // rcx
  _QWORD *v12; // rsi
  __m128i v14[22]; // [rsp+38h] [rbp-48h] BYREF
  __m128i v15[22]; // [rsp+1A0h] [rbp+120h] BYREF
  __m128i v16[32]; // [rsp+308h] [rbp+288h] BYREF
  __int64 v17; // [rsp+508h] [rbp+488h]
  __m128i v18; // [rsp+510h] [rbp+490h] BYREF
  const __m128i *v19; // [rsp+520h] [rbp+4A0h]
  __int64 v20; // [rsp+528h] [rbp+4A8h]
  __m128i v21[24]; // [rsp+6B8h] [rbp+638h] BYREF
  __int64 v22; // [rsp+838h] [rbp+7B8h]
  int v23; // [rsp+840h] [rbp+7C0h]
  int v24; // [rsp+844h] [rbp+7C4h]
  _BYTE v25[384]; // [rsp+848h] [rbp+7C8h] BYREF
  unsigned __int64 v26; // [rsp+9D8h] [rbp+958h] BYREF
  __int128 v27; // [rsp+9E0h] [rbp+960h] BYREF
  __int128 v28; // [rsp+9F0h] [rbp+970h]
  __int128 *v29; // [rsp+A00h] [rbp+980h]
  __int64 v30; // [rsp+A08h] [rbp+988h]
  __int128 v31; // [rsp+B80h] [rbp+B00h] BYREF
  __int64 v32; // [rsp+B90h] [rbp+B10h]
  __int128 v33; // [rsp+BA0h] [rbp+B20h] BYREF
  __int64 v34; // [rsp+BB0h] [rbp+B30h]
  __int128 v35; // [rsp+BC0h] [rbp+B40h] BYREF
  __int64 v36; // [rsp+BD0h] [rbp+B50h]
  _OWORD v37[2]; // [rsp+BD8h] [rbp+B58h] BYREF
  __int64 v38; // [rsp+BF8h] [rbp+B78h]
  __int128 v39; // [rsp+C00h] [rbp+B80h] BYREF
  const __m128i *v40; // [rsp+C10h] [rbp+B90h]
  const __m128i *v41; // [rsp+C20h] [rbp+BA0h]
  __int64 v42; // [rsp+C28h] [rbp+BA8h]
  char v43; // [rsp+C36h] [rbp+BB6h]
  char v44; // [rsp+C37h] [rbp+BB7h]
  __int64 v45; // [rsp+C38h] [rbp+BB8h]

  v45 = -2; /*0x1403db439*/
  sub_1412762D0(v16, (const __m128i *)a1, 0x208u); /*0x1403db45a*/
  sub_1412762D0(v21, (const __m128i *)(a1 + 520), 0x190u); /*0x1403db476*/
  v40 = *(const __m128i **)(a1 + 936); /*0x1403db482*/
  v39 = *(_OWORD *)(a1 + 920); /*0x1403db490*/
  v30 = 0; /*0x1403db497*/
  v26 = (unsigned __int64)aReorderRelayPr; /*0x1403db4a9*/
  *(_QWORD *)&v27 = 23; /*0x1403db4b0*/
  *((_QWORD *)&v27 + 1) = aManager_0; /*0x1403db4c2*/
  *(_QWORD *)&v28 = 7; /*0x1403db4c9*/
  *((_QWORD *)&v28 + 1) = v16; /*0x1403db4d4*/
  v29 = &v39; /*0x1403db4e2*/
  v44 = 1; /*0x1403db4f4*/
  v3 = sub_140419560((char *)(v17 + 16), v2); /*0x1403db501*/
  if ( !v3 ) /*0x1403db507*/
  {
    v44 = 1; /*0x1403db510*/
    sub_14127A550((__int64)v37, (__int64)&v26, (__int64)&v27 + 8); /*0x1403db525*/
    if ( LOBYTE(v37[0]) != 6 ) /*0x1403db532*/
    {
      v28 = v37[1]; /*0x1403db707*/
      v27 = v37[0]; /*0x1403db70e*/
      sub_1412762D0(v15, (const __m128i *)(a1 + 520), 0x168u); /*0x1403db728*/
      v33 = *(_OWORD *)(a1 + 880); /*0x1403db73b*/
      v34 = *(_QWORD *)(a1 + 896); /*0x1403db749*/
      v26 = 1; /*0x1403db75c*/
      v44 = 0; /*0x1403db767*/
      invoke_resolver_respond_sys(v15, v22, (__int64)&v26, &v33, v23, v24); /*0x1403db787*/
      goto LABEL_18; /*0x1403db78d*/
    }
    v3 = *((_QWORD *)&v37[0] + 1); /*0x1403db538*/
  }
  v30 = 0; /*0x1403db53f*/
  v26 = (unsigned __int64)aReorderRelayPr; /*0x1403db54a*/
  *(_QWORD *)&v27 = 23; /*0x1403db551*/
  *((_QWORD *)&v27 + 1) = aOrderedids; /*0x1403db563*/
  *(_QWORD *)&v28 = 10; /*0x1403db56a*/
  *((_QWORD *)&v28 + 1) = v16; /*0x1403db575*/
  v29 = &v39; /*0x1403db57c*/
  v44 = 1; /*0x1403db583*/
  sub_140214640(v25, &v26); /*0x1403db598*/
  if ( v25[0] == 6 ) /*0x1403db5a5*/
  {
    v36 = *(_QWORD *)&v25[24]; /*0x1403db5b2*/
    v35 = *(_OWORD *)&v25[8]; /*0x1403db5c0*/
    v44 = 1; /*0x1403db5c7*/
    sub_140024160(&v18, v3, &v35); /*0x1403db5df*/
    sub_1412762D0((__m128i *)v25, (const __m128i *)(a1 + 520), 0x190u); /*0x1403db5f5*/
    if ( !__OFSUB__(0, v18.m128i_i64[0]) ) /*0x1403db603*/
    {
      sub_1412762D0((__m128i *)&v26, &v18, 0x1A8u); /*0x1403db6ef*/
LABEL_17:
      v43 = 0; /*0x1403db80c*/
      sub_1407B0DA0(v25, &v26); /*0x1403db821*/
      goto LABEL_18; /*0x1403db821*/
    }
    v6 = v18.m128i_i64[1]; /*0x1403db609*/
    v7 = v19; /*0x1403db610*/
    *((_QWORD *)&v8 + 1) = v20; /*0x1403db617*/
    if ( v20 < 0 ) /*0x1403db621*/
    {
      v9 = 0; /*0x1403db627*/
      goto LABEL_8; /*0x1403db627*/
    }
    if ( v20 ) /*0x1403db792*/
    {
      nullsub_1(v5, v4); /*0x1403db798*/
      v9 = 1; /*0x1403db79d*/
      v10 = (__m128i *)sub_140001360(*((__int64 *)&v8 + 1), 1); /*0x1403db7aa*/
      if ( !v10 ) /*0x1403db7b2*/
      {
LABEL_8:
        v41 = v7; /*0x1403db629*/
        v42 = v6; /*0x1403db630*/
        sub_1412AD46B(v9, *((_QWORD *)&v8 + 1)); /*0x1403db63d*/
      }
      *(_QWORD *)&v8 = v10; /*0x1403db7b8*/
      sub_1412762D0(v10, v7, *((unsigned __int64 *)&v8 + 1)); /*0x1403db7c4*/
      if ( !v6 ) /*0x1403db7cc*/
        goto LABEL_16; /*0x1403db7cc*/
    }
    else
    {
      *(_QWORD *)&v8 = 1; /*0x1403db8ce*/
      if ( !v18.m128i_i64[1] ) /*0x1403db8d6*/
        goto LABEL_16; /*0x1403db8d6*/
    }
    sub_140001370((__int64)v7, v6, 1); /*0x1403db7da*/
LABEL_16:
    LOBYTE(v27) = 3; /*0x1403db7df*/
    *((_QWORD *)&v27 + 1) = *((_QWORD *)&v8 + 1); /*0x1403db7e6*/
    v28 = v8; /*0x1403db7ed*/
    v26 = 0x8000000000000000uLL; /*0x1403db805*/
    goto LABEL_17; /*0x1403db805*/
  }
  v28 = *(_OWORD *)&v25[16]; /*0x1403db653*/
  v27 = *(_OWORD *)v25; /*0x1403db65a*/
  sub_1412762D0(v14, (const __m128i *)(a1 + 520), 0x168u); /*0x1403db671*/
  v31 = *(_OWORD *)(a1 + 880); /*0x1403db684*/
  v32 = *(_QWORD *)(a1 + 896); /*0x1403db692*/
  v26 = 1; /*0x1403db6a5*/
  v44 = 0; /*0x1403db6b0*/
  invoke_resolver_respond_sys(v14, v22, (__int64)&v26, &v31, v23, v24); /*0x1403db6d0*/
LABEL_18:
  if ( !__OFSUB__(0, (_QWORD)v39) ) /*0x1403db830*/
  {
    v11 = *((_QWORD **)&v39 + 1); /*0x1403db832*/
    v41 = v40; /*0x1403db840*/
    v42 = 0; /*0x1403db847*/
    v38 = *((_QWORD *)&v39 + 1); /*0x1403db852*/
    while ( v41 != (const __m128i *)v42 ) /*0x1403db86e*/
    {
      ++v42; /*0x1403db873*/
      v12 = v11 + 12; /*0x1403db87a*/
      sub_1401EEBE0(v11); /*0x1403db87e*/
      v11 = v12; /*0x1403db884*/
    }
    if ( (_QWORD)v39 ) /*0x1403db893*/
      sub_140001370(*((__int64 *)&v39 + 1), 96 * v39, 8); /*0x1403db8aa*/
  }
  return sub_140406280(v16); /*0x1403db8bc*/
}