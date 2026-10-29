// win 1.2.7 | module src/core/mcp.rs | ea 0x140ed3770 | name sub_140ED3770
// win 1.2.7 | module src/core/mcp.rs | attributed via panic-Location xref (win-native)
void *__fastcall sub_140ED3770(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rax
  int v9; // r15d
  _DWORD *v10; // rax
  __int64 v11; // rcx
  _DWORD *v12; // r14
  _DWORD *v13; // rax
  void *result; // rax
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm2
  _QWORD v18[2]; // [rsp+30h] [rbp-198h] BYREF
  __int64 v19; // [rsp+40h] [rbp-188h] BYREF
  void *v20; // [rsp+48h] [rbp-180h] BYREF
  __int128 v21; // [rsp+50h] [rbp-178h]
  __int128 v22; // [rsp+60h] [rbp-168h]
  __int128 v23; // [rsp+70h] [rbp-158h]
  __int128 v24; // [rsp+80h] [rbp-148h]
  __int128 v25; // [rsp+90h] [rbp-138h]
  _QWORD v26[27]; // [rsp+F0h] [rbp-D8h] BYREF

  v18[0] = a3;
  v18[1] = a4;
  v8 = sub_1411D9BC0(a2);
  if ( !(unsigned __int8)sub_1411CCC10(v8, aMcpServers, 11) )
  {
    v9 = sub_1411D9F50(a2);
    sub_1411CCB00(&v20);
    v19 = 10;
    sub_1411CD040((unsigned int)v26, v9, (unsigned int)aMcpServers, 11, (__int64)&v19);
    if ( LODWORD(v26[0]) != -1 )
      sub_140E96620(v26);
  }
  v10 = (_DWORD *)sub_1411DA6E0(a2, aMcpServers, 11, &off_141A59D20);
  if ( *v10 == 10 )
  {
    v12 = v10 + 2;
    if ( !(unsigned __int8)sub_1411CCC10(v10 + 2, a3, a4) )
    {
      sub_1411CCB00(&v20);
      v19 = 10;
      sub_1411CD040((unsigned int)v26, (_DWORD)v12, a3, a4, (__int64)&v19);
      if ( LODWORD(v26[0]) != -1 )
        sub_140E96620(v26);
    }
    v13 = (_DWORD *)sub_1411CD590(v12, a3, a4);
    if ( v13 && *v13 == 10 )
    {
      result = v13 + 2;
      *(_QWORD *)(a1 + 8) = result;
      *(_QWORD *)a1 = -1;
    }
    else
    {
      v26[0] = v18;
      v26[1] = sub_140186EE0;
      sub_1416ABFD0(&v20, &unk_141A57371, v26);
      v19 = 9;
      *(_OWORD *)(a1 + 80) = v25;
      v15 = v21;
      v16 = v22;
      v17 = v23;
      *(_OWORD *)(a1 + 64) = v24;
      *(_OWORD *)(a1 + 48) = v17;
      *(_OWORD *)(a1 + 32) = v16;
      *(_OWORD *)(a1 + 16) = v15;
      *(_QWORD *)a1 = v19;
      result = v20;
      *(_QWORD *)(a1 + 8) = v20;
    }
  }
  else
  {
    nullsub_1(v11);
    result = (void *)sub_140001650(32, 1);
    if ( !result )
      sub_141938D2B(1, 32);
    qmemcpy(result, "mcp_servers must be a TOML table", 32);
    *(_QWORD *)a1 = 9;
    *(_QWORD *)(a1 + 8) = 32;
    *(_QWORD *)(a1 + 16) = result;
    *(_QWORD *)(a1 + 24) = 32;
  }
  return result;
}
