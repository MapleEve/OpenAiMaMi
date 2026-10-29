// win 1.2.7 | module src/core/relay/quota.rs | ea 0x140ddcb80 | name sub_140DDCB80
// win 1.2.7 | module src/core/relay/quota.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140DDCB80(_WORD *a1, _QWORD *a2)
{
  int v2; // eax
  _WORD *v4; // [rsp+20h] [rbp-18h] BYREF
  _QWORD *v5; // [rsp+28h] [rbp-10h] BYREF
  __int64 (__fastcall *v6)(); // [rsp+30h] [rbp-8h]

  v2 = (unsigned __int16)*a1;
  if ( *a1 )
  {
    v4 = a1 + 4;
    v5 = &v4;
    v6 = sub_140369D80;
    if ( v2 == 1 )
      return sub_1416B2DC0(*a2, a2[1], &unk_141A4FD54, &v5);
    else
      return sub_1416B2DC0(*a2, a2[1], &unk_141A4FD67, &v5);
  }
  else
  {
    v4 = a1 + 1;
    v5 = &v4;
    v6 = sub_140286310;
    return sub_1416B2DC0(*a2, a2[1], &unk_141A4D724, &v5);
  }
}
