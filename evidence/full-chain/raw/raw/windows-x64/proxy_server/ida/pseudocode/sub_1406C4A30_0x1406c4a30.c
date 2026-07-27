// module: codexmate_lib/core/relay/proxy_server
// addr: 0x1406c4a30
// name: sub_1406C4A30
// win 1.2.1 | module src/core/relay/proxy_server.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1406C4A30(__int64 a1, __int64 a2, __int128 *a3)
{
  __int64 v4; // rax
  char v5; // bl
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm2
  __int128 *v9; // rdx
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm2
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdi
  __int128 v19; // xmm1
  __int128 v20; // xmm2
  __int128 v21; // xmm3
  __int128 v23; // [rsp+20h] [rbp-60h] BYREF
  __int128 v24; // [rsp+30h] [rbp-50h]
  _OWORD v25[2]; // [rsp+40h] [rbp-40h] BYREF
  __int64 v26; // [rsp+60h] [rbp-20h]
  __int64 v27; // [rsp+70h] [rbp-10h] BYREF
  char v28; // [rsp+78h] [rbp-8h]
  __int128 v29; // [rsp+79h] [rbp-7h]
  __int128 v30; // [rsp+89h] [rbp+9h]
  __int128 v31; // [rsp+99h] [rbp+19h]
  __int128 v32; // [rsp+A9h] [rbp+29h]
  __int128 v33; // [rsp+B9h] [rbp+39h]
  _BYTE v34[23]; // [rsp+C9h] [rbp+49h]
  __int128 v35; // [rsp+E0h] [rbp+60h]
  __int128 v36; // [rsp+F0h] [rbp+70h]
  __int128 v37; // [rsp+100h] [rbp+80h]
  __int128 v38; // [rsp+110h] [rbp+90h]
  __int128 v39; // [rsp+120h] [rbp+A0h]
  _BYTE v40[23]; // [rsp+130h] [rbp+B0h]
  __int128 v41; // [rsp+150h] [rbp+D0h]
  __int128 v42; // [rsp+160h] [rbp+E0h] BYREF
  __int128 v43; // [rsp+170h] [rbp+F0h]
  __int128 v44; // [rsp+180h] [rbp+100h] BYREF
  __int64 v45; // [rsp+190h] [rbp+110h]
  __int64 v46; // [rsp+198h] [rbp+118h]
  __int64 v47; // [rsp+1A0h] [rbp+120h]

  v47 = -2;
  v4 = *(_QWORD *)a2;
  v5 = *(_BYTE *)(a2 + 8);
  *(_QWORD *)&v40[15] = *(_QWORD *)(a2 + 104);
  *(_OWORD *)v40 = *(_OWORD *)(a2 + 89);
  v39 = *(_OWORD *)(a2 + 73);
  v38 = *(_OWORD *)(a2 + 57);
  v37 = *(_OWORD *)(a2 + 41);
  v36 = *(_OWORD *)(a2 + 25);
  v35 = *(_OWORD *)(a2 + 9);
  v45 = *((_QWORD *)a3 + 8);
  v6 = *a3;
  v7 = a3[1];
  v8 = a3[2];
  v44 = a3[3];
  v43 = v8;
  v42 = v7;
  v41 = v6;
  if ( v4 == -1 )
  {
    if ( (_QWORD)v41 )
      (*(void (__fastcall **)(char *, _QWORD, _QWORD))(v41 + 32))((char *)&v42 + 8, *((_QWORD *)&v41 + 1), v42);
    (*(void (__fastcall **)(char *, _QWORD, _QWORD))(v43 + 32))((char *)&v44 + 8, *((_QWORD *)&v43 + 1), v44);
    v18 = -1;
  }
  else
  {
    v9 = (__int128 *)(a2 + 9);
    *(_QWORD *)&v34[15] = *(_QWORD *)((char *)v9 + 95);
    *(_OWORD *)v34 = v9[5];
    v33 = v9[4];
    v10 = *v9;
    v11 = v9[1];
    v12 = v9[2];
    v32 = v9[3];
    v31 = v12;
    v30 = v11;
    v29 = v10;
    v27 = v4;
    v28 = v5;
    v13 = *a3;
    v24 = a3[1];
    v23 = v13;
    v14 = a3[3];
    v25[0] = a3[2];
    v25[1] = v14;
    v26 = *((_QWORD *)a3 + 8);
    if ( (unsigned __int8)sub_1406C0220(&v27, &v23, v25) == 2 )
    {
      sub_140017140(&v27);
      v18 = -1;
      v5 = 6;
      if ( *(_QWORD *)&v34[7] )
      {
        v46 = *(_QWORD *)&v34[7];
        sub_14067E8F0(
          *(_QWORD *)&v34[7],
          v15,
          v16,
          v17,
          v23,
          *((_QWORD *)&v23 + 1),
          v24,
          *((_QWORD *)&v24 + 1),
          *(_QWORD *)&v25[0]);
        sub_140001660(v46, 32, 8);
      }
    }
    else
    {
      v18 = v27;
      v5 = v28;
      v35 = v29;
      v36 = v30;
      v37 = v31;
      v38 = v32;
      v39 = v33;
      *(_OWORD *)v40 = *(_OWORD *)v34;
      *(_QWORD *)&v40[15] = *(_QWORD *)&v34[15];
    }
  }
  *(_QWORD *)a1 = v18;
  *(_BYTE *)(a1 + 8) = v5;
  v19 = v36;
  v20 = v37;
  v21 = v38;
  *(_OWORD *)(a1 + 9) = v35;
  *(_OWORD *)(a1 + 25) = v19;
  *(_OWORD *)(a1 + 41) = v20;
  *(_OWORD *)(a1 + 57) = v21;
  *(_OWORD *)(a1 + 73) = v39;
  *(_OWORD *)(a1 + 89) = *(_OWORD *)v40;
  *(_QWORD *)(a1 + 104) = *(_QWORD *)&v40[15];
  return a1;
}