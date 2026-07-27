// module: codexmate_lib/core/relay/manager
// addr: 0x140892360
// name: sub_140892360
// win 1.2.1 | module src/core/relay/manager.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140892360(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  __int64 v3; // xmm6_8
  int v6; // r13d
  __int8 v7; // r14
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rcx
  char v11; // r12
  char v12; // r14
  __int64 v13; // rbx
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm2
  __int64 result; // rax
  __int128 v18; // [rsp+20h] [rbp-60h]
  __int128 v19; // [rsp+30h] [rbp-50h]
  __int128 v20; // [rsp+40h] [rbp-40h]
  __int64 v21; // [rsp+50h] [rbp-30h]
  __int128 v22; // [rsp+58h] [rbp-28h] BYREF
  __int64 v23; // [rsp+68h] [rbp-18h]
  __int128 v24; // [rsp+70h] [rbp-10h]
  __int64 v25; // [rsp+80h] [rbp+0h]
  __int64 v26; // [rsp+88h] [rbp+8h]
  __int64 v27; // [rsp+90h] [rbp+10h]
  __int64 v28; // [rsp+98h] [rbp+18h]
  _BYTE v29[48]; // [rsp+A0h] [rbp+20h] BYREF
  __m256i v30; // [rsp+D0h] [rbp+50h]
  _BYTE v31[24]; // [rsp+F0h] [rbp+70h] BYREF
  __int64 v32; // [rsp+108h] [rbp+88h]
  __int64 v33; // [rsp+110h] [rbp+90h]
  __int64 v34; // [rsp+118h] [rbp+98h]
  __int128 v35; // [rsp+120h] [rbp+A0h] BYREF
  __int64 v36; // [rsp+130h] [rbp+B0h]
  __int64 v37; // [rsp+138h] [rbp+B8h]
  __int64 v38; // [rsp+140h] [rbp+C0h]
  __int64 v39; // [rsp+148h] [rbp+C8h]
  _BYTE v40[24]; // [rsp+150h] [rbp+D0h] BYREF
  __int64 v41; // [rsp+168h] [rbp+E8h]

  v41 = -2;
  v6 = *(_DWORD *)(a2 + 288);
  sub_140331240(&v22);
  sub_14032C050(v29, a2 + 24);
  v25 = *(_QWORD *)&v29[16];
  v24 = *(_OWORD *)v29;
  v7 = *(_BYTE *)(a2 + 122);
  LOWORD(v2) = *(_WORD *)(a2 + 120);
  sub_14149C500(&v35, a2 + 48);
  sub_14149C500(v40, a2 + 72);
  v8 = -1;
  v9 = -1;
  if ( *(_QWORD *)(a2 + 96) != -1 )
  {
    sub_14149C500(v29, a2 + 96);
    v9 = *(_QWORD *)v29;
    *(_OWORD *)v31 = *(_OWORD *)&v29[8];
  }
  v30.m256i_i8[26] = v7;
  v30.m256i_i16[12] = v2;
  *(_OWORD *)v29 = v35;
  *(_QWORD *)&v29[16] = v36;
  *(_OWORD *)&v29[24] = *(_OWORD *)v40;
  v10 = *(_QWORD *)&v40[16];
  *(_QWORD *)&v29[40] = *(_QWORD *)&v40[16];
  v30.m256i_i64[0] = v9;
  *(_OWORD *)&v30.m256i_u64[1] = *(_OWORD *)v31;
  v11 = *(_BYTE *)(a2 + 292);
  v12 = *(_BYTE *)(a2 + 293);
  if ( *(_QWORD *)(a2 + 128) != -1 )
  {
    v13 = *(_QWORD *)(a2 + 272);
    sub_14149C500(v31, a2 + 128);
    sub_14149C500(&v35, a2 + 152);
    if ( *(_QWORD *)(a2 + 176) == -1 )
    {
      v37 = -1;
      if ( *(_QWORD *)(a2 + 200) != -1 )
      {
LABEL_6:
        sub_14149C500(v40, a2 + 200);
        v33 = *(_QWORD *)&v40[8];
        v38 = *(_QWORD *)v40;
        v27 = *(_QWORD *)&v40[16];
        v2 = -1;
        if ( *(_QWORD *)(a2 + 224) != -1 )
          goto LABEL_7;
        goto LABEL_12;
      }
    }
    else
    {
      sub_14149C500(v40, a2 + 176);
      v32 = *(_QWORD *)&v40[8];
      v37 = *(_QWORD *)v40;
      v26 = *(_QWORD *)&v40[16];
      if ( *(_QWORD *)(a2 + 200) != -1 )
        goto LABEL_6;
    }
    v38 = -1;
    v2 = -1;
    if ( *(_QWORD *)(a2 + 224) != -1 )
    {
LABEL_7:
      sub_14149C500(v40, a2 + 224);
      v34 = *(_QWORD *)&v40[8];
      v39 = *(_QWORD *)v40;
      v28 = *(_QWORD *)&v40[16];
      v3 = *(_QWORD *)(a2 + 280);
      if ( *(_QWORD *)(a2 + 248) == -1 )
        goto LABEL_14;
      goto LABEL_13;
    }
LABEL_12:
    v39 = -1;
    v3 = *(_QWORD *)(a2 + 280);
    if ( *(_QWORD *)(a2 + 248) == -1 )
    {
LABEL_14:
      v10 = v13;
      v8 = *(_QWORD *)v31;
      v19 = *(_OWORD *)&v31[8];
      v20 = v35;
      v21 = v36;
      goto LABEL_15;
    }
LABEL_13:
    sub_14149C500(v40, a2 + 248);
    v2 = *(_QWORD *)v40;
    v18 = *(_OWORD *)&v40[8];
    goto LABEL_14;
  }
