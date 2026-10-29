// win 1.2.7 | module src/core/relay/anthropic_history.rs | ea 0x14037b040 | name sub_14037B040
// win 1.2.7 | module src/core/relay/anthropic_history.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
void __fastcall sub_14037B040(__int64 a1)
{
  unsigned __int64 v1; // r13
  __int64 v3; // rsi
  __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  __int64 v7; // rax
  __int128 v8; // xmm0
  __int128 *v9; // rdi
  __int64 v10; // rax
  __int64 v11; // [rsp+30h] [rbp-20h]
  __int64 v12; // [rsp+48h] [rbp-8h]

  v1 = *(_QWORD *)(a1 + 16);
  if ( v1 )
  {
    v3 = *(_QWORD *)(a1 + 8);
    v4 = 0;
    v12 = v3;
    while ( 1 )
    {
      v5 = sub_1416419F0(aType_5, 4, v3);
      if ( v5 )
      {
        if ( *(_BYTE *)v5 == 3
          && *(_QWORD *)(v5 + 24) == 11
          && !(**(_QWORD **)(v5 + 16) ^ 0x7365725F6C6F6F74LL
             | *(_QWORD *)(*(_QWORD *)(v5 + 16) + 3LL) ^ 0x746C757365725F6CLL) )
        {
          break;
        }
      }
      ++v4;
      v3 += 32;
      if ( v1 == v4 )
        return;
    }
    v11 = a1;
    v6 = v4 + 1;
    sub_1403880E0(v3);
    while ( v6 < v1 )
    {
      v9 = (__int128 *)(v12 + 32 * v6);
      v10 = sub_1416419F0(aType_5, 4, v9);
      if ( v10
        && *(_BYTE *)v10 == 3
        && *(_QWORD *)(v10 + 24) == 11
        && !(**(_QWORD **)(v10 + 16) ^ 0x7365725F6C6F6F74LL
           | *(_QWORD *)(*(_QWORD *)(v10 + 16) + 3LL) ^ 0x746C757365725F6CLL) )
      {
        ++v6;
        sub_1403880E0(v9);
      }
      else
      {
        v7 = 32 * v4;
        v8 = *v9;
        *(_OWORD *)(v12 + v7 + 16) = v9[1];
        *(_OWORD *)(v12 + v7) = v8;
        ++v4;
        ++v6;
      }
    }
    *(_QWORD *)(v11 + 16) = v4;
  }
}
