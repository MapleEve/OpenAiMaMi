// win 1.2.7 latest-exe | module src/core/relay/router_transition.rs | ea 0x140ea2da0 | successor of pre-update 0x140d883f0 | session <审计会话>
// match evidence: {"conf": false, "body_sim": 0.717, "str_ov": 1.0, "verdict": "CONFIRMED_DIFF"}
void *__fastcall sub_140EA2DA0(__int64 a1, __int64 *a2, __int64 a3, char a4, char a5, _OWORD *a6)
{
  __int64 v9; // rdx
  __int64 v10; // r8
  __int128 v11; // xmm0
  __int64 v12; // rdx
  __int64 v13; // r8
  void *result; // rax
  _BYTE v15[364]; // [rsp+28h] [rbp-58h] BYREF
  char v16; // [rsp+194h] [rbp+114h]
  char v17; // [rsp+1A6h] [rbp+126h]
  __int128 v18; // [rsp+1A8h] [rbp+128h] BYREF
  __int64 v19; // [rsp+1B8h] [rbp+138h]
  __int128 v20; // [rsp+1C0h] [rbp+140h] BYREF
  __int64 v21; // [rsp+1D0h] [rbp+150h]
  __int128 v22; // [rsp+1D8h] [rbp+158h] BYREF
  __int64 v23; // [rsp+1E8h] [rbp+168h]
  _BYTE *v24; // [rsp+1F0h] [rbp+170h] BYREF
  __int64 (__fastcall *v25)(); // [rsp+1F8h] [rbp+178h]
  _BYTE v26[24]; // [rsp+200h] [rbp+180h] BYREF
  char v27; // [rsp+21Eh] [rbp+19Eh]
  char v28; // [rsp+21Fh] [rbp+19Fh]
  __int64 v29; // [rsp+220h] [rbp+1A0h]

  v29 = -2;
  if ( a3 != 1 )
  {
    sub_140EB7850(v15, a2);
    v16 = 1;
    v17 = a4;
    v12 = *a2;
    v13 = a2[3];
    v28 = 1;
    sub_140EADE50(&v22, v12, v13, v15);
    if ( (_QWORD)v22 == -1 )
    {
      *(_OWORD *)&v26[1] = *a6;
      v26[0] = 1;
      v28 = 0;
      return (void *)sub_140E9F030(a1, a2, v15, v26);
    }
    *(_QWORD *)&v26[16] = v23;
    *(_OWORD *)v26 = v22;
    v24 = v26;
    v25 = sub_1400015F0;
    sub_1416DAFA0(&v20, &unk_141A9FB18, &v24);
    *(_QWORD *)(a1 + 24) = v21;
    v11 = v20;
LABEL_7:
    *(_OWORD *)(a1 + 8) = v11;
    *(_QWORD *)a1 = 10;
    if ( *(_QWORD *)v26 )
      sub_140001660(*(_QWORD *)&v26[8], *(_QWORD *)v26, 1);
    return (void *)sub_140292E20(v15);
  }
  if ( (a4 & 1) != 0 )
  {
    sub_140EB7850(v15, a2);
    v16 = 0;
    v17 = a5;
    v9 = *a2;
    v10 = a2[3];
    v27 = 1;
    sub_140EADE50(&v22, v9, v10, v15);
    if ( (_QWORD)v22 == -1 )
    {
      *(_OWORD *)&v26[1] = *a6;
      v26[0] = 1;
      v27 = 0;
      return (void *)sub_140E9F030(a1, a2, v15, v26);
    }
    *(_QWORD *)&v26[16] = v23;
    *(_OWORD *)v26 = v22;
    v24 = v26;
    v25 = sub_1400015F0;
    sub_1416DAFA0(&v18, &unk_141A9FBA4, &v24);
    *(_QWORD *)(a1 + 24) = v19;
    v11 = v18;
    goto LABEL_7;
  }
  nullsub_1(a1, a2);
  result = (void *)sub_140001650(80, 1);
  if ( !result )
    sub_14196B2DB(1, 80);
  qmemcpy(result, "NativeOff was not applied because no verified ChatGPT write window was available", 80);
  *(_QWORD *)a1 = 10;
  *(_QWORD *)(a1 + 8) = 80;
  *(_QWORD *)(a1 + 16) = result;
  *(_QWORD *)(a1 + 24) = 80;
  return result;
}
