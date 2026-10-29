// win 1.2.7 latest-exe | module src/core/relay/translator.rs | ea 0x1408913b0 | successor of pre-update 0x1402e2c00 | session <审计会话>
// match evidence: {"conf": true, "verdict": "CONFIRMED_CALLER"}
__int64 __fastcall sub_1408913B0(__int64 a1, unsigned __int8 *a2)
{
  int v2; // eax
  __int64 v3; // r8
  __int64 v4; // rcx
  __int64 *v5; // rdi
  unsigned __int64 v6; // rsi
  __int64 *v7; // r14
  __int64 *v8; // rcx
  __int64 v9; // rdi
  __int64 *v10; // rax
  __int64 v11; // rax
  __int64 v12; // r13
  unsigned __int64 v13; // r15
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rsi
  __int64 v17; // r12
  __int64 v18; // rdi
  __int64 v19; // r14
  unsigned __int64 v20; // r8
  __int64 v21; // rbx
  int v22; // eax
  char v23; // cl
  __int64 v24; // rax
  __int64 v25; // r14
  __int64 v26; // rsi
  __int64 v27; // rax
  _OWORD *v28; // rdi
  __int64 v29; // rax
  __int128 v30; // xmm0
  __int64 result; // rax
  __int64 v32; // rcx
  _BYTE *v33; // rdx
  _BYTE *v34; // rcx
  _BYTE v35[24]; // [rsp+20h] [rbp-60h] BYREF
  __int128 v36; // [rsp+38h] [rbp-48h] BYREF
  __int128 v37; // [rsp+48h] [rbp-38h]
  _BOOL8 v38; // [rsp+58h] [rbp-28h]
  __int64 v39; // [rsp+60h] [rbp-20h]
  __int64 v40; // [rsp+68h] [rbp-18h]
  __int64 v41; // [rsp+70h] [rbp-10h]
  __int64 v42; // [rsp+78h] [rbp-8h]
  __int64 v43; // [rsp+80h] [rbp+0h] BYREF
  __int64 *v44; // [rsp+88h] [rbp+8h]
  unsigned __int64 v45; // [rsp+90h] [rbp+10h]
  __int128 v46; // [rsp+98h] [rbp+18h] BYREF
  __int64 v47; // [rsp+A8h] [rbp+28h]
  __int64 v48; // [rsp+B0h] [rbp+30h]
  __int64 v49; // [rsp+B8h] [rbp+38h]
  __int64 v50; // [rsp+C0h] [rbp+40h]
  __int64 *v51; // [rsp+C8h] [rbp+48h]
  __int64 v52; // [rsp+D0h] [rbp+50h] BYREF
  __int64 v53; // [rsp+D8h] [rbp+58h]
  __int64 v54; // [rsp+E0h] [rbp+60h]
  __int64 *v55; // [rsp+F0h] [rbp+70h]
  __int64 v56; // [rsp+F8h] [rbp+78h]
  __int64 v57; // [rsp+100h] [rbp+80h]
  __int64 v58; // [rsp+108h] [rbp+88h]
  __int64 v59; // [rsp+110h] [rbp+90h]
  __int64 *v60; // [rsp+118h] [rbp+98h]
  __int64 v61; // [rsp+120h] [rbp+A0h]
  char v62; // [rsp+12Dh] [rbp+ADh] BYREF
  char v63; // [rsp+12Eh] [rbp+AEh]
  char v64; // [rsp+12Fh] [rbp+AFh]
  __int64 v65; // [rsp+130h] [rbp+B0h]

  v65 = -2;
  v61 = a1;
  v2 = *a2;
  if ( v2 == 4 )
  {
    v25 = *((_QWORD *)a2 + 3);
    if ( v25 )
    {
      v26 = *((_QWORD *)a2 + 2);
      nullsub_1(a1, a2);
      v27 = sub_140001650(32 * v25, 8);
      if ( !v27 )
        sub_14196B2DB(8, 32 * v25);
      v28 = (_OWORD *)v27;
      v52 = v25;
      v53 = v27;
      v29 = 0;
      do
      {
        v59 = v29;
        sub_1408913B0(&v36, v26);
        v30 = v36;
        v28[1] = v37;
        *v28 = v30;
        v29 = v59 + 1;
        v26 += 32;
        v28 += 2;
      }
      while ( v25 != v59 + 1 );
    }
    else
    {
      v52 = 0;
      v53 = 8;
    }
    v33 = (_BYTE *)v61;
    result = v61 + 8;
    v54 = v25;
    *(_QWORD *)(v61 + 24) = v25;
    *(_QWORD *)result = v52;
    *(_QWORD *)(result + 8) = v53;
    *v33 = 4;
  }
  else if ( v2 == 5 )
  {
    v3 = *((_QWORD *)a2 + 1);
    v56 = *((_QWORD *)a2 + 2);
    v4 = v3;
    if ( v3 )
      v4 = *((_QWORD *)a2 + 3);
    v36 = v3 != 0;
    *(_QWORD *)&v37 = v3;
    *((_QWORD *)&v37 + 1) = v56;
    v38 = v3 != 0;
    v39 = 0;
    v57 = v3;
    v40 = v3;
    v41 = v56;
    v42 = v4;
    sub_140214A00(&v43, &v36);
    v5 = v44;
    v6 = v45;
    v60 = v44;
    if ( v45 >= 2 )
    {
      if ( v45 >= 0x15 )
      {
        v64 = 1;
        v5 = v60;
        sub_1401B8D60(v60, v45, &v62);
      }
      else
      {
        v5 = v60;
        sub_140CC5400(v60, v45, 1, &v62);
      }
    }
    *(_QWORD *)&v46 = 0;
    v47 = 0;
    v58 = v43;
    v51 = &v5[v6];
    v7 = v5;
    v8 = v5;
    v9 = v57;
    while ( v7 != v51 )
    {
      v10 = v7++;
      if ( !v9 )
        continue;
      v55 = v7;
      v11 = *v10;
      v12 = *(_QWORD *)(v11 + 8);
      v50 = v11;
      v13 = *(_QWORD *)(v11 + 16);
      v59 = v56;
LABEL_11:
      v14 = v9 + 360;
      v15 = *(unsigned __int16 *)(v9 + 626);
      v48 = v9;
      v16 = v9 - 32;
      v49 = v15;
      v17 = 3LL * (unsigned int)(8 * v15);
      v18 = -1;
      do
      {
        if ( !v17 )
        {
          v18 = v49;
          v24 = v59 - 1;
          if ( !v59 )
            goto LABEL_25;
          goto LABEL_22;
        }
        v19 = v14 + 24;
        v20 = *(_QWORD *)(v14 + 16);
        v21 = v13 - v20;
        if ( v13 < v20 )
          v20 = v13;
        v22 = sub_141923B40(v12, *(_QWORD *)(v14 + 8), v20);
        if ( v22 )
          v21 = v22;
        v23 = (v21 > 0) - (v21 < 0);
        v16 += 32;
        ++v18;
        v17 -= 24;
        v14 = v19;
      }
      while ( v23 == 1 );
      if ( v23 )
      {
        v24 = v59 - 1;
        if ( !v59 )
        {
LABEL_25:
          v8 = v60;
          v9 = v57;
          v7 = v55;
          continue;
        }
LABEL_22:
        v59 = v24;
        v9 = *(_QWORD *)(v48 + 8 * v18 + 632);
        goto LABEL_11;
      }
      sub_1416DB410(v35, v50);
      v9 = v57;
      v7 = v55;
      v63 = 1;
      sub_1408913B0(&v36, v16);
      v63 = 0;
      sub_140A68320(&v52, &v46, v35, &v36);
      if ( (_BYTE)v52 != 0xFF )
        sub_140032FF0(&v52);
      v8 = v60;
    }
    if ( v58 )
      sub_140001660(v8, 8 * v58, 8);
    result = v47;
    v32 = v61;
    *(_QWORD *)(v61 + 24) = v47;
    *(_OWORD *)(v32 + 8) = v46;
    *(_BYTE *)v32 = 5;
  }
  else
  {
    switch ( *a2 )
    {
      case 0u:
        result = v61;
        *(_BYTE *)v61 = 0;
        break;
      case 1u:
        result = a2[1];
        v34 = (_BYTE *)v61;
        *(_BYTE *)(v61 + 1) = result;
        *v34 = 1;
        break;
      case 2u:
        result = v61;
        *(_OWORD *)(v61 + 8) = *(_OWORD *)(a2 + 8);
        *(_BYTE *)result = 2;
        break;
      case 3u:
        result = sub_1416DB410(v61 + 8, a2 + 8);
        *(_BYTE *)v61 = 3;
        break;
    }
  }
  return result;
}
