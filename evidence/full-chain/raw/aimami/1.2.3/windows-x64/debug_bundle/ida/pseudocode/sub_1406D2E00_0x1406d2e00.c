// module: codexmate_lib/core/debug_bundle
// addr: 0x1406d2e00
// name: sub_1406D2E00
// win 1.2.1 | module src/core/debug_bundle.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1406D2E00(_QWORD *a1, int a2, int a3, int a4, __int64 a5, __int64 a6, __int64 a7)
{
  __int64 v11; // rcx
  __int64 v12; // r15
  __int64 result; // rax
  _BYTE v14[32]; // [rsp+38h] [rbp-48h] BYREF
  __int64 v15; // [rsp+58h] [rbp-28h] BYREF
  __int64 v16; // [rsp+60h] [rbp-20h]
  __int64 v17; // [rsp+68h] [rbp-18h]
  __int64 v18; // [rsp+70h] [rbp-10h]
  __int64 v19; // [rsp+78h] [rbp-8h]
  __int64 v20; // [rsp+80h] [rbp+0h]

  v20 = -2;
  sub_140736610((unsigned int)v14, 0, a3, a6, a7);
  sub_1406CF290(&v15, v14);
  v11 = v16;
  if ( v15 == -1 )
  {
    *a1 = 3;
    a1[1] = v11;
    return sub_1400104F0(v14);
  }
  else
  {
    v18 = v16;
    v19 = v15;
    v12 = v17;
    sub_1400104F0(v14);
    result = sub_1406D2F50((_DWORD)a1, a2, a3, a4, a5, v18, v12);
    if ( v19 )
      return sub_140001660(v18, v19, 1);
  }
  return result;
}