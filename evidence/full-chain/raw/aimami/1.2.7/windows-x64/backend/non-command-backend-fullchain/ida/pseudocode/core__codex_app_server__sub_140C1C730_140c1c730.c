// win 1.2.7 | module src/core/codex_app_server.rs | ea 0x140c1c730 | name sub_140C1C730
// win 1.2.7 | module src/core/codex_app_server.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140C1C730(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v10; // [rsp+20h] [rbp-10h] BYREF
  __int64 v11; // [rsp+28h] [rbp-8h]
  __int64 v12; // [rsp+30h] [rbp+0h]

  v12 = -2;
  v3 = a3;
  if ( *(_DWORD *)(a2 + 64) == 1 )
  {
    v5 = a2 + 72;
    v10 = a2 + 72;
    v11 = a3;
    v6 = sub_140BE5220(a3, &v10);
    if ( v6 )
    {
      *a1 = 3;
      a1[1] = v6;
    }
    else
    {
      v8 = sub_140CA00F0(v5, asc_141A3ABD1, 1);
      if ( v8 )
      {
        *a1 = 2;
        a1[1] = v8;
      }
      else
      {
        *a1 = -1;
      }
    }
    v3 = v11;
  }
  else
  {
    nullsub_1(a1);
    v7 = sub_140001650(40, 1);
    if ( !v7 )
    {
      v11 = v3;
      sub_141938D2B(1, 40);
    }
    *(_OWORD *)(v7 + 16) = xmmword_141A3B031;
    *(_OWORD *)v7 = xmmword_141A3B021;
    *(_QWORD *)(v7 + 32) = 0xAD97E9B385E5B2B7uLL;
    *a1 = 10;
    a1[1] = 40;
    a1[2] = v7;
    a1[3] = 40;
  }
  return sub_14002F9D0(v3);
}
