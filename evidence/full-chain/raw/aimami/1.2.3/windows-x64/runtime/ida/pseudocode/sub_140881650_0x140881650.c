// module: codexmate_lib/core/voice/runtime
// addr: 0x140881650
// name: sub_140881650
// win 1.2.1 | module src/core/voice/runtime/mod.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140881650(__int64 a1, __int64 a2)
{
  __int64 v4; // rbx
  __int64 result; // rax
  __int64 v6; // rbx
  __int128 v7; // [rsp+20h] [rbp-30h] BYREF
  __int64 v8; // [rsp+30h] [rbp-20h]
  __int128 v9; // [rsp+38h] [rbp-18h] BYREF
  __int64 v10; // [rsp+48h] [rbp-8h]
  __int64 v11; // [rsp+50h] [rbp+0h]

  v11 = -2;
  if ( *(_BYTE *)(a2 + 391) == 1 )
  {
    v4 = *(_QWORD *)(a2 + 368);
    sub_14149C500(&v9, a2 + 120);
    sub_14149C500(&v7, a2 + 144);
    result = *(_QWORD *)(a2 + 376);
    *(_QWORD *)(a1 + 48) = v4;
    *(_OWORD *)a1 = v9;
    *(_QWORD *)(a1 + 16) = v10;
    *(_OWORD *)(a1 + 24) = v7;
    *(_QWORD *)(a1 + 40) = v8;
    *(_BYTE *)(a1 + 64) = 1;
  }
  else
  {
    v6 = *(_QWORD *)(a2 + 352);
    sub_14149C500(&v9, a2 + 72);
    sub_14149C500(&v7, a2 + 96);
    result = *(_QWORD *)(a2 + 360);
    *(_QWORD *)(a1 + 48) = v6;
    *(_OWORD *)a1 = v9;
    *(_QWORD *)(a1 + 16) = v10;
    *(_OWORD *)(a1 + 24) = v7;
    *(_QWORD *)(a1 + 40) = v8;
    *(_BYTE *)(a1 + 64) = 0;
  }
  *(_QWORD *)(a1 + 56) = result;
  return result;
}