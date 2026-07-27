// module: codexmate_lib/core/voice/runtime
// addr: 0x1405d9070
// name: sub_1405D9070
// win 1.2.1 | module src/core/voice/runtime/mod.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
void __fastcall sub_1405D9070(__int64 a1)
{
  int v1; // eax
  __int64 v2; // rdx
  __int64 v3; // rsi
  unsigned __int64 v4; // rcx
  bool v5; // zf
  __int64 v6; // rax
  __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // [rsp+28h] [rbp-8h]

  if ( *(_BYTE *)(a1 + 40) == 4 )
  {
    v1 = *(unsigned __int8 *)(a1 + 97);
    if ( v1 == 4 )
    {
      v7 = *(_QWORD *)(a1 + 104);
      v12 = a1;
      if ( v7 != -1 )
      {
        v8 = 5;
        if ( v7 < 0 )
          v8 = v7 ^ 0x8000000000000000uLL;
        if ( v8 >= 4 )
        {
          v9 = 104;
          if ( v8 == 4 )
          {
            v7 = *(_QWORD *)(v12 + 112);
            v9 = 112;
            if ( (unsigned __int64)v7 > 0xFFFFFFFFFFFFFFFDuLL )
              goto LABEL_23;
          }
        }
        else
        {
          v7 = *(_QWORD *)(v12 + 112);
          v9 = 112;
        }
        if ( v7 )
          sub_140001660(*(_QWORD *)(v12 + v9 + 8), v7, 1);
      }
LABEL_23:
      a1 = v12;
      if ( *(_BYTE *)(v12 + 96) )
      {
        v10 = *(_QWORD *)(v12 + 104);
        if ( v10 )
        {
          sub_140001660(*(_QWORD *)(v12 + 112), v10, 1);
          a1 = v12;
        }
      }
      *(_BYTE *)(a1 + 96) = 0;
      goto LABEL_27;
    }
    if ( v1 != 3 )
    {
LABEL_27:
      v11 = *(_QWORD *)(a1 + 48);
      if ( v11 )
        sub_140001660(*(_QWORD *)(a1 + 56), 2 * v11, 2);
      return;
    }
    v2 = *(_QWORD *)(a1 + 128);
    if ( v2 != -1 )
    {
      v3 = a1;
      v4 = 5;
      if ( v2 < 0 )
        v4 = v2 ^ 0x8000000000000000uLL;
      v5 = v4 == 4;
      if ( v4 < 4 )
      {
        a1 = v3;
        v2 = *(_QWORD *)(v3 + 136);
        v6 = 136;
        goto LABEL_16;
      }
      v6 = 128;
      a1 = v3;
      if ( !v5 || (v2 = *(_QWORD *)(v3 + 136), v6 = 136, (unsigned __int64)v2 <= 0xFFFFFFFFFFFFFFFDuLL) )
      {
LABEL_16:
        if ( v2 )
        {
          sub_140001660(*(_QWORD *)(v3 + v6 + 8), v2, 1);
          a1 = v3;
        }
      }
    }
    v12 = a1;
    sub_1400104F0(a1 + 176);
    goto LABEL_23;
  }
}