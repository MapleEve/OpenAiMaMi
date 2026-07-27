// module: codexmate_lib/core/repository
// addr: 0x1403a9160
// name: sub_1403A9160
// win 1.2.1 | module src/core/repository.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1403A9160(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rbx
  char v7; // r14
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 result; // rax
  __int64 v11; // rdi
  char *v12; // rcx
  __int128 *v13; // rax
  __int128 v14; // xmm1
  __int128 v15; // xmm2
  __int128 v16; // xmm3
  __int128 v17; // xmm1
  __int128 v18; // xmm2
  __int128 v19; // xmm3
  _OWORD v20[6]; // [rsp+20h] [rbp-60h] BYREF
  __int64 v21; // [rsp+88h] [rbp+8h]
  __int64 v22; // [rsp+90h] [rbp+10h] BYREF
  __int128 v23; // [rsp+98h] [rbp+18h]
  _OWORD v24[4]; // [rsp+A8h] [rbp+28h] BYREF
  __int128 v25; // [rsp+E8h] [rbp+68h] BYREF
  __int64 v26; // [rsp+F8h] [rbp+78h]
  _OWORD v27[2]; // [rsp+100h] [rbp+80h] BYREF
  _OWORD v28[4]; // [rsp+120h] [rbp+A0h] BYREF
  __int128 v29; // [rsp+160h] [rbp+E0h]
  __int128 v30; // [rsp+170h] [rbp+F0h]
  __int128 v31; // [rsp+180h] [rbp+100h]
  __int128 v32; // [rsp+190h] [rbp+110h]
  _QWORD v33[2]; // [rsp+1A0h] [rbp+120h] BYREF
  __int128 v34; // [rsp+1B0h] [rbp+130h]
  __int128 v35; // [rsp+1C0h] [rbp+140h]
  __int128 v36; // [rsp+1D0h] [rbp+150h]
  __int128 v37; // [rsp+1E0h] [rbp+160h]
  __int128 v38; // [rsp+1F0h] [rbp+170h]
  _QWORD v39[4]; // [rsp+200h] [rbp+180h] BYREF
  __int128 v40; // [rsp+220h] [rbp+1A0h]
  __int64 v41; // [rsp+230h] [rbp+1B0h]
  char v42; // [rsp+247h] [rbp+1C7h]
  __int64 v43; // [rsp+248h] [rbp+1C8h]

  v43 = -2;
  v4 = sub_141485EF0(a2[81], a2[82]);
  if ( v4 )
  {
    v5 = v4;
    if ( (unsigned __int8)sub_1403887F0(v4) )
    {
      *(_QWORD *)&v27[0] = 2;
      *((_QWORD *)&v27[0] + 1) = v5;
      v6 = 2;
      v7 = 0;
      goto LABEL_6;
    }
    v33[0] = v5;
    sub_140018650(v33);
  }
  *(_QWORD *)&v27[0] = -1;
  v7 = 1;
  v6 = -1;
LABEL_6:
  v8 = a2[85];
  v9 = a2[86];
  v42 = v7;
  result = sub_141485EF0(v8, v9);
  v11 = result;
  if ( !result )
  {
LABEL_11:
    if ( v7 )
    {
      *(_QWORD *)a1 = -1;
      return result;
    }
    v12 = (char *)v27 + 8;
    v13 = v28;
    goto LABEL_14;
  }
  if ( !(unsigned __int8)sub_1403887F0(result) )
  {
    v33[0] = v11;
    v42 = v7;
    result = sub_140018650(v33);
    goto LABEL_11;
  }
  v21 = 2;
  v22 = v11;
  if ( !v7 )
  {
    v20[5] = v28[3];
    v20[4] = v28[2];
    v20[3] = v28[1];
    v20[2] = v28[0];
    v20[1] = v27[1];
    v20[0] = v27[0];
    v38 = v24[3];
    v37 = v24[2];
    v36 = v24[1];
    v35 = v24[0];
    v34 = v23;
    v33[0] = v21;
    v33[1] = v22;
    v39[0] = v20;
    v39[1] = sub_140B036A0;
    v39[2] = v33;
    v39[3] = sub_140B036A0;
    sub_14149C0F0(&v25, &unk_14175029E, v39);
    v40 = v25;
    v41 = v26;
    sub_14034ED40(v33);
    v42 = 1;
    sub_14034ED40(v20);
    v6 = 10;
    goto LABEL_16;
  }
  v12 = (char *)&v22;
  v13 = v24;
  v6 = 2;
LABEL_14:
  v41 = *((_QWORD *)v12 + 2);
  v40 = *(_OWORD *)v12;
  v14 = v13[1];
  v15 = v13[2];
  v16 = v13[3];
  v29 = *v13;
  v30 = v14;
  v31 = v15;
  v32 = v16;
LABEL_16:
  *(_QWORD *)a1 = v6;
  *(_OWORD *)(a1 + 8) = v40;
  result = v41;
  *(_QWORD *)(a1 + 24) = v41;
  v17 = v30;
  v18 = v31;
  v19 = v32;
  *(_OWORD *)(a1 + 32) = v29;
  *(_OWORD *)(a1 + 48) = v17;
  *(_OWORD *)(a1 + 64) = v18;
  *(_OWORD *)(a1 + 80) = v19;
  return result;
}