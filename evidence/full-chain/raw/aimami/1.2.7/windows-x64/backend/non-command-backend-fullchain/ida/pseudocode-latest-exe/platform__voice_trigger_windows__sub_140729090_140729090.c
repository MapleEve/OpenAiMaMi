// win 1.2.7 latest-exe | module src/platform/voice_trigger_windows.rs | ea 0x140729090 | successor of pre-update 0x1410037e0 | session <审计会话>
// match evidence: {"body_sim": 0.779, "str_ov": 0, "anchor": 1.091, "conf": false, "verdict": "CONFIRMED_FINAL"}
void __fastcall sub_140729090(__int128 *a1, __int64 a2, __int64 a3)
{
  __int64 *v3; // rsi
  char v4; // al
  __int64 v5; // rcx
  char v6; // al
  __int128 v7; // xmm0
  char v8; // al
  char v9; // [rsp+2Ch] [rbp-14h]
  __int128 *v10; // [rsp+30h] [rbp-10h]

  v10 = a1;
  if ( dword_142239088 )
    sub_141941106(&byte_142239060);
  LOBYTE(a1) = 1;
  if ( _InterlockedCompareExchange8(&byte_142239060, 1, 0) )
    sub_141969A30(&byte_142239060);
  v3 = off_142240260;
  if ( 2 * *off_142240260 )
  {
    v4 = sub_14196A710(a1, a2, a3) ^ 1;
    v5 = (unsigned __int8)byte_142239061;
    if ( byte_142239061 )
    {
LABEL_7:
      if ( !v4 && 2 * *v3 && !(unsigned __int8)sub_14196A710(v5, a2, a3) )
        byte_142239061 = 1;
      v6 = byte_142239060;
      byte_142239060 = 0;
      if ( v6 == 2 )
        WakeByAddressSingle(&byte_142239060);
      if ( *(_DWORD *)v10 != -1 )
      {
        sub_1404CA480(v10);
        sub_1404C96A0(v10 + 1);
      }
      return;
    }
  }
  else
  {
    v4 = 0;
    v5 = (unsigned __int8)byte_142239061;
    if ( byte_142239061 )
      goto LABEL_7;
  }
  v9 = v4;
  if ( (_DWORD)xmmword_142239068 != -1 )
  {
    sub_1404CA480(&xmmword_142239068);
    sub_1404C96A0(&xmmword_142239078);
  }
  v7 = *v10;
  xmmword_142239078 = v10[1];
  xmmword_142239068 = v7;
  if ( !v9 && 2 * *v3 && !(unsigned __int8)sub_14196A710(v5, a2, a3) )
    byte_142239061 = 1;
  v8 = byte_142239060;
  byte_142239060 = 0;
  if ( v8 == 2 )
    WakeByAddressSingle(&byte_142239060);
}
