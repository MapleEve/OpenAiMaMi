// win 1.2.7 | module src/core/analytics/parser/tokens.rs | ea 0x140f975d0 | name sub_140F975D0
// win 1.2.7 | module src/core/analytics/parser/tokens.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
char __fastcall sub_140F975D0(_BYTE *a1)
{
  _BYTE *v2; // rax
  _BYTE *v3; // rcx
  int v4; // edx
  char result; // al
  __int64 v6; // rdx
  _BYTE *v7; // rax
  _BYTE *v8; // rcx
  int v9; // edx
  __int64 v10; // rdx
  _BYTE *v11; // rax
  _BYTE *v12; // rcx
  int v13; // edx
  __int64 v14; // rdx
  _BYTE *v15; // rax
  _BYTE *v16; // rcx
  int v17; // edx
  __int64 v18; // rdx
  _BYTE *v19; // rax
  _BYTE *v20; // rcx
  int v21; // edx
  __int64 v22; // rdx

  if ( !*a1 )
    return 0;
  if ( *a1 != 5 )
    return 1;
  if ( (v2 = (_BYTE *)sub_1416419F0(aInputTokens_2, 12, a1)) == nullptr
    || (v3 = v2, v4 = (unsigned __int8)*v2, !*v2)
    || (result = 1, v4 == 2) && ((v6 = *((_QWORD *)v3 + 1)) == 0 || (_DWORD)v6 == 1) && *((__int64 *)v3 + 2) >= 0 )
  {
    if ( (v7 = (_BYTE *)sub_1416419F0(aOutputTokens_2, 13, a1)) == nullptr
      || (v8 = v7, v9 = (unsigned __int8)*v7, !*v7)
      || (result = 1, v9 == 2) && ((v10 = *((_QWORD *)v8 + 1)) == 0 || (_DWORD)v10 != 2) && *((__int64 *)v8 + 2) >= 0 )
    {
      if ( (v11 = (_BYTE *)sub_1416419F0(aReasoningOutpu, 23, a1)) == nullptr
        || (v12 = v11, v13 = (unsigned __int8)*v11, !*v11)
        || (result = 1, v13 == 2)
        && ((v14 = *((_QWORD *)v12 + 1)) == 0 || (_DWORD)v14 != 2)
        && *((__int64 *)v12 + 2) >= 0 )
      {
        if ( (v15 = (_BYTE *)sub_1416419F0(aCachedInputTok_0, 19, a1)) == nullptr
          || (v16 = v15, v17 = (unsigned __int8)*v15, !*v15)
          || (result = 1, v17 == 2)
          && ((v18 = *((_QWORD *)v16 + 1)) == 0 || (_DWORD)v18 != 2)
          && *((__int64 *)v16 + 2) >= 0 )
        {
          v19 = (_BYTE *)sub_1416419F0(aTotalTokens_1, 12, a1);
          if ( !v19 )
            return 0;
          v20 = v19;
          v21 = (unsigned __int8)*v19;
          if ( !*v19 )
            return 0;
          result = 1;
          if ( v21 == 2 )
          {
            v22 = *((_QWORD *)v20 + 1);
            if ( (!v22 || (_DWORD)v22 != 2) && *((__int64 *)v20 + 2) >= 0 )
              return 0;
          }
        }
      }
    }
  }
  return result;
}
