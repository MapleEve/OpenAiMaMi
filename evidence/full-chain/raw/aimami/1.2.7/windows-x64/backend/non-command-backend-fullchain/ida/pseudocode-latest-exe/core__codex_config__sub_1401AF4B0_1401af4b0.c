// win 1.2.7 latest-exe | module src/core/codex_config.rs | ea 0x1401af4b0 | successor of pre-update 0x140e95ff0 | session <审计会话>
// match evidence: {"body_sim": 0.865, "str_ov": 0, "anchor": 0.216, "conf": 0.0, "verdict": "CONFIRMED_POOL_MATCH"}
__int64 __fastcall sub_1401AF4B0(_QWORD *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rdx
  __int64 v4; // rsi
  __int64 v5; // rdi
  _QWORD *v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rdx

  if ( *a1 )
    sub_140001660(a1[1], *a1, 1);
  v2 = a1[3];
  if ( v2 )
    sub_140001660(a1[4], v2, 1);
  v3 = a1[9];
  if ( v3 > 0 )
    sub_140001660(a1[10], v3, 1);
  v4 = a1[7];
  v5 = a1[8];
  if ( v5 )
  {
    v6 = (_QWORD *)(v4 + 8);
    do
    {
      v7 = *(v6 - 1);
      if ( v7 )
        sub_140001660(*v6, v7, 1);
      v6 += 3;
      --v5;
    }
    while ( v5 );
  }
  v8 = a1[6];
  if ( v8 )
    sub_140001660(v4, 24 * v8, 8);
  v9 = a1[12];
  if ( v9 > 0 )
    sub_140001660(a1[13], v9, 1);
  sub_14018EA10(a1 + 15);
  return sub_14018EA10(a1 + 21);
}
