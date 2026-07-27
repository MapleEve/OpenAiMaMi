// module: codexmate_lib
// addr: 0x1409660f0
// name: sub_1409660F0
// win 1.2.1 | module src/lib.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_1409660F0(_QWORD *a1, __int64 a2, _BYTE *a3)
{
  bool v5; // zf
  char v6; // bl
  __int64 v7; // rcx
  __int64 v8; // rax
  _QWORD *v9; // rdi
  void *v10; // rcx
  __int64 v11; // rax
  _QWORD *v12; // rax
  __int64 v13; // rdx
  char v15; // al
  __int64 v16; // [rsp+28h] [rbp-18h] BYREF
  __int64 v17; // [rsp+30h] [rbp-10h]
  _BYTE *v18; // [rsp+38h] [rbp-8h]
  __int64 v19; // [rsp+40h] [rbp+0h]

  v19 = -2;
  v5 = *a3 == 6;
  v18 = a3;
  if ( !v5 || a3[32] || byte_141EC930C || (v15 = sub_1401A7900(a2), a3 = v18, !v15) )
  {
    v6 = *a3;
    if ( (unsigned __int8)(*a3 - 5) < 2u )
      sub_140878480(a2);
    if ( v6 == 5 )
    {
      v7 = *a1;
      if ( *(_QWORD *)(*a1 + 16LL) )
        sub_1416C2F80(&off_14179FCC0);
      *(_QWORD *)(v7 + 16) = -1;
      v16 = *(_QWORD *)(v7 + 24);
      v8 = v16;
      v17 = v7;
      *(_QWORD *)(v7 + 24) = 0;
      if ( v8 )
      {
        *(_BYTE *)(v8 + 16) = 1;
        if ( !_InterlockedDecrement64((volatile signed __int64 *)v8) )
          sub_140573D40(&v16);
      }
      ++*(_QWORD *)(v17 + 16);
      v9 = (_QWORD *)a1[1];
      if ( v9[2] )
        sub_1416C2F80(&off_14179FCA8);
      v9[2] = -1;
      v10 = (void *)v9[4];
      v11 = 0;
      v5 = v9[3] == 0;
      v9[3] = 0;
      if ( !v5 && v10 )
      {
        CloseHandle(v10);
        v11 = v9[2] + 1LL;
      }
      v9[2] = v11;
      v12 = (_QWORD *)sub_140004B10((volatile void *)(*(_QWORD *)(*(_QWORD *)(a2 + 136) + 5016LL) + 16LL));
      if ( v12 )
        stop_proxy_if_running(v12, v13);
    }
    return sub_1408A3CF0(v18);
  }
  else
  {
    sub_1412148F0(v18 + 8);
    quit_keeping_router(a2);
    return sub_1408A3CF0(v18);
  }
}