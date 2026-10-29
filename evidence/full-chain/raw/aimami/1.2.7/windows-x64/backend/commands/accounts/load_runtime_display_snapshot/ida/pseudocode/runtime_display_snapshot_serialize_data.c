// fn runtime_display_snapshot_serialize_data (0x140CD7E50, 562B) — {"status", "accounts", "refreshReport"(Option, -1 时字段缺省)}
__int64 __fastcall sub_140CD7E50(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rbx
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 result; // rax
  _QWORD *v7; // r14
  __int16 v8; // [rsp+28h] [rbp-30h] BYREF
  _QWORD *v9; // [rsp+30h] [rbp-28h]

  v3 = *(_QWORD *)(a1 + 760);   // refreshReport Option discriminant
  v4 = *a2;
  v5 = *(_QWORD *)(*a2 + 16LL);
  if ( *(_QWORD *)*a2 == v5 )
  {
    v7 = a2;
    sub_141939070(v4, v5, 1, 1, 1);
    a2 = v7;
    v5 = *(_QWORD *)(v4 + 16);
  }
  *(_BYTE *)(*(_QWORD *)(v4 + 8) + v5) = 123;  // "{"
  *(_QWORD *)(v4 + 16) = v5 + 1;
  v8 = 256;
  v9 = a2;
  result = sub_1407ABAE0(&v8, aStatus_11, 6, a1);            // "status" -> sub_140CE2280
  if ( !result )
  {
    if ( (_BYTE)v8 )
      return sub_141967030();
    result = sub_1407A29A0(&v8, aAccounts_2, 8, a1 + 736);   // "accounts" Vec
    if ( result )
      return result;
    if ( v3 != -1 )
    {
      if ( (_BYTE)v8 )
        return sub_141967030();
      result = sub_1407A7390(&v8, aRefreshreport_0, 13, a1 + 760);  // "refreshReport"
      if ( result )
        return result;
    }
    result = 0;
    if ( (v8 & 1) == 0 )
    {
      if ( HIBYTE(v8) )
      {
        sub_1401E6F40(*v9, "}falsetrue", 1);
        return 0;
      }
    }
  }
  return result;
}
