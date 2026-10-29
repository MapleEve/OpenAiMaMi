// win 1.2.7 | module src/core/relay/manager.rs | ea 0x1401bda50 | name sub_1401BDA50
// win 1.2.7 | module src/core/relay/manager.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1401BDA50(__int64 a1, __int64 a2)
{
  char v4; // bl
  __int128 v6; // [rsp+28h] [rbp-48h] BYREF
  __int64 v7; // [rsp+38h] [rbp-38h]
  __int128 v8; // [rsp+40h] [rbp-30h] BYREF
  __int64 v9; // [rsp+50h] [rbp-20h]
  __int64 v10; // [rsp+58h] [rbp-18h] BYREF
  __int64 v11; // [rsp+60h] [rbp-10h]
  __int64 v12; // [rsp+68h] [rbp-8h]
  __int64 v13; // [rsp+70h] [rbp+0h]

  v13 = -2;
  sub_1403DCEA0(&v8, *(_QWORD *)(a2 + 8), *(_QWORD *)(a2 + 8) + (*(_QWORD *)(a2 + 16) << 8));
  sub_140229570(&v6, a2);
  v4 = *(_BYTE *)(a2 + 382);
  if ( v4 )
  {
    sub_1403F7D40(&v10, a2 + 128);
  }
  else
  {
    v10 = 0;
    v11 = 8;
    v12 = 0;
  }
  *(_QWORD *)(a1 + 112) = v9;
  *(_OWORD *)(a1 + 96) = v8;
  *(_OWORD *)(a1 + 120) = v6;
  *(_QWORD *)(a1 + 136) = v7;
  *(_BYTE *)(a1 + 168) = v4;
  *(_QWORD *)(a1 + 144) = v10;
  *(_QWORD *)(a1 + 152) = v11;
  *(_QWORD *)(a1 + 160) = v12;
  *(_QWORD *)a1 = -1;
  return a1;
}
