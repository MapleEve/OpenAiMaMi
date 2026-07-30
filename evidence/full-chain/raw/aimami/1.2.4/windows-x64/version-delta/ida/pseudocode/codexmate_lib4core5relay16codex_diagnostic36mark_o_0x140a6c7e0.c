// win 1.2.4 delta | codexmate_lib4core5relay16codex_diagnostic36mark_o @ 0x140a6c7e0
// [FULL decompile]
// win 1.2.4 delta | codexmate_lib4core5relay16codex_diagnostic36mark_o | (win-native 锚点: 命令名串/跨平台签名)
__int64 __fastcall sub_140A6C7E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7)
{
  __int64 v11; // rax
  __int64 v12; // r12
  __int128 v13; // xmm0
  _OWORD *v14; // rax
  int v15; // edx
  int v16; // ecx
  unsigned int v17; // ecx
  unsigned __int64 v18; // rcx
  __int128 v19; // xmm0
  _OWORD *v20; // rax
  __int64 v21; // r14
  __int64 v22; // rax
  __int64 v23; // r13
  __int128 v24; // xmm0
  _OWORD *v25; // rax
  __int64 result; // rax
  _OWORD v27[6]; // [rsp+20h] [rbp-60h] BYREF
  _OWORD v28[6]; // [rsp+80h] [rbp+0h] BYREF
  _QWORD v29[2]; // [rsp+E8h] [rbp+68h] BYREF
  __int128 v30; // [rsp+F8h] [rbp+78h] BYREF
  __int128 v31; // [rsp+108h] [rbp+88h]
  const char *v32; // [rsp+118h] [rbp+98h]
  __int64 v33; // [rsp+120h] [rbp+A0h]
  __int64 v34; // [rsp+128h] [rbp+A8h]
  const char *v35; // [rsp+130h] [rbp+B0h]
  __int64 v36; // [rsp+138h] [rbp+B8h]
  __int64 v37; // [rsp+140h] [rbp+C0h]
  void *v38; // [rsp+148h] [rbp+C8h]
  _QWORD *v39; // [rsp+150h] [rbp+D0h]
  char v40; // [rsp+15Fh] [rbp+DFh] BYREF
  __int64 v41; // [rsp+160h] [rbp+E0h]
  char v42; // [rsp+16Dh] [rbp+EDh]
  char v43; // [rsp+16Eh] [rbp+EEh]
  char v44; // [rsp+16Fh] [rbp+EFh]
  __int64 v45; // [rsp+170h] [rbp+F0h]

  v45 = -2;
  nullsub_1();
  v11 = sub_140001650(a5, 1);
  if ( !v11 )
    sub_141733E1B(1, a5);
  v12 = v11;
  sub_1416F15C0(v11, a4, a5);
  *((_QWORD *)&v30 + 1) = a5;
  *(_QWORD *)&v31 = v12;
  *((_QWORD *)&v31 + 1) = a5;
  LOBYTE(v30) = 3;
  v44 = 1;
  v41 = sub_14149A9D0(aStatus_7, 6, a3);
  sub_14003DCD0(v41);
  v13 = v30;
  v14 = (_OWORD *)v41;
  *(_OWORD *)(v41 + 16) = v31;
  *v14 = v13;
  sub_141069BD0(v28);
  v15 = (SLODWORD(v28[0]) >> 13) - 1;
  v16 = 0;
  if ( SLODWORD(v28[0]) >> 13 <= 0 )
  {
    v17 = (1 - (SLODWORD(v28[0]) >> 13)) / 0x190u + 1;
    v15 += 400 * v17;
    v16 = -146097 * v17;
  }
  v18 = 1000
      * (DWORD1(v28[0])
       + 86400LL
       * (((v15 / 100) >> 2) + ((1461 * v15) >> 2) + v16 + ((LODWORD(v28[0]) >> 4) & 0x1FF) - v15 / 100 - 719163))
      + DWORD2(v28[0]) / 0xF4240uLL;
  *((_QWORD *)&v30 + 1) = v18 >> 63;
  *(_QWORD *)&v31 = v18;
  LOBYTE(v30) = 2;
  v43 = 1;
  v41 = sub_14149A9D0(aCompletedatms, 13, a3);
  sub_14003DCD0(v41);
  v19 = v30;
  v20 = (_OWORD *)v41;
  *(_OWORD *)(v41 + 16) = v31;
  *v20 = v19;
  if ( a6 )
  {
    if ( a7 < 0 )
    {
      v21 = 0;
      goto LABEL_7;
    }
    if ( a7 )
    {
      nullsub_1();
      v21 = 1;
      v22 = sub_140001650(a7, 1);
      if ( !v22 )
LABEL_7:
        sub_141733E1B(v21, a7);
      v23 = v22;
      sub_1416F15C0(v22, a6, a7);
    }
    else
    {
      v23 = 1;
    }
    *((_QWORD *)&v30 + 1) = a7;
    *(_QWORD *)&v31 = v23;
    *((_QWORD *)&v31 + 1) = a7;
    LOBYTE(v30) = 3;
    v42 = 1;
    v41 = sub_14149A9D0(aFailure, 7, a3);
    sub_14003DCD0(v41);
    v24 = v30;
    v25 = (_OWORD *)v41;
    *(_OWORD *)(v41 + 16) = v31;
    *v25 = v24;
  }
  result = sub_140A7A7B0(v27, a1, a2, a3);
  if ( LODWORD(v27[0]) != -1 )
  {
    v28[5] = v27[5];
    v28[4] = v27[4];
    v28[3] = v27[3];
    v28[2] = v27[2];
    v28[1] = v27[1];
    v28[0] = v27[0];
    if ( *(_QWORD *)off_141F53DF0 >= 2u )
    {
      v29[0] = v28;
      v29[1] = sub_1406A4FE0;
      *(_QWORD *)&v30 = 0;
      *((_QWORD *)&v30 + 1) = aCodexmateLibCo_28;
      v31 = 0x2Cu;
      v32 = aSrcCoreRelayCo;
      v33 = 34;
      v34 = 2;
      v35 = aCodexmateLibCo_28;
      v36 = 44;
      v37 = 0xCE200000001LL;
      v38 = &unk_141818C6B;
      v39 = v29;
      sub_141330DD0(&v40, &v30);
    }
    return sub_1409ADDE0(v28);
  }
  return result;
}
