// module: codexmate_lib/commands/system
// addr: 0x140cf8380
// name: sub_140CF8380
// win 1.2.1 | module src/commands/system.rs | attributed via panic-Location xref (win-native)
char __fastcall sub_140CF8380(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  _QWORD *v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // r14
  __int64 v13; // r15
  char result; // al
  __int64 v15; // rdi
  __int64 v16; // rbx
  _QWORD *v17; // rbx
  _BYTE v18[456]; // [rsp+28h] [rbp-58h] BYREF
  __int64 v19; // [rsp+1F0h] [rbp+170h] BYREF
  __int128 v20; // [rsp+1F8h] [rbp+178h]
  __m256i v21; // [rsp+3B0h] [rbp+330h] BYREF
  __int64 v22; // [rsp+3D0h] [rbp+350h]
  __int64 v23; // [rsp+588h] [rbp+508h] BYREF
  __m256i v24; // [rsp+590h] [rbp+510h]
  __int64 v25[56]; // [rsp+5B0h] [rbp+530h] BYREF
  __int128 v26; // [rsp+770h] [rbp+6F0h]
  _QWORD *v27; // [rsp+788h] [rbp+708h]
  __int128 v28; // [rsp+790h] [rbp+710h] BYREF
  __int64 v29; // [rsp+7A0h] [rbp+720h]
  __int64 v30; // [rsp+7B0h] [rbp+730h]
  char v31; // [rsp+7BFh] [rbp+73Fh]
  __int64 v32; // [rsp+7C0h] [rbp+740h]

  v32 = -2;
  v5 = *(unsigned __int8 *)(a2 + 160);
  v30 = a2;
  switch ( v5 )
  {
    case 0LL:
      sub_141684120(&v23, a2, 152);
      v6 = off_141EC8710;
      if ( *((_DWORD *)off_141EC8710 + 24) )
      {
        v31 = 1;
        v17 = off_141EC8710;
        sub_1416984A3(off_141EC8710);
        v6 = v17;
      }
      if ( *((_DWORD *)v6 + 4) == 2 )
      {
        v7 = 704;
        if ( *(_BYTE *)v6 )
          v7 = 472;
        v8 = v6[1] + v7;
        v31 = 0;
        v9 = sub_14089B320(v8, (__int64)v6, (__int64)&v23, (__int64)&off_1417642A8);
      }
      else
      {
        v10 = 704;
        if ( *((_BYTE *)v6 + 64) )
          v10 = 472;
        v11 = v6[9] + v10;
        v31 = 0;
        v9 = sub_14089B320(v11, (__int64)(v6 + 8), (__int64)&v23, (__int64)&off_141764290);
      }
      a2 = v30;
      *(_QWORD *)(v30 + 152) = v9;
      break;
    case 1LL:
      sub_1416C3400(&off_1417BB270, a2, a3, a4);
    case 2LL:
      sub_1416C3420(&off_1417BB270, a2, a3, a4);
    case 3LL:
      break;
  }
  v27 = (_QWORD *)(a2 + 152);
  sub_140AFF3A0(&v23);
  v12 = v23;
  if ( v23 == -2 )
  {
    *(_QWORD *)a1 = -1;
    result = 3;
    v15 = v30;
  }
  else
  {
    if ( (_DWORD)v23 == -1 )
    {
      v29 = v24.m256i_i64[2];
      v28 = *(_OWORD *)v24.m256i_i8;
      v13 = 0x800000000000000CuLL;
    }
    else
    {
      v13 = v24.m256i_i64[0];
      v28 = *(_OWORD *)&v24.m256i_u64[1];
      v29 = v24.m256i_i64[3];
      sub_141684120(&v19, v25, 448);
    }
    *(_OWORD *)v21.m256i_i8 = v28;
    v21.m256i_i64[2] = v29;
    sub_141684120(&v21.m256i_u64[3], &v19, 448);
    v16 = *v27;
    if ( (unsigned __int8)sub_1412F2A80(*v27) )
      sub_1412E7580(v16);
    if ( (_DWORD)v12 == -1 )
    {
      v23 = v13;
      v24 = v21;
      v25[0] = v22;
      *(_QWORD *)&v28 = &v23;
      *((_QWORD *)&v28 + 1) = sub_141230630;
      sub_14149C0F0(&v19, &unk_1417B8CB0, &v28);
      sub_140BF0F60(&v23);
      v13 = v19;
      v26 = v20;
      v12 = 2;
    }
    else
    {
      sub_141684120(v18, &v21.m256i_u64[2], 456);
      v26 = *(_OWORD *)v21.m256i_i8;
    }
    v15 = v30;
    *(_QWORD *)a1 = v12;
    *(_QWORD *)(a1 + 8) = v13;
    *(_OWORD *)(a1 + 16) = v26;
    sub_141684120(a1 + 32, v18, 456);
    result = 1;
  }
  *(_BYTE *)(v15 + 160) = result;
  return result;
}