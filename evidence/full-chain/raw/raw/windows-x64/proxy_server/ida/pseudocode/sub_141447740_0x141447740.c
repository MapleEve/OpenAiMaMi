// module: codexmate_lib/core/relay/proxy_server
// addr: 0x141447740
// name: sub_141447740
// win 1.2.1 | module src/core/relay/proxy_server.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 (__fastcall ***__fastcall sub_141447740(__int64 (__fastcall ***a1)(), __int64 (__fastcall ***a2)()))()
{
  __int64 (__fastcall *v3)(); // r14
  __int64 (__fastcall **v4)(); // rbx
  __int64 (__fastcall **v5)(); // rdi
  __int64 (__fastcall **v6)(); // rax
  __int64 (__fastcall **v7)(); // rax

  v3 = (__int64 (__fastcall *)())*a2;
  v4 = a2[1];
  v5 = a2[2];
  if ( v5 == *a2 )
  {
    if ( v5 )
    {
      a1[1] = v4;
      a1[2] = v5;
      if ( ((unsigned __int8)v4 & 1) != 0 )
      {
        a1[3] = v4;
        v6 = off_141A13408;
      }
      else
      {
        a1[3] = (__int64 (__fastcall **)())((unsigned __int64)v4 | 1);
        v6 = off_141A13430;
      }
    }
    else
    {
      a1[1] = (__int64 (__fastcall **)())1;
      *((_OWORD *)a1 + 1) = 0;
      v6 = off_141A13228;
    }
  }
  else
  {
    nullsub_1(a1);
    v7 = (__int64 (__fastcall **)())sub_140001650(24, 8);
    if ( !v7 )
      sub_1416C2D31(8, 24);
    *v7 = (__int64 (__fastcall *)())v4;
    v7[1] = v3;
    v7[2] = (__int64 (__fastcall *)())1;
    a1[1] = v4;
    a1[2] = v5;
    a1[3] = v7;
    v6 = off_141A133C8;
  }
  *a1 = v6;
  return a1;
}