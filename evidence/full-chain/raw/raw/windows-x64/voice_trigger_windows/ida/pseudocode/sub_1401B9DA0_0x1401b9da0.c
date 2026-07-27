// module: codexmate_lib/platform/voice_trigger_windows
// addr: 0x1401b9da0
// name: sub_1401B9DA0
// win 1.2.1 | module src/platform/voice_trigger_windows.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
void __fastcall sub_1401B9DA0(__int128 *a1, __int64 a2)
{
  __int64 *v2; // rsi
  char v3; // al
  __int64 v4; // rcx
  char v5; // al
  __int128 v6; // xmm0
  char v7; // al
  char v8; // [rsp+2Ch] [rbp-14h]
  __int128 *v9; // [rsp+30h] [rbp-10h]

  v9 = a1;
  if ( dword_141EC2090 )
    sub_141698136(&byte_141EC2068);
  LOBYTE(a1) = 1;
  if ( _InterlockedCompareExchange8(&byte_141EC2068, 1, 0) )
    sub_1416C15B0(&byte_141EC2068);
  v2 = off_141EC90B8;
  if ( 2 * *off_141EC90B8 )
  {
    v3 = sub_1416C2250(a1, a2) ^ 1;
    v4 = (unsigned __int8)byte_141EC2069;
    if ( byte_141EC2069 )
    {
LABEL_7:
      if ( !v3 && 2 * *v2 && !(unsigned __int8)sub_1416C2250(v4, a2) )
        byte_141EC2069 = 1;
      v5 = byte_141EC2068;
      byte_141EC2068 = 0;
      if ( v5 == 2 )
        WakeByAddressSingle(&byte_141EC2068);
      if ( *(_DWORD *)v9 != -1 )
      {
        sub_140264240(v9);
        sub_140264080(v9 + 1);
      }
      return;
    }
  }
  else
  {
    v3 = 0;
    v4 = (unsigned __int8)byte_141EC2069;
    if ( byte_141EC2069 )
      goto LABEL_7;
  }
  v8 = v3;
  if ( (_DWORD)xmmword_141EC2070 != -1 )
  {
    sub_140264240(&xmmword_141EC2070);
    sub_140264080(&xmmword_141EC2080);
  }
  v6 = *v9;
  xmmword_141EC2080 = v9[1];
  xmmword_141EC2070 = v6;
  if ( !v8 && 2 * *v2 && !(unsigned __int8)sub_1416C2250(v4, a2) )
    byte_141EC2069 = 1;
  v7 = byte_141EC2068;
  byte_141EC2068 = 0;
  if ( v7 == 2 )
    WakeByAddressSingle(&byte_141EC2068);
}