// win 1.2.1 | tauri command handler = upsert_relay_provider | mapped via command-name string xref (win-native, ground-truth)
__int64 __fastcall upsert_relay_provider(__int64 a1)
{
  __int64 v2; // r14
  __int64 v3; // rcx
  __int64 v4; // r14
  __int64 v5; // r15
  __int128 v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rsi
  _BYTE v12[176]; // [rsp+38h] [rbp-48h] BYREF
  _BYTE v13[512]; // [rsp+E8h] [rbp+68h] BYREF
  __int64 v14; // [rsp+2E8h] [rbp+268h]
  char v15[384]; // [rsp+2F0h] [rbp+270h] BYREF
  __int64 v16; // [rsp+470h] [rbp+3F0h]
  int v17; // [rsp+478h] [rbp+3F8h]
  int v18; // [rsp+47Ch] [rbp+3FCh]
  int v19; // [rsp+480h] [rbp+400h] BYREF
  __int128 v20; // [rsp+488h] [rbp+408h]
  __int128 v21; // [rsp+498h] [rbp+418h]
  _BYTE v22[152]; // [rsp+518h] [rbp+498h] BYREF
  _BYTE v23[24]; // [rsp+5B0h] [rbp+530h] BYREF
  __int128 v24; // [rsp+5C8h] [rbp+548h]
  __int64 v25; // [rsp+6E8h] [rbp+668h] BYREF
  __int128 v26; // [rsp+6F0h] [rbp+670h]
  __int128 v27; // [rsp+700h] [rbp+680h]
  const char *v28; // [rsp+820h] [rbp+7A0h] BYREF
  __int64 v29; // [rsp+828h] [rbp+7A8h]
  const char *v30; // [rsp+830h] [rbp+7B0h] BYREF
  __int64 v31; // [rsp+838h] [rbp+7B8h]
  _BYTE *v32; // [rsp+840h] [rbp+7C0h]
  __int128 *v33; // [rsp+848h] [rbp+7C8h]
  __int64 v34; // [rsp+850h] [rbp+7D0h]
  __int128 v35; // [rsp+9B0h] [rbp+930h] BYREF
  __int64 v36; // [rsp+9C0h] [rbp+940h]
  _OWORD v37[2]; // [rsp+9C8h] [rbp+948h] BYREF
  __int64 v38; // [rsp+9E8h] [rbp+968h]
  __int128 v39; // [rsp+9F0h] [rbp+970h] BYREF
  __int64 v40; // [rsp+A00h] [rbp+980h]
  __int64 v41; // [rsp+A10h] [rbp+990h]
  __int64 v42; // [rsp+A18h] [rbp+998h]
  char v43; // [rsp+A25h] [rbp+9A5h]
  char v44; // [rsp+A26h] [rbp+9A6h]
  char v45; // [rsp+A27h] [rbp+9A7h]
  __int64 v46; // [rsp+A28h] [rbp+9A8h]

  v46 = -2; /*0x140191409*/
  sub_141684120(v13, a1, 520); /*0x140191427*/
  sub_141684120(v15, a1 + 520, 400); /*0x140191443*/
  v40 = *(_QWORD *)(a1 + 936); /*0x14019144f*/
  v39 = *(_OWORD *)(a1 + 920); /*0x14019145d*/
  v34 = 0; /*0x140191464*/
  v28 = aUpsertRelayPro; /*0x140191476*/
  v29 = 21; /*0x14019147d*/
  v30 = aApp; /*0x14019148f*/
  v31 = 3; /*0x140191496*/
  v32 = v13; /*0x1401914a1*/
  v33 = &v39; /*0x1401914af*/
  v45 = 1; /*0x1401914b6*/
  sub_1401C3650(&v19, &v28); /*0x1401914cb*/
  if ( v19 == -1 ) /*0x1401914d8*/
  {
    v27 = v21; /*0x140191652*/
    v26 = v20; /*0x140191659*/
    sub_141684120(&v28, a1 + 520, 360); /*0x140191673*/
    *(_OWORD *)v23 = *(_OWORD *)(a1 + 880); /*0x140191686*/
    *(_QWORD *)&v23[16] = *(_QWORD *)(a1 + 896); /*0x140191694*/
    v25 = 1; /*0x1401916a7*/
    v45 = 0; /*0x1401916b2*/
    sub_14047E370((unsigned int)&v28, v16, (unsigned int)&v25, (unsigned int)v23, v17, v18); /*0x1401916d2*/
  }
  else
  {
    sub_141684120(v22, &v19, 152); /*0x1401914f2*/
    v34 = 0; /*0x1401914f7*/
    v28 = aUpsertRelayPro; /*0x140191502*/
    v29 = 21; /*0x140191509*/
    v30 = aManager_0; /*0x14019151b*/
    v31 = 7; /*0x140191522*/
    v32 = v13; /*0x14019152d*/
    v33 = &v39; /*0x140191534*/
    v2 = sub_140004B10((volatile void *)(v14 + 16)); /*0x14019154c*/
    if ( !v2 ) /*0x140191552*/
    {
      sub_1416850A0(v37, &v28, &v30); /*0x1401916f2*/
      if ( LOBYTE(v37[0]) != 0xFF ) /*0x1401916ff*/
      {
        v27 = v37[1]; /*0x140191713*/
        v26 = v37[0]; /*0x14019171a*/
        sub_141684120(&v28, a1 + 520, 360); /*0x140191734*/
        *(_OWORD *)v23 = *(_OWORD *)(a1 + 880); /*0x140191747*/
        *(_QWORD *)&v23[16] = *(_QWORD *)(a1 + 896); /*0x140191755*/
        v25 = 1; /*0x140191768*/
        v44 = 0; /*0x140191773*/
        sub_14047E370((unsigned int)&v28, v16, (unsigned int)&v25, (unsigned int)v23, v17, v18); /*0x140191793*/
        v45 = 0; /*0x140191799*/
        sub_140014150(v22); /*0x1401917a7*/
        goto LABEL_20; /*0x1401917ad*/
      }
      v2 = *((_QWORD *)&v37[0] + 1); /*0x140191890*/
    }
    v34 = 0; /*0x140191558*/
    v28 = aUpsertRelayPro; /*0x140191563*/
    v29 = 21; /*0x14019156a*/
    v30 = aInput; /*0x14019157c*/
    v31 = 5; /*0x140191583*/
    v32 = v13; /*0x14019158e*/
    v33 = &v39; /*0x140191595*/
    v44 = 1; /*0x14019159c*/
    sub_140AEFE20(&v25, &v28); /*0x1401915b1*/
    v42 = v25; /*0x1401915be*/
    if ( v25 != -1 ) /*0x1401915c9*/
    {
      sub_141684120(v12, &v25, 176); /*0x1401915e3*/
      sub_140486B40(v23, v22, v2, v12); /*0x1401915fd*/
      sub_141684120(&v28, a1 + 520, 400); /*0x140191613*/
      if ( *(_QWORD *)v23 != -1 ) /*0x140191620*/
      {
        sub_141684120(&v25, v23, 312); /*0x14019163a*/
LABEL_19:
        v43 = 0; /*0x14019190c*/
        sub_140437490(&v28, &v25); /*0x140191921*/
        goto LABEL_20; /*0x140191921*/
      }
      v4 = *(_QWORD *)&v23[8]; /*0x140191858*/
      v5 = *(_QWORD *)&v23[16]; /*0x14019185f*/
      *((_QWORD *)&v6 + 1) = v24; /*0x140191866*/
      if ( (__int64)v24 < 0 ) /*0x140191870*/
      {
        v7 = 0; /*0x140191872*/
        goto LABEL_12; /*0x140191872*/
      }
      if ( (_QWORD)v24 ) /*0x14019189c*/
      {
        nullsub_1(v3); /*0x1401918a2*/
        v7 = 1; /*0x1401918a7*/
        v8 = sub_140001650(*((_QWORD *)&v6 + 1), 1); /*0x1401918b4*/
        if ( !v8 ) /*0x1401918bc*/
        {
LABEL_12:
          v41 = v5; /*0x140191874*/
          v42 = v4; /*0x14019187b*/
          sub_1416C2D4B(v7, *((_QWORD *)&v6 + 1)); /*0x140191888*/
        }
        *(_QWORD *)&v6 = v8; /*0x1401918be*/
        sub_141684120(v8, v5, *((_QWORD *)&v6 + 1)); /*0x1401918ca*/
        if ( !v4 ) /*0x1401918d2*/
        {
LABEL_18:
          LOBYTE(v26) = 3; /*0x1401918e5*/
          *((_QWORD *)&v26 + 1) = *((_QWORD *)&v6 + 1); /*0x1401918ec*/
          v27 = v6; /*0x1401918f3*/
          v25 = -1; /*0x140191901*/
          goto LABEL_19; /*0x140191901*/
        }
      }
      else
      {
        *(_QWORD *)&v6 = 1; /*0x1401919cb*/
        if ( !*(_QWORD *)&v23[8] ) /*0x1401919d3*/
          goto LABEL_18; /*0x1401919d3*/
      }
      sub_140001660(v5, v4, 1); /*0x1401918e0*/
      goto LABEL_18; /*0x1401918e0*/
    }
    v24 = v27; /*0x1401917c0*/
    *(_OWORD *)&v23[8] = v26; /*0x1401917c7*/
    sub_141684120(&v28, a1 + 520, 360); /*0x1401917e1*/
    v35 = *(_OWORD *)(a1 + 880); /*0x1401917f4*/
    v36 = *(_QWORD *)(a1 + 896); /*0x140191802*/
    *(_QWORD *)v23 = 1; /*0x140191815*/
    sub_14047E370((unsigned int)&v28, v16, (unsigned int)v23, (unsigned int)&v35, v17, v18); /*0x140191839*/
    v45 = 0; /*0x14019183f*/
    sub_140014150(v22); /*0x14019184d*/
  }
LABEL_20:
  if ( (_QWORD)v39 != -1 ) /*0x14019192f*/
  {
    v9 = *((_QWORD *)&v39 + 1); /*0x140191935*/
    v41 = v40; /*0x140191943*/
    v42 = 0; /*0x14019194a*/
    v38 = *((_QWORD *)&v39 + 1); /*0x140191955*/
    while ( v41 != v42 ) /*0x14019196e*/
    {
      ++v42; /*0x140191973*/
      v10 = v9 + 96; /*0x14019197a*/
      sub_1402C7520(); /*0x14019197e*/
      v9 = v10; /*0x140191984*/
    }
    if ( (_QWORD)v39 ) /*0x140191993*/
      sub_140001660(*((_QWORD *)&v39 + 1), 96 * v39, 8); /*0x1401919aa*/
  }
  return sub_140014270(v13); /*0x1401919b9*/
}