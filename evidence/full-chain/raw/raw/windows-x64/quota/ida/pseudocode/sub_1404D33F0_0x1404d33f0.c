// module: codexmate_lib/core/relay/quota
// addr: 0x1404d33f0
// name: sub_1404D33F0
// win 1.2.1 | module src/core/relay/quota.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1404D33F0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // r15
  __int64 v15; // rdi
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r9
  unsigned int v19; // r15d
  int v20; // r12d
  int v21; // r13d
  bool v22; // zf
  __int64 v23; // r14
  unsigned int v24; // eax
  __int64 v25; // r10
  unsigned int v26; // r8d
  __int64 v27; // rax
  __int64 v28; // rbx
  __int64 v29; // rax
  __int128 v31; // [rsp+20h] [rbp-50h] BYREF
  __int64 v32; // [rsp+30h] [rbp-40h]
  __int64 v33; // [rsp+38h] [rbp-38h]
  int v34; // [rsp+44h] [rbp-2Ch] BYREF
  unsigned int v35; // [rsp+48h] [rbp-28h]
  unsigned int v36; // [rsp+4Ch] [rbp-24h]
  __int64 v37; // [rsp+50h] [rbp-20h]
  __int64 v38; // [rsp+58h] [rbp-18h]
  unsigned int v39; // [rsp+64h] [rbp-Ch]
  __int64 v40; // [rsp+68h] [rbp-8h]
  __int64 v41; // [rsp+70h] [rbp+0h]

  v41 = -2;
  sub_14149C500(&v31, a2);
  if ( a4 < 0 )
  {
    v12 = 0;
    goto LABEL_3;
  }
  if ( a4 )
  {
    nullsub_1(v11);
    v12 = 1;
    v13 = sub_140001650(a4, 1);
    if ( !v13 )
LABEL_3:
      sub_1416C2D4B(v12, a4);
    v14 = v13;
    sub_141684120(v13, a3, a4);
  }
  else
  {
    v14 = 1;
  }
  v37 = a4;
  v38 = v14;
  if ( a6 < 0 )
  {
    v15 = 0;
    goto LABEL_10;
  }
  if ( a6 )
  {
    nullsub_1(v11);
    v15 = 1;
    v16 = sub_140001650(a6, 1);
    if ( !v16 )
LABEL_10:
      sub_1416C2D4B(v15, a6);
    v40 = v16;
    sub_141684120(v16, a5, a6);
  }
  else
  {
    v40 = 1;
  }
  sub_140FFA6E0(&v34);
  v18 = a8;
  v19 = v34;
  v20 = (v34 >> 13) - 1;
  v21 = 0;
  if ( v34 >> 13 <= 0 )
  {
    v24 = (1 - (v34 >> 13)) / 0x190u + 1;
    v17 = 400 * v24;
    v20 += v17;
    v21 = -146097 * v24;
    v22 = a8 == 0;
    if ( a8 < 0 )
      goto LABEL_17;
  }
  else
  {
    v22 = a8 == 0;
    if ( a8 < 0 )
    {
LABEL_17:
      v23 = 0;
      goto LABEL_18;
    }
  }
  v25 = v35;
  v26 = v36;
  if ( v22 )
  {
    v28 = 1;
  }
  else
  {
    v33 = v35;
    v39 = v36;
    nullsub_1(v17);
    v23 = 1;
    v27 = sub_140001650(a8, 1);
    v18 = a8;
    if ( !v27 )
LABEL_18:
      sub_1416C2D4B(v23, v18);
    v28 = v27;
    sub_141684120(v27, a7, a8);
    v18 = a8;
    v26 = v39;
    v25 = v33;
  }
  *(_QWORD *)(a1 + 16) = v32;
  *(_OWORD *)a1 = v31;
  v29 = v37;
  *(_QWORD *)(a1 + 24) = v37;
  *(_QWORD *)(a1 + 32) = v38;
  *(_QWORD *)(a1 + 40) = v29;
  *(_BYTE *)(a1 + 128) = 2;
  *(_QWORD *)(a1 + 72) = -1;
  *(_QWORD *)(a1 + 48) = a6;
  *(_QWORD *)(a1 + 56) = v40;
  *(_QWORD *)(a1 + 64) = a6;
  *(_QWORD *)(a1 + 120) = 1000
                        * (v25
                         + 86400LL
                         * (int)(((v20 / 100) >> 2)
                               + ((1461 * v20) >> 2)
                               + v21
                               + ((v19 >> 4) & 0x1FF)
                               - v20 / 100
                               - 719163))
                        + v26 / 0xF4240uLL;
  *(_QWORD *)(a1 + 96) = v18;
  *(_QWORD *)(a1 + 104) = v28;
  *(_QWORD *)(a1 + 112) = v18;
  return a1;
}