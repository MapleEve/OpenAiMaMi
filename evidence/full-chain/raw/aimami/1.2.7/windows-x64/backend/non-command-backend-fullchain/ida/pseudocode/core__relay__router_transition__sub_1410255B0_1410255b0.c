// win 1.2.7 | module src/core/relay/router_transition.rs | ea 0x1410255b0 | name sub_1410255B0
// win 1.2.7 | module src/core/relay/router_transition.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1410255B0(__int64 a1, __int64 a2, unsigned __int8 a3, __int64 a4, __int64 a5)
{
  __int128 v6; // kr00_16
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm2
  unsigned __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // r14
  __int64 v15; // rax
  __int64 v17; // [rsp+40h] [rbp-40h]
  __int128 v18; // [rsp+50h] [rbp-30h] BYREF
  __int128 v19; // [rsp+60h] [rbp-20h]
  __int128 v20; // [rsp+70h] [rbp-10h]
  __int128 v21; // [rsp+80h] [rbp+0h]
  __int128 v22; // [rsp+90h] [rbp+10h]
  __int128 v23; // [rsp+A0h] [rbp+20h]
  _QWORD v24[4]; // [rsp+B0h] [rbp+30h] BYREF
  __int128 v25; // [rsp+D0h] [rbp+50h] BYREF
  __int64 v26; // [rsp+E0h] [rbp+60h]
  __int64 v27; // [rsp+E8h] [rbp+68h]

  v27 = -2;
  sub_141022A10((__int64)&v18, a2, a3, (const __m128i *)&unk_141A6D164, 10, a4, a5, nullptr, v17, 1u);
  v6 = v18;
  if ( (_QWORD)v18 == -1 )
  {
    v10 = sub_1401BD880(*((_QWORD *)&v18 + 1));
    if ( v10 )
    {
      v13 = v10;
      v24[3] = v10;
      v14 = v10 & 3;
      switch ( v10 & 3 )
      {
        case 0uLL:
          LOBYTE(v10) = *(_BYTE *)(v10 + 16);
          break;
        case 1uLL:
          LOBYTE(v10) = *(_BYTE *)(v10 + 31);
          break;
        case 2uLL:
          v15 = sub_1416B3F10(v12, v11);
          LOBYTE(v10) = (*(__int64 (__fastcall **)(unsigned __int64))(v15 + 8))(HIDWORD(v13));
          break;
        case 3uLL:
          v10 >>= 32;
          break;
      }
      LOBYTE(v25) = v10;
      *(_QWORD *)&v18 = &v25;
      *((_QWORD *)&v18 + 1) = sub_1410593E0;
      sub_1416ABFD0(v24, &unk_141A6D0DA, &v18);
      *(_QWORD *)&v25 = v24;
      *((_QWORD *)&v25 + 1) = sub_1400015F0;
      sub_1416ABFD0(&v18, &unk_141A6901B, &v25);
      v25 = v18;
      v26 = v19;
      if ( v24[0] )
        sub_140001660(v24[1], v24[0], 1);
      if ( (unsigned int)(v14 - 2) >= 2 && v14 )
      {
        *((_QWORD *)&v18 + 1) = v13 - 1;
        LOBYTE(v18) = 3;
        sub_1416BCB00((char *)&v18 + 8);
      }
      *(_QWORD *)a1 = 9;
      *(_OWORD *)(a1 + 8) = v25;
      *(_QWORD *)(a1 + 24) = v26;
    }
    else
    {
      *(_QWORD *)a1 = -1;
    }
  }
  else
  {
    *(_OWORD *)(a1 + 80) = v23;
    v7 = v19;
    v8 = v20;
    v9 = v21;
    *(_OWORD *)(a1 + 64) = v22;
    *(_OWORD *)(a1 + 48) = v9;
    *(_OWORD *)(a1 + 32) = v8;
    *(_OWORD *)(a1 + 16) = v7;
    *(_OWORD *)a1 = v6;
  }
  return a1;
}
