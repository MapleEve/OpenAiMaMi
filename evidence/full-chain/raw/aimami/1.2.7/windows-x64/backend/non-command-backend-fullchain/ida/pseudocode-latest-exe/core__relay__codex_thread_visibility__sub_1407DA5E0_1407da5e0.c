// win 1.2.7 latest-exe | module src/core/relay/codex_thread_visibility.rs | ea 0x1407da5e0 | successor of pre-update 0x140232740 | session <审计会话>
// match evidence: {"body_sim": 0.507, "str_ov": 0, "anchor": 0.201, "conf": 0.0, "verdict": "CONFIRMED_POOL_MATCH"}
char __fastcall sub_1407DA5E0(unsigned __int8 *a1, unsigned __int64 a2, __int64 a3, unsigned __int64 a4)
{
  char v8; // al
  char v9; // si
  __int64 v10; // r12
  __int64 v11; // r12
  unsigned __int64 v13; // rbp
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rbp

  if ( !a2 )
    return 0;
  v8 = sub_1407D7D20(a1, a2, aSessionMeta, 0xCu);
  v9 = 1;
  if ( a4 )
  {
    if ( v8 )
      return v9;
    v10 = 11;
    if ( a2 < 0xB )
      v10 = a2;
    if ( a2 != 1 )
    {
      v13 = 1;
      do
      {
        if ( a4 >= 12 - v13 )
        {
          v14 = a2 - v13;
          if ( a2 < v13 )
LABEL_35:
            sub_14196B880(v14, a2, a2, &off_141A47448);
          if ( !(unsigned int)sub_141923B40(&a1[v14], aSessionMeta, v13)
            && !(unsigned int)sub_141923B40(a3, &aSessionMeta[v13], 12 - v13) )
          {
            return v9;
          }
        }
      }
      while ( ++v13 != v10 );
    }
    if ( a4 >= 12 - v10
      && !(unsigned int)sub_141923B40(&a1[a2 - v10], aSessionMeta, v10)
      && !(unsigned int)sub_141923B40(a3, &aSessionMeta[v10], 12 - v10)
      || sub_1407D7D20(a1, a2, aThreadSettings, 0x17u) )
    {
      return v9;
    }
    v11 = 22;
    if ( a2 < 0x16 )
      v11 = a2;
    if ( a2 != 1 )
    {
      v15 = 1;
      do
      {
        if ( a4 >= 23 - v15 )
        {
          v14 = a2 - v15;
          if ( a2 < v15 )
            goto LABEL_35;
          if ( !(unsigned int)sub_141923B40(&a1[v14], aThreadSettings, v15)
            && !(unsigned int)sub_141923B40(a3, &aThreadSettings[v15], 23 - v15) )
          {
            return v9;
          }
        }
      }
      while ( ++v15 != v11 );
    }
    if ( a4 >= 23 - v11
      && !(unsigned int)sub_141923B40(&a1[a2 - v11], aThreadSettings, v11)
      && !(unsigned int)sub_141923B40(a3, &aThreadSettings[v11], 23 - v11) )
    {
      return v9;
    }
    return 0;
  }
  if ( v8 )
    return v9;
  return sub_1407D7D20(a1, a2, aThreadSettings, 0x17u);
}
