// module: codexmate_lib/core/relay/translator
// addr: 0x1409c6650
// name: sub_1409C6650
// win 1.2.1 | module src/core/relay/translator.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
void __fastcall sub_1409C6650(__int64 a1, _QWORD *a2)
{
  __int64 v3; // r14
  unsigned __int64 v4; // rdi
  __int64 v5; // rbx
  __int64 v6; // [rsp+28h] [rbp-28h] BYREF
  __int64 v7; // [rsp+30h] [rbp-20h]
  unsigned __int64 v8; // [rsp+38h] [rbp-18h]
  __int64 v9; // [rsp+40h] [rbp-10h]
  __int64 v10; // [rsp+48h] [rbp-8h]

  v10 = -2;
  if ( !*(_BYTE *)(a1 + 364) )
  {
    sub_1409B6EC0((__int64)&v6, a1);
    v3 = v7;
    v4 = v8;
    v5 = a2[2];
    if ( v8 > *a2 - v5 )
    {
      v9 = v7;
      sub_141688D30((_DWORD)a2, v5, v8, 1, 1);
      v5 = a2[2];
      v3 = v9;
    }
    else if ( !v8 )
    {
      goto LABEL_5;
    }
    sub_141684120(v5 + a2[1], v3, v4);
LABEL_5:
    a2[2] = v4 + v5;
    if ( v6 )
      sub_140001660(v3, v6, 1);
  }
}