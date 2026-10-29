// win 1.2.7 | module src/core/voice/aliyun_asr.rs | ea 0x1418f6dd0 | name sub_1418F6DD0
// win 1.2.7 | module src/core/voice/aliyun_asr.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
char __fastcall sub_1418F6DD0(_QWORD *_RCX, __int64 a2, int _R8D, char a4)
{
  char result; // al
  __int64 v5; // rdx
  _BYTE *v6; // r9
  unsigned __int64 v7; // r10
  _DWORD *v8; // r11
  _DWORD *v9; // rax
  _DWORD *v10; // rsi

  if ( a4 )
    return 0;
  v5 = *_RCX + a2;
  v6 = (_BYTE *)_RCX[2];
  v7 = _RCX[3];
  if ( v7 >= 4 )
  {
    while ( 1 )
    {
      __asm { tzcnt   ecx, r8d }
      v8 = (_DWORD *)((char *)_RCX + v5 + 1);
      v9 = (_DWORD *)((char *)_RCX + v5 + v7 - 3);
      if ( v8 >= v9 )
      {
LABEL_6:
        if ( *v9 == *(_DWORD *)&v6[v7 - 4] )
          return 1;
      }
      else
      {
        v10 = v6;
        while ( *v8 == *v10 )
        {
          ++v8;
          ++v10;
          if ( v8 >= v9 )
            goto LABEL_6;
        }
      }
      LOWORD(_R8D) = __ROL2__(-2, (char)_RCX) & _R8D;
      if ( !(_WORD)_R8D )
        return 0;
    }
  }
  while ( 1 )
  {
    result = 1;
    if ( !v7 )
      break;
    __asm { tzcnt   ecx, r8d }
    if ( *((_BYTE *)_RCX + v5 + 1) == *v6
      && (v7 == 1 || *((_BYTE *)_RCX + v5 + 2) == v6[1] && (v7 == 2 || v7 == 3 && *((_BYTE *)_RCX + v5 + 3) == v6[2])) )
    {
      break;
    }
    LOWORD(_R8D) = __ROL2__(-2, (char)_RCX) & _R8D;
    if ( !(_WORD)_R8D )
      return 0;
  }
  return result;
}
