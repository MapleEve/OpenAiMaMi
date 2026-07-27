// module: codexmate_lib/core/relay/proxy_server
// addr: 0x1406c5190
// name: sub_1406C5190
// win 1.2.1 | module src/core/relay/proxy_server.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1406C5190(__int64 a1, __int64 a2, __int128 *a3)
{
  __int64 v4; // rax
  char v5; // bl
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 *v9; // rdx
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm2
  __int128 v13; // xmm0
  __int64 i; // rax
  unsigned __int8 v15; // cl
  __int128 *v16; // rdi
  __int128 v17; // xmm0
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdi
  __int128 v22; // xmm1
  __int128 v23; // xmm2
  __int128 v24; // xmm3
  __int64 v26; // [rsp+28h] [rbp-58h] BYREF
  char v27; // [rsp+30h] [rbp-50h]
  __int128 v28; // [rsp+31h] [rbp-4Fh]
  __int128 v29; // [rsp+41h] [rbp-3Fh]
  __int128 v30; // [rsp+51h] [rbp-2Fh]
  __int128 v31; // [rsp+61h] [rbp-1Fh]
  __int128 v32; // [rsp+71h] [rbp-Fh]
  _BYTE v33[23]; // [rsp+81h] [rbp+1h]
  __m256i v34; // [rsp+98h] [rbp+18h] BYREF
  char v35; // [rsp+B8h] [rbp+38h]
  _BYTE v36[7]; // [rsp+B9h] [rbp+39h]
  __int128 v37; // [rsp+C0h] [rbp+40h]
  __int128 v38; // [rsp+D0h] [rbp+50h]
  __int128 v39; // [rsp+E0h] [rbp+60h] BYREF
  __int128 v40; // [rsp+F0h] [rbp+70h]
  __int128 v41; // [rsp+100h] [rbp+80h]
  __int128 v42; // [rsp+110h] [rbp+90h]
  __int128 v43; // [rsp+120h] [rbp+A0h]
  __int128 v44; // [rsp+130h] [rbp+B0h]
  _BYTE v45[23]; // [rsp+140h] [rbp+C0h]
  __m256i v46; // [rsp+160h] [rbp+E0h] BYREF
  _DWORD v47[3]; // [rsp+181h] [rbp+101h]
  __int128 v48; // [rsp+190h] [rbp+110h]
  __int128 v49; // [rsp+1A0h] [rbp+120h] BYREF
  __int64 v50; // [rsp+1B0h] [rbp+130h]
  char v51; // [rsp+1BFh] [rbp+13Fh]
  __int64 v52; // [rsp+1C0h] [rbp+140h]

  v52 = -2;
  v4 = *(_QWORD *)a2;
  v5 = *(_BYTE *)(a2 + 8);
  *(_QWORD *)&v45[15] = *(_QWORD *)(a2 + 104);
  *(_OWORD *)v45 = *(_OWORD *)(a2 + 89);
  v44 = *(_OWORD *)(a2 + 73);
  v43 = *(_OWORD *)(a2 + 57);
  v42 = *(_OWORD *)(a2 + 41);
  v41 = *(_OWORD *)(a2 + 25);
  v40 = *(_OWORD *)(a2 + 9);
  v6 = *a3;
  v7 = a3[1];
  v39 = a3[2];
  v38 = v7;
  v37 = v6;
  if ( v4 == -1 )
  {
    v21 = -1;
    if ( (_QWORD)v38 )
      (*(void (__fastcall **)(char *, _QWORD, _QWORD))(v38 + 32))((char *)&v39 + 8, *((_QWORD *)&v38 + 1), v39);
    goto LABEL_16;
  }
  v9 = (__int128 *)(a2 + 9);
  *(_QWORD *)&v33[15] = *(_QWORD *)((char *)v9 + 95);
  *(_OWORD *)v33 = v9[5];
  v32 = v9[4];
  v10 = *v9;
  v11 = v9[1];
  v12 = v9[2];
  v31 = v9[3];
  v30 = v12;
  v29 = v11;
  v28 = v10;
  v26 = v4;
  v27 = v5;
  v13 = a3[1];
  v49 = a3[2];
  v48 = v13;
  if ( *((_QWORD *)&v37 + 1) )
  {
    for ( i = 0; *((_QWORD *)&v37 + 1) != i; ++i )
    {
      v15 = *(_BYTE *)(v37 + i);
      if ( v15 > 0x1Fu )
      {
        if ( v15 == 127 )
          goto LABEL_8;
      }
      else if ( v15 != 9 )
      {
LABEL_8:
        v5 = 5;
        if ( (_QWORD)v48 )
          (*(void (__fastcall **)(char *, _QWORD, _QWORD))(v48 + 32))((char *)&v49 + 8, *((_QWORD *)&v48 + 1), v49);
LABEL_11:
        sub_140017140(&v26);
        v21 = -1;
        if ( *(_QWORD *)&v33[7] )
        {
          v50 = *(_QWORD *)&v33[7];
          sub_14067E8F0(*(_QWORD *)&v33[7], v18, v19, v20);
          sub_140001660(v50, 32, 8);
        }
        goto LABEL_16;
      }
    }
  }
  v51 = 1;
  sub_1414464F0(&v46, v37, *((_QWORD *)&v37 + 1));
  v16 = a3 + 1;
  v34 = v46;
  *(_DWORD *)v36 = v47[0];
  *(_DWORD *)&v36[3] = *(_DWORD *)((char *)v47 + 3);
  v35 = 0;
  v17 = *v16;
  *(_OWORD *)&v46.m256i_u64[2] = v16[1];
  *(_OWORD *)v46.m256i_i8 = v17;
  v51 = 0;
  v5 = 6;
  if ( (unsigned __int8)sub_1406C0220(&v26, &v46, &v34) == 2 )
    goto LABEL_11;
  v21 = v26;
  v5 = v27;
  v40 = v28;
  v41 = v29;
  v42 = v30;
  v43 = v31;
  v44 = v32;
  *(_OWORD *)v45 = *(_OWORD *)v33;
  *(_QWORD *)&v45[15] = *(_QWORD *)&v33[15];
LABEL_16:
  *(_QWORD *)a1 = v21;
  *(_BYTE *)(a1 + 8) = v5;
  v22 = v41;
  v23 = v42;
  v24 = v43;
  *(_OWORD *)(a1 + 9) = v40;
  *(_OWORD *)(a1 + 25) = v22;
  *(_OWORD *)(a1 + 41) = v23;
  *(_OWORD *)(a1 + 57) = v24;
  *(_OWORD *)(a1 + 73) = v44;
  *(_OWORD *)(a1 + 89) = *(_OWORD *)v45;
  *(_QWORD *)(a1 + 104) = *(_QWORD *)&v45[15];
  return a1;
}