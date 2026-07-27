// module: codexmate_lib/core/relay/quota
// addr: 0x14046d5f0
// name: sub_14046D5F0
// win 1.2.1 | module src/core/relay/quota.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_14046D5F0(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v4; // rcx
  __int64 v5; // r14
  __int64 v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // r12
  __int64 v10; // r13
  __int64 v11; // r15
  __int64 v12; // rbx
  __int64 v13; // rdi
  __int64 v14; // rax
  int v15; // edx
  int v16; // ecx
  unsigned int v17; // ecx
  __int64 v18; // r10
  __int64 v19; // r11
  unsigned __int64 v20; // rcx
  _QWORD *v21; // rax
  __int128 v23; // [rsp+28h] [rbp-58h] BYREF
  __int64 v24; // [rsp+38h] [rbp-48h]
  __int64 v25; // [rsp+40h] [rbp-40h]
  __int64 v26; // [rsp+48h] [rbp-38h]
  _DWORD v27[3]; // [rsp+54h] [rbp-2Ch] BYREF
  __int64 v28; // [rsp+60h] [rbp-20h]
  __int64 v29; // [rsp+68h] [rbp-18h]
  __int64 v30; // [rsp+70h] [rbp-10h]
  __int64 v31; // [rsp+78h] [rbp-8h]
  _QWORD *v32; // [rsp+80h] [rbp+0h]
  char v33; // [rsp+8Eh] [rbp+Eh]
  char v34; // [rsp+8Fh] [rbp+Fh]
  __int64 v35; // [rsp+90h] [rbp+10h]

  v35 = -2;
  v32 = a2;
  v34 = 1;
  sub_14149C500(&v23, a3);
  v5 = v32[4];
  if ( v5 < 0 )
  {
    v6 = 0;
    goto LABEL_3;
  }
  if ( v5 )
  {
    v7 = v32[3];
    nullsub_1(v4);
    v6 = 1;
    v8 = sub_140001650(v5, 1);
    if ( !v8 )
    {
LABEL_3:
      v33 = 1;
      sub_1416C2D4B(v6, v5);
    }
    v29 = v8;
    sub_141684120(v8, v7, v5);
  }
  else
  {
    v29 = 1;
  }
  v9 = *v32;
  v10 = v32[1];
  v11 = v32[6];
  v28 = v5;
  v25 = v9;
  v26 = v10;
  if ( v11 < 0 )
  {
    v12 = 0;
    goto LABEL_10;
  }
  v31 = v11;
  if ( v11 )
  {
    v13 = v32[5];
    nullsub_1(v4);
    v12 = 1;
    v14 = sub_140001650(v11, 1);
    if ( !v14 )
LABEL_10:
      sub_1416C2D4B(v12, v11);
    v30 = v14;
    sub_141684120(v14, v13, v11);
  }
  else
  {
    v30 = 1;
  }
  sub_140FFA6E0(v27);
  v15 = (v27[0] >> 13) - 1;
  v16 = 0;
  if ( v27[0] >> 13 <= 0 )
  {
    v17 = (1 - (v27[0] >> 13)) / 0x190u + 1;
    v15 += 400 * v17;
    v16 = -146097 * v17;
  }
  v18 = v28;
  v19 = v31;
  v20 = 1000
      * (v27[1]
       + 86400LL * (((v15 / 100) >> 2) + ((1461 * v15) >> 2) + v16 + ((v27[0] >> 4) & 0x1FF) - v15 / 100 - 719163))
      + v27[2] / 0xF4240uLL;
  *(_QWORD *)(a1 + 16) = v24;
  *(_OWORD *)a1 = v23;
  *(_QWORD *)(a1 + 24) = v18;
  *(_QWORD *)(a1 + 32) = v29;
  *(_QWORD *)(a1 + 40) = v18;
  *(_BYTE *)(a1 + 128) = 0;
  v21 = v32;
  *(_OWORD *)(a1 + 72) = *(_OWORD *)v32;
  *(_QWORD *)(a1 + 88) = v21[2];
  *(_QWORD *)(a1 + 48) = v19;
  *(_QWORD *)(a1 + 56) = v30;
  *(_QWORD *)(a1 + 64) = v19;
  *(_QWORD *)(a1 + 120) = v20;
  *(_QWORD *)(a1 + 96) = -1;
  return a1;
}