// module: codexmate_lib/core/relay/proxy_server
// addr: 0x14061e020
// name: sub_14061E020
// win 1.2.3 | module core/relay/proxy_server.rs | attributed via call-graph propagation (>=2 same-module callers, global fanin<=6, single-module exclusive)
char __fastcall sub_14061E020(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rax
  __int128 *v7; // rbx
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm2
  __int128 v11; // xmm6
  __int64 v12; // r14
  char result; // al
  __int64 v14; // r15
  __int64 v15; // rdi
  __int64 v16; // rbx
  __int64 v17; // rcx
  __int64 v18; // r14
  __int64 *v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // rax
  __int128 v22; // [rsp+20h] [rbp-60h]
  __int128 v23; // [rsp+30h] [rbp-50h]
  __int128 v24; // [rsp+40h] [rbp-40h]
  __int128 v25; // [rsp+50h] [rbp-30h]
  __int128 v26; // [rsp+60h] [rbp-20h]
  __int128 v27; // [rsp+70h] [rbp-10h]
  __int128 v28; // [rsp+80h] [rbp+0h]
  __int64 v29; // [rsp+90h] [rbp+10h]
  _QWORD v30[2]; // [rsp+A0h] [rbp+20h] BYREF
  __int128 v31; // [rsp+B0h] [rbp+30h]
  __int128 v32; // [rsp+C0h] [rbp+40h] BYREF
  _BYTE v33[112]; // [rsp+D0h] [rbp+50h]
  __int64 v34; // [rsp+140h] [rbp+C0h]
  __int64 v35; // [rsp+148h] [rbp+C8h]
  __int64 v36; // [rsp+158h] [rbp+D8h]
  __int64 v37; // [rsp+160h] [rbp+E0h]
  __int64 v38; // [rsp+168h] [rbp+E8h]

  v38 = -2;
  v6 = *(unsigned __int8 *)(a2 + 416);
  v37 = a2;
  switch ( v6 )
  {
    case 0LL:
      v7 = (__int128 *)a2;
      sub_141684120(a2 + 136, a2, 136);
      *(_OWORD *)&v33[96] = v7[7];
      *(_OWORD *)&v33[80] = v7[6];
      *(_OWORD *)&v33[64] = v7[5];
      *(_OWORD *)&v33[48] = v7[4];
      v8 = *v7;
      v9 = v7[1];
      v10 = v7[2];
      *(_OWORD *)&v33[32] = v7[3];
      *(_OWORD *)&v33[16] = v10;
      *(_OWORD *)v33 = v9;
      v32 = v8;
      v11 = *(_OWORD *)&v33[96];
      sub_140017140(&v32);
      if ( *(_QWORD *)&v33[80] )
      {
        v36 = *(_QWORD *)&v33[80];
        sub_14067E8F0();
        sub_140001660(v36, 32, 8);
      }
      a2 = v37;
      *(_QWORD *)(v37 + 272) = -1;
      *(_QWORD *)(a2 + 368) = 0;
      *(_QWORD *)(a2 + 376) = 8;
      *(_OWORD *)(a2 + 384) = 0;
      *(_OWORD *)(a2 + 400) = v11;
      break;
    case 1LL:
      sub_1416C3400(&off_141767A18, a2, a3, a4);
    case 2LL:
      sub_1416C3420(&off_141767A18, a2, a3, a4);
    case 3LL:
      break;
  }
  v36 = a2 + 272;
  sub_1406B2A30(&v32, a2 + 272, a3);
  v12 = v32;
  if ( (_QWORD)v32 != -3 )
  {
    v15 = *((_QWORD *)&v32 + 1);
    v16 = *(_QWORD *)v33;
    v23 = *(_OWORD *)&v33[8];
    v24 = *(_OWORD *)&v33[24];
    v25 = *(_OWORD *)&v33[40];
    v26 = *(_OWORD *)&v33[56];
    v27 = *(_OWORD *)&v33[72];
    v28 = *(_OWORD *)&v33[88];
    v29 = *(_QWORD *)&v33[104];
    sub_1404FC390(v36);
    if ( (_DWORD)v12 != -2 )
    {
      *(_QWORD *)&v32 = v12;
      *((_QWORD *)&v32 + 1) = v15;
      *(_QWORD *)v33 = v16;
      *(_OWORD *)&v33[8] = v23;
      *(_OWORD *)&v33[24] = v24;
      *(_OWORD *)&v33[40] = v25;
      *(_OWORD *)&v33[56] = v26;
      *(_OWORD *)&v33[72] = v27;
      *(_OWORD *)&v33[88] = v28;
      *(_QWORD *)&v33[104] = v29;
      sub_140B8B3A0(v30, &v32);
      v18 = v30[0];
      v15 = v30[1];
      if ( v30[0] )
      {
        v22 = v31;
        v14 = v37;
        v19 = *(__int64 **)(v37 + 264);
        v20 = *v19;
        if ( !*v19 )
          goto LABEL_15;
        goto LABEL_14;
      }
      v16 = v31;
    }
    v14 = v37;
    *(_WORD *)&v33[72] = 5;
    v34 = v15;
    v35 = v16;
    *(_QWORD *)&v32 = -1;
    nullsub_1(v17);
    v21 = sub_140001650(144, 8);
    if ( !v21 )
      sub_1416C2D31(8, 144);
    v15 = v21;
    sub_141684120(v21, &v32, 144);
    v18 = 0;
    v19 = *(__int64 **)(v14 + 264);
    v20 = *v19;
    if ( !*v19 )
      goto LABEL_15;
LABEL_14:
    sub_140001660(v19[1], v20, 1);
LABEL_15:
    sub_140001660(v19, 88, 8);
    *(_QWORD *)(a1 + 8) = v18;
    *(_QWORD *)(a1 + 16) = v15;
    *(_OWORD *)(a1 + 24) = v22;
    *(_QWORD *)a1 = 0;
    result = 1;
    goto LABEL_16;
  }
  *(_QWORD *)a1 = 1;
  result = 3;
  v14 = v37;
LABEL_16:
  *(_BYTE *)(v14 + 416) = result;
  return result;
}