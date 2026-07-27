// module: codexmate_lib/platform/voice_trigger_windows
// addr: 0x1401bac80
// name: sub_1401BAC80
// win 1.2.1 | module src/platform/voice_trigger_windows.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
void __fastcall sub_1401BAC80(__int64 a1, __int64 a2)
{
  __int64 *v2; // rdi
  char v3; // al
  __int64 v4; // rsi
  char v5; // al
  _OWORD *v6; // rax
  char v7; // al
  _QWORD v8[3]; // [rsp+28h] [rbp-58h] BYREF
  __int64 v9; // [rsp+40h] [rbp-40h] BYREF
  __int128 v10; // [rsp+48h] [rbp-38h] BYREF
  __int64 v11; // [rsp+58h] [rbp-28h]
  __int128 v12; // [rsp+60h] [rbp-20h] BYREF
  __int64 v13; // [rsp+70h] [rbp-10h]
  __int64 v14; // [rsp+78h] [rbp-8h]

  v14 = -2;
  if ( dword_141EC2090 )
  {
    sub_14169817F(&byte_141EC2068);
    LOBYTE(a1) = 1;
    if ( !_InterlockedCompareExchange8(&byte_141EC2068, 1, 0) )
      goto LABEL_3;
  }
  else
  {
    LOBYTE(a1) = 1;
    if ( !_InterlockedCompareExchange8(&byte_141EC2068, 1, 0) )
      goto LABEL_3;
  }
  sub_1416C15B0(&byte_141EC2068);
LABEL_3:
  v2 = off_141EC90B8;
  if ( !(2 * *off_141EC90B8) )
  {
    if ( byte_141EC2069 )
      goto LABEL_5;
    v4 = xmmword_141EC2070;
    v12 = *(__int128 *)((char *)&xmmword_141EC2070 + 8);
    v13 = *((_QWORD *)&xmmword_141EC2080 + 1);
    *(_QWORD *)&xmmword_141EC2070 = -1;
LABEL_9:
    if ( 2 * *v2 && !(unsigned __int8)sub_1416C2250(a1, a2) )
      byte_141EC2069 = 1;
    goto LABEL_10;
  }
  v7 = sub_1416C2250(a1, a2);
  a1 = (unsigned __int8)byte_141EC2069;
  if ( byte_141EC2069 )
  {
    if ( !v7 )
    {
LABEL_6:
      v3 = byte_141EC2068;
      byte_141EC2068 = 0;
      if ( v3 == 2 )
        WakeByAddressSingle(&byte_141EC2068);
      return;
    }
LABEL_5:
    if ( 2 * *v2 && !(unsigned __int8)sub_1416C2250(a1, a2) )
      byte_141EC2069 = 1;
    goto LABEL_6;
  }
  v4 = xmmword_141EC2070;
  v12 = *(__int128 *)((char *)&xmmword_141EC2070 + 8);
  a1 = *((_QWORD *)&xmmword_141EC2080 + 1);
  v13 = *((_QWORD *)&xmmword_141EC2080 + 1);
  *(_QWORD *)&xmmword_141EC2070 = -1;
  if ( v7 )
    goto LABEL_9;
LABEL_10:
  v5 = byte_141EC2068;
  byte_141EC2068 = 0;
  if ( v5 == 2 )
  {
    WakeByAddressSingle(&byte_141EC2068);
    if ( v4 == -1 )
      return;
  }
  else if ( v4 == -1 )
  {
    return;
  }
  v9 = v4;
  v10 = v12;
  v11 = v13;
  nullsub_1(a1);
  v6 = (_OWORD *)sub_140001650(27, 1);
  if ( !v6 )
    sub_1416C2D4B(1, 27);
  *(_OWORD *)((char *)v6 + 11) = *(__int128 *)((char *)&xmmword_14173BC6A + 11);
  *v6 = xmmword_14173BC6A;
  *(_QWORD *)&v12 = 27;
  *((_QWORD *)&v12 + 1) = v6;
  v13 = 27;
  sub_140229D00(v8, &v9, &v12);
  if ( v8[0] != -1 && v8[0] )
    sub_140001660(v8[1], v8[0], 1);
  sub_1402373D0((char *)&v10 + 8);
  sub_140264240(&v9);
  sub_140264080((char *)&v10 + 8);
}