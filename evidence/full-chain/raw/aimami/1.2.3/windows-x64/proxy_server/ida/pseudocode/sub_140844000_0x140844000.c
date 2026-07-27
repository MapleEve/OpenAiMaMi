// module: codexmate_lib/core/relay/proxy_server
// addr: 0x140844000
// name: sub_140844000
// win 1.2.3 | module core/relay/proxy_server.rs | attributed via call-graph propagation (>=2 same-module callers, global fanin<=6, single-module exclusive)
__int64 __fastcall sub_140844000(__int64 a1)
{
  char v2; // si
  volatile signed __int64 *v3; // rax
  bool v4; // zf
  volatile signed __int64 *v6; // [rsp+20h] [rbp-20h] BYREF
  volatile signed __int64 *v7; // [rsp+28h] [rbp-18h] BYREF
  volatile signed __int64 *v8; // [rsp+30h] [rbp-10h]
  __int64 v9; // [rsp+38h] [rbp-8h]

  v9 = -2;
  v7 = nullptr;
  if ( !a1 )
    sub_1416C3040(&off_1417965E0);
  v6 = (volatile signed __int64 *)a1;
  *(_BYTE *)(a1 + 56) = 1;
  v2 = sub_1412F1370(a1 + 48);
  if ( (v2 & 5) == 1 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(a1 + 32) + 16LL))(*(_QWORD *)(a1 + 40));
  if ( (v2 & 4) != 0 )
  {
    v3 = v6;
    v4 = *((_BYTE *)v6 + 56) == 0;
    *((_BYTE *)v6 + 56) = 0;
    if ( v4 )
      sub_1416C3040(&off_1417965F8);
    if ( !_InterlockedDecrement64(v3) )
      sub_1412E8E40(&v6);
    if ( v7 )
    {
      v8 = v7;
      if ( (sub_1412F1370(v7 + 6) & 5) != 1 )
        goto LABEL_16;
LABEL_15:
      (*(void (__fastcall **)(_QWORD))(*((_QWORD *)v8 + 4) + 16LL))(*((_QWORD *)v8 + 5));
LABEL_16:
      if ( !_InterlockedDecrement64(v8) )
        sub_1412E8E40(&v7);
    }
  }
  else
  {
    if ( !_InterlockedDecrement64(v6) )
      sub_1412E8E40(&v6);
    if ( v7 )
    {
      v8 = v7;
      if ( (sub_1412F1370(v7 + 6) & 5) != 1 )
        goto LABEL_16;
      goto LABEL_15;
    }
  }
  return (unsigned __int8)(v2 & 4) >> 2;
}