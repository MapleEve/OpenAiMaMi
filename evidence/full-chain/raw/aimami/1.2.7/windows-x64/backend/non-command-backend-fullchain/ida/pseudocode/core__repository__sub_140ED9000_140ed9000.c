// win 1.2.7 | module src/core/repository.rs | ea 0x140ed9000 | name sub_140ED9000
// win 1.2.7 | module src/core/repository.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140ED9000(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm2
  __int64 v11; // rax
  _QWORD v13[2]; // [rsp+30h] [rbp-88h] BYREF
  _OWORD v14[4]; // [rsp+40h] [rbp-78h] BYREF
  __int128 v15; // [rsp+80h] [rbp-38h]
  __int128 v16; // [rsp+90h] [rbp-28h]

  sub_140ED9AE0((unsigned int)v14, a2, a3, a4, a5);
  if ( LODWORD(v14[0]) == -1 )
  {
    sub_141695550(v14, a2, a3);
    if ( LODWORD(v14[0]) == 2 )
    {
      v11 = *((_QWORD *)&v14[0] + 1);
      *(_QWORD *)a1 = 2;
      *(_QWORD *)(a1 + 8) = v11;
    }
    else if ( (BYTE12(v15) & 0x10) != 0 || (v16 & 0x20000000) != 0 && (WORD6(v15) & 0x400) != 0 )
    {
      v13[0] = a2;
      v13[1] = a3;
      *(_QWORD *)&v14[0] = v13;
      *((_QWORD *)&v14[0] + 1) = sub_14169F630;
      sub_1416ABFD0(a1 + 8, &unk_141A5A094, v14);
      *(_QWORD *)a1 = 9;
    }
    else
    {
      *(_QWORD *)a1 = -1;
    }
  }
  else
  {
    *(_OWORD *)(a1 + 80) = v16;
    *(_OWORD *)(a1 + 64) = v15;
    v8 = v14[0];
    v9 = v14[1];
    v10 = v14[2];
    *(_OWORD *)(a1 + 48) = v14[3];
    *(_OWORD *)(a1 + 32) = v10;
    *(_OWORD *)(a1 + 16) = v9;
    *(_OWORD *)a1 = v8;
  }
  return a1;
}
