// win 1.2.7 | module src/core/debug_bundle.rs | ea 0x140bb76d0 | name sub_140BB76D0
// win 1.2.7 | module src/core/debug_bundle.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140BB76D0(_QWORD *a1, int a2, int a3, int a4, __int64 a5, __int64 a6, __int64 a7)
{
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r15
  __int64 result; // rax
  _QWORD v16[4]; // [rsp+40h] [rbp-40h] BYREF
  char v17; // [rsp+60h] [rbp-20h]
  _BYTE v18[32]; // [rsp+68h] [rbp-18h] BYREF
  __int64 v19; // [rsp+88h] [rbp+8h] BYREF
  __int64 v20; // [rsp+90h] [rbp+10h]
  __int64 v21; // [rsp+98h] [rbp+18h]
  __int64 v22; // [rsp+A0h] [rbp+20h]
  __int64 v23; // [rsp+A8h] [rbp+28h]
  __int64 v24; // [rsp+B0h] [rbp+30h]

  v24 = -2;
  sub_140C45DF0((unsigned int)v18, 0, a3, a6, a7);
  nullsub_1(v11);
  v12 = sub_140001650(128, 1);
  if ( !v12 )
    sub_141938D2B(1, 128);
  v19 = 128;
  v20 = v12;
  v21 = 0;
  v16[0] = &v19;
  v16[1] = asc_141A39010;
  v16[2] = 2;
  v16[3] = 0;
  v17 = 0;
  sub_140BE4250(v18, v16);
  v13 = v20;
  if ( v19 == -1 )
  {
    *a1 = 3;
    a1[1] = v13;
    return sub_14002F9D0(v18);
  }
  else
  {
    v22 = v20;
    v23 = v19;
    v14 = v21;
    sub_14002F9D0(v18);
    result = sub_140BB78D0((_DWORD)a1, a2, a3, a4, a5, v22, v14);
    if ( v23 )
      return sub_140001660(v22, v23, 1);
  }
  return result;
}
