// module: codexmate_lib/core/relay/quota
// addr: 0x1404e1ab0
// name: sub_1404E1AB0
// win 1.2.1 | module src/core/relay/quota.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1404E1AB0(_WORD *a1, _QWORD *a2)
{
  int v2; // eax
  _WORD *v3; // rcx
  __int64 v5; // [rsp+20h] [rbp-18h] BYREF
  __int64 *v6; // [rsp+28h] [rbp-10h] BYREF
  __int64 (__fastcall *v7)(); // [rsp+30h] [rbp-8h]

  v2 = (unsigned __int16)*a1;
  if ( *a1 )
  {
    v3 = a1 + 4;
    v6 = &v5;
    v7 = sub_1406B5450;
    if ( v2 == 1 )
      return ((__int64 (__fastcall *)(_QWORD, _QWORD, void *, __int64 **, _WORD *))sub_1414A2FC0)(
               *a2,
               a2[1],
               &unk_14175EAF4,
               &v6,
               v3);
    else
      return ((__int64 (__fastcall *)(_QWORD, _QWORD, void *, __int64 **, _WORD *))sub_1414A2FC0)(
               *a2,
               a2[1],
               &unk_14175EB07,
               &v6,
               v3);
  }
  else
  {
    v6 = &v5;
    v7 = sub_14041F6C0;
    return ((__int64 (__fastcall *)(_QWORD, _QWORD, void *, __int64 **, _WORD *))sub_1414A2FC0)(
             *a2,
             a2[1],
             &unk_14175EAE8,
             &v6,
             a1 + 1);
  }
}