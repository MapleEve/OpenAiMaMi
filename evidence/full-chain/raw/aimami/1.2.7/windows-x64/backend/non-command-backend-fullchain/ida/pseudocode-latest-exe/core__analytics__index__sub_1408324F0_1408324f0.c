// win 1.2.7 latest-exe | module src/core/analytics/index.rs | ea 0x1408324f0 | successor of pre-update 0x140f8df00 | session <审计会话>
// match evidence: {"conf": false, "body_sim": 0.564, "str_ov": 1.0, "verdict": "CONFIRMED_DIFF"}
__int64 __fastcall sub_1408324F0(__int64 a1, __int64 a2)
{
  __int64 v3; // r15
  __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned __int64 v7; // rdi
  __int64 v8; // r13
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 (__fastcall *v11)(unsigned __int64); // rax
  unsigned __int64 v12; // rax
  __int64 v13; // rdi
  unsigned __int64 v14; // rdi
  void *v15; // rax
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm2
  _QWORD *v19; // rbx
  __int64 v20; // rdx
  unsigned __int64 v22; // rbx
  __int64 v23; // r14
  _QWORD v24[2]; // [rsp+30h] [rbp-50h]
  __int128 v25; // [rsp+40h] [rbp-40h]
  __int128 v26; // [rsp+50h] [rbp-30h]
  __int128 v27; // [rsp+60h] [rbp-20h]
  __int128 v28; // [rsp+70h] [rbp-10h]
  __int128 v29; // [rsp+80h] [rbp+0h]
  __int64 v30; // [rsp+90h] [rbp+10h]
  __int128 v31; // [rsp+A0h] [rbp+20h] BYREF
  __int128 v32; // [rsp+B0h] [rbp+30h]
  __int128 v33; // [rsp+C0h] [rbp+40h]
  __int128 v34; // [rsp+D0h] [rbp+50h]
  __int128 v35; // [rsp+E0h] [rbp+60h]
  __int128 v36; // [rsp+F0h] [rbp+70h]
  __int128 v37; // [rsp+100h] [rbp+80h] BYREF
  unsigned __int64 v38; // [rsp+110h] [rbp+90h]
  char v39; // [rsp+11Dh] [rbp+9Dh] BYREF
  char v40; // [rsp+11Eh] [rbp+9Eh]
  char v41; // [rsp+11Fh] [rbp+9Fh]
  __int64 v42; // [rsp+120h] [rbp+A0h]

  v42 = -2;
  *(_QWORD *)&v37 = 0;
  *((_QWORD *)&v37 + 1) = 16;
  v38 = 0;
  v24[0] = a2 + 160;
  v24[1] = a2 + 192;
  v3 = 0;
  while ( 1 )
  {
LABEL_2:
    if ( v3 == 2 )
    {
      v13 = *((_QWORD *)&v37 + 1);
      *(_QWORD *)&v31 = &v39;
      if ( v38 >= 2 )
      {
        if ( v38 >= 0x15 )
        {
          sub_1401B8A60(*((_QWORD *)&v37 + 1), v38, &v31);
        }
        else
        {
          v22 = *((_QWORD *)&v37 + 1) + (v38 << 6);
          v23 = *((_QWORD *)&v37 + 1) + 64LL;
          do
          {
            sub_140CBD240(v13, v23);
            v23 += 64;
          }
          while ( v23 != v22 );
        }
      }
      *(_QWORD *)(a1 + 24) = v38;
      *(_OWORD *)(a1 + 8) = v37;
      *(_QWORD *)a1 = -1;
      return a1;
    }
    v4 = v24[v3];
    sub_1416C4520(&v31, *(_QWORD *)(v4 + 8), *(_QWORD *)(v4 + 16));
    ++v3;
    if ( (_DWORD)v31 == 2 )
    {
      v7 = *((_QWORD *)&v31 + 1);
      *((_QWORD *)&v25 + 1) = *((_QWORD *)&v31 + 1);
      *(_QWORD *)&v25 = 2;
      v8 = BYTE8(v31) & 3;
      switch ( BYTE8(v31) & 3 )
      {
        case 0:
          goto LABEL_11;
        case 1:
          goto LABEL_12;
        default:
          goto LABEL_15;
      }
    }
    v25 = v31;
    v30 = v36;
    v29 = v35;
    v28 = v34;
    v27 = v33;
    v26 = v32;
    if ( (_QWORD)v31 == 2 )
      break;
    if ( (BYTE12(v29) & 0x10) == 0
      || (v6 = BYTE3(v30),
          LOBYTE(v6) = (unsigned __int8)(BYTE3(v30) & 0x20) >> 5,
          ((unsigned __int8)v6 & (unsigned __int8)(HIDWORD(v29) >> 10)) != 0) )
    {
      nullsub_1(v6, v5);
      v15 = (void *)sub_140001650(35, 1);
      if ( !v15 )
      {
        v41 = 0;
        v40 = 1;
        sub_14196B2DB(1, 35);
      }
      qmemcpy(v15, "analytics source is not a directory", 35);
      *(_QWORD *)a1 = 9;
      *(_QWORD *)(a1 + 8) = 35;
      *(_QWORD *)(a1 + 16) = v15;
      *(_QWORD *)(a1 + 24) = 35;
      v14 = v38;
      if ( v38 )
        goto LABEL_25;
      goto LABEL_29;
    }
    v9 = *(_QWORD *)(v4 + 8);
    v10 = *(_QWORD *)(v4 + 16);
    v41 = 0;
    v40 = 1;
    sub_140831D30(&v31, v9, v10, &v37);
    if ( (_DWORD)v31 != -1 )
    {
      *(_OWORD *)(a1 + 80) = v36;
      *(_OWORD *)(a1 + 64) = v35;
      v16 = v31;
      v17 = v32;
      v18 = v33;
      *(_OWORD *)(a1 + 48) = v34;
      *(_OWORD *)(a1 + 32) = v18;
      *(_OWORD *)(a1 + 16) = v17;
      *(_OWORD *)a1 = v16;
      v14 = v38;
      if ( v38 )
        goto LABEL_25;
      goto LABEL_29;
    }
  }
  v7 = *((_QWORD *)&v25 + 1);
  v8 = BYTE8(v25) & 3;
  switch ( BYTE8(v25) & 3 )
  {
    case 0:
LABEL_11:
      v41 = 1;
      v40 = 1;
      v11 = *(__int64 (__fastcall **)(unsigned __int64))(sub_1416E2EE0(v6, v5) + 8);
      v41 = 1;
      v40 = 1;
      LOBYTE(v12) = v11(HIDWORD(v7));
      goto LABEL_13;
    case 1:
LABEL_12:
      v12 = HIDWORD(v7);
LABEL_13:
      if ( !(_BYTE)v12 )
      {
        if ( (unsigned int)(v8 - 2) >= 2 )
        {
LABEL_15:
          if ( v8 )
          {
            *((_QWORD *)&v31 + 1) = v7 - 1;
            LOBYTE(v31) = 3;
            v41 = 1;
            v40 = 0;
            sub_1416EBAD0((char *)&v31 + 8);
          }
        }
        goto LABEL_2;
      }
      *(_QWORD *)a1 = 2;
      *(_QWORD *)(a1 + 8) = v7;
      v14 = v38;
      if ( !v38 )
        goto LABEL_29;
LABEL_25:
      v19 = (_QWORD *)(*((_QWORD *)&v37 + 1) + 8LL);
      do
      {
        v20 = *(v19 - 1);
        if ( v20 )
          sub_140001660(*v19, v20, 1);
        v19 += 8;
        --v14;
      }
      while ( v14 );
LABEL_29:
      if ( (_QWORD)v37 )
        sub_140001660(*((_QWORD *)&v37 + 1), (_QWORD)v37 << 6, 16);
      return a1;
    default:
      goto LABEL_15;
  }
}
