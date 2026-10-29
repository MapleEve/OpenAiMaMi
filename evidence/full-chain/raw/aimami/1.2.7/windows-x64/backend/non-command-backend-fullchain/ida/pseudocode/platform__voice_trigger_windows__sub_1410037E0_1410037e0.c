// win 1.2.7 | module src/platform/voice_trigger_windows.rs | ea 0x1410037e0 | name sub_1410037E0
// win 1.2.7 | module src/platform/voice_trigger_windows.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
void __fastcall sub_1410037E0(__int64 *a1)
{
  __int64 *v1; // rsi
  char v2; // al
  __int64 v3; // rcx
  char v4; // al
  __int128 v5; // xmm0
  char v6; // al
  char v7; // [rsp+2Ch] [rbp-14h]
  __int64 *v8; // [rsp+30h] [rbp-10h]

  v8 = a1;
  if ( dword_1421E05C8 )
    sub_1419112F3(&byte_1421E05A0);
  LOBYTE(a1) = 1;
  if ( _InterlockedCompareExchange8(&byte_1421E05A0, 1, 0) )
    sub_141937480(&byte_1421E05A0);
  v1 = off_1421E7210;
  if ( 2 * *off_1421E7210 )
  {
    v2 = sub_141938160(a1) ^ 1;
    v3 = (unsigned __int8)byte_1421E05A1;
    if ( byte_1421E05A1 )
    {
LABEL_7:
      if ( !v2 && 2 * *v1 && !(unsigned __int8)sub_141938160(v3) )
        byte_1421E05A1 = 1;
      v4 = byte_1421E05A0;
      byte_1421E05A0 = 0;
      if ( v4 == 2 )
        WakeByAddressSingle(&byte_1421E05A0);
      if ( *(_DWORD *)v8 != -1 )
      {
        sub_14093C260(v8);
        sub_14093B470(v8 + 2);
      }
      return;
    }
  }
  else
  {
    v2 = 0;
    v3 = (unsigned __int8)byte_1421E05A1;
    if ( byte_1421E05A1 )
      goto LABEL_7;
  }
  v7 = v2;
  if ( (_DWORD)xmmword_1421E05A8 != -1 )
  {
    sub_14093C260((__int64 *)&xmmword_1421E05A8);
    sub_14093B470((__int64 *)&xmmword_1421E05B8);
  }
  v5 = *(_OWORD *)v8;
  xmmword_1421E05B8 = *((_OWORD *)v8 + 1);
  xmmword_1421E05A8 = v5;
  if ( !v7 && 2 * *v1 && !(unsigned __int8)sub_141938160(v3) )
    byte_1421E05A1 = 1;
  v6 = byte_1421E05A0;
  byte_1421E05A0 = 0;
  if ( v6 == 2 )
    WakeByAddressSingle(&byte_1421E05A0);
}
