// module: codexmate_lib/core/voice/aliyun_asr
// addr: 0x140b96790
// name: sub_140B96790
// win 1.2.1 | module src/core/voice/aliyun_asr.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140B96790(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v5; // r14
  __int64 v6; // rdi
  __int64 v7; // r15
  __int64 v8; // rax
  _OWORD *v9; // rbx
  __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  __int64 v12; // rax
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm2
  __int64 v18; // [rsp+28h] [rbp-B0h] BYREF
  __int128 v19; // [rsp+30h] [rbp-A8h]
  __int128 v20; // [rsp+40h] [rbp-98h]
  __int128 v21; // [rsp+50h] [rbp-88h]
  __int128 v22; // [rsp+60h] [rbp-78h]
  __int128 v23; // [rsp+70h] [rbp-68h]
  __int128 v24; // [rsp+80h] [rbp-58h]
  __int128 v25; // [rsp+90h] [rbp-48h]
  __int128 v26; // [rsp+A0h] [rbp-38h]

  v5 = *a2;
  if ( *a2 == -1 )
  {
    v6 = a2[5];
    goto LABEL_16;
  }
  v6 = a2[5];
  v7 = a3;
  sub_1406B7100(&v18, v6, a3);
  v8 = v18;
  if ( v18 == -2 )
  {
LABEL_20:
    *(_QWORD *)a1 = v8;
    return a1;
  }
  if ( (_DWORD)v18 != -1 )
  {
LABEL_19:
    *(_OWORD *)(a1 + 120) = v26;
    *(_OWORD *)(a1 + 104) = v25;
    *(_OWORD *)(a1 + 88) = v24;
    *(_OWORD *)(a1 + 72) = v23;
    v14 = v19;
    v15 = v20;
    v16 = v21;
    *(_OWORD *)(a1 + 56) = v22;
    *(_OWORD *)(a1 + 40) = v16;
    *(_OWORD *)(a1 + 24) = v15;
    *(_OWORD *)(a1 + 8) = v14;
    goto LABEL_20;
  }
  *a2 = -1;
  v9 = a2 + 1;
  v10 = *(_QWORD *)v6;
  a3 = v7;
  if ( *(_QWORD *)v6 != -1 )
  {
    v11 = 5;
    if ( v10 < 0 )
      v11 = v10 ^ 0x8000000000000000uLL;
    if ( v11 < 4 )
    {
      v12 = v6 + 8;
      v10 = *(_QWORD *)(v6 + 8);
      goto LABEL_13;
    }
    v12 = v6;
    if ( v11 != 4 )
    {
LABEL_13:
      if ( v10 )
      {
        sub_140001660(*(_QWORD *)(v12 + 8), v10, 1);
        a3 = v7;
      }
      goto LABEL_15;
    }
    v10 = *(_QWORD *)(v6 + 8);
    if ( (unsigned __int64)v10 <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      v12 = v6 + 8;
      goto LABEL_13;
    }
  }
LABEL_15:
  *(_QWORD *)v6 = v5;
  v13 = v9[1];
  *(_OWORD *)(v6 + 8) = *v9;
  *(_OWORD *)(v6 + 24) = v13;
LABEL_16:
  sub_1406B6DC0(&v18, v6, a3);
  v8 = v18;
  if ( v18 == -2 )
    goto LABEL_20;
  if ( (_DWORD)v18 != -1 )
    goto LABEL_19;
  *(_QWORD *)a1 = -1;
  return a1;
}