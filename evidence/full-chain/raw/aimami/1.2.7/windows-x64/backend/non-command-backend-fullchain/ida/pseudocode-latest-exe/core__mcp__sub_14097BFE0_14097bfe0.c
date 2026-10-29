// win 1.2.7 latest-exe | module src/core/mcp.rs | ea 0x14097bfe0 | successor of pre-update 0x140ed3770 | session <审计会话>
// match evidence: {"conf": false, "body_sim": 0.686, "str_ov": 1.0, "verdict": "CONFIRMED_DIFF"}
unsigned __int64 *__fastcall sub_14097BFE0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rax
  int v9; // r15d
  unsigned __int64 *v10; // r14
  unsigned __int64 v11; // rax
  __int64 v12; // rcx
  __int64 (__fastcall **v13)(); // r15
  unsigned __int64 *result; // rax
  unsigned __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 (__fastcall **v17)(); // rcx
  __int64 v18; // rdx
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm2
  _QWORD v22[2]; // [rsp+30h] [rbp-198h] BYREF
  __int64 v23; // [rsp+40h] [rbp-188h] BYREF
  unsigned __int64 *v24; // [rsp+48h] [rbp-180h] BYREF
  __int128 v25; // [rsp+50h] [rbp-178h]
  __int128 v26; // [rsp+60h] [rbp-168h]
  __int128 v27; // [rsp+70h] [rbp-158h]
  __int128 v28; // [rsp+80h] [rbp-148h]
  __int128 v29; // [rsp+90h] [rbp-138h]
  _QWORD v30[27]; // [rsp+F0h] [rbp-D8h] BYREF

  v22[0] = a3;
  v22[1] = a4;
  v8 = sub_1411FC370(a2);
  if ( !(unsigned __int8)sub_1411F26B0(v8, aMcpServers, 11) )
  {
    v9 = sub_1411FC820(a2);
    sub_1411F25A0(&v24);
    v23 = 10;
    sub_1411F2B60((unsigned int)v30, v9, (unsigned int)aMcpServers, 11, (__int64)&v23);
    if ( LODWORD(v30[0]) != -1 )
      sub_140903FF0(v30);
  }
  v10 = (unsigned __int64 *)sub_1411FD0A0(a2, aMcpServers, 11, &off_141A5CCC0);
  v11 = *v10;
  v12 = 1;
  if ( *v10 >= 8 )
    v12 = v11 - 8;
  if ( v12 != 1 )
  {
    if ( v12 == 2 )
    {
      ++v10;
      v13 = &off_141A59678;
      goto LABEL_12;
    }
LABEL_21:
    nullsub_1(v12, *v10 - 8);
    result = (unsigned __int64 *)sub_140001650(32, 1);
    if ( !result )
      sub_14196B2DB(1, 32);
    qmemcpy(result, "mcp_servers must be a TOML table", 32);
    *(_QWORD *)a1 = 9;
    *(_QWORD *)(a1 + 8) = 32;
    *(_QWORD *)(a1 + 16) = result;
    *(_QWORD *)(a1 + 24) = 32;
    return result;
  }
  if ( v11 > 8 )
    goto LABEL_21;
  v12 = 259;
  if ( !_bittest64(&v12, v11) )
    goto LABEL_21;
  v13 = &off_141A595B8;
LABEL_12:
  if ( !((unsigned __int8 (__fastcall *)(unsigned __int64 *, __int64, __int64))v13[14])(v10, a3, a4) )
  {
    sub_1411F25A0(&v24);
    v23 = 10;
    ((void (__fastcall *)(_QWORD *, unsigned __int64 *, __int64, __int64, __int64 *))v13[15])(v30, v10, a3, a4, &v23);
    if ( LODWORD(v30[0]) != -1 )
      sub_140903FF0(v30);
  }
  result = (unsigned __int64 *)((__int64 (__fastcall *)(unsigned __int64 *, __int64, __int64))v13[11])(v10, a3, a4);
  if ( result )
  {
    v15 = *result;
    v16 = 1;
    if ( *result >= 8 )
      v16 = *result - 8;
    if ( v16 == 1 )
    {
      if ( v15 <= 8 )
      {
        v18 = 259;
        if ( _bittest64(&v18, v15) )
        {
          v17 = &off_141A595B8;
          goto LABEL_26;
        }
      }
    }
    else if ( v16 == 2 )
    {
      ++result;
      v17 = &off_141A59678;
LABEL_26:
      *(_QWORD *)(a1 + 8) = result;
      *(_QWORD *)(a1 + 16) = v17;
      *(_QWORD *)a1 = -1;
      return result;
    }
  }
  v30[0] = v22;
  v30[1] = sub_140191200;
  sub_1416DAFA0(&v24, &unk_141A5979C, v30);
  v23 = 9;
  *(_OWORD *)(a1 + 80) = v29;
  v19 = v25;
  v20 = v26;
  v21 = v27;
  *(_OWORD *)(a1 + 64) = v28;
  *(_OWORD *)(a1 + 48) = v21;
  *(_OWORD *)(a1 + 32) = v20;
  *(_OWORD *)(a1 + 16) = v19;
  *(_QWORD *)a1 = v23;
  result = v24;
  *(_QWORD *)(a1 + 8) = v24;
  return result;
}
