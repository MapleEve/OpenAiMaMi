// win 1.2.7 | module src/core/relay/codex_diagnostic.rs | ea 0x140f416f0 | name sub_140F416F0
// win 1.2.7 | module src/core/relay/codex_diagnostic.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140F416F0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const __m128i *a4,
        unsigned __int64 a5,
        const __m128i *a6,
        __int64 a7)
{
  __m128i *v11; // rax
  __m128i *v12; // r12
  __int128 v13; // xmm0
  _OWORD *v14; // rax
  int v15; // edx
  int v16; // ecx
  unsigned int v17; // ecx
  unsigned __int64 v18; // rcx
  __int64 v19; // rcx
  __int128 v20; // xmm0
  _OWORD *v21; // rax
  __int64 v22; // r14
  __m128i *v23; // rax
  __int64 v24; // r13
  __int128 v25; // xmm0
  _OWORD *v26; // rax
  __int64 result; // rax
  _OWORD v28[6]; // [rsp+20h] [rbp-60h] BYREF
  _OWORD v29[6]; // [rsp+80h] [rbp+0h] BYREF
  _QWORD v30[2]; // [rsp+E8h] [rbp+68h] BYREF
  __int128 v31; // [rsp+F8h] [rbp+78h] BYREF
  __int128 v32; // [rsp+108h] [rbp+88h]
  const char *v33; // [rsp+118h] [rbp+98h]
  __int64 v34; // [rsp+120h] [rbp+A0h]
  __int64 v35; // [rsp+128h] [rbp+A8h]
  const char *v36; // [rsp+130h] [rbp+B0h]
  __int64 v37; // [rsp+138h] [rbp+B8h]
  __int64 v38; // [rsp+140h] [rbp+C0h]
  void *v39; // [rsp+148h] [rbp+C8h]
  _QWORD *v40; // [rsp+150h] [rbp+D0h]
  char v41; // [rsp+15Fh] [rbp+DFh] BYREF
  __int64 v42; // [rsp+160h] [rbp+E0h]
  char v43; // [rsp+16Dh] [rbp+EDh]
  char v44; // [rsp+16Eh] [rbp+EEh]
  char v45; // [rsp+16Fh] [rbp+EFh]
  __int64 v46; // [rsp+170h] [rbp+F0h]

  v46 = -2;
  nullsub_1(a1);
  v11 = (__m128i *)sub_140001650(a5, 1);
  if ( !v11 )
    sub_141938D2B(1, a5);
  v12 = v11;
  sub_1418F44E0(v11, a4, a5);
  *((_QWORD *)&v31 + 1) = a5;
  *(_QWORD *)&v32 = v12;
  *((_QWORD *)&v32 + 1) = a5;
  LOBYTE(v31) = 3;
  v45 = 1;
  v42 = sub_141641AF0(aStatus_10, 6, a3);
  sub_14002F9D0(v42);
  v13 = v31;
  v14 = (_OWORD *)v42;
  *(_OWORD *)(v42 + 16) = v32;
  *v14 = v13;
  sub_141406CE0(v29);
  v15 = (SLODWORD(v29[0]) >> 13) - 1;
  v16 = 0;
  if ( SLODWORD(v29[0]) >> 13 <= 0 )
  {
    v17 = (1 - (SLODWORD(v29[0]) >> 13)) / 0x190u + 1;
    v15 += 400 * v17;
    v16 = -146097 * v17;
  }
  v18 = 1000
      * (DWORD1(v29[0])
       + 86400LL
       * (((v15 / 100) >> 2) + ((1461 * v15) >> 2) + v16 + ((LODWORD(v29[0]) >> 4) & 0x1FF) - v15 / 100 - 719163))
      + DWORD2(v29[0]) / 0xF4240uLL;
  *((_QWORD *)&v31 + 1) = v18 >> 63;
  *(_QWORD *)&v32 = v18;
  LOBYTE(v31) = 2;
  v44 = 1;
  v42 = sub_141641AF0(aCompletedatms, 13, a3);
  sub_14002F9D0(v42);
  v20 = v31;
  v21 = (_OWORD *)v42;
  *(_OWORD *)(v42 + 16) = v32;
  *v21 = v20;
  if ( a6 )
  {
    if ( a7 < 0 )
    {
      v22 = 0;
      goto LABEL_7;
    }
    if ( a7 )
    {
      nullsub_1(v19);
      v22 = 1;
      v23 = (__m128i *)sub_140001650(a7, 1);
      if ( !v23 )
LABEL_7:
        sub_141938D2B(v22, a7);
      v24 = (__int64)v23;
      sub_1418F44E0(v23, a6, a7);
    }
    else
    {
      v24 = 1;
    }
    *((_QWORD *)&v31 + 1) = a7;
    *(_QWORD *)&v32 = v24;
    *((_QWORD *)&v32 + 1) = a7;
    LOBYTE(v31) = 3;
    v43 = 1;
    v42 = sub_141641AF0(aFailure_0, 7, a3);
    sub_14002F9D0(v42);
    v25 = v31;
    v26 = (_OWORD *)v42;
    *(_OWORD *)(v42 + 16) = v32;
    *v26 = v25;
  }
  result = sub_140F4FD00(v28, a1, a2, a3);
  if ( LODWORD(v28[0]) != -1 )
  {
    v29[5] = v28[5];
    v29[4] = v28[4];
    v29[3] = v28[3];
    v29[2] = v28[2];
    v29[1] = v28[1];
    v29[0] = v28[0];
    if ( *(_QWORD *)off_1421E6EC0 >= 2u )
    {
      v30[0] = v29;
      v30[1] = sub_14104A7D0;
      v35 = 2;
      v36 = aCodexmateLibCo_42;
      v37 = 44;
      v39 = &unk_141A61A22;
      v40 = v30;
      *(_QWORD *)&v31 = 0;
      *((_QWORD *)&v31 + 1) = aCodexmateLibCo_42;
      v32 = 0x2Cu;
      v33 = aSrcCoreRelayCo_3;
      v34 = 34;
      v38 = 0xE3000000001LL;
      sub_1414D53A0(&v41, &v31);
    }
    return sub_140E97700(v29);
  }
  return result;
}
