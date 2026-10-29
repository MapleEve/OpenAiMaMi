// win 1.2.7 | module src/core/codex_app_server/models.rs | ea 0x140e18190 | name sub_140E18190
// win 1.2.7 | module src/core/codex_app_server/models.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int128 *__fastcall sub_140E18190(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 a5, __int128 *a6)
{
  __int64 v10; // rax
  unsigned int v11; // edx
  unsigned __int64 v12; // rax
  int v13; // edx
  __int64 v14; // rcx
  __int128 v15; // xmm0
  bool v16; // r8
  int v17; // ecx
  __int64 v18; // rdx
  __int64 v20; // rax
  _OWORD v21[2]; // [rsp+40h] [rbp-30h] BYREF
  __int128 *v22; // [rsp+60h] [rbp-10h]
  char v23; // [rsp+6Fh] [rbp-1h]
  __int64 v24; // [rsp+70h] [rbp+0h]

  v24 = -2;
  v22 = a6;
  v10 = sub_14167FC00();
  v23 = 1;
  v12 = sub_14167FA50(a2, v10, v11);
  if ( v12 || v13 )
  {
    v15 = *v22;
    v21[1] = v22[1];
    v21[0] = v15;
    v16 = v12 >= 0xB;
    if ( v12 == 10 )
      v16 = v13 != 0;
    v17 = 0;
    if ( !v16 )
      v17 = v13;
    v18 = 10;
    if ( !v16 )
      v18 = v12;
    v23 = 0;
    return sub_140C1BC30((__int128 *)a1, a3, a4, a5, (__int64)v21, v18, v17);
  }
  else
  {
    nullsub_1(v14);
    v20 = sub_140001650(50, 1);
    if ( !v20 )
    {
      v23 = 1;
      sub_141938D2B(1, 50);
    }
    *(_OWORD *)(v20 + 32) = xmmword_141A52E90;
    *(_OWORD *)(v20 + 16) = xmmword_141A52E80;
    *(_OWORD *)v20 = xmmword_141A52E70;
    *(_WORD *)(v20 + 48) = -24182;
    *(_QWORD *)a1 = 10;
    *(_QWORD *)(a1 + 8) = 50;
    *(_QWORD *)(a1 + 16) = v20;
    *(_QWORD *)(a1 + 24) = 50;
    return (__int128 *)sub_140DF44E0(v22);
  }
}
