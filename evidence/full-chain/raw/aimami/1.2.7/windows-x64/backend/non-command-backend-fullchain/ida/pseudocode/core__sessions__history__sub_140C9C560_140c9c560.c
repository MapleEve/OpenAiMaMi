// win 1.2.7 | module src/core/sessions/history.rs | ea 0x140c9c560 | name sub_140C9C560
// win 1.2.7 | module src/core/sessions/history.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
void __fastcall sub_140C9C560(__int64 a1)
{
  unsigned __int64 v1; // rax
  unsigned __int64 v2; // [rsp+30h] [rbp-8h] BYREF

  if ( !*(_BYTE *)(a1 + 24) )
  {
    v1 = sub_140C20F40(a1);
    if ( v1 )
    {
      if ( (v1 & 3) - 2 >= 2 && (v1 & 3) != 0 )
      {
        v2 = v1 - 1;
        sub_1416BCB00(&v2);
      }
    }
  }
}
