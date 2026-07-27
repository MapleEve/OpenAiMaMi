// module: codexmate_lib/platform/voice_trigger_windows
// addr: 0x140264240
// name: sub_140264240
// win 1.2.1 | module src/platform/voice_trigger_windows.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
char __fastcall sub_140264240(__int64 *a1)
{
  __int64 v1; // rax
  __int64 v2; // rsi
  signed __int64 v3; // rax
  __int64 v4; // rcx
  signed __int64 v5; // rtt
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v9; // [rsp+28h] [rbp-8h]

  v1 = *a1;
  v2 = a1[1];
  if ( *a1 )
  {
    if ( (_DWORD)v1 == 1 )
    {
      if ( !_InterlockedDecrement64((volatile signed __int64 *)(v2 + 384)) )
      {
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v2 + 128), 0) )
        {
          LOBYTE(v1) = *(_BYTE *)(v2 + 400);
          *(_BYTE *)(v2 + 400) = 1;
          if ( !(_BYTE)v1 )
            return v1;
          goto LABEL_17;
        }
        sub_140209950((volatile void *)(v2 + 256));
        LOBYTE(v1) = *(_BYTE *)(v2 + 400);
        *(_BYTE *)(v2 + 400) = 1;
        if ( (_BYTE)v1 )
        {
LABEL_17:
          v9 = v2;
          sub_1401D7CC0(v2);
          v6 = 512;
          v7 = 128;
          goto LABEL_18;
        }
      }
    }
    else if ( !_InterlockedDecrement64((volatile signed __int64 *)(v2 + 112)) )
    {
      sub_14020C820((volatile void *)v2);
      LOBYTE(v1) = *(_BYTE *)(v2 + 128);
      *(_BYTE *)(v2 + 128) = 1;
      if ( (_BYTE)v1 )
      {
        v9 = v2;
        sub_1401DA9B0(v2);
        v6 = 136;
        v7 = 8;
LABEL_18:
        LOBYTE(v1) = sub_140001660(v9, v6, v7);
      }
    }
  }
  else if ( !_InterlockedDecrement64((volatile signed __int64 *)(v2 + 512)) )
  {
    v3 = *(_QWORD *)(v2 + 128);
    v4 = *(_QWORD *)(v2 + 400);
    do
    {
      v5 = v3;
      v3 = _InterlockedCompareExchange64((volatile signed __int64 *)(v2 + 128), v4 | v3, v3);
    }
    while ( v5 != v3 );
    if ( (v3 & *(_QWORD *)(v2 + 400)) != 0 )
    {
      LOBYTE(v1) = *(_BYTE *)(v2 + 528);
      *(_BYTE *)(v2 + 528) = 1;
      if ( !(_BYTE)v1 )
        return v1;
    }
    else
    {
      sub_140209950((volatile void *)(v2 + 320));
      LOBYTE(v1) = *(_BYTE *)(v2 + 528);
      *(_BYTE *)(v2 + 528) = 1;
      if ( !(_BYTE)v1 )
        return v1;
    }
    LOBYTE(v1) = sub_1401D0550(v2);
  }
  return v1;
}