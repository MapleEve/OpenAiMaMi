// win 1.2.7 latest-exe | module src/core/repository.rs | ea 0x140234fd0 | successor of pre-update 0x1403fb6b0 | session <审计会话>
// match evidence: {"body_sim": 0.891, "str_ov": 0, "anchor": 0.066, "conf": 0.0, "verdict": "CONFIRMED_POOL_MATCH"}
void __fastcall sub_140234FD0(__int64 a1)
{
  __int64 v1; // rsi
  _QWORD *v2; // rdi
  __int64 v3; // rdx
  __int64 v4; // rdx

  v1 = *(_QWORD *)(a1 + 16);
  if ( v1 )
  {
    v2 = (_QWORD *)(*(_QWORD *)(a1 + 8) + 152LL);
    do
    {
      v3 = *(v2 - 1);
      if ( v3 )
        sub_140001660(*v2, v3, 1);
      if ( *((_DWORD *)v2 - 14) != 2 )
      {
        v4 = *(v2 - 5);
        if ( v4 > 0 )
          sub_140001660(*(v2 - 4), v4, 1);
      }
      v2 += 24;
      --v1;
    }
    while ( v1 );
  }
}
