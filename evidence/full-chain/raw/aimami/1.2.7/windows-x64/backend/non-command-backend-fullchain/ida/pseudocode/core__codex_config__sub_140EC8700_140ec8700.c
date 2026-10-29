// win 1.2.7 | module src/core/codex_config.rs | ea 0x140ec8700 | name sub_140EC8700
// win 1.2.7 | module src/core/codex_config.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140EC8700(__int64 a1, int a2, int a3)
{
  _QWORD v5[3]; // [rsp+30h] [rbp-40h] BYREF
  _QWORD *v6; // [rsp+48h] [rbp-28h] BYREF
  __int64 (__fastcall *v7)(); // [rsp+50h] [rbp-20h]
  __int64 v8; // [rsp+58h] [rbp-18h]
  __int64 (__fastcall *v9)(); // [rsp+60h] [rbp-10h]
  __int64 v10; // [rsp+68h] [rbp-8h]

  v10 = -2;
  sub_140E94CD0((unsigned int)&v6, a2, a3, 92, (__int64)asc_141A59AA4, 2);
  v9 = v7;
  sub_140E94CD0((unsigned int)v5, (_DWORD)v7, v8, 34, (__int64)asc_141A59AA6, 2);
  if ( v6 )
    sub_140001660(v9, v6, 1);
  v6 = v5;
  v7 = sub_1400015F0;
  sub_1416ABFD0(a1, &unk_141A59AA8, &v6);
  if ( v5[0] )
    sub_140001660(v5[1], v5[0], 1);
  return a1;
}
