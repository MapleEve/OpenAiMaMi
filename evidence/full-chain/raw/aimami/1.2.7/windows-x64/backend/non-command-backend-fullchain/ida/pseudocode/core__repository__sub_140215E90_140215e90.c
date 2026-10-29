// win 1.2.7 | module src/core/repository.rs | ea 0x140215e90 | name sub_140215E90
// win 1.2.7 | module src/core/repository.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140215E90(__int64 a1, _OWORD *a2, __int128 *a3)
{
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __int128 v6; // xmm2
  __int64 result; // rax
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm2
  _OWORD v11[6]; // [rsp+20h] [rbp-60h] BYREF
  __int128 v12; // [rsp+80h] [rbp+0h] BYREF
  __int64 v13; // [rsp+90h] [rbp+10h]
  _QWORD v14[4]; // [rsp+98h] [rbp+18h] BYREF
  _OWORD *v15; // [rsp+B8h] [rbp+38h]
  __int64 v16; // [rsp+C0h] [rbp+40h]

  v16 = -2;
  if ( *(_DWORD *)a3 == -1 )
  {
    *(_OWORD *)(a1 + 80) = a2[5];
    *(_OWORD *)(a1 + 64) = a2[4];
    v8 = *a2;
    v9 = a2[1];
    v10 = a2[2];
    *(_OWORD *)(a1 + 48) = a2[3];
    *(_OWORD *)(a1 + 32) = v10;
    *(_OWORD *)(a1 + 16) = v9;
    *(_OWORD *)a1 = v8;
  }
  else
  {
    v11[5] = a3[5];
    v11[4] = a3[4];
    v4 = *a3;
    v5 = a3[1];
    v6 = a3[2];
    v11[3] = a3[3];
    v11[2] = v6;
    v11[1] = v5;
    v11[0] = v4;
    v15 = a2;
    v14[0] = a2;
    v14[1] = sub_14104A7D0;
    v14[2] = v11;
    v14[3] = sub_14104A7D0;
    sub_1416ABFD0(&v12, &unk_1419DC5E2, v14);
    *(_QWORD *)(a1 + 24) = v13;
    *(_OWORD *)(a1 + 8) = v12;
    *(_QWORD *)a1 = 10;
    sub_1401954F0(v11);
    return sub_1401954F0(v15);
  }
  return result;
}
