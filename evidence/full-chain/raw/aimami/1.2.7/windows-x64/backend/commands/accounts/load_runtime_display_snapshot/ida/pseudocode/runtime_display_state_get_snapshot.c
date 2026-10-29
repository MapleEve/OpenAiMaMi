// fn runtime_display_state_get_snapshot (0x140ECA180, 376B) — 快照 getter（共享×5）
// park 锁 byte_142239460 + WakeByAddressSingle；全局 880B @0x142239468；首 dword==-1 → *a1=-1（data:null）
_QWORD *__fastcall sub_140ECA180(_QWORD *a1)
{
  __int64 *v2; // rdi
  int v3; // eax
  char v4; // al
  char v5; // al
  _BYTE v7[884]; // [rsp+20h] [rbp-60h] BYREF
  int v8; // [rsp+394h] [rbp+314h]
  __int64 v9; // [rsp+398h] [rbp+318h]

  v9 = -2;
  if ( dword_1422397D8 )
  {
    sub_14194106E(&byte_142239460);
    if ( !_InterlockedCompareExchange8(&byte_142239460, 1, 0) )
      goto LABEL_3;
  }
  else if ( !_InterlockedCompareExchange8(&byte_142239460, 1, 0) )
  {
    goto LABEL_3;
  }
  sub_141969A30(&byte_142239460);
LABEL_3:
  v2 = off_142240260;
  if ( 2 * *off_142240260 )
  {
    v3 = sub_14196A710();
    LOBYTE(v3) = v3 ^ 1;
    if ( byte_142239461 )
    {
LABEL_5:
      if ( !(_BYTE)v3 && 2 * *v2 && !(unsigned __int8)sub_14196A710() )
        byte_142239461 = 1;
      v4 = byte_142239460;
      byte_142239460 = 0;
      if ( v4 == 2 )
        WakeByAddressSingle(&byte_142239460);
      *a1 = -1;
      return a1;
    }
  }
  else
  {
    v3 = 0;
    if ( byte_142239461 )
      goto LABEL_5;
  }
  if ( (_DWORD)qword_142239468 == -1 )
  {
    *a1 = -1;
    if ( (_BYTE)v3 )
      goto LABEL_18;
LABEL_17:
    if ( 2 * *v2 && !(unsigned __int8)sub_14196A710() )
      byte_142239461 = 1;
    goto LABEL_18;
  }
  v8 = v3;
  sub_140ED8380(v7, &qword_142239468);   // state -> snapshot
  sub_1419234B0(a1, v7, 880);
  if ( !(_BYTE)v8 )
    goto LABEL_17;
LABEL_18:
  v5 = byte_142239460;
  byte_142239460 = 0;
  if ( v5 == 2 )
    WakeByAddressSingle(&byte_142239460);
  return a1;
}
