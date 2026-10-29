// win 1.2.7 | module src/core/relay/codex_thread_visibility.rs | ea 0x140232740 | name sub_140232740
// win 1.2.7 | module src/core/relay/codex_thread_visibility.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140232740(__int64 a1, unsigned __int64 a2, __int64 a3, unsigned __int64 a4)
{
  unsigned int v4; // esi
  __int64 v9; // rax
  __int64 v10; // r12
  __int64 v11; // r12
  unsigned __int64 v13; // rbp
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rbp

  if ( !a2 )
    return 0;
  v9 = sub_1401FAC00(a1, a2, aSessionMeta, 12);
  LOBYTE(v4) = 1;
  if ( a4 )
  {
    if ( v9 != 1 )
    {
      v10 = 11;
      if ( a2 < 0xB )
        v10 = a2;
      if ( a2 == 1 )
      {
LABEL_7:
        if ( (a4 < 12 - v10
           || (unsigned int)sub_1418F4B70(a1 + a2 - v10, aSessionMeta)
           || (unsigned int)sub_1418F4B70(a3, &aSessionMeta[v10]))
          && sub_1401FAC00(a1, a2, aThreadSettings, 23) != 1 )
        {
          v11 = 22;
          if ( a2 < 0x16 )
            v11 = a2;
          if ( a2 == 1 )
          {
LABEL_14:
            if ( a4 < 23 - v11
              || (unsigned int)sub_1418F4B70(a2 - v11 + a1, aThreadSettings)
              || (unsigned int)sub_1418F4B70(a3, &aThreadSettings[v11]) )
            {
              return 0;
            }
          }
          else
          {
            v15 = 1;
            while ( 1 )
            {
              if ( a4 >= 23 - v15 )
              {
                v14 = a2 - v15;
                if ( a2 < v15 )
                  goto LABEL_35;
                if ( !(unsigned int)sub_1418F4B70(a1 + v14, aThreadSettings)
                  && !(unsigned int)sub_1418F4B70(a3, &aThreadSettings[v15]) )
                {
                  break;
                }
              }
              if ( ++v15 == v11 )
                goto LABEL_14;
            }
          }
        }
      }
      else
      {
        v13 = 1;
        while ( 1 )
        {
          if ( a4 >= 12 - v13 )
          {
            v14 = a2 - v13;
            if ( a2 < v13 )
LABEL_35:
              sub_1419392D0(v14, a2, a2, &off_1419D72A0);
            if ( !(unsigned int)sub_1418F4B70(a1 + v14, aSessionMeta)
              && !(unsigned int)sub_1418F4B70(a3, &aSessionMeta[v13]) )
            {
              break;
            }
          }
          if ( ++v13 == v10 )
            goto LABEL_7;
        }
      }
    }
  }
  else if ( v9 != 1 )
  {
    LOBYTE(v4) = sub_1401FAC00(a1, a2, aThreadSettings, 23) == 1;
  }
  return v4;
}
