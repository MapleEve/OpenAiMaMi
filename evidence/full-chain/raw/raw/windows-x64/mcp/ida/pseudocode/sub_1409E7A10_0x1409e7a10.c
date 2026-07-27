// module: codexmate_lib/core/mcp
// addr: 0x1409e7a10
// name: sub_1409E7A10
// win 1.2.1 | module src/core/mcp.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_1409E7A10(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rax
  int v9; // r15d
  _DWORD *v10; // rax
  __int64 v11; // rcx
  _DWORD *v12; // r14
  _DWORD *v13; // rax
  void *v14; // rax
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm2
  _QWORD v19[2]; // [rsp+30h] [rbp-198h] BYREF
  __int64 v20; // [rsp+40h] [rbp-188h] BYREF
  __int64 v21; // [rsp+48h] [rbp-180h] BYREF
  __int128 v22; // [rsp+50h] [rbp-178h]
  __int128 v23; // [rsp+60h] [rbp-168h]
  __int128 v24; // [rsp+70h] [rbp-158h]
  __int128 v25; // [rsp+80h] [rbp-148h]
  __int128 v26; // [rsp+90h] [rbp-138h]
  unsigned __int64 v27[27]; // [rsp+F0h] [rbp-D8h] BYREF

  v19[0] = a3;
  v19[1] = a4;
  v8 = sub_140FC4780(a2);
  if ( !(unsigned __int8)sub_140FC6EA0(v8, aMcpServers, 11) )
  {
    v9 = sub_140FC4B10(a2);
    sub_140FC6D90(&v21);
    v20 = 10;
    sub_140FC72D0((unsigned int)v27, v9, (unsigned int)aMcpServers, 11, (__int64)&v20);
    if ( LODWORD(v27[0]) != -1 )
      sub_140983900(v27);
  }
  v10 = (_DWORD *)sub_140FC52A0(a2, aMcpServers, 11, &off_1417A76F0);
  if ( *v10 == 10 )
  {
    v12 = v10 + 2;
    if ( !(unsigned __int8)sub_140FC6EA0(v10 + 2, a3, a4) )
    {
      sub_140FC6D90(&v21);
      v20 = 10;
      sub_140FC72D0((unsigned int)v27, (_DWORD)v12, a3, a4, (__int64)&v20);
      if ( LODWORD(v27[0]) != -1 )
        sub_140983900(v27);
    }
    v13 = (_DWORD *)sub_140FC7820(v12, a3, a4);
    if ( v13 && *v13 == 10 )
    {
      *(_QWORD *)(a1 + 8) = v13 + 2;
      *(_QWORD *)a1 = -1;
    }
    else
    {
      v27[0] = (unsigned __int64)v19;
      v27[1] = (unsigned __int64)sub_14041F680;
      sub_14149C0F0(&v21, &unk_1417A4DAE, v27);
      v20 = 9;
      *(_OWORD *)(a1 + 80) = v26;
      v15 = v22;
      v16 = v23;
      v17 = v24;
      *(_OWORD *)(a1 + 64) = v25;
      *(_OWORD *)(a1 + 48) = v17;
      *(_OWORD *)(a1 + 32) = v16;
      *(_OWORD *)(a1 + 16) = v15;
      *(_QWORD *)a1 = v20;
      *(_QWORD *)(a1 + 8) = v21;
    }
  }
  else
  {
    nullsub_1(v11);
    v14 = (void *)sub_140001650(32, 1);
    if ( !v14 )
      sub_1416C2D4B(1, 32);
    qmemcpy(v14, "mcp_servers must be a TOML table", 32);
    *(_QWORD *)a1 = 9;
    *(_QWORD *)(a1 + 8) = 32;
    *(_QWORD *)(a1 + 16) = v14;
    *(_QWORD *)(a1 + 24) = 32;
  }
  return a1;
}