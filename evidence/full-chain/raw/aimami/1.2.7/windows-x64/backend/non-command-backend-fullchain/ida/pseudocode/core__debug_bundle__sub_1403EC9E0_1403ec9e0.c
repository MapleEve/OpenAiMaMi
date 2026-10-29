// win 1.2.7 | module src/core/debug_bundle.rs | ea 0x1403ec9e0 | name sub_1403EC9E0
// win 1.2.7 | module src/core/debug_bundle.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1403EC9E0(__int64 a1, __int128 *a2)
{
  unsigned __int64 v2; // r15
  __int64 v3; // r14
  __int128 *v5; // r12
  __int64 v6; // rax
  __int64 v7; // rdi
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm2
  __int64 v11; // rax
  _OWORD v13[4]; // [rsp+20h] [rbp-60h] BYREF
  __int64 v14; // [rsp+60h] [rbp-20h]
  __int128 v15; // [rsp+70h] [rbp-10h] BYREF
  __int64 v16; // [rsp+80h] [rbp+0h]
  __int128 v17; // [rsp+88h] [rbp+8h]
  __int64 v18; // [rsp+A0h] [rbp+20h]
  __int64 v19; // [rsp+A8h] [rbp+28h]

  v19 = -2;
  v2 = *((_QWORD *)a2 + 8);
  if ( v2 > 0x555555555555555LL )
  {
    v3 = 0;
    goto LABEL_3;
  }
  if ( 24 * v2 )
  {
    v5 = a2;
    nullsub_1(a1);
    v3 = 8;
    v6 = sub_140001650(24 * v2, 8);
    if ( !v6 )
LABEL_3:
      sub_141938D2B(v3, 24 * v2);
    v7 = v6;
    a2 = v5;
  }
  else
  {
    v7 = 8;
    v2 = 0;
  }
  *(_QWORD *)&v17 = v2;
  *((_QWORD *)&v17 + 1) = v7;
  v14 = *((_QWORD *)a2 + 8);
  v8 = *a2;
  v9 = a2[1];
  v10 = a2[2];
  v13[3] = a2[3];
  v13[2] = v10;
  v13[1] = v9;
  v13[0] = v8;
  v18 = 0;
  while ( 1 )
  {
    v11 = sub_140E90110(v13);
    if ( !v11 )
      break;
    sub_1416AC440(&v15, v11);
    *(_QWORD *)(v7 + 16) = v16;
    *(_OWORD *)v7 = v15;
    ++v18;
    v7 += 24;
  }
  *(_QWORD *)(a1 + 16) = v18;
  *(_OWORD *)a1 = v17;
  return a1;
}
