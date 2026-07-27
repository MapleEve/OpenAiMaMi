// module: codexmate_lib/core/repository
// addr: 0x1402c8df0
// name: sub_1402C8DF0
// win 1.2.1 | module src/core/repository.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1402C8DF0(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 result; // rax
  __int64 v10; // rdx

  if ( a2 )
  {
    v2 = a2;
    v3 = a1 + 160;
    do
    {
      v4 = *(_QWORD *)(v3 - 128);
      if ( v4 )
        sub_140001660(*(_QWORD *)(v3 - 120), v4, 1);
      v5 = *(_QWORD *)(v3 - 104);
      if ( v5 )
        sub_140001660(*(_QWORD *)(v3 - 96), v5, 1);
      v6 = *(_QWORD *)(v3 - 80);
      if ( v6 )
        sub_140001660(*(_QWORD *)(v3 - 72), v6, 1);
      v7 = *(_QWORD *)(v3 - 48);
      if ( v7 != -1 && v7 )
        sub_140001660(*(_QWORD *)(v3 - 40), v7, 1);
      v8 = *(_QWORD *)(v3 - 24);
      if ( v8 != -1 && v8 )
        sub_140001660(*(_QWORD *)(v3 - 16), v8, 1);
      result = sub_140015710(v3);
      v10 = *(_QWORD *)(v3 + 96);
      if ( v10 != -1 )
      {
        if ( v10 )
          result = sub_140001660(*(_QWORD *)(v3 + 104), v10, 1);
      }
      v3 += 296;
      --v2;
    }
    while ( v2 );
  }
  return result;
}