// module: codexmate_lib/core/repository
// addr: 0x1403c75b0
// name: sub_1403C75B0
// win 1.2.1 | module src/core/repository.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1403C75B0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  unsigned __int64 v14; // r9
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm2
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v21; // [rsp+28h] [rbp-58h] BYREF
  __int64 v22; // [rsp+30h] [rbp-50h]
  __int64 v23; // [rsp+38h] [rbp-48h]
  unsigned __int64 v24; // [rsp+40h] [rbp-40h]
  __int128 v25; // [rsp+48h] [rbp-38h]
  __int128 v26; // [rsp+58h] [rbp-28h]
  __int128 v27; // [rsp+68h] [rbp-18h]
  __int128 v28; // [rsp+78h] [rbp-8h]
  __int64 v29; // [rsp+88h] [rbp+8h]
  __int64 v30; // [rsp+90h] [rbp+10h]
  __int64 v31; // [rsp+98h] [rbp+18h]

  v31 = -2;
  v8 = sub_1414740B0(a2, a3);
  if ( v8 && (LOBYTE(v21) = 1, (v10 = sub_14147B9A0(&v21, v8, v9)) != 0) )
  {
    *(_QWORD *)a1 = 2;
    *(_QWORD *)(a1 + 8) = v10;
  }
  else
  {
    sub_1403C6E20(&v21, a4);
    v11 = v21;
    v12 = v22;
    v13 = v23;
    v14 = v24;
    if ( v21 == -1 )
    {
      v30 = v22;
      v29 = v23;
      v18 = sub_1408726C0(a2, a3, v23, v24);
      if ( v18 )
      {
        *(_QWORD *)a1 = 2;
        *(_QWORD *)(a1 + 8) = v18;
        v19 = v30;
        if ( !v30 )
          return a1;
      }
      else
      {
        *(_QWORD *)a1 = -1;
        v19 = v30;
        if ( !v30 )
          return a1;
      }
      sub_140001660(v29, v19, 1);
      return a1;
    }
    v15 = v25;
    v16 = v26;
    v17 = v27;
    *(_OWORD *)(a1 + 80) = v28;
    *(_OWORD *)(a1 + 64) = v17;
    *(_OWORD *)(a1 + 48) = v16;
    *(_OWORD *)(a1 + 32) = v15;
    *(_QWORD *)(a1 + 8) = v12;
    *(_QWORD *)(a1 + 16) = v13;
    *(_QWORD *)(a1 + 24) = v14;
    *(_QWORD *)a1 = v11;
  }
  return a1;
}