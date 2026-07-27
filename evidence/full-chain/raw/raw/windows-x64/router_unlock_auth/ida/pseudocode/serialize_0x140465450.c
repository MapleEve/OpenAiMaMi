// module: codexmate_lib/core/relay/router_unlock_auth
// addr: 0x140465450
// name: serialize
// win 1.2.3 | = mac codexmate_lib::core::relay::router_unlock_auth::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..relay..router_unlock_auth..RouterUnlockAuthReadiness$GT$::serialize | 跨平台字符串签名匹配(名↔函数一致)
__int64 __fastcall serialize(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 *v6; // rdi
  __int64 v7; // r14
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rdi
  __int64 v15; // rbx
  __int64 *v16; // r14
  __int64 v17; // r15
  __int64 v18; // rdx
  __int64 v19; // r15
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v23; // rsi
  __int64 v24; // rdx
  __int64 v25; // r15
  __int64 v26; // r12
  __int16 v27; // [rsp+28h] [rbp-40h] BYREF
  __int64 *v28; // [rsp+30h] [rbp-38h]

  if ( *(_BYTE *)a1 == 1 )
    sub_1416C32A0(aInternalErrorE_122, 40, &off_1417570E0);
  v6 = *(__int64 **)(a1 + 8);
  if ( *(_BYTE *)(a1 + 1) != 1 )
  {
    v7 = *v6;
    v8 = *(_QWORD *)(*v6 + 16);
    if ( *(_QWORD *)*v6 == v8 )
    {
      v25 = a1;
      v26 = a2;
      sub_141688D30(v7, v8, 1, 1, 1);
      a1 = v25;
      a2 = v26;
      v8 = *(_QWORD *)(v7 + 16);
    }
    *(_BYTE *)(*(_QWORD *)(v7 + 8) + v8) = 44;
    *(_QWORD *)(v7 + 16) = v8 + 1;
  }
  *(_BYTE *)(a1 + 1) = 2;
  sub_140441880(v6, a2, a2, a3);
  v9 = *v6;
  v10 = *(_QWORD *)(*v6 + 16);
  if ( *(_QWORD *)*v6 == v10 )
  {
    sub_141688D30(v9, v10, 1, 1, 1);
    v10 = *(_QWORD *)(v9 + 16);
  }
  *(_BYTE *)(*(_QWORD *)(v9 + 8) + v10) = 58;
  *(_QWORD *)(v9 + 16) = v10 + 1;
  v11 = *v6;
  v12 = *(_QWORD *)(*v6 + 16);
  if ( *(_QWORD *)*v6 == v12 )
  {
    sub_141688D30(v11, v12, 1, 1, 1);
    v12 = *(_QWORD *)(v11 + 16);
  }
  *(_BYTE *)(*(_QWORD *)(v11 + 8) + v12) = 123;
  *(_QWORD *)(v11 + 16) = v12 + 1;
  v27 = 256;
  v28 = v6;
  sub_140466A30(&v27, aHasusablereala, 17, a4 + 24);
  if ( (_BYTE)v27 )
    return sub_1416BF0E0();
  sub_140466A30(&v27, aWillusevirtual, 18, a4 + 25);
  if ( (_BYTE)v27 )
    return sub_1416BF0E0();
  v14 = *(_QWORD *)(a4 + 8);
  v15 = *(_QWORD *)(a4 + 16);
  v16 = v28;
  if ( HIBYTE(v27) != 1 )
  {
    v17 = *v28;
    v18 = *(_QWORD *)(*v28 + 16);
    if ( *(_QWORD *)*v28 == v18 )
    {
      sub_141688D30(v17, v18, 1, 1, 1);
      v18 = *(_QWORD *)(v17 + 16);
    }
    *(_BYTE *)(*(_QWORD *)(v17 + 8) + v18) = 44;
    v13 = v18 + 1;
    *(_QWORD *)(v17 + 16) = v13;
  }
  HIBYTE(v27) = 2;
  sub_140441880(v16, v13, aVirtualemail, 12);
  v19 = *v16;
  v20 = *(_QWORD *)(*v16 + 16);
  if ( *(_QWORD *)*v16 == v20 )
  {
    sub_141688D30(v19, v20, 1, 1, 1);
    v20 = *(_QWORD *)(v19 + 16);
  }
  *(_BYTE *)(*(_QWORD *)(v19 + 8) + v20) = 58;
  v21 = v20 + 1;
  *(_QWORD *)(v19 + 16) = v21;
  sub_140441880(v16, v21, v14, v15);
  sub_140466A30(&v27, aVirtualauthact, 17, a4 + 26);
  if ( (_BYTE)v27 )
    return sub_1416BF0E0();
  sub_140466A30(&v27, aCanrestoreprev, 22, a4 + 27);
  if ( (v27 & 1) == 0 && HIBYTE(v27) )
  {
    v23 = *v28;
    v24 = *(_QWORD *)(*v28 + 16);
    if ( *(_QWORD *)*v28 == v24 )
    {
      sub_141688D30(v23, v24, 1, 1, 1);
      v24 = *(_QWORD *)(v23 + 16);
    }
    *(_BYTE *)(*(_QWORD *)(v23 + 8) + v24) = 125;
    *(_QWORD *)(v23 + 16) = v24 + 1;
  }
  return 0;
}