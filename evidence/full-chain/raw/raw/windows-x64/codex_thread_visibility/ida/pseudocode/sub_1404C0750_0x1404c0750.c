// module: codexmate_lib/core/relay/codex_thread_visibility
// addr: 0x1404c0750
// name: sub_1404C0750
// win 1.2.1 | module src/core/relay/codex_thread_visibility.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1404C0750(
        __int64 a1,
        __int128 *a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        __int128 a6)
{
  __int64 v8; // r14
  __int64 v9; // rsi
  __int64 result; // rax
  __int64 v11; // r13
  __int64 v12; // r14
  __int64 v13; // r15
  __int64 v14; // r12
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int128 v18; // xmm0
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // [rsp+20h] [rbp-60h] BYREF
  __int64 v22; // [rsp+30h] [rbp-50h]
  __int128 *v23; // [rsp+38h] [rbp-48h] BYREF
  _BYTE v24[88]; // [rsp+40h] [rbp-40h] BYREF
  __int64 v25; // [rsp+98h] [rbp+18h]
  __int128 v26; // [rsp+A0h] [rbp+20h] BYREF
  __int128 v27; // [rsp+B0h] [rbp+30h]
  __int128 v28; // [rsp+C0h] [rbp+40h]
  __int128 v29; // [rsp+D0h] [rbp+50h] BYREF
  __int128 v30; // [rsp+E0h] [rbp+60h] BYREF
  __int128 v31; // [rsp+F0h] [rbp+70h] BYREF
  __int128 v32; // [rsp+100h] [rbp+80h]
  __int64 v33; // [rsp+118h] [rbp+98h]
  __int64 v34; // [rsp+120h] [rbp+A0h]

  v34 = -2;
  v33 = a1;
  v29 = a6;
  if ( a5 < a3 )
    a3 = a5;
  if ( !a3 )
  {
LABEL_18:
    result = v33;
    *(_QWORD *)v33 = -1;
    return result;
  }
  v8 = 200 * a3;
  v9 = 0;
  v25 = 200 * a3;
  while ( !sub_1404B58C0(*(_QWORD *)(a4 + v9 + 32), *(_QWORD *)(a4 + v9 + 40))
       || !sub_1404B58C0(*(_QWORD *)(a4 + v9 + 56), *(_QWORD *)(a4 + v9 + 64)) )
  {
LABEL_5:
    v9 += 200;
    a2 += 5;
    if ( v8 == v9 )
      goto LABEL_18;
  }
  if ( *((_QWORD *)a2 + 6) == -1 )
  {
    *(_QWORD *)&v26 = a2;
    *((_QWORD *)&v26 + 1) = sub_1400015F0;
    *(_QWORD *)&v27 = &v29;
    *((_QWORD *)&v27 + 1) = sub_14041F680;
    sub_14149C0F0(v24, &unk_141757EEA, &v26);
    result = *(_QWORD *)v24;
    v16 = v33;
    *(_OWORD *)(v33 + 80) = *(_OWORD *)&v24[72];
    *(_OWORD *)(v16 + 64) = *(_OWORD *)&v24[56];
    *(_OWORD *)(v16 + 48) = *(_OWORD *)&v24[40];
    *(_OWORD *)(v16 + 32) = *(_OWORD *)&v24[24];
    *(_OWORD *)(v16 + 16) = *(_OWORD *)&v24[8];
    *(_QWORD *)v16 = 10;
    *(_QWORD *)(v16 + 8) = result;
    return result;
  }
  sub_1404C6D00(&v23, *((_QWORD *)a2 + 7), *((_QWORD *)a2 + 8));
  result = (__int64)v23;
  v26 = *(_OWORD *)v24;
  v27 = *(_OWORD *)&v24[16];
  v28 = *(_OWORD *)&v24[32];
  if ( v23 != (__int128 *)-1LL )
  {
    v17 = v33;
    *(_QWORD *)(v33 + 88) = *(_QWORD *)&v24[80];
    v18 = *(_OWORD *)&v24[48];
    *(_OWORD *)(v17 + 72) = *(_OWORD *)&v24[64];
    *(_OWORD *)(v17 + 56) = v18;
    v19 = v26;
    v20 = v27;
    *(_OWORD *)(v17 + 40) = v28;
    *(_OWORD *)(v17 + 24) = v20;
    *(_OWORD *)(v17 + 8) = v19;
    *(_QWORD *)v17 = result;
    return result;
  }
  v31 = v27;
  v30 = v26;
  v32 = v28;
  v11 = v27;
  if ( (_QWORD)v27 == *((_QWORD *)&v29 + 1) )
  {
    v12 = v29;
    v13 = *((_QWORD *)&v30 + 1);
    if ( !(unsigned int)sub_1416847B0(*((_QWORD *)&v30 + 1), v29, v27) && *((_QWORD *)&v32 + 1) == v11 )
    {
      v14 = v32;
      if ( !(unsigned int)sub_1416847B0(v32, v12, v11) )
      {
        if ( (_QWORD)v30 )
          sub_140001660(v13, v30, 1);
        v8 = v25;
        if ( *((_QWORD *)&v31 + 1) )
          sub_140001660(v14, *((_QWORD *)&v31 + 1), 1);
        goto LABEL_5;
      }
    }
  }
  v23 = a2;
  *(_QWORD *)v24 = sub_1400015F0;
  *(_QWORD *)&v24[8] = &v30;
  *(_QWORD *)&v24[16] = sub_1400015F0;
  *(_QWORD *)&v24[24] = (char *)&v31 + 8;
  *(_QWORD *)&v24[32] = sub_1400015F0;
  *(_QWORD *)&v24[40] = &v29;
  *(_QWORD *)&v24[48] = sub_14041F680;
  sub_14149C0F0(&v21, &unk_14175C7A1, &v23);
  result = v22;
  v15 = v33;
  *(_QWORD *)(v33 + 24) = v22;
  *(_OWORD *)(v15 + 8) = v21;
  *(_QWORD *)v15 = 10;
  if ( (_QWORD)v30 )
    result = sub_140001660(*((_QWORD *)&v30 + 1), v30, 1);
  if ( *((_QWORD *)&v31 + 1) )
    return sub_140001660(v32, *((_QWORD *)&v31 + 1), 1);
  return result;
}