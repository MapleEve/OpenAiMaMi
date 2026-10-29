// win 1.2.7 latest-exe | module src/core/debug_bundle.rs | ea 0x14090cdc0 | successor of pre-update 0x140bb76d0 | session <审计会话>
// match evidence: {"body_sim": 0.766, "str_ov": 0, "anchor": 0.168, "conf": 1.0, "verdict": "CONFIRMED_POOL_MATCH"}
void __fastcall sub_14090CDC0(_QWORD *a1, int a2, int a3, int a4, __int64 a5, __int64 a6, __int64 a7)
{
  __int64 v11; // rcx
  __int64 v12; // r15
  _BYTE v13[32]; // [rsp+40h] [rbp-40h] BYREF
  __int64 v14; // [rsp+60h] [rbp-20h] BYREF
  __int64 v15; // [rsp+68h] [rbp-18h]
  __int64 v16; // [rsp+70h] [rbp-10h]
  __int64 v17; // [rsp+78h] [rbp-8h]
  __int64 v18; // [rsp+80h] [rbp+0h]
  __int64 v19; // [rsp+88h] [rbp+8h]

  v19 = -2;
  sub_14096ACF0((unsigned int)v13, 0, a3, a6, a7);
  sub_1409080F0(&v14, v13);
  v11 = v15;
  if ( v14 == -1 )
  {
    *a1 = 3;
    a1[1] = v11;
    sub_140032FF0(v13);
  }
  else
  {
    v17 = v15;
    v18 = v14;
    v12 = v16;
    sub_140032FF0(v13);
    sub_14090CF50((_DWORD)a1, a2, a3, a4, a5, v17, v12);
    if ( v18 )
      sub_140001660(v17, v18, 1);
  }
}
