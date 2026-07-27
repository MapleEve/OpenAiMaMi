// module: codexmate_lib/core/relay/proxy_passthrough
// addr: 0x140676350
// name: sub_140676350
// win 1.2.3 | module core/relay/proxy_passthrough.rs | attributed via call-graph propagation (>=2 same-module callers, global fanin<=6, single-module exclusive)
_OWORD *__fastcall sub_140676350(_OWORD *a1, _QWORD *a2)
{
  unsigned __int64 v2; // r14
  __int64 v5; // rbx
  __int64 v6; // rdi
  unsigned __int64 v7; // r12
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rbx
  char *v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // r13
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  char v17; // al
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rax
  unsigned __int8 v21; // cl
  char v22; // al
  _OWORD *result; // rax
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm2
  _OWORD v27[2]; // [rsp+30h] [rbp-50h] BYREF
  _OWORD v28[2]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v29; // [rsp+70h] [rbp-10h]
  __int128 v30; // [rsp+80h] [rbp+0h] BYREF
  __int128 v31; // [rsp+90h] [rbp+10h]
  __int128 v32; // [rsp+A0h] [rbp+20h]
  __int128 v33; // [rsp+B0h] [rbp+30h]
  __int128 v34; // [rsp+C0h] [rbp+40h]
  __int128 v35; // [rsp+D0h] [rbp+50h]
  __int128 v36; // [rsp+E8h] [rbp+68h] BYREF
  __int128 v37; // [rsp+F8h] [rbp+78h]
  __int64 v38; // [rsp+108h] [rbp+88h]
  __int64 v39; // [rsp+110h] [rbp+90h]
  _OWORD *v40; // [rsp+118h] [rbp+98h]
  _BYTE v41[80]; // [rsp+120h] [rbp+A0h] BYREF
  __int128 v42; // [rsp+170h] [rbp+F0h]
  __int64 v43; // [rsp+180h] [rbp+100h]
  unsigned __int64 v44; // [rsp+188h] [rbp+108h]
  __int128 v45; // [rsp+190h] [rbp+110h] BYREF
  __int128 v46; // [rsp+1A0h] [rbp+120h] BYREF
  __int64 v47; // [rsp+1B0h] [rbp+130h]
  unsigned __int64 v48; // [rsp+1C0h] [rbp+140h]
  char v49; // [rsp+1CFh] [rbp+14Fh] BYREF
  __int64 v50; // [rsp+1D0h] [rbp+150h]

  v50 = -2;
  v5 = a2[5];
  v44 = a2[8];
  sub_1407162C0(v41, v44 + v5);
  if ( *(_DWORD *)v41 == -1 )
    sub_1416C3060(
      (unsigned int)aSizeOverflowsM_0,
      23,
      (unsigned int)&v49,
      (unsigned int)&unk_1417693B8,
      (__int64)&off_14177CA80);
  v40 = a1;
  v35 = v42;
  v34 = *(_OWORD *)&v41[64];
  v33 = *(_OWORD *)&v41[48];
  v32 = *(_OWORD *)&v41[32];
  v31 = *(_OWORD *)&v41[16];
  v30 = *(_OWORD *)v41;
  v48 = v5;
  v43 = a2[4];
  v39 = a2[7];
  v6 = 2 * (unsigned int)(v5 == 0);
  v7 = 0;
  while ( v6 != 2 )
  {
    if ( v7 >= v48 )
      sub_1416C30E3(v7, v48, &off_141790C68);
    v8 = v43 + 104 * v7;
    if ( !v6 )
      goto LABEL_13;
    if ( v2 >= v44 )
      sub_1416C30E3(v2, v44, &off_141790C80);
    v9 = v39 + 72 * v2;
    v6 = 2;
    if ( *(_BYTE *)(v9 + 16) )
    {
      v2 = *(_QWORD *)(v9 + 24);
      v6 = 1;
    }
    v10 = v9 + 32;
    if ( !*(_QWORD *)(v8 + 64) )
    {
LABEL_12:
      v11 = sub_14065FF80(*(_BYTE *)(v8 + 72));
      v13 = v12;
      goto LABEL_17;
    }
LABEL_16:
    v11 = *(char **)(v8 + 72);
    v13 = *(_QWORD *)(v8 + 80);
LABEL_17:
    if ( (unsigned __int8)sub_140675150(v11, v13) )
      continue;
    if ( v13 == 38 )
    {
      v17 = sub_140585E60(v11);
LABEL_37:
      if ( v17 )
        continue;
      goto LABEL_38;
    }
    if ( v13 == 11
      && ((unsigned __int8)*v11 | (unsigned __int8)(32 * ((unsigned __int8)(*v11 - 65) < 0x1Au))) == 111
      && ((unsigned __int8)v11[1] | (unsigned __int8)(32 * ((unsigned __int8)(v11[1] - 65) < 0x1Au))) == 112
      && ((unsigned __int8)v11[2] | (unsigned __int8)(32 * ((unsigned __int8)(v11[2] - 65) < 0x1Au))) == 101
      && ((unsigned __int8)v11[3] | (unsigned __int8)(32 * ((unsigned __int8)(v11[3] - 65) < 0x1Au))) == 110
      && ((unsigned __int8)v11[4] | (unsigned __int8)(32 * ((unsigned __int8)(v11[4] - 65) < 0x1Au))) == 97
      && ((unsigned __int8)v11[5] | (unsigned __int8)(32 * ((unsigned __int8)(v11[5] - 65) < 0x1Au))) == 105
      && ((unsigned __int8)v11[6] | (unsigned __int8)(32 * ((unsigned __int8)(v11[6] - 65) < 0x1Au))) == 45
      && ((unsigned __int8)v11[7] | (unsigned __int8)(32 * ((unsigned __int8)(v11[7] - 65) < 0x1Au))) == 98
      && ((unsigned __int8)v11[8] | (unsigned __int8)(32 * ((unsigned __int8)(v11[8] - 65) < 0x1Au))) == 101
      && ((unsigned __int8)v11[9] | (unsigned __int8)(32 * ((unsigned __int8)(v11[9] - 65) < 0x1Au))) == 116
      && ((unsigned __int8)v11[10] | (unsigned __int8)(32 * ((unsigned __int8)(v11[10] - 65) < 0x1Au))) == 97 )
    {
      v14 = *(_QWORD *)(v10 + 8);
      v15 = *(_QWORD *)(v10 + 16);
      if ( v15 )
      {
        v16 = 0;
        while ( (unsigned __int8)(*(_BYTE *)(v14 + v16) - 32) < 0x5Fu || *(_BYTE *)(v14 + v16) == 9 )
        {
          if ( v15 == ++v16 )
            goto LABEL_35;
        }
        goto LABEL_38;
      }
LABEL_35:
      v17 = sub_140681590(aResponsesWebso, 21, v14);
      goto LABEL_37;
    }
LABEL_38:
    sub_141441C10(&v45, v11, v13);
    v18 = *(_QWORD *)(v10 + 8);
    v19 = *(_QWORD *)(v10 + 16);
    if ( !v19 )
    {
LABEL_45:
      sub_1414464F0(&v36, v18, v19);
      v22 = 0;
      goto LABEL_46;
    }
    v20 = 0;
    while ( 1 )
    {
      v21 = *(_BYTE *)(v18 + v20);
      if ( v21 > 0x1Fu )
        break;
      if ( v21 != 9 )
        goto LABEL_44;
LABEL_41:
      if ( v19 == ++v20 )
        goto LABEL_45;
    }
    if ( v21 != 127 )
      goto LABEL_41;
LABEL_44:
    v22 = 2;
LABEL_46:
    LOBYTE(v38) = v22;
    *(_OWORD *)v41 = v45;
    *(_OWORD *)&v41[16] = v46;
    *(_QWORD *)&v41[32] = v47;
    *(_OWORD *)&v41[56] = v37;
    *(_OWORD *)&v41[40] = v36;
    *(_QWORD *)&v41[72] = v38;
    if ( v45 & 1 | (v22 == 2) )
    {
      if ( (v45 & 1) == 0 && *(_QWORD *)&v41[8] )
      {
        (*(void (__fastcall **)(_BYTE *, _QWORD, _QWORD))(*(_QWORD *)&v41[8] + 32LL))(
          &v41[32],
          *(_QWORD *)&v41[16],
          *(_QWORD *)&v41[24]);
        v22 = v41[72];
      }
      if ( v22 != 2 )
        (*(void (__fastcall **)(_BYTE *, _QWORD, _QWORD))(*(_QWORD *)&v41[40] + 32LL))(
          &v41[64],
          *(_QWORD *)&v41[48],
          *(_QWORD *)&v41[56]);
    }
    else
    {
      v27[1] = *(_OWORD *)&v41[24];
      v27[0] = *(_OWORD *)&v41[8];
      v29 = *(_QWORD *)&v41[72];
      v28[1] = *(_OWORD *)&v41[56];
      v28[0] = *(_OWORD *)&v41[40];
      sub_1405A0840(&v36, &v30, v27, v28);
      if ( (_BYTE)v38 == 0xFF )
        sub_1416C3060(
          (unsigned int)aSizeOverflowsM_0,
          23,
          (unsigned int)&v49,
          (unsigned int)&unk_1417693B8,
          (__int64)&off_1417646D0);
      v47 = v38;
      v46 = v37;
      v45 = v36;
      if ( (_BYTE)v38 != 2 )
        (*(void (__fastcall **)(char *, _QWORD, _QWORD))(v45 + 32))((char *)&v46 + 8, *((_QWORD *)&v45 + 1), v46);
    }
  }
  if ( ++v7 < v48 )
  {
    v8 = v43 + 104 * v7;
LABEL_13:
    v6 = 2;
    if ( *(_QWORD *)v8 == 1 )
    {
      v2 = *(_QWORD *)(v8 + 8);
      v6 = 1;
    }
    v10 = v8 + 24;
    if ( !*(_QWORD *)(v8 + 64) )
      goto LABEL_12;
    goto LABEL_16;
  }
  result = v40;
  v40[5] = v35;
  result[4] = v34;
  v24 = v30;
  v25 = v31;
  v26 = v32;
  result[3] = v33;
  result[2] = v26;
  result[1] = v25;
  *result = v24;
  return result;
}