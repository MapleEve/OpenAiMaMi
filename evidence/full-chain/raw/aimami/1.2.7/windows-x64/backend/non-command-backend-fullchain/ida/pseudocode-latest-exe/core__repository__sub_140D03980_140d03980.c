// win 1.2.7 latest-exe | module src/core/repository.rs | ea 0x140d03980 | successor of pre-update 0x1401d0220 | session <审计会话>
// match evidence: {"conf": false, "body_sim": 0.62, "str_ov": null, "verdict": "CONFIRMED_DIFF"}
__int64 __fastcall sub_140D03980(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r14
  __int64 v9; // rdi
  __int64 v10; // r15
  unsigned __int128 v11; // kr10_16
  __int64 v12; // r8
  __m128 v13; // xmm0
  char v14; // al
  int v15; // edx
  int v16; // r9d
  __int64 v17; // rbx
  _OWORD v19[6]; // [rsp+20h] [rbp-60h] BYREF
  __int128 v20; // [rsp+88h] [rbp+8h] BYREF
  __int128 v21; // [rsp+98h] [rbp+18h]
  unsigned __int128 v22; // [rsp+A8h] [rbp+28h]
  __int128 v23; // [rsp+B8h] [rbp+38h]
  __int128 v24; // [rsp+C8h] [rbp+48h]
  __int128 v25; // [rsp+D8h] [rbp+58h]
  __int64 v26; // [rsp+E8h] [rbp+68h] BYREF
  _QWORD v27[11]; // [rsp+F0h] [rbp+70h] BYREF
  _QWORD v28[2]; // [rsp+148h] [rbp+C8h] BYREF
  char v29; // [rsp+15Fh] [rbp+DFh] BYREF
  __int64 v30; // [rsp+160h] [rbp+E0h]

  v30 = -2;
  v3 = *(_QWORD *)(a2 + 296);
  v4 = *(_QWORD *)(a2 + 304);
  sub_140CFB3B0(&v20, v3, v4);
  if ( (_DWORD)v20 != -1 )
  {
    v19[5] = v25;
    v19[4] = v24;
    v19[3] = v23;
    v19[2] = v22;
    v19[1] = v21;
    v19[0] = v20;
    sub_1416C49D0(&v26, v3, v4);
    if ( (_DWORD)v26 == 2 )
    {
      v6 = v27[0] & 3;
      v5 = (unsigned int)(v6 - 2);
      if ( (unsigned int)v5 >= 2 && (v27[0] & 3) != 0 )
      {
        --v27[0];
        LOBYTE(v26) = 3;
        sub_1416EBAD0(v27);
      }
    }
    else if ( *(_QWORD *)off_14223FF10 >= 2u )
    {
      v28[0] = v19;
      v28[1] = sub_140D76130;
      v27[5] = 2;
      v27[6] = aCodexmateLibCo_44;
      v27[7] = 31;
      v27[9] = &unk_141A93765;
      v27[10] = v28;
      v26 = 0;
      v27[0] = aCodexmateLibCo_44;
      v27[1] = 31;
      v27[2] = 0;
      v27[3] = aSrcCoreReposit;
      v27[4] = 22;
      v27[8] = 0x9BF00000001LL;
      sub_141503E20(&v29, &v26);
    }
    LODWORD(v28[0]) = sub_1416B2E50(v6, v5, v7);
    HIDWORD(v28[0]) = v15;
    sub_1416B2E00(&v26, v28, 3577643008LL, 27111902);
    sub_140CB96B0(v19);
    LODWORD(v19[0]) = v26;
    *(_DWORD *)((char *)v19 + 3) = *(_DWORD *)((char *)&v26 + 3);
    v13 = (__m128)0xA0000000FuLL;
    v9 = 8;
    v12 = 0;
    v10 = 0;
    v8 = 0;
    v14 = 0;
    v11 = __PAIR128__(*(unsigned int *)((char *)&v26 + 3), -1);
LABEL_12:
    *(_QWORD *)a1 = v12;
    _mm_storel_ps((double *)(a1 + 8), v13);
    v16 = *(_DWORD *)((char *)v19 + 3);
    *(_DWORD *)(a1 + 17) = v19[0];
    *(_DWORD *)(a1 + 20) = v16;
    *(_BYTE *)(a1 + 16) = v14;
    if ( (unsigned __int64)(v11 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
      goto LABEL_14;
    goto LABEL_13;
  }
  v8 = *((_QWORD *)&v20 + 1);
  v10 = *((_QWORD *)&v21 + 1);
  v9 = v21;
  v11 = v22;
  v12 = *((_QWORD *)&v23 + 1);
  v13 = (__m128)(unsigned __int64)v24;
  v14 = BYTE8(v24);
  LODWORD(v26) = *(_DWORD *)((char *)&v24 + 9);
  *(_DWORD *)((char *)&v26 + 3) = HIDWORD(v24);
  LODWORD(v19[0]) = v26;
  *(_DWORD *)((char *)v19 + 3) = HIDWORD(v24);
  if ( BYTE8(v24) != 2 )
    goto LABEL_12;
  *(_QWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0xA0000000FLL;
  *(_BYTE *)(a1 + 16) = 0;
  if ( (unsigned __int64)(v11 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
LABEL_13:
    sub_140001660(*((_QWORD *)&v11 + 1), v11, 1);
LABEL_14:
  if ( v10 )
  {
    v17 = v9;
    do
    {
      sub_1401AE3E0(v17);
      v17 += 424;
      --v10;
    }
    while ( v10 );
  }
  if ( v8 )
    sub_140001660(v9, 424 * v8, 8);
  return a1;
}
