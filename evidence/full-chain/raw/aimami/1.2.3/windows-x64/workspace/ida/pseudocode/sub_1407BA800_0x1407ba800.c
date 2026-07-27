// module: codexmate_lib/core/voice/workspace
// addr: 0x1407ba800
// name: sub_1407BA800
// win 1.2.1 | module src/core/voice/workspace.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1407BA800(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 v3; // r15
  __int64 v6; // r8
  char v7; // bl
  __int64 v8; // r12
  __int64 result; // rax
  __int64 v10; // rcx
  __int128 v11; // [rsp+20h] [rbp-60h]
  __int128 v12; // [rsp+38h] [rbp-48h] BYREF
  __int64 v13; // [rsp+48h] [rbp-38h]
  __int128 v14; // [rsp+50h] [rbp-30h] BYREF
  __int64 v15; // [rsp+60h] [rbp-20h]
  __int128 v16; // [rsp+68h] [rbp-18h] BYREF
  __int64 v17; // [rsp+78h] [rbp-8h]
  __int64 v18; // [rsp+80h] [rbp+0h]
  __int64 v19; // [rsp+88h] [rbp+8h]
  __int64 v20; // [rsp+90h] [rbp+10h] BYREF
  __int128 v21; // [rsp+98h] [rbp+18h]
  __int64 v22; // [rsp+A8h] [rbp+28h]
  __int64 v23; // [rsp+B0h] [rbp+30h]
  __int64 v24; // [rsp+B8h] [rbp+38h]

  v24 = -2;
  sub_14149C500(&v16, a2);
  sub_14149C500(&v14, a2 + 24);
  sub_14149C500(&v12, a2 + 48);
  v7 = *(_BYTE *)(a2 + 152);
  v8 = -1;
  if ( *(_QWORD *)(a2 + 72) != -1 )
  {
    sub_14149C500(&v20, a2 + 72);
    v23 = v20;
    v2 = *((_QWORD *)&v21 + 1);
    v18 = v21;
    if ( *(_QWORD *)(a2 + 96) != -1 )
      goto LABEL_3;
LABEL_6:
    if ( *(_QWORD *)(a2 + 120) != -1 )
      goto LABEL_4;
LABEL_7:
    result = -1;
    goto LABEL_8;
  }
  v23 = -1;
  if ( *(_QWORD *)(a2 + 96) == -1 )
    goto LABEL_6;
LABEL_3:
  sub_14149C500(&v20, a2 + 96);
  v8 = v20;
  v3 = *((_QWORD *)&v21 + 1);
  v6 = v21;
  if ( *(_QWORD *)(a2 + 120) == -1 )
    goto LABEL_7;
LABEL_4:
  v19 = v6;
  v22 = v8;
  sub_14149C500(&v20, a2 + 120);
  result = v20;
  v11 = v21;
  v8 = v22;
  v6 = v19;
LABEL_8:
  v10 = *(_QWORD *)(a2 + 144);
  *(_QWORD *)(a1 + 16) = v17;
  *(_OWORD *)a1 = v16;
  *(_QWORD *)(a1 + 40) = v15;
  *(_OWORD *)(a1 + 24) = v14;
  *(_OWORD *)(a1 + 48) = v12;
  *(_QWORD *)(a1 + 64) = v13;
  *(_BYTE *)(a1 + 152) = v7;
  *(_QWORD *)(a1 + 72) = v23;
  *(_QWORD *)(a1 + 80) = v18;
  *(_QWORD *)(a1 + 88) = v2;
  *(_QWORD *)(a1 + 96) = v8;
  *(_QWORD *)(a1 + 104) = v6;
  *(_QWORD *)(a1 + 112) = v3;
  *(_QWORD *)(a1 + 120) = result;
  *(_OWORD *)(a1 + 128) = v11;
  *(_QWORD *)(a1 + 144) = v10;
  return result;
}