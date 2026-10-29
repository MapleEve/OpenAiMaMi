// win 1.2.7 latest-exe | module src/core/sessions/health.rs | ea 0x1401b3250 | successor of pre-update 0x14038d1d0 | session <审计会话>
// match evidence: {"body_sim": 0.562, "str_ov": 0, "verdict": "CONFIRMED_GLOBALDIFF"}
void __fastcall sub_1401B3250(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rdx

  if ( a2 )
  {
    v3 = 104 * a2;
    v4 = 0;
    do
    {
      v5 = *(_QWORD *)(a1 + v4);
      if ( v5 )
        sub_140001660(*(_QWORD *)(a1 + v4 + 8), v5, 1);
      v6 = *(_QWORD *)(a1 + v4 + 48);
      if ( v6 > 0 )
        sub_140001660(*(_QWORD *)(a1 + v4 + 56), v6, 1);
      v7 = *(_QWORD *)(a1 + v4 + 24);
      if ( v7 )
        sub_140001660(*(_QWORD *)(a1 + v4 + 32), v7, 1);
      v8 = *(_QWORD *)(a1 + v4 + 80);
      if ( v8 > 0 )
        sub_140001660(*(_QWORD *)(a1 + v4 + 88), v8, 1);
      v4 += 104;
    }
    while ( v3 != v4 );
  }
}
