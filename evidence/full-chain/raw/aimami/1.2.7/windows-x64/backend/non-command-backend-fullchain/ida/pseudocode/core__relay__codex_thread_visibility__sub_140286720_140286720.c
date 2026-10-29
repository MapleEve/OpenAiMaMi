// win 1.2.7 | module src/core/relay/codex_thread_visibility.rs | ea 0x140286720 | name sub_140286720
// win 1.2.7 | module src/core/relay/codex_thread_visibility.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140286720(_QWORD *a1, __int64 a2)
{
  unsigned __int64 v2; // r15
  __int64 v5; // r12
  unsigned __int64 v6; // rbx
  bool v7; // cc
  unsigned __int64 v8; // rbx
  __int64 v9; // r14
  bool v10; // zf
  __int64 result; // rax
  __int64 v12; // r13
  unsigned __int64 v13; // r8
  __int64 v14; // rbx
  _QWORD v15[2]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v16; // [rsp+30h] [rbp-48h]
  char v17; // [rsp+38h] [rbp-40h]

  v2 = a1[2];
  if ( !v2 )
    return 0;
  v5 = *(_QWORD *)(a2 + 16);
  v6 = *(_QWORD *)(a2 + 8) - v5;
  v7 = v6 <= v2;
  v8 = v6 - v2;
  if ( v7 )
  {
    result = sub_141685420(*a1, a2);
    a1[2] = v2 + v5 - *(_QWORD *)(a2 + 16);
  }
  else
  {
    v9 = v5 + *(_QWORD *)a2;
    v10 = *(_BYTE *)(a2 + 24) == 0;
    v15[0] = v9;
    v15[1] = v2;
    v16 = 0;
    v17 = 0;
    if ( v10 )
    {
      result = sub_141685420(*a1, v15);
      v12 = v16;
      if ( v17 )
      {
        v13 = v8;
        v14 = result;
        sub_1418F4C70(v2 + v9, 0, v13);
        result = v14;
        *(_BYTE *)(a2 + 24) = 1;
      }
    }
    else
    {
      v17 = 1;
      result = sub_141685420(*a1, v15);
      v12 = v16;
    }
    *(_QWORD *)(a2 + 16) = v12 + v5;
    a1[2] = v2 - v12;
  }
  return result;
}