LABEL_15:
  *(_DWORD *)(a1 + 288) = v6;
  *(_QWORD *)(a1 + 16) = v23;
  *(_OWORD *)a1 = v22;
  *(_QWORD *)(a1 + 40) = v25;
  *(_OWORD *)(a1 + 24) = v24;
  v14 = *(_OWORD *)v29;
  v15 = *(_OWORD *)&v29[16];
  v16 = *(_OWORD *)&v29[32];
  *(_OWORD *)(a1 + 96) = *(_OWORD *)v30.m256i_i8;
  *(_OWORD *)(a1 + 80) = v16;
  *(_OWORD *)(a1 + 64) = v15;
  *(_OWORD *)(a1 + 48) = v14;
  *(_OWORD *)(a1 + 112) = *(_OWORD *)&v30.m256i_u64[2];
  *(_BYTE *)(a1 + 292) = v11;
  *(_BYTE *)(a1 + 293) = v12;
  *(_QWORD *)(a1 + 128) = v8;
  *(_QWORD *)(a1 + 168) = v21;
  *(_OWORD *)(a1 + 152) = v20;
  *(_OWORD *)(a1 + 136) = v19;
  *(_QWORD *)(a1 + 176) = v37;
  *(_QWORD *)(a1 + 184) = v32;
  *(_QWORD *)(a1 + 192) = v26;
  *(_QWORD *)(a1 + 200) = v38;
  *(_QWORD *)(a1 + 208) = v33;
  *(_QWORD *)(a1 + 216) = v27;
  *(_QWORD *)(a1 + 224) = v39;
  *(_QWORD *)(a1 + 232) = v34;
  result = v28;
  *(_QWORD *)(a1 + 240) = v28;
  *(_QWORD *)(a1 + 248) = v2;
  *(_OWORD *)(a1 + 256) = v18;
  *(_QWORD *)(a1 + 272) = v10;
  *(_DWORD *)(a1 + 280) = v3;
  return result;
}