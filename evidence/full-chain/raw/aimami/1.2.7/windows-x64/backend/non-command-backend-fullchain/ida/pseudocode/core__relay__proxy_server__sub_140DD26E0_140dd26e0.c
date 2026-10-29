// win 1.2.7 | module src/core/relay/proxy_server.rs | ea 0x140dd26e0 | name sub_140DD26E0
// win 1.2.7 | module src/core/relay/proxy_server.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140DD26E0(__int64 a1, __int64 a2)
{
  __int64 *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rbx
  __int64 v8; // r14
  _QWORD *v9; // rax

  if ( *(_QWORD *)(a2 + 32) )
  {
    v4 = *(__int64 **)(a2 + 40);
    if ( v4 != *(__int64 **)(a2 + 56) )
    {
      *(_QWORD *)(a2 + 40) = v4 + 4;
      v5 = *v4;
      if ( *v4 )
      {
        v6 = v4[3];
        *(_QWORD *)a1 = -1;
        *(_QWORD *)(a1 + 8) = v5;
        *(_OWORD *)(a1 + 16) = *(_OWORD *)(v4 + 1);
        *(_QWORD *)(a1 + 32) = v6;
        return a1;
      }
    }
    sub_1403F8F70();
    *(_QWORD *)(a2 + 32) = 0;
  }
  if ( *(_DWORD *)a2 == 1 )
  {
    if ( *(_BYTE *)(a2 + 24) )
    {
      if ( *(_BYTE *)(a2 + 24) == 1 )
        sub_1419393E0(&off_141A47628);
      sub_141939400(&off_141A47628);
    }
    v7 = *(_QWORD *)(a2 + 8);
    v8 = *(_QWORD *)(a2 + 16);
    *(_BYTE *)(a2 + 24) = 1;
    *(_QWORD *)a2 = 0;
    nullsub_1(a1);
    v9 = (_QWORD *)sub_140001650(16, 8);
    if ( !v9 )
      sub_141938D11(8, 16);
    *v9 = v7;
    v9[1] = v8;
    *(_QWORD *)a1 = -2;
    *(_QWORD *)(a1 + 8) = v9;
    *(_QWORD *)(a1 + 16) = &off_1419D2010;
  }
  else
  {
    *(_QWORD *)a1 = -3;
  }
  return a1;
}
