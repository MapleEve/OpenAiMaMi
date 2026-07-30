// win 1.2.4 delta | codexmate_lib4core5relay23codex_thread_visibility3 @ 0x1404ae140
// [FULL decompile]
// win 1.2.4 delta | codexmate_lib4core5relay23codex_thread_visibility3 | (win-native 锚点: 命令名串/跨平台签名)
__int64 __fastcall sub_1404AE140(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 result; // rax
  __int128 v5; // [rsp+20h] [rbp-40h] BYREF
  __int64 v6; // [rsp+30h] [rbp-30h]
  _QWORD v7[4]; // [rsp+38h] [rbp-28h] BYREF
  _QWORD *v8; // [rsp+58h] [rbp-8h]
  __int64 v9; // [rsp+60h] [rbp+0h]

  v9 = -2;
  v7[0] = a2;
  v7[1] = sub_1400015F0;
  v8 = a3;
  v7[2] = a3;
  v7[3] = sub_1400015F0;
  sub_141509590(&v5, &unk_1417E0287, v7);
  *(_QWORD *)(a1 + 24) = v6;
  *(_OWORD *)(a1 + 8) = v5;
  *(_QWORD *)a1 = 10;
  result = (__int64)v8;
  if ( *v8 )
    return sub_140001660(v8[1], *v8, 1);
  return result;
}
