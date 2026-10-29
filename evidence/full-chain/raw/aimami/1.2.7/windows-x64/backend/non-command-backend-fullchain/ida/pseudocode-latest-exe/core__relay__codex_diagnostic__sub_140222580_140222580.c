// win 1.2.7 latest-exe | module src/core/relay/codex_diagnostic.rs | ea 0x140222580 | successor of pre-update 0x1403e91e0 | session <审计会话>
// match evidence: {"conf": false, "body_sim": 0.738, "str_ov": null, "verdict": "CONFIRMED_DIFF"}
_QWORD *__fastcall sub_140222580(_QWORD *a1, _DWORD *a2)
{
  _BYTE *v2; // rdi
  _QWORD *v3; // rbx
  __int64 v4; // rdx
  _QWORD *result; // rax
  __int128 v6; // xmm0
  _QWORD *v7; // rcx
  _QWORD v8[2]; // [rsp+20h] [rbp-60h] BYREF
  __int128 v9; // [rsp+30h] [rbp-50h]
  __int128 v10; // [rsp+40h] [rbp-40h]
  __int128 v11; // [rsp+50h] [rbp-30h]
  __int64 v12; // [rsp+60h] [rbp-20h] BYREF
  _BYTE v13[56]; // [rsp+68h] [rbp-18h]
  __int128 v14; // [rsp+A0h] [rbp+20h]
  __int128 v15; // [rsp+B0h] [rbp+30h]
  __int128 v16; // [rsp+C0h] [rbp+40h]
  __int64 v17; // [rsp+D0h] [rbp+50h]
  _QWORD *v18; // [rsp+E0h] [rbp+60h]
  _BYTE *v19; // [rsp+E8h] [rbp+68h]
  __int64 v20; // [rsp+F0h] [rbp+70h]

  v20 = -2;
  v18 = a1;
  v19 = a2;
  if ( *a2 != 1 )
    goto LABEL_16;
  v2 = v19 + 8;
  v3 = v19 + 16;
  while ( 1 )
  {
    sub_140220BD0(v8, v2);
    if ( v8[0] != -1 )
    {
      *(_OWORD *)&v13[40] = v11;
      *(_OWORD *)&v13[24] = v10;
      *(_OWORD *)&v13[8] = v9;
      *(_QWORD *)v13 = v8[1];
      v14 = *(_OWORD *)v13;
      v15 = *(_OWORD *)&v13[16];
      v16 = *(_OWORD *)&v13[32];
      v17 = *((_QWORD *)&v11 + 1);
      v12 = v8[0];
LABEL_4:
      sub_1401ACD60(&v12);
      goto LABEL_5;
    }
    if ( !*v3 )
      break;
    sub_140658620(&v12, v3, 0, &off_141A07870);
    if ( v12 == -2 )
      goto LABEL_13;
    v17 = *(_QWORD *)&v13[48];
    v16 = *(_OWORD *)&v13[32];
    v15 = *(_OWORD *)&v13[16];
    v14 = *(_OWORD *)v13;
    if ( v12 != -1 )
      goto LABEL_4;
    result = *(_QWORD **)v13;
    if ( *(_QWORD *)v13 != -1 )
    {
      v6 = *(_OWORD *)&v13[8];
      v7 = v18;
      *v18 = *(_QWORD *)v13;
      *(_OWORD *)(v7 + 1) = v6;
      return result;
    }
LABEL_5:
    if ( !*v19 )
      goto LABEL_16;
  }
  v12 = -2;
LABEL_13:
  if ( *(_QWORD *)v19 )
    sub_1401ACB50(v2, v4);
  *(_QWORD *)v19 = 0;
LABEL_16:
  result = v18;
  *v18 = -1;
  return result;
}
